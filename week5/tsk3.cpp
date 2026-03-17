#include<iostream>
using namespace std;
int main(){
    int i, password, option,amount, total,with;
     for(i=1;i<=3;i=i+1){
    cout<<"Enter ATM PIN: ";
    cin>>password;
     if( password == 1234){
        cout<<" Login Successful"<<endl;
        break;
    }
else {
    cout<<" Wrong PIN"<<endl;
}}
if (int i = 3&&!( password ==1234)){
cout<<" Too many attempts, Card Blocked"<<endl;
return 0;
}
for(i=1; i<5;i++){
    cout<<"Choose from the following"<<endl;
    cout<< "1. Check Balance"<<endl;
    cout<<" 2. Deposit Money"<<endl;
    cout<< " 3.Withdraw Money"<<endl;
    cout<< " 4. Exit"<<endl;
    cout<< "Enter your option: "<<endl;
    cin>>option;
     if(option==1){
        cout<<" Current Balance: "<<endl;
    }
   else if ( option == 2){
    cout<< "Amount: "<<endl;
            cin>>amount;
            total=amount + 77777;
            cout<< " Total amount: "<<total<<endl;
        }

if (option==3){
     cout<<" Withdrawl Amount: "<<endl;
                cin>>with;
             total=77777-with;
             cout<<" Total amount: "<<total;
            
 if(with>77777){
    cout<<" Insufficient Balance"<<endl;
    break;
}}
else if(option==4){
    cout<<" Over"<<endl;
}
}
} 







     