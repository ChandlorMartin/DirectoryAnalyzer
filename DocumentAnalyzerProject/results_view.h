#ifndef RESULTS_VIEW_H
#define RESULTS_VIEW_H

#include <QDebug>
#include <QDir>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QWidget>
#include "directory_model.h"
#include "dirInfo.h"


class ResultsView : public QWidget
{
    Q_OBJECT

public:
    explicit ResultsView(QWidget *parent = nullptr);

    void setModel(DirectoryModel *model);
    void goBack();

private:
    // Model
    DirectoryModel *m_model;

    // Widgets
    QLabel *m_chosenDirectoryLabel;
    QLabel *m_chosenDirectoryNameLabel;
    QLabel *m_sizeLabel;
    QLabel *m_sizeValueLabel;
    QLabel *m_totalFilesLabel;
    QLabel *m_totalFilesCountLabel;
    QLabel *m_totalSubdirectoriesLabel;
    QLabel *m_totalSubdirectoriesCountLabel;
    QPushButton *m_backButton;

    //  Layout
    QGridLayout *m_grid;


    // Members
    dirInfo *m_chosenDirectory;

signals:
    void backClicked();

private slots:
    void updateView();

};

#endif
