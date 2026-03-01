#include<iostream>
using namespace std;
main(){
float veg,fru,kv,kf, ans1, ans2, ans3; 
cout<< " Enter vegetale price per kilogram (in coins):  ";
cin>>veg;
cout<< " Enter fruit price per kilogram (in coins):   ";
cin>>fru;
cout<< " Enter total kilograms of vegetables:   ";
cin>>kv;
cout<<" Enter total kilograms of fruits:    ";
cin>>kf;
ans1= veg*kv;
ans2= fru* kf;
ans3= (ans1*0.515463917525773)+(ans2*0.515463917525773);
cout<<" Total earnings in Rupees:  "<<ans3;

















}