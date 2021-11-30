QT += testlib

QT       += core gui sql

QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += qt warn_on depend_includepath testcase

TEMPLATE = app

SOURCES +=  tst_booktesting.cpp \
    ../addbookpage.cpp \
    ../addjournal.cpp \
    ../addrefbook.cpp \
    ../addtextbook.cpp \
    ../database.cpp \
    ../deletebookpage.cpp \
    ../displaybooks.cpp \
    ../editbookpage.cpp \
    ../editjournal.cpp \
    ../editrefbook.cpp \
    ../edittextbook.cpp \
    ../existinguserloginpage.cpp \
    ../homescreen.cpp \
    ../librarianaccountpage.cpp \
    ../librarianlogin.cpp \
    ../searchbyauthorpage.cpp \
    ../searchbyisbnpage.cpp \
    ../searchbytitlepage.cpp \
    ../studentaccountinfopage.cpp \
    ../studentaccountpage.cpp \
    ../user.cpp

DISTFILES += \
    ../Highlander_books.db \
    ../README.md

FORMS += \
    ../addbookpage.ui \
    ../addjournal.ui \
    ../addrefbook.ui \
    ../addtextbook.ui \
    ../deletebookpage.ui \
    ../displaybooks.ui \
    ../editbookpage.ui \
    ../editjournal.ui \
    ../editrefbook.ui \
    ../edittextbook.ui \
    ../existinguserloginpage.ui \
    ../homescreen.ui \
    ../librarianaccountpage.ui \
    ../librarianlogin.ui \
    ../searchbyauthorpage.ui \
    ../searchbyisbnpage.ui \
    ../searchbytitlepage.ui \
    ../studentaccountinfopage.ui \
    ../studentaccountpage.ui

HEADERS += \
    ../RefBook.h \
    ../TextBook.h \
    ../addbookpage.h \
    ../addjournal.h \
    ../addrefbook.h \
    ../addtextbook.h \
    ../book.h \
    ../booksfactory.h \
    ../database.h \
    ../deletebookpage.h \
    ../displaybooks.h \
    ../editbookpage.h \
    ../editjournal.h \
    ../editrefbook.h \
    ../edittextbook.h \
    ../existinguserloginpage.h \
    ../homescreen.h \
    ../journal.h \
    ../librarianaccountpage.h \
    ../librarianlogin.h \
    ../searchbyauthorpage.h \
    ../searchbyisbnpage.h \
    ../searchbytitlepage.h \
    ../studentaccountinfopage.h \
    ../studentaccountpage.h \
    ../user.h
