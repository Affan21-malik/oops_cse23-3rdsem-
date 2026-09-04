#include <iostream>
#include <iomanip>
using namespace std;

class Book
{
private:
    int bookID;
    string title;
    string author;
    double price;
    int copies;

public:
    // Constructor
    Book(int id, string t, string a, double p, int c)
    {
        bookID = id;
        title = t;
        author = a;
        price = p;
        copies = c;
    }

    // Issue book
    void issueBook()
    {
        if (copies > 0)
        {
            copies--;
            cout << "Book \"" << title << "\" issued successfully.\n";
        }
        else
        {
            cout << "Book \"" << title << "\" is not available.\n";
        }
    }

    // Return book
    void returnBook()
    {
        copies++;
        cout << "Book \"" << title << "\" returned successfully.\n";
    }

    // Search by Book ID
    bool searchBook(int id)
    {
        return bookID == id;
    }

    // Search by Book Title
    bool searchBook(string bookTitle)
    {
        return title == bookTitle;
    }

    // Display book information
    void display()
    {
        cout << "\nBook ID       : " << bookID;
        cout << "\nBook Title    : " << title;
        cout << "\nAuthor        : " << author;
        cout << "\nPrice         : Rs. " << fixed << setprecision(2) << price;
        cout << "\nCopies        : " << copies << endl;
    }

    // Destructor
    ~Book()
    {
        cout << "Book object \"" << title << "\" destroyed.\n";
    }
};

int main()
{
    // Creating five book objects
    Book b1(101, "C++ Programming", "Bjarne Stroustrup", 800, 5);
    Book b2(102, "Data Structures", "Mark Allen", 650, 4);
    Book b3(103, "Operating System", "Galvin", 900, 3);
    Book b4(104, "Computer Networks", "Andrew Tanenbaum", 750, 6);
    Book b5(105, "Database System", "Korth", 850, 2);

    cout << "========== LIBRARY BOOK MANAGEMENT SYSTEM ==========\n";

    // Display all books
    cout << "\n----- Book Information -----\n";
    b1.display();
    b2.display();
    b3.display();
    b4.display();
    b5.display();

    // Issue books
    cout << "\n----- Issue Books -----\n";
    b1.issueBook();
    b3.issueBook();

    // Return book
    cout << "\n----- Return Book -----\n";
    b1.returnBook();

    // Search by Book ID
    cout << "\n----- Search By Book ID -----\n";
    int id = 103;

    if (b1.searchBook(id))
        b1.display();
    else if (b2.searchBook(id))
        b2.display();
    else if (b3.searchBook(id))
        b3.display();
    else if (b4.searchBook(id))
        b4.display();
    else if (b5.searchBook(id))
        b5.display();
    else
        cout << "Book not found.\n";

    // Search by Book Title
    cout << "\n----- Search By Book Title -----\n";
    string searchTitle = "Computer Networks";

    if (b1.searchBook(searchTitle))
        b1.display();
    else if (b2.searchBook(searchTitle))
        b2.display();
    else if (b3.searchBook(searchTitle))
        b3.display();
    else if (b4.searchBook(searchTitle))
        b4.display();
    else if (b5.searchBook(searchTitle))
        b5.display();
    else
        cout << "Book not found.\n";

    return 0;
}