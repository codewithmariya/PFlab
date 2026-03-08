#include<iostream>
using namespace std;
main(){
float bill, disc;
cout<< "Enter your bill:  ";
cin>>bill;

if(bill <= 5000){
    disc= 0.05*bill;
    cout<< " Your discounted bill is: "<<disc;
}
if(bill> 5000){
    disc= 0.01*bill;
    cout<<" Your discounted bill is: "<<bill;
}

}