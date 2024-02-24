#include "selection_view.h"


SelectionView::SelectionView(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("Directory Analyzer");

    // This sets up the grid layout
     m_grid = new QGridLayout(this);

    // This sets up the line for showing the selected directory
    m_directorySelectionLine = new QLineEdit(this);
    m_directorySelectionLine->setFont(QFont("Times", FontSize));
    m_directorySelectionLine->setPlaceholderText("Directory...");
    m_directorySelectionLine->setEnabled(false);
    m_directorySelectionLine->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    // This sets up the directory selection button which allows the user to select a directory
    m_selectDirectoryButton= new QPushButton(this);
    m_selectDirectoryButton->setIcon(QIcon(":/images/folder_icon.png"));
    m_selectDirectoryButton->setIconSize(QSize(SelectionIconWidth,  SelectionIconHeight));
    connect(m_selectDirectoryButton, &QPushButton::clicked, this, &SelectionView::selectFolder);

    // This sets up the analyze button which displays the results view
    m_analyzeButton= new QPushButton("Analyze", this);
    m_analyzeButton->setIconSize(QSize(SelectionIconWidth, SelectionIconHeight));
    connect(m_analyzeButton, &QPushButton::clicked, this, &SelectionView::viewResults);

    //  This adds the widgets to the grid
    m_grid->addItem(new QSpacerItem(Zero, Zero, QSizePolicy::Expanding, QSizePolicy::Minimum), Zero, One);
    m_grid->addWidget(m_directorySelectionLine, Zero, Zero, One, Two);
    m_grid->addWidget(m_selectDirectoryButton, Zero, Two, One, One, Qt::AlignTop );
    m_grid->addWidget(m_analyzeButton, One, Zero, One, One, (Qt::AlignVCenter | Qt::AlignRight));

    // This sets the stretch factors for the rows and columns
    m_grid->setRowStretch(Zero, Zero);
    m_grid->setRowStretch(One, Three);
    m_grid->setRowStretch(Two, One);

    m_grid->setColumnStretch(Zero, Two);
    m_grid->setColumnStretch(One, One);
    m_grid->setColumnStretch(Two, Zero);
}


void SelectionView::clear()
{
    m_directorySelectionLine->setText("");
}


// This opens up a file dialog so that the user can select a directory
// It then updates the directory name in the model
void SelectionView::selectFolder()
{
    QString directory = QFileDialog::getExistingDirectory(this,
                                                          tr("Select Directory"),
                                                          QDir::homePath(),
                                                          QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

    if (!directory.isEmpty())
    {
        m_model->clear();
        m_model->setDirectoryName(directory);
    }
}


// This connects the directory model to the selection view and connects the signals so that the selection view will be updated
void SelectionView::setModel(DirectoryModel *model)
{
    m_model = model;
    connect(m_model, &DirectoryModel::directoryNameChanged, this, &SelectionView::updateView);
}


// This updates the text of the QLineEdit with the current directory name in the model
void SelectionView::updateView()
{
    m_directorySelectionLine->setText(m_model->directoryName());
}
