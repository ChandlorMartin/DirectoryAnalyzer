#ifndef DIRECTORYMODEL_H
#define DIRECTORYMODEL_H

#include <QObject>
#include <QProperty>

class DirectoryModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY (QString directoryName READ directoryName WRITE setDirectoryName NOTIFY directoryNameChanged)
    Q_PROPERTY (int subDirectoryCount READ subDirectoryCount WRITE setSubdirectoryCount NOTIFY subdirectoryCountChanged)
    Q_PROPERTY (int fileCount READ fileCount WRITE setFileCount NOTIFY fileCountChanged)
    Q_PROPERTY (double size READ size WRITE setSize NOTIFY sizeChanged)

private:
    // Getters
    QString m_directoryName = "";
    int m_subDirectoryCount = 0;
    int m_fileCount = 0;
    double m_size = 0;

public:
    // Members
    int fileCount() const;
    int subDirectoryCount() const;
    double size() const;
    QString directoryName() const;

    // Setters
    void setDirectoryName(const QString &data);
    void setFileCount(const int &fileCount);
    void setSize(const double &size);
    void setSubdirectoryCount(const int &subDirectoryCount);

signals:
    void directoryNameChanged();
    void fileCountChanged();
    void sizeChanged();
    void subdirectoryCountChanged();
};

#endif
