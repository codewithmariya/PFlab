#include<iostream>
using namespace std;
main(){
    string array[5];
    cout<<" Enter the names of 5 students: "<<endl;
for(int i =0; i<5;i++){
    cin>>array[i];
}
cout<<" Student Names are: " <<endl;
for(int i =0;i<5;i++){
    cout<< array[i] <<endl;
}
}