#include<iostream>
using namespace std;
main(){
    cout<<"enter b1"<<endl;
    string b1;
    cin>>b1;
    cout<<"enter age of b1"<<endl;
    int age1;
    cin>>age1;
    cout<<"enter b2"<<endl;
    string b2;
    cin>>b2;
    cout<<"enter age of b2"<<endl;
    int age2;
    cin>>age2;
    cout<<"enter b3"<<endl;
    string b3;
    cin>>b3;
    cout<<"enter age of b3<"<<endl;
    int age3;
    cin>>age3;
    if (age1<age2){
        if (age1<age3) 
    
    cout<<"b1 is youngest"<<endl;
    }
    if(age2<age1){
        if (age2<age3)
    
    cout<<"b2 is youngest"<<endl;
    }
     if (age3<age2){
        if(age3<age1)
     
     cout<<"b3 is youngest"<<endl;
    }
}