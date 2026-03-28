#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main ()
{
int t;
cout<<"enter the total student names:";
cin>>t;
string arr [t];
cin.ignore();
for (int i=0;i<t;i++){
cout<<"enter the "<<i+1<<" student name:";
getline(cin,arr[i]);
}
sort (arr,arr+t);
for (int i=0;i<t;i++){
cout<<arr[i]<<endl;
}
}