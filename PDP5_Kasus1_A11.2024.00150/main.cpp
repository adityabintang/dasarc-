#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "input number: ";
    cin >> number;

    if(number > 0){
        cout << "the number is positive" << endl;
    }else{
        cout << "the number is negative" << endl;
    }
}
