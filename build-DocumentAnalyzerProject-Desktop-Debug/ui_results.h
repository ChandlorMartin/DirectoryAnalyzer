/********************************************************************************
** Form generated from reading UI file 'results.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTS_H
#define UI_RESULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_results
{
public:

    void setupUi(QWidget *results)
    {
        if (results->objectName().isEmpty())
            results->setObjectName("results");
        results->resize(400, 300);

        retranslateUi(results);

        QMetaObject::connectSlotsByName(results);
    } // setupUi

    void retranslateUi(QWidget *results)
    {
        results->setWindowTitle(QCoreApplication::translate("results", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class results: public Ui_results {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTS_H
