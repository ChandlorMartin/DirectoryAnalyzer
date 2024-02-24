#include <QApplication>

#include "directory_model.h"
#include "main_window.h"
#include "selection_view.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DirectoryModel directoryModel;
    MainWindow mainWindow(&directoryModel);
    mainWindow.show();

    return a.exec();
}
