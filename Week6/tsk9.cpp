#include<iostream>
using namespace std;

int main ()
{
    int choice;
    string arr[4];
    int count = 0;

    while (true) {
        cout << "\n----- library system menu ------\n";
        cout << "1 - add books\n";
        cout << "2 - view books\n";
        cout << "3 - borrow books\n";
        cout << "4 - exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (count < 4) {
                cout << "Enter book name: ";
                cin >> arr[count];
                count++;
            } else {
                cout << "Library is full!\n";
            }
            break;

        case 2:
            cout << "Books in library:\n";
            for (int i = 0; i < count; i++) {
                cout << i+1 << ". " << arr[i] << endl;
            }
            break;

        case 3:
            int b;
            cout << "Enter book number to borrow: ";
            cin >> b;

            if (b > 0 && b <= count) {
                cout << "You borrowed: " << arr[b-1] << endl;
            } else {
                cout << "Invalid selection!\n";
            }
            break;

        case 4:
            cout << "Exiting program...\n";
            return 0;

        default:
            cout << "Invalid choice!\n";
        }
        break;
    }
}