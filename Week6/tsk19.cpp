#include<iostream>
using namespace std;

 main() {
    int num;

    cout << "Enter the number of elements: ";
    cin >> num;

    int array[num];

    cout << "Enter " << num << " numbers:" << endl;
    for(int i = 0; i < num; i++) {
        cin >> array[i];
    }

    cout << "Numbers in reverse order:" << endl;
    for(int i = num - 1; i >= 0; i--) {
        cout << array[i] << endl;
    }

    
}