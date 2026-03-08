#include<iostream>
using namespace std;
main(){
    int speed;
    cout<<"enter the speed of car"<<endl;
    cin>>speed;
    if (speed>10<=50){
        cout<<"slow"<<endl;
    }
    cout<<"enter the speed of car"<<endl;
    cin>>speed;

    if (speed>50<=150){
        cout<<"fast"<<endl;
    }
    cout<<"enter the speed of car"<<endl;
    cin>>speed;
    if (speed>150<=1000){
        cout<<"ultra fast"<<endl;
    }
    cout<<"enter the speed of car"<<endl;
    cin>>speed;
    if (speed>1000){
        cout<<"extremely fast"<<endl;
    }
}