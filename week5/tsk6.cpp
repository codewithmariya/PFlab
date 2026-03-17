#include <iostream>
using namespace std;
main(){

    for(int row=1; row<=5;row++ ){
        for( int clm=1; clm<=row; clm++){
            cout<<"*";
        
           }
            cout<<"\n";
        }
       
       for(int row=5; row>=1; row--){
        for(int clm=1; clm<=row; clm++){
            cout<<"*";
        
        }
        cout<<"\n";
       }

}
