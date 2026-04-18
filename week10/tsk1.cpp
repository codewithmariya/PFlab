#include <iostream>
using namespace std;

void add(int num1 , int num2);
int main(){
    int number;
    int num2;
    cout<<" Enter first number: "<<endl;
    cin>>number;
    cout<<" Enter second number: "<<endl;
    cin>>num2;
    add(number, num2);
    return 0;



}
void add(int num1, int num2)
{
    cout<<" Sum: " << num1 + num2;
}