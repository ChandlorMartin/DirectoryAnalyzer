#include "selection_view.h"

#include <QApplication>
#include  "directory_model.h"
#include "main_window.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DirectoryModel directoryModel;
    MainWindow mainWindow(&directoryModel);
    mainWindow.show();
    return a.exec();
}
