#include<iostream>
using namespace std;
main(){
    int age, price, unit, saved, mon,buy ;
    int gift=0;
    int total = 0;
    int toys=0;


    cout<<" Enter your age: "<<endl;
    cin>>age;
cout<<" Enter the price of washing machine: "<<endl;
cin>>price;
cout<<" Unit price of each toy: "<<endl;
cin>>unit;
for(int i=1; i<=age; i++){
     if(i%2==0){
        gift+=10;
        total+= gift-1;
      
     }

     else {
        toys++;
        saved= unit* toys;
       
        
     }
      mon = saved+ total;
     
}



if (mon>=price){
    buy= mon-price;
    cout<<" YES! "<< buy <<endl;
}
else{
   buy=  price - mon;
    cout<<" NO! "<<buy<<endl;
}
}