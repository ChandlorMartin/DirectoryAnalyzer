#include "results_view.h"

ResultsView::ResultsView(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("Directory Analyzer");

    // This sets up the grid layout
    m_grid = new QGridLayout(this);

    // This sets up the labels and the back button
    m_chosenDirectoryLabel = new QLabel("Directory: ",  this);
    m_chosenDirectoryNameLabel = new QLabel(this);

    m_totalSubdirectoriesLabel = new QLabel("Total Directories: ",  this);
    m_totalSubdirectoriesCountLabel = new QLabel(this);

    m_totalFilesLabel = new QLabel("Total Files: ",  this);
    m_totalFilesCountLabel = new QLabel(this);

    m_totalBytesLabel = new QLabel("Bytes: ", this);
    m_totalBytesValueLabel = new QLabel(this);

    m_totalKilobytesLabel = new QLabel("Kilobytes: ", this);
    m_totalKilobytesValueLabel = new QLabel(this);

    m_totalMegabytesLabel = new QLabel("Megabytes: ", this);
    m_totalMegabytesValueLabel = new QLabel(this);

    m_totalGigabytesLabel = new QLabel("Gigabytes: ", this);
    m_totalGigabytesValueLabel = new QLabel(this);

    m_totalTerabytesLabel = new QLabel("Terabytes: ", this);
    m_totalTerabytesValueLabel = new QLabel(this);

    m_backButton = new QPushButton("Back", this);
    connect(m_backButton, &QPushButton::clicked, this, &ResultsView::backClicked);
    connect(m_backButton, &QPushButton::clicked, this, &ResultsView::clear);

    //This adds the labels to the grid
    m_grid->addWidget(m_backButton, Zero, Zero, One, One, Qt::AlignLeft);

    m_grid->addWidget(m_chosenDirectoryLabel, One, Zero, One, One, Qt::AlignLeft);
    m_grid->addWidget(m_chosenDirectoryNameLabel, One, One, One, One, Qt::AlignLeft);

    m_grid->addWidget(m_totalFilesLabel, Two, Zero, One, One, Qt::AlignLeft);
    m_grid->addWidget(m_totalFilesCountLabel, Two, One, One, One, Qt::AlignLeft);

    m_grid->addWidget(m_totalSubdirectoriesLabel, Three, Zero, One, One, Qt::AlignLeft);
    m_grid->addWidget(m_totalSubdirectoriesCountLabel, Three, One, One, One, Qt::AlignLeft);

    m_grid->addWidget(m_totalBytesLabel, Four, Zero, One, One, Qt::AlignLeft);
    m_grid->addWidget(m_totalBytesValueLabel, Four, One,One, One, Qt::AlignLeft);

    m_grid->addWidget(m_totalKilobytesLabel, Five, Zero, One, One, Qt::AlignLeft);
    m_grid->addWidget(m_totalKilobytesValueLabel, Five, One, One, One, Qt::AlignLeft);

    m_grid->addWidget(m_totalMegabytesLabel, Six, Zero, One, One, Qt::AlignLeft);
    m_grid->addWidget(m_totalMegabytesValueLabel, Six, One, One, One, Qt::AlignLeft);

    m_grid->addWidget(m_totalGigabytesLabel, Seven, Zero, One, One, Qt::AlignLeft);
    m_grid->addWidget(m_totalGigabytesValueLabel, Seven, One, One, One, Qt::AlignLeft);

    m_grid->addWidget(m_totalTerabytesLabel, Eight, Zero, One, One, Qt::AlignLeft);
    m_grid->addWidget(m_totalTerabytesValueLabel, Eight, One, One, One, Qt::AlignLeft);

    // This sets the stretch factors for the rows
    for(int i = Zero; i < Nine; ++i)
    {
        m_grid->setRowStretch(i, Zero);
    }

    m_grid->setRowStretch(Nine, Two);
}


// This creates threads that will each analyze a different portion of directories from a list of the selected directory
// and all subdirectories contained within it. The model is then updated with the results and displayed.
void ResultsView::analyze()
{
    QDir chosenDirectory = QDir(m_model->directoryName());
    QStringList directoryList;

    directoryList.append(m_model->directoryName());
    QDirIterator directorIterator(m_model->directoryName(), QDir::Dirs | QDir::NoDotAndDotDot, QDirIterator::Subdirectories);
    while(directorIterator.hasNext())
    {
        directoryList.append(directorIterator.next());
    }

    // This creates threads that split up the work of analyzing all of the directories and updates the model
    QThreadPool *threadPool = QThreadPool::globalInstance();
    int maxThreads = QThread::idealThreadCount();
    int directoriesPerThread = directoryList.size() / maxThreads;

    for(int i =  Zero; i < maxThreads; ++i)
    {
        QStringList directories;
        for(int j =  Zero; j < directoriesPerThread && (i * directoriesPerThread + j) < directoryList.size(); ++j)
        {
            directories << directoryList[i * directoriesPerThread + j];
        }

        DirectoryAnalyzer *directorAnalyzer = new DirectoryAnalyzer(m_model,  directories);
        threadPool->start(directorAnalyzer);
    }

    threadPool->waitForDone();
    updateView();
}


// This clears the labels and the model
void ResultsView::clear()
{
    m_model->clear();
    m_chosenDirectoryNameLabel->setText("");
    m_totalSubdirectoriesCountLabel->setText(QString::number(Zero));
    m_totalFilesCountLabel  ->setText(QString::number(Zero));
    m_totalBytesValueLabel->setText(QString::number(Zero));
    m_totalKilobytesValueLabel->setText(QString::number(Zero));
    m_totalMegabytesValueLabel->setText(QString::number(Zero));
    m_totalGigabytesValueLabel->setText(QString::number(Zero));
    m_totalTerabytesValueLabel->setText(QString::number(Zero));
}


// This emits a signal that will go change the current view to the selection page
void ResultsView::goBack()
{
    emit backClicked();
}


// This connects the directory model to the results view and connects the signals so that the results view will be updated
void ResultsView::setModel(DirectoryModel *model)
{
    m_model = model;
    connect(m_model, &DirectoryModel::directoryNameChanged, this, &ResultsView::analyze);
}


//This updates the results view with the info about the chosen directory.
void ResultsView::updateView()
{
    m_chosenDirectoryNameLabel->setText(m_model->directoryName());
    m_totalSubdirectoriesCountLabel->setText(QString::number(m_model->subdirectoryCount()));
    m_totalFilesCountLabel  ->setText(QString::number(m_model->fileCount()));
    m_totalBytesValueLabel->setText(QString::number(m_model->totalBytes()) + " B");
    m_totalGigabytesValueLabel->setText(QString::number(m_model->totalGigabytes()) + " GB");
    m_totalKilobytesValueLabel->setText(QString::number(m_model->totalKilobytes()) + " kB");
    m_totalMegabytesValueLabel->setText(QString::number(m_model->totalMegabytes()) + " MB");
    m_totalTerabytesValueLabel->setText(QString::number(m_model->totalTerabytes()) + " TB");
}
