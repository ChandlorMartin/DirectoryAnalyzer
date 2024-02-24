#include "directory_model.h"


// Getters
double DirectoryModel::fileCount() const
{
    return m_fileCount;
}


double DirectoryModel::subdirectoryCount() const
{
    return m_subDirectoryCount;
}


double DirectoryModel::totalGigabytes() const
{
    return m_totalGigabytes;
}


double DirectoryModel::totalKilobytes() const
{
    return m_totalKilobytes;
}


double DirectoryModel::totalMegabytes() const
{
    return m_totalMegabytes;
}


double DirectoryModel::totalTerabytes() const
{
    return m_totalTerabytes;
}


qint64 DirectoryModel::totalBytes() const
{
    return m_totalBytes;
}


QString DirectoryModel::directoryName() const
{
    return m_directoryName;
}


// Setters
void DirectoryModel::setDirectoryName(const QString &directoryName)
{
    if(directoryName != m_directoryName)
    {
        m_directoryName = directoryName;
        emit directoryNameChanged();
    }
}


// This adds data to the model
void DirectoryModel::addData(qint64 totalBytes, double totalKilobytes, double totalMegabytes, double totalGigabytes, double totalTerabytes, double totalFiles, double totalDirectories)
{
    QMutexLocker locker(&mutex);

    m_fileCount += totalFiles;
    m_subDirectoryCount += totalDirectories;
    m_totalBytes += totalBytes;
    m_totalGigabytes += totalGigabytes;
    m_totalKilobytes += totalKilobytes;
    m_totalMegabytes += totalMegabytes;
    m_totalTerabytes += totalTerabytes;
}


// This clears the model
void DirectoryModel::clear()
{
    m_directoryName  = QString();
    m_subDirectoryCount = Zero;
    m_fileCount = Zero;
    m_totalBytes = Zero;
    m_totalKilobytes = Zero;
    m_totalMegabytes = Zero;
    m_totalGigabytes = Zero;
    m_totalTerabytes = Zero;
}
