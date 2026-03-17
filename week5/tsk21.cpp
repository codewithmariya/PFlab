#include <iostream>
using namespace std;
main(){
int num,digit,d,count;
cout<<" Enter the number: "<<endl;
cin>>num;
cout<<" Enter the digit:  "<<endl;
cin>>digit;
while(num>0){
    d=num%10;
    if (d==digit){
        count++;
    }
        num=num/10;
        
}

    
    
cout<<" The frequency of  "<< digit <<" is "<<count;
}
