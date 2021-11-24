QT       += core gui sql

QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbookpage.cpp \
    addtextbook.cpp \
    database.cpp \
    deletebookpage.cpp \
    displaybooks.cpp \
    existinguserloginpage.cpp \
    homescreen.cpp \
    librarianaccountpage.cpp \
    librarianlogin.cpp \
    main.cpp \
    searchbyauthorpage.cpp \
    searchbytitlepage.cpp \
    studentaccountinfopage.cpp \
    studentaccountpage.cpp \
    user.cpp

HEADERS += \
    TextBook.h \
    addbookpage.h \
    addtextbook.h \
    book.h \
    booksfactory.h \
    database.h \
    deletebookpage.h \
    displaybooks.h \
    existinguserloginpage.h \
    homescreen.h \
    librarianaccountpage.h \
    librarianlogin.h \
    searchbyauthorpage.h \
    searchbytitlepage.h \
    studentaccountinfopage.h \
    studentaccountpage.h \
    user.h

FORMS += \
    addbookpage.ui \
    addtextbook.ui \
    deletebookpage.ui \
    displaybooks.ui \
    existinguserloginpage.ui \
    homescreen.ui \
    librarianaccountpage.ui \
    librarianlogin.ui \
    searchbyauthorpage.ui \
    searchbytitlepage.ui \
    studentaccountinfopage.ui \
    studentaccountpage.ui

TRANSLATIONS += \
    HighlanderBooks_en_US.ts \
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
