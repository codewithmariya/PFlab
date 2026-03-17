#include <iostream>
using namespace std;
main(){
    int n1=0, n2=1;
    int n;
    cout << " enter the length of Fibonacci number seies: "<<endl;
    cin>>n;
    cout<< n1 <<" , "<<endl;
    cout<<n2<<endl;
    for(int i=1; i<n-1; i=i+1){
        int next;
        next = n1 + n2;
        cout<< next <<endl;
        n1=n2;
        n2=next;

    }
}