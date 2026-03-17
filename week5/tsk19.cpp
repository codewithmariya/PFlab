#include<iostream>
using namespace std;
main(){
    int choice=0;
    while(  choice!= 5){
    cout<<  " --- Library System ---"<<endl;
    cout<<  " 1. Add Book "<<endl;
    cout<<  " 2. View Book "<<endl;
    cout<<  " 3. Borrow Book "<<endl;
    cout<<  " 4. Issue Book "<<endl;
    cout<<  " 5.  Exit "<<endl;
    cout<<endl;
    
    cout<<" Enter your Choice: "<<endl;
    cin>>choice;
    if( choice==1){
    string name;
    cout<<" Enter book Name: "<<endl;
    cin>>name;
    cout<< name << " is successfully added to the Library"<<endl;
    
}
else if ( choice ==5){
        cout<<" Exiting Library System, Goodbye  ";
        break;
    }
}
}