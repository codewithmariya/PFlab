#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float rad;
    cout<<" Enter the distance from the base of the tree:  "<<endl;
    int dis;
    cin>>dis;
    cout<<" Enter the angle of elevation (in degrees): "<<endl;
    int angle;
    cin>>angle;
    rad = angle/57.2958;
   float ans= tan(rad);
    cout<<" The height of the tree is: " << dis * ans;
}