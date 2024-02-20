#include "results.h"
#include "ui_results.h"
#include <QDebug>


results::results(QWidget *parent)
    : QWidget(parent)
{
    ui->setupUi(this);

    setWindowTitle("Directory Analyzer");
    resize(500,400);
}


results::results(const QString &chosenDirectory, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::results), m_chosenDirectoryName(chosenDirectory)
{
    ui->setupUi(this);

    setWindowTitle("Directory Analyzer");
    resize(500,400);

    QString s = m_chosenDirectoryName;

    this->m_chosenDirectory = dirInfo(m_chosenDirectoryName);

    qDebug("%s", qUtf8Printable(s));

    //SSet the grid
    grid = new QGridLayout(this);


    // Chosen directory llabel
    //QLabel chosenDirectoryLabel = new QLabel("Directory:",  this);
    addQLabels();
    setRowStretches();
    setChosenDirectory();
    analyze();


    // Set stretch factors for rows and columns to ensure equal space around the widgets
    /*layout->setColumnStretch(0,  2);
    layout->setColumnStretch(1,  1);
    layout->setColumnStretch(2,  0);
    */
}

results::~results()
{
    delete ui;
}

void results::addQLabels()
{
    int row = 0;
    chosenDirectoryLabel = new QLabel("Directory: ",  this);
    totalDirectoriesLabel = new QLabel("Total Directories",  this);
    totalFilesLabel = new QLabel("Total Files",  this);

    //Adds the labels to the grid//Adds the labels to the grid
    grid->addWidget(chosenDirectoryLabel, row, 0, 1, 1, Qt::AlignLeft);
    row ++;

    grid->addWidget(totalDirectoriesLabel, row, 0, 1, 1, Qt::AlignLeft);
    row ++;


    grid->addWidget(totalFilesLabel, row, 0, 1, 1, Qt::AlignLeft);
}

// This sets the row stretchs for the layout

void results::setRowStretches()
{
    grid->setRowStretch(0,  0);
    grid->setRowStretch(1,  0);
    grid->setRowStretch(2,  0);
    grid->setRowStretch(3,  5);
}

void results::setChosenDirectoryName(const QString& chosenDirectory)

{
    this->m_chosenDirectoryName = chosenDirectory;
}

void results::setChosenDirectory()
{
    chosenDirectoryNameLabel = new  QLabel(m_chosenDirectoryName,  this);
    grid->addWidget(chosenDirectoryNameLabel, 0, 1, 1, 1, Qt::AlignLeft);
}

// This analyzes the chosen directory, using  a thread to split the analizationn of files in it as well as subdirectories.

void results::analyze()
{
    //QDir dir(m_chosenDirectoryName);
    m_chosenDirectory.print();
    m_chosenDirectory.analyze();

}
