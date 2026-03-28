#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
int arr[1],brr[1];
string srr[1];
for (int i=0;i<1;i++)
{
cout<<"enter the flight number for flight 1:";
cin>>arr[i];
cout<<"enter the destination for flight "<<arr[i]<<":";
cin>>srr[i];
cout<<"enter the seats available for flight "<<arr[i]<<":";
cin>>brr[i];
}
cout<<"-------flight information---------\n";
cout<<"flight "<<arr[0]<<" to "<<srr[0]<<" has "<<brr[0]<<" seats available";


}