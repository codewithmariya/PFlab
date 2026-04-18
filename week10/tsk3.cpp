#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int number1, number2;
    cout<<" Enter first number: "<<endl;
    cin>>number1;
    cout<<" Enter second number: "<<endl;
    cin>>number2;
    cout<<" Greater Number: " << max(number1, number2);
    return 0;
}