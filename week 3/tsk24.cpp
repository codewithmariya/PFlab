#include<iostream>
using namespace std;
main(){
float bag, cost, area, pound, foot;

cout<<" Enter the size of the fertilizer bag in pounds:  ";
cin>> bag;
cout<< " Enter the cost of the bag: $  ";
cin>>cost;
cout<< " Enter the area in square feet that can be covered by the bag:  ";
cin>>area;
pound= cost/bag;
foot= cost/area;
cout<<" Cost of the fertilizer per pound is: $ "<<pound <<endl;
cout<<" Cost of fertilizing per square foot is: $ "<<foot;
















}