#ifndef DIRECTORYMODEL_H
#define DIRECTORYMODEL_H


#include <QObject>
#include <QMutex>
#include <QMutexLocker>
#include <QProperty>
#include "utility.h"


class DirectoryModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY (QString directoryName READ directoryName WRITE setDirectoryName NOTIFY directoryNameChanged)

private:
    // Members
    double m_subDirectoryCount = Zero;
    double m_fileCount = Zero;
    double m_totalGigabytes = Zero;
    double m_totalKilobytes = Zero;
    double m_totalMegabytes = Zero;
    double m_totalTerabytes = Zero;
    qint64 m_totalBytes = Zero;
    QMutex mutex;
    QString m_directoryName = "";

public:
    // Getters
    double fileCount() const;
    double subdirectoryCount() const;
    double totalGigabytes() const;
    double totalKilobytes() const;
    double totalMegabytes() const;
    double totalTerabytes() const;
    qint64 totalBytes() const;
    QString directoryName() const;

    // Setters
    void setDirectoryName(const QString &directoryName);

    //other
    void addData(qint64 totalBytes, double totalKilobytes, double totalMegabytes, double totalGigabytes, double totalTerabytes, double totalFiles, double totalDirectories);
    void clear();

signals:
    void directoryNameChanged();
};


#endif
