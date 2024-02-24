#include "directory_analyzer.h"

// Constructor
DirectoryAnalyzer::DirectoryAnalyzer(DirectoryModel *model, const QStringList &directoryPaths) : m_model(model), m_directoryPaths(directoryPaths)
{
}


// This calculates the size, total number of directories, and the total number of files in the given list of directories
void DirectoryAnalyzer::run()
{
    qint64 totalBytes =  Zero;
    double totalFiles = Zero;
    double totalDirectories = Zero;

    foreach (const QString &directoryPath, m_directoryPaths)
    {
        QDir directory(directoryPath);
        QFileInfoList fileInfoList = directory.entryInfoList(QDir::Files| QDir::NoDotAndDotDot);
        foreach (const QFileInfo &fileInfo, fileInfoList)
        {
            totalBytes += fileInfo.size();
            ++totalFiles;
        }

        ++totalDirectories;
    }

    double totalKilobytes = static_cast<double>(totalBytes) /  OneThousandTwentyFour;
    double totalMegabytes = static_cast<double>(totalKilobytes) /  OneThousandTwentyFour;
    double totalGigabytes = static_cast<double>(totalMegabytes) / OneThousandTwentyFour;
    double totalTerabytes = static_cast<double>(totalGigabytes) / OneThousandTwentyFour;

    m_model->addData( totalBytes, totalKilobytes, totalMegabytes, totalGigabytes, totalTerabytes, totalFiles, totalDirectories);
}
