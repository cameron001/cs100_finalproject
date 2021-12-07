QT += testlib

QT       += core gui sql

QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += qt warn_on depend_includepath testcase

TEMPLATE = app

SOURCES +=  tst_testuserclass.cpp \
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
    ../facultyaccountpage.cpp \
    ../facultylogin.cpp \
    ../searchbyauthorpage.cpp \
    ../searchbyisbnpage.cpp \
    ../searchbytitlepage.cpp \
    ../studentaccountinfopage.cpp \
    ../studentaccountpage.cpp \
    ../user.cpp

DISTFILES += \
    ../Highlander_books.db

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
    ../facultyaccountpage.ui \
    ../facultylogin.ui \
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
    ../facultyaccountpage.h \
    ../facultylogin.h \
    ../searchbyauthorpage.h \
    ../searchbyisbnpage.h \
    ../searchbytitlepage.h \
    ../studentaccountinfopage.h \
    ../studentaccountpage.h \
    ../ui_addbookpage.h \
    ../ui_addjournal.h \
    ../ui_addrefbook.h \
    ../ui_addtextbook.h \
    ../ui_deletebookpage.h \
    ../ui_displaybooks.h \
    ../ui_editbookpage.h \
    ../ui_editjournal.h \
    ../ui_editrefbook.h \
    ../ui_edittextbook.h \
    ../ui_existinguserloginpage.h \
    ../ui_homescreen.h \
    ../ui_librarianaccountpage.h \
    ../ui_librarianlogin.h \
    ../ui_facultyaccountpage.h \
    ../ui_facultylogin.h \
    ../ui_searchbyauthorpage.h \
    ../ui_searchbyisbnpage.h \
    ../ui_searchbytitlepage.h \
    ../ui_studentaccountinfopage.h \
    ../ui_studentaccountpage.h \
    ../user.h
