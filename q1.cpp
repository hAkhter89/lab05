#include <iostream>
using namespace std;

class toolbooth {
    private:
        unsigned int cars;
        unsigned int money;
    public:
        toolbooth();
        void payingcar();
        void nopaycar();
        void display();
        ~toolbooth();
};

toolbooth::toolbooth(): cars(0), money(0) {}
void toolbooth::payingcar() {
    cars++;
    money = money + 50;
}

void toolbooth::nopaycar() {
    cars++;
}

void toolbooth::display() {
    cout << "Cars: " << cars << ", " << "Money: " << money << endl;
}

int main() {
    toolbooth T;
    char input;
    while (input != 'q') {
        cin >> input;
        if (input == 'p') {
            T.payingcar();
        }
        else if (input == 'n') {
            T.nopaycar();
        }
    }

    T.display();
    return 0;
}