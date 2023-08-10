#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}
    Distance(int ft, float in) : feet(ft), inches(in) {}

    void getDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void showDistance() const {
        cout << feet << " feet " << inches << " inches";
    }

    Distance operator+(const Distance& d2) const {
        int newFeet = feet + d2.feet;
        float newInches = inches + d2.inches;

        if (newInches >= 12.0) {
            newInches -= 12.0;
            newFeet++;
        }

        return Distance(newFeet, newInches);
    }
};

int main() {
    Distance d1, d2, d3;

    cout << "Enter the first distance:\n";
    d1.getDistance();

    cout << "Enter the second distance:\n";
    d2.getDistance();

    d3 = d1 + d2;

    cout << "Total distance: ";
    d3.showDistance();
    cout << endl;

    return 0;
}

