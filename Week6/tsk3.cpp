#include <iostream>
using namespace std;
 main() {
    int ele;
    cout << "Enter the number of elements: ";
    cin >> ele;
     int array[ele];
    cout << "Enter " << ele << " numbers: " << endl;

    for (int i = 0; i < ele; i++) {
        cin >> array[i];
    }

    int largest = array[0];
    int smallest = array[0];

    for (int i = 1; i < ele; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }

    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

    
}