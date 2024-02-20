#ifndef DIRINFO_H
#define DIRINFO_H

#include <QObject>
#include <QString>
#include <QDir>
#include <QStringList>
#include <QList>

class dirInfo
{
public:
    dirInfo();
    dirInfo(const QString &directoryName);
    dirInfo(const dirInfo &other); // Copy constructor
    dirInfo& operator=(const dirInfo &other); // Assignment operator
    //~dirInfo();

    // Getters
    QString getName() const;
    QStringList getFileList() const;
    QStringList getSubdirectoryList() const;
    QDir getDirectory() const;
    int getFileCount() const;
    int getSubdirectoryCount() const;
    int getSize() const;


    //Setters
    void setFileCount(const int& fileCount);
    void setSubdirectoryCount(const int& folderCount);
    void setSize(const int& size);

    // Others

    void print() const;
    void analyze();



private:
    QString m_name;
    QStringList m_fileList;
    QStringList m_subdirectoryList;
    QDir m_directory;
    int m_fileCount = 0;
    int m_subdirectoryCount = 0;
    int m_size = 0;

};

#endif // DIRINFO_H
