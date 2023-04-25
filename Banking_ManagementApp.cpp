#include<iostream>
#include<cstdlib>
#include<math.h>
#include<cstring>
using namespace std;


//Create New Account object
class Bank_Management_System{
    private:
    string name;
    char mobile[12];
    int pin;
    long Account_no;
    int money;
    public:
    Bank_Management_System();
    void CreateNewAccount();
    void ShowAccountDetails();
    void Deposit_Money_in_Account();
    void Withdraw_Money_in_Account();
    void Edit_Your_Account_Details();
};
//Constructer!!!!!
Bank_Management_System::Bank_Management_System(){
    money=0;
}
//Create New Account funtion!!!!!!
void Bank_Management_System::CreateNewAccount(){
    //Input your name
    cout<<"----Create New Bank Account----"<<endl;
     cout<<"Enter your name: ";
     cin>>name;
     //Input mobile number
     cout<<"Enter your mobile number: ";
     cin>>mobile;
     //Input security pin
     cout<<"Enter your security pin(4 digits pin): ";
     cin>>pin;
     //Generate Account number
     Account_no=89652658+rand();
     cout<<"\n\t\t Account is created successfully..."<<endl;

}
//Show the details of your Account
void Bank_Management_System::ShowAccountDetails(){
    cout<<"------Details in your Account-------"<<endl;
    cout<<" "<<endl;
    cout<<"Account holder name: "<<name<<endl;
    cout<<"Account number: "<<Account_no<<endl;
    cout<<"Account holder mobile number: "<<mobile<<endl;
    cout<<"Account Balence: "<<money<<endl;
}
//Deposit money in your Account
void Bank_Management_System::Deposit_Money_in_Account(){
     cout<<"----Deposit Money in your Account----"<<endl;
     long a;
     int p;
     cout<<"Enter your account number: ";
     cin>>a;
     cout<<"Enter your security pin: ";
     cin>>p;
     if(Account_no==a && pin==p){
        int value;
        cout<<"How much money you want to deposit in your account: ";
        cin>>value;
        money=money + value;
        cout<<"Now your current account balence: "<<money<<endl;
     }
     else{
        cout<<"Your account details is not match"<<endl;
     }
}
//Withdraw money in your Account
void Bank_Management_System::Withdraw_Money_in_Account(){
     cout<<"----Withdraw Money in your Account----"<<endl;
     long a;
     int p;
     cout<<"Enter your account number: ";
     cin>>a;
     cout<<"Enter your security pin: ";
     cin>>p;
     if(Account_no==a && pin==p){
        int value;
        cout<<"How much money you want to withdraw in your account: ";
        cin>>value;
        if(money>=value){
            money=money - value;
            cout<<"Now your current account balence: "<<money<<endl;
        }
        else{
            cout<<"In your account not have much money "<<endl;
        }
     }
     else{
        cout<<"Your account details is not match"<<endl;
     }
}
//Edit your account Details
void Bank_Management_System::Edit_Your_Account_Details(){
	cout<<"\n!!In your Account You only able change your mobile number!!"<<endl;
	char ch;
	char phone[12];
	cout<<"\nYou want to change your mobile number(if yes Press 'y'): ";
	cin>>ch;
	if(ch=='y'){
		cout<<"\nEnter your new mobile number: ";
		cin>>phone;
		int length=strlen(mobile);
		for(int i=0;i<length;i++){
			mobile[i]=phone[i];
		}
		cout<<"\n Your mobile number edit successfully...."<<endl;
	}
	else{
		cout<<"\n Thank You......"<<endl;
	}
}

int main(){
    //Create Switch case statement for banking services
    cout<<"!!!!!!!!!!!!!! Bank Management System!!!!!!!!!!!!!!!!!!!!!"<<endl;
    cout<<"\n\t\t1.Create New Account"<<endl;
    cout<<"\n\t\t2.Show your Account details"<<endl;
    cout<<"\n\t\t3.Add money in your Account"<<endl;
    cout<<"\n\t\t4.Withdraw money from your Account"<<endl;
    cout<<"\n\t\t5.Edit your account details"<<endl;
    cout<<"\n\t\t6.Exit or delete your account"<<endl;
    Bank_Management_System tom;
    int ch;
    
    do{
    	cout<<"\nSelect your Option(1 to 6): ";
        cin>>ch;
    	switch (ch)
    	{
    	case 1:
    		tom.CreateNewAccount();
        	break;
    	case 2:
    		tom.ShowAccountDetails();
    		break;
    	case 3:
    		tom.Deposit_Money_in_Account();
    		break;
    	case 4:
    		tom.Withdraw_Money_in_Account();
    		break;
    	case 5:
    		tom.Edit_Your_Account_Details();
    		break;
    	case 6:
    		cout<<"\n\t\t Account close or delete"<<endl;
    		break;
    	default:
    		cout<<"\n You select wrong number,Select again!!!";
        	break;
    	}
	}while(ch != 6);
	
    return 0;
}
