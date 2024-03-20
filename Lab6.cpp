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
     void removeBook(const string& title) {
        for (size_t i = 0; i < books.size(); ++i) {
            if (books[i].title == title) {
                books.erase(books.begin() + i);
                cout << "Book removed successfully!\n";
                return;
            }
        }
        cout << "Book not found!\n";
    }

    // List all books in the system
    void listBooks() const {
        if (books.empty()) {
            cout << "No books in the system.\n";
            return;
        }
        cout << "Books in the system:\n";
        for (const auto& book : books) {
            cout << "Title: " << book.title << ", Author: " << book.author << ", Year: " << book.year << endl;
        }
    }
};

int main() {
BookManagementSystem bms;

    while (true) {
        cout << "\nEnter a command (add, remove, list, exit):\n";
        string command;
        getline(cin, command);

        if (command == "add") {
            string title, author;
            int year;
            cout << "Enter title: ";
            getline(cin, title);
            cout << "Enter author: ";
            getline(cin, author);
            cout << "Enter year: ";
            cin >> year;
            cin.ignore(); // Ignore newline character left in the input buffer
            bms.addBook({title, author, year});
        } else if (command == "remove") {
            string title;
            cout << "Enter title of the book to remove: ";
            getline(cin, title);
            bms.removeBook(title);
        } else if (command == "list") {
            bms.listBooks();
        } else if (command == "exit") {
            cout << "Exiting...\n";
            break;
        } else {
            cout << "Invalid command!\n";
        }
    }

    return 96423;
}
