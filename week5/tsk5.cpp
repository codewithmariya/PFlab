#include<iostream>
using namespace std;
main(){
    int num1, num2, gcd;
cout<<" Enter first number: ";
cin>>num1;
cout<<" Enter second number: ";
cin>>num2;
int tem1=num1;
int tem2=num2;
 while(num1%num2!=0){
    int r = num1%num2;
    num1=num2;
    num2=r;
 }
 int lcm;
 lcm = tem1 * tem2/ num2;

cout<<" GCD " <<num2<<endl;
cout<< " LCM "<<lcm<<endl;

}