#ifndef LIBRARIANACCOUNTPAGE_H
#define LIBRARIANACCOUNTPAGE_H

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
class librarianAccountPage;
}

class librarianAccountPage : public QDialog
{
    Q_OBJECT

public:
    explicit librarianAccountPage(QWidget *parent = nullptr);
    ~librarianAccountPage();

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


private slots:
    void on_deleteBookButton_clicked();

    void on_searchByAuthorButton_clicked();

    void on_searchByISBNButton_clicked();

    void on_searchByBookTitleButton_clicked();

    void on_addBookButton_clicked();

    void on_editBookButton_clicked();

    void on_logout_clicked();

    void on_displayBooksButton_clicked();

private:
    Ui::librarianAccountPage *ui;
    QWidget * dailog;
};

#endif // LIBRARIANACCOUNTPAGE_H
