#include<iostream>
using namespace std;
main(){
    int sum=0;
    int ele, num;
    cout<<" Enter the number of elements: "<<endl;
    cin>>ele;
    int array[ele];
    cout<<" Enter " <<ele<< "numbers: "<<endl;
    for(int ind=0;ind<ele;ind++){
        cin>>array[ind];
        sum+=array[ind];
    }
 cout<<" Sum of all elements: "<<sum << endl;
}