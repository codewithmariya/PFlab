#include<iostream>
using namespace std;
main(){
    int ele;
    int i;
    int count=0;
    cout<<" Enter number of elements: "<<endl;
    cin>>ele;
    int array[ele];
cout<<" Enter "<< ele << " numbers: "<<endl;
for(int i=0;i<ele;i++){
    cin>>array[i];
    if(array[i]%2 ==0){
        
count++;
    }
}
cout<<" Total even numbers are: "<<count <<endl;
}