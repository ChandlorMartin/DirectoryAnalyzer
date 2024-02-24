#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QObject>
#include <QStackedWidget>
#include "directory_model.h"
#include "results_view.h"
#include "selection_view.h"
#include "utility.h"


class MainWindow : public  QMainWindow
{
    Q_OBJECT

public:
    // Constructors
    MainWindow(DirectoryModel *model, QWidget  *parent = nullptr);

private:
    // Models
    DirectoryModel *m_model = nullptr;

    // Widgets
    QStackedWidget *m_stackedWidget = nullptr;
    ResultsView *m_resultsView = nullptr;
    SelectionView *m_selectionView = nullptr;

public slots:
    void showResultsView();
    void showSelectionPage();
};


#endif
