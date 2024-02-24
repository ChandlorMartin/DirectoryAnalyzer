#include "selection_view.h"

SelectionView::SelectionView(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("Directory Analyzer");
    resize(500,400);

    // This sets up the grid layout
     m_grid = new QGridLayout(this);

    // This sets up the line for showing the selected directory
    m_directorySelectionLine = new QLineEdit(this);
    m_directorySelectionLine->setFont(QFont("Times", 12));
    m_directorySelectionLine->setPlaceholderText("Directory...");
    m_directorySelectionLine->setEnabled(false);
    m_directorySelectionLine->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    // This sets up the directory selection button which allows the user to select a directory
    m_selectDirectoryButton= new QPushButton(this);
    m_selectDirectoryButton->setIcon(QIcon(":/images/folder_icon.png"));
    m_selectDirectoryButton->setIconSize(QSize(36,36));
    connect(m_selectDirectoryButton, &QPushButton::clicked, this, &SelectionView::selectFolder);

    // This sets up the analyze button which displays the results view
    m_analyzeButton= new QPushButton("Analyze", this);
    m_analyzeButton->setIconSize(QSize(20,20));
    connect(m_analyzeButton, &QPushButton::clicked, this, &SelectionView::viewResults);

    //  This adds the widgets to the grid
    m_grid->addItem(new QSpacerItem(0,  0, QSizePolicy::Expanding, QSizePolicy::Minimum),  0,  1);
    m_grid->addWidget(m_directorySelectionLine,  0,  0,  1,  2);
    m_grid->addWidget(m_selectDirectoryButton,  0,  2,  1,  1,  Qt::AlignTop );
    m_grid->addWidget(m_analyzeButton,  1,  0,  1,  1, (Qt::AlignVCenter | Qt::AlignRight));

    // This sets the stretch factors for the rows and columns
    m_grid->setRowStretch(0,  0);
    m_grid->setRowStretch(1,  3);
    m_grid->setRowStretch(2,  1);

    m_grid->setColumnStretch(0,  2);
    m_grid->setColumnStretch(1,  1);
    m_grid->setColumnStretch(2,  0);
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
                                                          "/home",
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
