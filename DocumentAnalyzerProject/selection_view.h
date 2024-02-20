#ifndef SELECTION_VIEW_H
#define SELECTION_VIEW_H

#include <QFileDialog>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QWidget>
#include "results_view.h"

class SelectionView : public QWidget
{
    Q_OBJECT

public:
    SelectionView(QWidget *parent = nullptr);
    void setModel(DirectoryModel *model);

private:
    // Layout
    QGridLayout *m_grid;

    // Model
    DirectoryModel *m_model;

    // Widgets
    QLineEdit *m_directorySelectionLine;
    QPushButton *m_analyzeButton;
    QPushButton *m_selectDirectoryButton;

private slots:
    void SelectFolder();
    void updateView();

signals:
    void viewResults();
};

#endif
