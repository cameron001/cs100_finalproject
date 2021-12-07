#ifndef FACULTYACCOUNTPAGE_H
#define FACULTYACCOUNTPAGE_H

#include <QDialog>
#include <QScreen>

#include "deletebookpage.h"
#include "searchbyauthorpage.h"
#include "searchbytitlepage.h"
#include "searchbyisbnpage.h"
#include "addbookpage.h"
#include "editbookpage.h"
#include "displaybooks.h"

namespace Ui {
    class facultyAccountPage;
}

class facultyAccountPage : public QDialog
{
    Q_OBJECT

public:
    explicit facultyAccountPage(QWidget* parent = nullptr);
    ~facultyAccountPage();

    void centerAndResize();

    void createWelcomeLabel();

    void createAddBookButton();

    void createEditBookButton();

    void createDeleteBookButton();

    void createSearchByAuthorButton();

    void createSearchByISBNButton();

    void createSearchByBookTitleButton();

    void createDisplayBooksButton();
    void createLogoutbtn();
    void on_searchByISBNButton_clicked();



private slots:
    void on_deleteBookButton_clicked();

    void on_searchByAuthorButton_clicked();



    void on_searchByBookTitleButton_clicked();

    void on_addBookButton_clicked();

    void on_editBookButton_clicked();

    void on_logout_clicked();

    void on_displayBooksButton_clicked();

private:
    Ui::facultyAccountPage* ui;
    QWidget* dailog;
};

#endif // FACULTYACCOUNTPAGE_H


