# Highlander Books

  Authors: [Jessica Chavez](https://github.com/sourshoes)
           [Mona Ibrahim](https://github.com/w3mona)
           [Blake Dickerson](https://github.com/blake2703)
           [Cameron Ward](https://github.com/cameron001)
 
## Project Description
### Importance

  We have chosen to integrate the example library system as our project. We believe that this project is important because it represents a real life application    that can be useful in the real world. Furthermore, we will be able to implement knowledge of the STL library through the use of data structures, in which we can apply algorithms in the best case scenario. We find this project interesting because if done well enough we can use this project on our resumes to showcase our skills in C++, git, design patterns, GUI applications, and teamwork. As well, a library system could also be adapted and applied to other things that would use a database, so it has potential beyond just this project.
  
 ### Languages, tools & technologies
 
  * [C++](https://isocpp.org/) - C++ programming language 
  * [SQLite](https://www.sqlite.org/index.html) - SQLite is a relational database management system
  * [Git](https://git-scm.com/) - Open source distributed version control system
  * [Github](https://git-scm.com/) - Internet hosting for software development and version control using Git
  * [CMAKE](https://cmake.org/) - CMake is cross-platform free and open-source software for build automation, testing, packaging and installation of software by using a 
    compiler-independent method.
  * [QT](https://www.qt.io/) - Qt is a widget toolkit for creating graphical user interfaces as well as cross-platform applications
  * [UML](https://www.uml.org/) - The Unified Modeling Language is a general-purpose, developmental, modeling language in the field of software engineering that is intended 
    to provide a standard way to visualize the design of a system.
  * [Scrum](https://www.scrum.org/) - Scrum is a framework for developing, delivering, and sustaining products in a complex environment, with an initial emphasis on software 
    development
  * [ Automated kanban with review](https://github.com/sensorario/projects/projects/2) - Automated kanban with review, Cards automatically move between To do, In progress, 
    and Done columns, with additional triggers for pull request review status.

 
 ### Inputs & Outputs
 
 #### Inputs
 Database including the following information:
 1) Book details ( title, author, publisher, isbn , genres),
 2) Borrower details (student ID - Date & time borrow)
 3) Date & time borrow
 4) Credentials for administrative account to add/edit/delete books
 5) Credentials for students same as UCR login information
 
 #### Outputs
 1) Reports about borrowed books and dates to be returned
 2) Suggestion of books for users based on recent borrowed history
 3) Date & time borrower needs to physically return the books
 4) History list of books a borrower had borrowed
 
 
 ### Features
 1) User management module
 2) Online Public Access
 3) Borrowing, renewing and returing books 
 4) Searching books information 
 

 ## Factory Design Pattern
 
 ### Book Factory
  For our class diagram we have chosen the factory design pattern which means that we create an
object without exposing the creation logic to the client and refer to newly created objects using a
common interface. We believe that this fits our project best because it will allow us to have a
“factory” of different types of books. In our project the book class is the interface, which will
implement the classes textBooks, refBooks, and journals. The interface will have a private
member named id which is an integer and will contain a single public function that is called
getBookDetails() which will return a string. The textbook class will take in several private
members called title which is a string, author which is a string, ISBN which is a string, publisher
which is a string, bookGenre which is a string, and bookType which is a string. It will inherit
from the book class to take in the id member variable and the getBookDetails() function. The
refBooks class will declare three private variables title which is a string, ISBN which is a string,
and publisher which is a string. It will inherit from the book class and take in the members of id
and getBookDetails(). The journal class will declare two private variables named journalTitle
which is a string and publisher which is a string. It will inherit from the book class and take the
id and getBookDetails() members. We have a factory class which will generate the objects of the
concrete class, which is named bookCreatorFactory. It will implement the getBookDetails()
function which will return a string.

### Client Interaction
  For client interaction we have a user class which will consist of 5 private variables:
