#include<iostream>
using namespace std;
main(){
string name;
float child, adult,no1, no2,charity, don,ans, remain, amount;
cout<<" Enter the movie name:  ";
cin>>name;
cout<<" Enter the adult ticket price: $";
cin>>adult;
cout<<" Enter the child ticket price: $";
cin>>child;
cout<<" Enter the number of adult tickets sold: ";
cin>>no1;
cout<<" Enter the number of child tickets sold: ";
cin>>no2;
cout<<" Enter the percentage of the amount to be donated: ";
cin>>don;
amount= (adult*no1) + (child * no2);
ans = don/100*amount;
remain= amount-ans;
cout<<" Movie "<<name;
cout<< "Total amount generated from ticket sales: $"<<amount<<endl;
cout<<" Donation to charity "<<don<< ": $"<<ans<<endl;
cout<<" Reamaining amount after donation: $"<<remain;











}