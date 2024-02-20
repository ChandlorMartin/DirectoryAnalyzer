#include "dirInfo.h"


dirInfo::dirInfo()
{
    this->m_directory =  QDir();
    m_fileList = {};
    m_subdirectoryList = {};
}

dirInfo::dirInfo(const QString &directoryName): m_name(directoryName)
{
    this->m_directory = QDir(m_name);

    // Get a list of QFileInfo objects for the subdirectories and files
    QFileInfoList fileInfoList = m_directory.entryInfoList(QDir::Files);
    QFileInfoList subdirectoryInfoList = m_directory.entryInfoList(QDir::NoDotAndDotDot | QDir::Dirs);

    // Extract the absolute file paths
    for (const QFileInfo &fileInfo : fileInfoList)
    {
        m_fileList.append(fileInfo.absoluteFilePath());
    }

    // Extract the absolute subdirectory paths
    for (const QFileInfo &folderInfo : subdirectoryInfoList)
    {
        m_subdirectoryList.append(folderInfo.absoluteFilePath());
    }

    //  Get the count of files
    foreach (QString fileName, m_fileList)
    {
        this->m_fileCount ++;
    }

    // Get the count of folders
    foreach (QString subdirectoryName, m_subdirectoryList)
    {
        this->m_subdirectoryCount ++;
    }
}


// Getters
QString dirInfo::getName() const
{
    return this->m_name;
}


QStringList dirInfo::getFileList() const
{
    return this->m_fileList;
}


QStringList dirInfo::getSubdirectoryList() const
{
    return this->m_subdirectoryList;
}


QDir dirInfo::getDirectory() const
{
    return this->m_directory;
}



int dirInfo::getFileCount() const
{
    return this->m_fileCount;
}


int dirInfo::getSubdirectoryCount() const
{
    return this->m_subdirectoryCount;
}


int dirInfo::getSize() const
{
    return this->m_size;
}


//Setters
void dirInfo::setFileCount(const int& fileCount)
{
    this->m_fileCount = fileCount;
}


void dirInfo::setSubdirectoryCount(const int& subdirectoryCount)
{
    this->m_subdirectoryCount = subdirectoryCount;
}


void dirInfo::setSize(const int& size)
{
    this->m_size = size;
}


// Others

void dirInfo::print() const
{
    qDebug("Directory Name: %s", qPrintable(m_name));
    qDebug("Directory size: %s", qPrintable(QString::number(m_size)));
    qDebug("File Count: %s", qPrintable(QString::number(m_fileCount)));
    qDebug("Subdirectory Count: %s\n", qPrintable(QString::number(m_subdirectoryCount)));

    qDebug("Files: \n");
    foreach (QString fileName, m_fileList)
    {
        qDebug() << fileName;
    }

    qDebug("\n");
    qDebug("Directories: \n");
    foreach (QString subdirectoryName, m_subdirectoryList)
    {
        qDebug() << subdirectoryName;
    }
}

void dirInfo::analyze()
{
    QList<dirInfo> dirInfoList;

    if(m_fileCount >= 2)
    {
        QStringList list1 = m_fileList;
        QStringList list2;
        QStringList list3;

        int fileListSize = m_fileCount/2;

        // Create the first list with elements  0-3
        list2 = list1.mid(0, fileListSize);

        // Create the second list with the remaining elements
        list3 = list1.mid(fileListSize);

        // Print the lists
        qDebug() << "List  2:" << list2;
        qDebug() << "List  3:" << list3;
    }


    for(int i=0; i < m_subdirectoryCount; i++)
    {
        dirInfo newDir = dirInfo(m_subdirectoryList[i]);
        dirInfoList << newDir;
    }

    foreach(dirInfo newDir, dirInfoList)
    {
        qDebug("SUBDIRECTORY-------------");
        newDir.print();
    }



    dirInfoList.clear();
}

dirInfo::dirInfo(const dirInfo &other) {
    // Perform deep copy of other's data members
    m_name = other.m_name;
    m_fileList = other.m_fileList;
    m_subdirectoryList = other.m_subdirectoryList;
    m_directory = other.m_directory;
    m_fileCount = other.m_fileCount;
    m_subdirectoryCount = other.m_subdirectoryCount;
    m_size = other.m_size;
}

dirInfo& dirInfo::operator=(const dirInfo &other) {
    if (this != &other) {
        // Perform deep copy of other's data members
        m_name = other.m_name;
        m_fileList = other.m_fileList;
        m_subdirectoryList = other.m_subdirectoryList;
        m_directory = other.m_directory;
        m_fileCount = other.m_fileCount;
        m_subdirectoryCount = other.m_subdirectoryCount;
        m_size = other.m_size;
    }
    return *this;
}

