#include <iostream>
using namespace std;
main(){
    string user, stdname, coursename;
    int password;
     int choice, age;

    for(int i=1; i<=3; i++){
    cout<<" Username: "<<endl;
    cin>>user;
    cout<<" Enter Password: ";
    cin>>password;
    if(user == "admin"&& password == 1234){
        cout<<" Login Successful"<<endl;
        break;
    }
else {
    cout<<" Wrong login"<<endl;
}}
if (int i = 3&&!(user=="admin"&& password ==1234)){
cout<<" Too many attempts, Program End"<<endl;
return 0;
}
for( int i = 1; i<5; i++){
    cout<<"    -------MENU-------"<<endl;
    cout<<"      1. Add Student"<<endl;
    cout<<"      2. View Student"<<endl;
    cout<<"      3. Add Course "<<endl;
    cout<<"      4.  Exit "<<endl;
    cout<< " Enter Choice"<<endl;
    cin>>choice;
    if(choice==1){
        cout<<" Student Name: "<<endl;
        cin>>stdname;
        cout<<" Enter your age: "<<endl;
        cin>>age;
        cout<<" Student Added Succsfully"<<endl;
    }
   else if ( choice == 2){
if ( stdname !=stdname){
    cout<< "Student Name: "<<stdname<<endl;
    cout<<" Student'age : " <<age<<endl;
}
else{
    cout<<" No Student Record Found: "<<endl;
}}
if (choice==3){
    cout<<"Enter Course Name:  "<<endl;
    cin>>coursename;
    cout<<"Course Added: "<<endl;

}
else if(choice ==4){
    cout<<" Program Exit"<<endl;
    break;
}
else{
    cout<<" Invalid Choice"<<endl;
}

    
}


} 





