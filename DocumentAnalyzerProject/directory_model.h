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
    Q_PROPERTY (double subDirectoryCount READ subDirectoryCount WRITE setSubdirectoryCount NOTIFY subdirectoryCountChanged)
    Q_PROPERTY (double fileCount READ fileCount WRITE setFileCount NOTIFY fileCountChanged)
    Q_PROPERTY (qint64 totalBytes READ totalBytes WRITE setTotalBytes NOTIFY totalBytesChanged)
    Q_PROPERTY (double totalKilobytes READ totalKilobytes WRITE setTotalKilobytes NOTIFY totalKilobytesChanged)
    Q_PROPERTY (double totalMegabytes READ totalMegabytes WRITE setTotalMegabytes NOTIFY totalMegabytesChanged)
    Q_PROPERTY (double totalGigabytes READ totalGigabytes WRITE setTotalGigabytes NOTIFY totalGigabytesChanged)
    Q_PROPERTY (double totalTerabytes READ totalTerabytes WRITE setTotalTerabytes NOTIFY totalTerabytesChanged)

private:
    // Members
    QMutex mutex;
    QString m_directoryName = "";
    double m_subDirectoryCount = Zero;
    double m_fileCount = Zero;
    double m_totalKilobytes = Zero;
    double m_totalMegabytes = Zero;
    double m_totalGigabytes = Zero;
    double m_totalTerabytes = Zero;
    qint64 m_totalBytes = Zero;

public:
    // Getters
    double fileCount() const;
    double subDirectoryCount() const;
    double totalKilobytes() const;
    double totalMegabytes() const;
    double totalGigabytes() const;
    double totalTerabytes() const;
    qint64 totalBytes() const;
    QString directoryName() const;

    // Setters
    void setDirectoryName(const QString &directoryName);
    void setFileCount(const int &fileCount);
    void setTotalBytes(const qint64 &totalBytes);
    void setTotalGigabytes(const double &totalGigabytes);
    void setTotalKilobytes(const double &totalKilobytes);
    void setTotalMegabytes(const double &totalMegabytes);
    void setSubdirectoryCount(const int &subDirectoryCount);
    void setTotalTerabytes(const double &totalTerabytes);

    //other
    void addData(qint64 totalBytes, double totalKilobytes, double totalMegabytes, double totalGigabytes, double totalTerabytes, double totalFiles, double totalDirectories);
    void clear();

signals:
    void directoryNameChanged();
    void fileCountChanged();
    void totalBytesChanged();
    void totalKilobytesChanged();
    void totalMegabytesChanged();
    void totalGigabytesChanged();
    void totalTerabytesChanged();
    void subdirectoryCountChanged();
};

#endif
