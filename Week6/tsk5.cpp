#include<iostream>
using namespace std;
 main() {
    int n;
    string names[100];
    char startLetter;
    int count = 0;

    cout << "Enter number of customers: ";
    cin >> n;

    cout << "Enter the names of " << n << " customers:\n";
    for(int i = 0; i < n; i++) {
        cin >> names[i];
    }

    cout << "Enter starting letter: ";
    cin >> startLetter;

    for(int i = 0; i < n; i++) {
        if(names[i][0] == startLetter) {
            count++;
        }
    }

    cout << "Number of names starting with '" << startLetter << "' = " << count << endl;


}

