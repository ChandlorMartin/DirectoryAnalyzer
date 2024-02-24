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
    //constructors
    explicit ResultsView(QWidget *parent = nullptr);

    // Others
    void analyze();
    void goBack();
    void setModel(DirectoryModel *model);

private:
    // Models
    DirectoryModel *m_model = nullptr;

    // Widgets
    QLabel *m_chosenDirectoryLabel = nullptr;
    QLabel *m_chosenDirectoryNameLabel = nullptr;
    QLabel *m_totalBytesLabel = nullptr;
    QLabel *m_totalBytesValueLabel = nullptr;
    QLabel *m_totalFilesLabel = nullptr;
    QLabel *m_totalFilesCountLabel = nullptr;
    QLabel *m_totalGigabytesLabel = nullptr;
    QLabel *m_totalGigabytesValueLabel = nullptr;
    QLabel *m_totalKilobytesLabel = nullptr;
    QLabel *m_totalKilobytesValueLabel = nullptr;
    QLabel *m_totalMegabytesLabel = nullptr;
    QLabel *m_totalMegabytesValueLabel = nullptr;
    QLabel *m_totalSubdirectoriesLabel = nullptr;
    QLabel *m_totalSubdirectoriesCountLabel = nullptr;
    QLabel *m_totalTerabytesLabel = nullptr;
    QLabel *m_totalTerabytesValueLabel = nullptr;
    QPushButton *m_backButton = nullptr;

    // Layouts
    QGridLayout *m_grid = nullptr;

    // Members
    QDir *m_chosenDirectory = nullptr;

signals:
    void backClicked();

private slots:
    void updateView();
    void clear();
};


#endif
