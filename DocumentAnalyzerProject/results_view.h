#ifndef RESULTS_VIEW_H
#define RESULTS_VIEW_H

#include <QDir>
#include <QDirIterator>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QThreadPool>
#include <QWidget>
#include "directory_analyzer.h"
#include "directory_model.h"
#include "utility.h"

class ResultsView : public QWidget
{
    Q_OBJECT

public:
    explicit ResultsView(QWidget *parent = nullptr);

    void analyze();
    void goBack();
    void setModel(DirectoryModel *model);

private:
    // Models
    DirectoryModel *m_model;

    // Widgets
    QLabel *m_chosenDirectoryLabel;
    QLabel *m_chosenDirectoryNameLabel;
    QLabel *m_totalBytesLabel;
    QLabel *m_totalBytesValueLabel;
    QLabel *m_totalFilesLabel;
    QLabel *m_totalFilesCountLabel;
    QLabel *m_totalGigabytesLabel;
    QLabel *m_totalGigabytesValueLabel;
    QLabel *m_totalKilobytesLabel;
    QLabel *m_totalKilobytesValueLabel;
    QLabel *m_totalMegabytesLabel;
    QLabel *m_totalMegabytesValueLabel;
    QLabel *m_totalSubdirectoriesLabel;
    QLabel *m_totalSubdirectoriesCountLabel;
    QLabel *m_totalTerabytesLabel;
    QLabel *m_totalTerabytesValueLabel;
    QPushButton *m_backButton;

    // Layouts
    QGridLayout *m_grid;

    // Members
    QDir *m_chosenDirectory;

signals:
    void backClicked();

private slots:
    void updateView();
    void clear();
};

#endif
