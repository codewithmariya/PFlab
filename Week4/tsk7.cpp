#include<iostream>
using namespace std;
main(){
    int ans;
    cout<<"enter first value";
    int first ;
    cin>>first ;
    cout<<"enter sec value";
    int sec;
    cin>>sec;
    cout<<"enter operator";
    char op;
    cin>>op;
    if (op=='+'){

    ans = first -sec;
    
    }
    if (op=='-'){
    ans = first +sec;
    }
    if (op=='*'){

    ans = first *sec;
    
    }
    if (op=='/'){
    ans =( first) / (sec);
    }
    cout<<"ans hai:"<<ans<<"ans"<<endl;
    }