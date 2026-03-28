#include<iostream>
using namespace std;
main(){
    string word;
    cout<<" Enter a word: "<< endl;
    cin>>word;
    for(int i=0; i<word.length() ;i++){
        if(word[i]=='z'){
            word[i]=='a';
        }
        else{
            word[i]= word[i]+1;
        }
    }
cout<<" Output: "<< word <<endl;
}