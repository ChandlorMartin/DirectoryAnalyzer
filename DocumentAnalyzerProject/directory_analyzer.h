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

signals:
    void resultReady(qint64 totalBytes, double totalMegabytes, double totalGigabytes, double totalTerabytes, double totalFiles, double totalDirectories);

public slots:
    void run() override;

private:
    DirectoryModel *m_model;
    QStringList m_directoryPaths;
};

#endif
