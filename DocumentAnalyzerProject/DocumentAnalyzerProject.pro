QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    directory_analyzer.cpp \
    directory_model.cpp \
    main.cpp \
    #mainwindow.cpp
    main_window.cpp \
    results_view.cpp \
    selection_view.cpp

HEADERS += \
    #mainwindow.h
    directory_analyzer.h \
    directory_model.h \
    main_window.h \
    results_view.h \
    selection_view.h \
    utility.h
FORMS += \
    #mainwindow.ui
    results_view.ui \
    selection_view.ui
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
