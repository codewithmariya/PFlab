#include<iostream>
using namespace std;
main(){
    float red =2.0,white =4.10,tullips=2.50;
int num1,num2,num3,price,discount,payable;
    cout<<"lal  no"<<endl;
    cin>>num1;
    cout<<"safad no"<<endl;
    cin>>num2;
cout<<"nila no"<<endl;
cin>>num3;
price=2*num1+4.10*num2+2.50*num3;
cout<<"final price:"<<price<<"price";
if (price>200){
    discount=price*0.20;
    payable =price-discount;
    cout<<"payableis :"<<payable<<"payable";
}
}