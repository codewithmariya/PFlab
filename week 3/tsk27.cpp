#include <iostream>
using namespace std; 
 main() {
    int number, originalNumber;
    int d1, d2, d3, d4, sum;

    cout << "Enter a 4-digit number: ";
    cin >> number;

    originalNumber = number;

    
    d4 = number % 10;      
    number = number / 10; 

    d3 = number % 10;     
    number = number / 10;  

    d2 = number % 10;      
    number = number / 10;  

    d1 = number % 10;    

    sum = d1 + d2 + d3 + d4;

    cout << "Individual digits: " << d1 << ", " << d2 << ", " << d3 << ", " << d4 << endl;
    cout << "The total sum of " << originalNumber << " is: " << sum << endl;

    
}