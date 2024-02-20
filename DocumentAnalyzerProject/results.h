#ifndef RESULTS_H
#define RESULTS_H

#include <QWidget>
#include<QLabel>
#include<QPushButton>
#include<QLineEdit>
#include<QGridLayout>
#include <QDir>
#include <QStringList>
#include "dirInfo.h"

namespace Ui {
    class results;
}

class results : public QWidget
{
    Q_OBJECT

public:
    explicit results(QWidget *parent = nullptr);
    explicit results(const QString& chosenDirectory, QWidget *parent = nullptr);

    void setChosenDirectoryName(const QString& chosenDirectory);
    ~results();

private:
    Ui::results *ui;
    QString m_chosenDirectoryName;
    dirInfo m_chosenDirectory;

    //GridLayout
    QGridLayout *grid;

    //QStrings
    QString *totalFiles;
    QString *totalDirectories;


    //QLabels
    QLabel *chosenDirectoryLabel;
    QLabel *chosenDirectoryNameLabel;
    QLabel *totalFilesLabel;
    QLabel *totalDirectoriesLabel;


    void addQLabels();
    void setRowStretches();
    void setChosenDirectory();
    void analyze();




};

#endif // RESULTS_H
