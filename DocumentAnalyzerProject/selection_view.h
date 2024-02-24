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
    // Constructors
    SelectionView(QWidget *parent = nullptr);

   // Others
    void setModel(DirectoryModel *model);
    void clear();

private:
    // Layouts
    QGridLayout *m_grid;

    // Models
    DirectoryModel *m_model;

    // Widgets
    QLineEdit *m_directorySelectionLine;
    QPushButton *m_analyzeButton;
    QPushButton *m_selectDirectoryButton;

private slots:
    void selectFolder();
    void updateView();

signals:
    void viewResults();
};

#endif
