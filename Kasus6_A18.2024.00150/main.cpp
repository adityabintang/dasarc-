#include <iostream>

using namespace std;

struct Data {
    int x;
};

// Pass By Value
void passByValue(Data d) {
    d.x += 5;
    cout << "Pass By Value: x = " << d.x << endl;
}

// Pass By Reference
void passByReference(Data* d) {
    d->x += 5;
    cout << "Pass By Reference: x = " << d->x << endl;
}

int main() {
    Data n1;
    n1.x = 10;

    cout << "Initial value of x: " << n1.x << endl;

    // Pass By Value
    passByValue(n1);
    cout << "After Pass By Value: x = " << n1.x << endl;

    // Pass By Reference
    passByReference(&n1);
    cout << "After Pass By Reference: x = " <<n1.x << endl;

    return 0;
}
