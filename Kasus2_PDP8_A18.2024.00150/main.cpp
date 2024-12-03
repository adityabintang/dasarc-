#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Input n: ";
    cin>> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cout<< "Input ke-"<< (i + 1)<< ": ";
        cin>> arr[i];
    }

    cout<< "Hasil Array: ";
    for (int i = 0; i < n; i++){
        cout<< arr[i]<< " ";
    }
    cout << endl;

    cout<< "Hasil Array(Reversed): ";
    for (int i = n - 1; i >= 0; i--){
        cout<< arr[i]<< " ";
    }
    cout << endl;

}
