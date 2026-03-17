#include <iostream>
     using namespace std;
 main() {
           while (true) {
        int choice;

        cout << "\n===== RESTAURANT MANAGEMENT SYSTEM =====" << endl;
        cout << "1. View Food Menu" << endl;
        cout << "2. Place Order" << endl;
        cout << "3. View Order status" << endl;
        cout << "4. Generate Bill" << endl;
         cout <<"5. Contact Staff" << endl;
         cout <<"6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "YOU Slected. View Food Menu" << endl;
        }
        else if (choice == 2) {
            cout << "YOU Selected. place order" << endl;
       }
        else if (choice == 3) {
            cout << "YOU Selected. view order staus" << endl;
             
        }
        else if (choice == 4) {
            cout << "YOU Selected. Generate Bill" << endl;
             
        }
         else if (choice == 5) {
            cout << "YOU Selected. Contact Staff" << endl;
             
        }
        
        else {
            cout << "Program Ends"<< endl;
            break;
        }
        
    }

    
}

