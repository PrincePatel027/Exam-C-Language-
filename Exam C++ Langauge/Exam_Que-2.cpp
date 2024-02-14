#include<iostream>
using namespace std;

class BankAccount{
	private:
		string ownerName="Prince";
		int account_Number=27;
		int balance;
		
	public:
		BankAccount(string ownerName, int account_Number, int balance) : ownerName(ownerName), account_Number(account_Number), balance(balance) {}
		
		bool isLogin(string ownerName, int account_Number)
		{
			if(this->ownerName==ownerName && this->account_Number==account_Number)
				return  true;
			else
			 	return false ;
		}
		
		Credit(int credit_Amount)
		{
			this->balance = this->balance + credit_Amount ;
			
			cout << endl 
				 << "Your Total Balance After Credit Amount Is: " 
				 << this->balance 
				 << endl ;
		}
		
		Debit(int debit_Amount)
		{
			this->balance = this->balance - debit_Amount ;
			
			cout << endl 
				 << "Your Total Balance After Debit Amount Is: " 
				 << this->balance 
				 << endl ;
		}
		
		Dispaly_Balance()
		{
			cout << "Your Total Balance Is: " << this->balance << endl ;
		}
		
		
};

int main()
{
	BankAccount person1("Prince", 27, 100000);
	
	string owner_name;
	int account_Number;
	int choice ;
	
	cout << "Enter Owner Name: " ;
	cin >> owner_name ;
	cout << "Enter Account Number: " ;
	cin >> account_Number ;
	
	if(person1.isLogin(owner_name, account_Number))
	{
		cout << endl << "Log-In Successfully......" << endl << endl;
		
		while(1)
		{
			
			cout << "Press 1 For Display Balance..." << endl << "Press 2 For Credit Balance..." << endl << "Press 3 For Debit Balance..." << endl << "Press 0 For Exit..." << endl ;
			cout << "Enter Your Choice: " ;
			cin >> choice ;
			
			if(choice==0)
			{
				cout << "Exiting The Program....." << endl ;
				break ;
			}
			else
			{
				switch(choice)
				{
					case 1 : 
						cout << "You Selected Display Balance Successfully..." << endl << person1.Dispaly_Balance() << endl ;
						break ;
					case 2 : 
						{
							int credit_Amount;
							cout << "Enter Amount To Credit: " ;
							cin >> credit_Amount ;
							cout << "Credit Balance Successfully..." << endl ;
							person1.Credit(credit_Amount);
						}
						break ;
					case 3 : 
						{
							int debit_Amount;
							cout << "Enter Amount To Credit: " ;
							cin >> debit_Amount ;
							cout << "Debit Balance Successfully..." << endl ;
							person1.Debit(debit_Amount);
						}
					default:
						cout << "Enter Valid Operation............" << endl ;
						break;
						
					}
				}
		}
	}
	else
	{
		cout << "Enter Valid ID Or Password.........." << endl ;
	}
	return 0;
}
