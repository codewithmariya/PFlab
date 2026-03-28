#include<iostream>
using namespace std;
main(){
    int n;
    string names;
    cout<<" Enter the number of students: "<<endl;
    cin>>n;
    string array[n];
    cout<<" Enter names of "<<n <<" students"<<endl;
    for(int i=0;i<n;i++){
     cin>>array[i];
    }
}