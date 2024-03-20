#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Book class to represent a book
class Book {
public:
    string title;
    string author;
    int year;

    Book(string t, string a, int y) : title(t), author(a), year(y) {}
};

// Book Management System class
class BookManagementSystem {
private:
    vector<Book> books;

public:
    // Add a book to the system
    void addBook(const Book& book) {
        books.push_back(book);
        cout << "Book added successfully!\n";
    }

    // Remove a book from the system
    // List all books in the system
};

int main() {

}
