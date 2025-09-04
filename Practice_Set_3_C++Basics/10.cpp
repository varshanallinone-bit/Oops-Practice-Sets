#include <iostream>
#include <string>
using namespace std;

class University {
    private:
        string name;
        int ranking;
    public:
        void setName(const string& n) {
            name = n;
        }
        void setRanking(int r) {
            ranking = r;
        }
        string getName() const {
            return name;
        }

        int getRanking() const {
            return ranking;
        }

        void displayInfo() const {
            cout << "University: " << getName() << ", Ranking: " << getRanking() << endl;
        }
};

int main() {
    
    University uni;
    uni.setName("Indian Institute of Science");
    uni.setRanking(1);
    cout << "Accessing via methods:\n";
    uni.displayInfo();

    return 0;
}