firstName which is a string, lastName which is a string, username which is a string, password
which is a string, and userId which is an int. It will have a public member function of
displayProfile() which will return a string. The student class will inherit from the user class and
will add two private variables. StudentId which is a string, accountDebt which is a double, and
total books which is a vector of the book class. It will have public member functions called
getAccountDebt() which will return a double, printBooks() which will be void, and it will inherit
displayProfile() from the user class. FaculStaff will also inherit from user and will extend into
having an employeeId which is a private string variable and a department which is a string
variable. It will also have public member functions of displayProfile(). The librarian class will
inherit from user and have two private variables employeeId which is a string and department
which is a string. It will have public member functions of displayProfile(). The librarian will
“create” the transaction class. This class will have five private member variables called transId
which is an int, userId which is an int, bookId which is an int, issueDate which is a string, and
dueDate which is a string. The class will consist of the public members createTrans() which will
be void, retrieveTrans(int transId) which will return a string, and deleteTrans(transId) which will
return a boolean value of true if the transaction was deleted and false otherwise. The librarian can
also create the fines class. This class will have six private member variables called fineId which is
an int, transID which is an int, fineAmount which is a double, fineDueDate which is a string,
userId which is a string, and finePaid which is a bool. It will have the public member functions of
createFine() which is a string and updateFine() which is a void. The fines class will interact with
the facultStaff class by allowing the facultStaff to pay fines. It will also interact with the student
class so the students can pay fines.

### Library System Database
  Finally, we will be storing this information in a database class. This class will have two
private members called query which is a sqlite3 variable. It will also have another sqlite3 variable
called db which will point to the database. There will be several public functions which are
addUser() which is a void, getUsers() which returns a vector of strings, addBook(string&) which
will be a void, editBook(string&) which will be void, deleteBook(string&, string&) which will
be void, getBooks() which will be void, displaySearch(string) which will return a book,
showUserDebt(double) which will be void, showUserBooks(string&) which will be void,
createCheckout(string&) which will return a vector, and saveCheckout(vector) which will be
void
    
## Class Diagram

### Factory Pattern

![Class Diagram Library System (1)](https://user-images.githubusercontent.com/43656272/143964381-88bd0321-73f1-4bdd-acf2-d7b6f43bd28b.png)
 ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design patterns did you use? For each design pattern you must explain in 4-5 sentences:
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design patterns you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your TA you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots

![1.](https://user-images.githubusercontent.com/29784969/144005610-d72350a1-c88c-4c44-bd7a-031cd08ae15c.png =250x250)

![2.](https://user-images.githubusercontent.com/29784969/144005617-a1ea50a0-14f7-47e7-a544-9f1f95641fc3.png =250x250)

![3.](https://user-images.githubusercontent.com/29784969/144005621-d7203772-5433-4432-b353-5c632558ab99.png=250x250)

![4.](https://user-images.githubusercontent.com/29784969/144005626-aea3018f-173d-4fa2-a600-f38a2216d7de.png=250x250)

![5.](https://user-images.githubusercontent.com/29784969/144005627-ffed0644-6de7-4ae4-996e-371d13f16ab6.png=250x250)

![6.](https://user-images.githubusercontent.com/29784969/144005634-7320d887-4f7d-4d95-8bae-9137cb933e49.png=250x250)

![7.](https://user-images.githubusercontent.com/29784969/144005637-7cc9e885-0a7c-413c-a607-01c38481fe45.png=250x250)
 ## Installation/Usage
 > We created our project using the QT framework so that will be needed in order to run the application as we are not ready for a deployment yet
 > Install QT 6.2.1 for the specified operating system (i.e.) MacOs or Windows
 > Load the .pro file into QT using file->open existing project
 > Click the green arrow that says run in the bottom left corner
 ## Testing
 > We tested the project using the built-in QT framework testing system. It is similar to google test, but also works with Qt exclusive components. 
 
