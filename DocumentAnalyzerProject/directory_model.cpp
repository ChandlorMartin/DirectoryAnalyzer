#include "directory_model.h"

//  Getters

qint64 DirectoryModel::totalBytes() const
{
    return m_totalBytes;
}


double DirectoryModel::fileCount() const
{
    return m_fileCount;
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


double DirectoryModel::subDirectoryCount() const
{
    return m_subDirectoryCount;
}


QString DirectoryModel::directoryName() const
{
    return m_directoryName;
}


// Setters
void DirectoryModel::setTotalBytes(const qint64 &totalBytes)
{
    if(totalBytes != m_totalBytes)
    {
        m_totalBytes = totalBytes;
        emit totalBytesChanged();
    }
}


void DirectoryModel::setTotalGigabytes(const double &totalGigabytes)
{
    if(totalGigabytes != m_totalGigabytes)
    {
        m_totalGigabytes = totalGigabytes;
        emit totalGigabytesChanged();
    }
}


void DirectoryModel::setTotalKilobytes(const double &totalKilobytes)
{
    if(totalKilobytes != m_totalKilobytes)
    {
        m_totalKilobytes = totalKilobytes;
        emit totalKilobytesChanged();
    }
}


void DirectoryModel::setTotalMegabytes(const double &totalMegabytes)
{
    if(totalMegabytes != m_totalMegabytes)
    {
        m_totalMegabytes = totalMegabytes;
        emit totalMegabytesChanged();
    }
}


void DirectoryModel::setTotalTerabytes(const double &totalTerabytes)
{
    if(totalTerabytes != m_totalTerabytes)
    {
        m_totalTerabytes = totalTerabytes;
        emit totalTerabytesChanged();
    }
}


void DirectoryModel::setSubdirectoryCount(const int &subDirectoryCount)
{
    if(subDirectoryCount != m_subDirectoryCount)
    {
        m_subDirectoryCount = subDirectoryCount;
        emit subdirectoryCountChanged();
    }
}


void DirectoryModel::setDirectoryName(const QString &directoryName)
{
    if(directoryName != m_directoryName)
    {
        m_directoryName = directoryName;
        emit directoryNameChanged();
    }
}


void DirectoryModel::setFileCount(const int &fileCount)
{
    if(fileCount != m_fileCount)
    {
        m_fileCount = fileCount;
        emit fileCountChanged();
    }
}


// This adds data to the model
void DirectoryModel::addData(qint64 totalBytes, double totalKilobytes, double totalMegabytes, double totalGigabytes, double totalTerabytes, double totalFiles, double totalDirectories)
{
    QMutexLocker locker(&mutex);
    m_subDirectoryCount += totalDirectories;
    m_fileCount += totalFiles;
    m_totalBytes += totalBytes;
    m_totalKilobytes += totalKilobytes;
    m_totalMegabytes += totalMegabytes;
    m_totalGigabytes += totalGigabytes;
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
