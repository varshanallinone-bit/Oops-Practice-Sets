#include <iostream>
#include <string>
using namespace std;

class Book {
    private:
        string title;
        int price;

    public:

        void setTitle(string t) {
            title = t;
        }
        void setPrice(int p) {
            price = p;
        }
        string getTitle() {
            return title;
        }

        int getPrice() {
            return price;
        }
};

int main() {
    Book b1;
    b1.setTitle("Beleive in yourself");
    b1.setPrice(512);

    cout << "Book Title: " << b1.getTitle() << endl;
    cout << "Book Price: Rs. " << b1.getPrice() << endl;

    return 0;
}