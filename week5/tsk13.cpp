#include <iostream>
using namespace std;
main(){
    int num;
    cout<< " Enter the number: "<<endl;
    cin>>num;
    for(int i=1; i<=10; i++){
        int table;
        table= num*i;
        cout<<num << " * "<< i << "="<<table <<endl;
    }
}