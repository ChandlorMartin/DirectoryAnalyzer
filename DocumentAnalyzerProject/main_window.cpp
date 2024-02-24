#include "main_window.h"


MainWindow::MainWindow(DirectoryModel *model, QWidget *parent)
    : QMainWindow(parent), m_model(model)
{
    setWindowTitle("Directory Analyzer");
    setFixedSize(Width, Height);

    // This creates a stackedWidget for switching through different views
    m_stackedWidget = new QStackedWidget(this);
    m_selectionView = new SelectionView();
    m_resultsView = new ResultsView();

    m_stackedWidget->addWidget(m_selectionView);
    m_stackedWidget->addWidget(m_resultsView);

    setCentralWidget(m_stackedWidget);

    m_selectionView->setModel(m_model);
    m_resultsView->setModel(m_model);

    connect(m_selectionView, &SelectionView::viewResults, this, &MainWindow::showResultsView);
    connect(m_resultsView, &ResultsView::backClicked, this, &MainWindow::showSelectionPage);
}


// This displays the results view
void MainWindow::showResultsView()
{
    m_stackedWidget->setCurrentWidget(m_resultsView);
}


// This displays the selection view
void MainWindow::showSelectionPage()
{
    m_selectionView->clear();
    m_stackedWidget->setCurrentWidget(m_selectionView);
}
