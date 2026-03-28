#include<iostream>
using namespace std;
main(){
string word;
cout<<" Enter the word: "<<endl;
cin>>word;
for(int i=word.length()-1; i>=0; i--){
   
 cout<<" Reversed word : "<< word[i];
}


}