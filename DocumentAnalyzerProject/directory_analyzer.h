#ifndef DIRECTORYANALYZER_H
#define DIRECTORYANALYZER_H


#include <QDir>
#include <QFileInfo>
#include <QObject>
#include <QRunnable>
#include "directory_model.h"
#include "utility.h"


class DirectoryAnalyzer : public QObject, public QRunnable
{
    Q_OBJECT

public:
    // Constructers
    DirectoryAnalyzer(DirectoryModel *model, const QStringList &directoryPaths);

public slots:
    void run() override;

private:
    // Models
    DirectoryModel *m_model = nullptr;

    //Members
    QStringList m_directoryPaths = {};
};


#endif
