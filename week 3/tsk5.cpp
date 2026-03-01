#include<iostream>
using namespace std;
main(){
float mat, inter, ecat;
string name;
float score;
cout<<" Enter your name:  ";
cin>>name;
cout<<" Enter matriculation marks (out of 1100):  ";
cin>>mat;
cout<<" Enter intermediate marks (out of 550) :   ";
cin>>inter;
cout<<" Enter ECAT marks (out of 400):   ";
cin>>ecat;
score= (mat/1100*10)+(inter/550*40)+(ecat/400*50);
cout<<" The aggregate score for " << name << "  is  " <<score <<" % ";





}