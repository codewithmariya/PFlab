#include <iostream>
using namespace std;
main(){
string name;
float length, area,width, radius, base, height;
cout<<"Enter the name of the figure: ";
cin>>name;
if(name=="square"){
    cout<<" Enter length of the side: ";
    cin>>length;
area = length*length;
cout<<"the area of the square is: ";
}
 if (name=="rectangle"){
    cout<<"enter the length of rectangle"<<endl;
    cin>>length;
    cout<<"enter the width of rectangle"<<endl;
    cin>>width;
    area=length *width ;
    cout<<"area hai:"<<area<<"area"<<endl;
    }
    if (name=="circle"){
    cout<<"enter the radius of circle"<<endl;
    cin>>radius;
    area=3.14*(radius*radius);
    cout<<"area hai:"<<area<<"area"<<endl;
    }
    if(name=="triangle"){
    cout<<"enter the base of triangle"<<endl;
    cin>>base;
    cout<<"enter the height of triangle"<<endl;
    cin>>height;
    area=0.5*(base*height);
cout<<"area hai:"<<area<<"area";
}
}









