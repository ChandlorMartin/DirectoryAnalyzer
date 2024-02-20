#include "widget.h"
#include "ui_widget.h"
#include "results.h"
#include<QLabel>
#include<QPushButton>
#include<QLineEdit>
#include<QGridLayout>
#include<QVBoxLayout>
#include<QFileDialog>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    setWindowTitle("Directory Analyzer");
    resize(500,400);

    //line edit
    lineEdit = new QLineEdit(this);
    lineEdit->setFont(QFont("Times", 12));
    lineEdit->setPlaceholderText("Directory...");
    lineEdit->setEnabled(false);
    lineEdit->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    //push button
    QPushButton *selectFolderButton= new QPushButton(this);
    selectFolderButton->setIcon(QIcon(":/images/folder_icon.png"));
    selectFolderButton->setIconSize(QSize(36,36));
    connect(selectFolderButton, SIGNAL(clicked()), this,  SLOT(SelectFolder()));


    //push button
    QPushButton *analyzeButton= new QPushButton(this);
    analyzeButton->setText("Analyze");
    analyzeButton->setIconSize(QSize(20,20));
    connect(analyzeButton, SIGNAL(clicked()), this,  SLOT(Analyze()));


    QGridLayout *layout = new QGridLayout(this);
    layout->addItem(new QSpacerItem(0,  0, QSizePolicy::Expanding, QSizePolicy::Minimum),  0,  1);
    // Add lineEdit spanning two columns, aligned to the right
    layout->addWidget(lineEdit,  0,  0,  1,  2);

    // Add selectFolderButton in column  2, aligned to the left
    layout->addWidget(selectFolderButton,  0,  2,  1,  1,  Qt::AlignTop );

    // Add analyzeButton in the center of the layout
    layout->addWidget(analyzeButton,  1,  0,  1,  1, (Qt::AlignVCenter | Qt::AlignRight));

    // Set stretch factors for rows and columns to ensure equal space around the widgets
    layout->setRowStretch(0,  0);
    layout->setRowStretch(1,  3);
    layout->setRowStretch(2,  1);
    layout->setColumnStretch(0,  2);
    layout->setColumnStretch(1,  1);
    layout->setColumnStretch(2,  0);
}


Widget::~Widget()
{
    delete ui;
}


void Widget::SelectFolder()
{
    lineEdit->setText("hello");
    QString dir = QFileDialog::getExistingDirectory(this, tr("Select Directory"),
                                                    "/home", // Start in the home directory
                                                    QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    if (!dir.isEmpty()) {
        // If the user didn't cancel out of the dialog, dir will contain the path to the selected directory
        lineEdit->setText(dir);
    }
}

void Widget::Analyze()
{
    QString chosenDir = lineEdit->text();
    //dirResults = new results();
    //dirResults->setChosenDirectoryName(chosenDir);
    dirResults = new results(chosenDir);
    this->hide();
    dirResults->show();
}
