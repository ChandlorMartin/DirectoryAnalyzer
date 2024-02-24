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
    QGridLayout *m_grid = nullptr;

    // Models
    DirectoryModel *m_model = nullptr;

    // Widgets
    QLineEdit *m_directorySelectionLine = nullptr;
    QPushButton *m_analyzeButton = nullptr;
    QPushButton *m_selectDirectoryButton = nullptr;

private slots:
    void selectFolder();
    void updateView();

signals:
    void viewResults();
};


#endif
