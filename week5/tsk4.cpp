#include<iostream>
using namespace std;
main(){
cout<<" Enter the number: "<<endl;
int num;
cin>>num;
cout<<" Enter digit: ";
int digit;
cin>>digit;
 
int count = 0; 
    for(; num > 0; num = num / 10)
    {
        int lastDigit = num % 10;

        if(lastDigit == digit)
        {
            count++;
        }
    }


cout<< count++<<endl;
}








