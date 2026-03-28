#include<iostream>
using namespace std;
main(){
string word;

cout<<" Enter the word: "<<endl;
cin>>word;
for(int i=0 ; i<word.length(); i++){
    cout<< word[i]<<" found at position "<< i << endl;
    
}



}