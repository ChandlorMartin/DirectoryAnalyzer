#include "directory_model.h"


//  Model member getters
double DirectoryModel::size() const
{
    return m_size;
}


int DirectoryModel::subDirectoryCount() const
{
    return m_subDirectoryCount;
}


int DirectoryModel::fileCount() const
{
    return m_fileCount;
}


QString DirectoryModel::directoryName() const
{
    return m_directoryName;
}


// Model member setters
void DirectoryModel::setSize(const double &size)
{
    if(size != m_size)
    {
        m_size = size;
        emit sizeChanged();
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


void DirectoryModel::setFileCount(const int &fileCount)
{
    if(fileCount != m_fileCount)
    {
        m_fileCount = fileCount;
        emit fileCountChanged();
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
