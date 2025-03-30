QT += core gui widgets sql uitools
TARGET = library2
TEMPLATE = app
CONFIG += c++17

# Пути к файлам (исправлены обратные слеши)
SOURCES += $$PWD/Sources/main.cpp \
           $$PWD/Sources/mainwindow.cpp \
           $$PWD/Sources/addbookdialog.cpp \
           $$PWD/Sources/editbookdialog.cpp \
           $$PWD/Sources/viewbookdialog.cpp

HEADERS += $$PWD/Headers/mainwindow.h \
           $$PWD/Headers/addbookdialog.h \
           $$PWD/Headers/editbookdialog.h \
           $$PWD/Headers/viewbookdialog.h

FORMS += $$PWD/Forms/mainwindow.ui \
         $$PWD/Forms/addbookdialog.ui \
         $$PWD/Forms/editbookdialog.ui \
         $$PWD/Forms/viewbookdialog.ui \

# Пути для включения
INCLUDEPATH += $$OUT_PWD $$PWD/Forms $$PWD/Headers
DEPENDPATH += $$OUT_PWD $$PWD/Forms $$PWD/Headers

# Правило генерации (исправленный синтаксис)

