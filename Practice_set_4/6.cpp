#include <iostream>
#include <string>
using namespace std;

class Book {
    private:
        string title;
        string author;
        int price;

    public:
        Book(string t) {
            title = t;
            author = "Unknown";
            price = 0;
        }
        Book(string t, string a) {
            title = t;
            author = a;
            price = 0;
        }
        Book(string t, string a, int p) {
            title = t;
            author = a;
            price = p;
        }
        void display() {
            cout << "Title: " << title << ", Author: " << author << ", Price: Rs. " << price << endl;
        }
};

int main() {
    Book b1("Bhagavad Gita");
    Book b2("Wings of Fire", "A.P.J. Abdul Kalam");
    Book b3("Sita: Warrior of Mithila", "Amish Tripathi", 399);

    cout << "Book with Title Only" << endl;
    b1.display();
    cout << endl << "Book with Title and Author:" << endl;
    b2.display();
    cout << endl << "Book with Title, Author, and Price:" << endl;
    b3.display();

    return 0;
}