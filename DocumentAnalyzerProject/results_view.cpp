#include "results_view.h"

ResultsView::ResultsView(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("Directory Analyzer");
    resize(500,400);

    // This sets up the grid layout
    m_grid = new QGridLayout(this);

    // This sets up the labels and the back button
    m_chosenDirectoryLabel = new QLabel("Directory: ",  this);
    m_chosenDirectoryNameLabel = new QLabel(this);

    m_totalSubdirectoriesLabel = new QLabel("Total Directories: ",  this);
    m_totalSubdirectoriesCountLabel = new QLabel(this);

    m_totalFilesLabel = new QLabel("Total Files: ",  this);
    m_totalFilesCountLabel = new QLabel(this);

    m_sizeLabel = new QLabel("Size: ", this);
    m_sizeValueLabel = new QLabel(this);

    m_backButton = new QPushButton("Back", this);

    //This adds the labels to the grid
    m_grid->addWidget(m_backButton, 0, 0, 1, 1, Qt::AlignLeft);
    m_grid->addWidget(m_chosenDirectoryLabel, 1, 0, 1, 1, Qt::AlignLeft);
    m_grid->addWidget(m_chosenDirectoryNameLabel, 1, 1, 1, 1, Qt::AlignLeft);
    m_grid->addWidget(m_totalFilesLabel, 2, 0, 1, 1, Qt::AlignLeft);
    m_grid->addWidget(m_totalFilesCountLabel, 2, 1, 1, 1, Qt::AlignLeft);
    m_grid->addWidget(m_totalSubdirectoriesLabel, 3, 0, 1, 1, Qt::AlignLeft);
    m_grid->addWidget(m_totalSubdirectoriesCountLabel, 3, 1, 1, 1, Qt::AlignLeft);
    m_grid->addWidget(m_sizeLabel, 4, 0, 1, 1, Qt::AlignLeft);
    m_grid->addWidget(m_sizeValueLabel, 4, 1, 1, 1, Qt::AlignLeft);

    // This sets the stretch factors for the rows
    m_grid->setRowStretch(0,  0);
    m_grid->setRowStretch(1,  0);
    m_grid->setRowStretch(2,  0);
    m_grid->setRowStretch(3,  0);
    m_grid->setRowStretch(4,  0);
    m_grid->setRowStretch(5,  5);
}


// This connects the directory model to the results view and connects the signals so that the results view will be updated
void ResultsView::setModel(DirectoryModel *model)
{
    m_model = model;
    connect(m_model, &DirectoryModel::directoryNameChanged, this, &ResultsView::updateView);
    connect(m_model, &DirectoryModel::subdirectoryCountChanged, this, &ResultsView::updateView);
    connect(m_model, &DirectoryModel::fileCountChanged, this, &ResultsView::updateView);
    connect(m_backButton, &QPushButton::clicked, this, &ResultsView::goBack);
}


// This emits a signal that will go change the current view to the selection page
void ResultsView::goBack()
{
    emit backClicked();
}


//This updates the results view with the info about the new directory
void ResultsView::updateView()
{
    m_chosenDirectory  = new dirInfo(m_model->directoryName());
    m_chosenDirectory->analyze();

    m_chosenDirectoryNameLabel->setText(m_model->directoryName());
    m_totalSubdirectoriesCountLabel->setText(QString::number(m_model->subDirectoryCount()));
    m_totalFilesCountLabel  ->setText(QString::number(m_model->fileCount()));
    m_sizeValueLabel->setText(QString::number(m_model->size()));
}
