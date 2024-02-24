#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QStackedWidget>
#include "directory_model.h"
#include "results_view.h"
#include "selection_view.h"

class MainWindow : public  QMainWindow
{
    Q_OBJECT

public:
    // Constructors
    MainWindow(DirectoryModel *model, QWidget  *parent = nullptr);

private:
    // Models
    DirectoryModel *m_model;

    // Widgets
    QStackedWidget *m_stackedWidget;
    SelectionView *m_selectionView;
    ResultsView *m_resultsView;

public slots:
    void showResultsView();
    void showSelectionPage();
};

#endif
