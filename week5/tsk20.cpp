#include <iostream>
using namespace std;
main(){
    int choice=0;
    int num1, num2, result;
    while( choice!=6){
        cout<<endl;
    cout<<" ---Simple Calculator---"<<endl;
    cout<<"  1. Addition  "<<endl;
    cout<<"  2. Subtraction"<<endl;
    cout<<"  3. Multiplication"<<endl;
    cout<< " 4. Division"<<endl;
    cout<<"  5. Clear Screen"<<endl;
    cout<<"  6. Exit "       <<endl;
    cout<<endl;
    cout<<" Enter your choice: "<<endl;
    cin>>choice;
    if (choice == 1){
        cout<<" Enter first number: "<<endl;
        cin>>num1;
        cout<<" Enter second number: "<<endl;
        cin>>num2;
        result=num1+num2;
        cout<<" The sum of "<<num1<<" and"  <<num2<<" is "<<result;

    }
    else if( choice ==2){
         cout<<" Enter first number: "<<endl;
        cin>>num1;
        cout<<" Enter second number: "<<endl;
        cin>>num2;
        result=num1-num2;
        cout<<" The sum of "<<num1<<" and"  <<num2<<" is "<<result;

    }
    else if(choice == 3){
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            result = num1 * num2;
            cout << "Result: " << result << endl;
        }

        else if(choice == 4){
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result= num1/num2;
            cout<<" Result " << result;

            if(choice==5)
                cout << "Screen Cleared"<< endl;
        }

        else if(choice == 6){
            cout << "Exiting calculator..." << endl;
        }

        cout << endl;
    }

    
}
