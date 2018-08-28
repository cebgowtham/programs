#include<iostream.h>             
#include<conio.h>
class Bank
{
	float balance;
	float bank_charge;
	char cur_trans;
	char pre_trans;
	public:
	Bank(float bal)
	{
	  balance=bal;
	  pre_trans=NULL;
	  cur_trans=NULL;
	}
	void deposit(int d)
	{
	      cur_trans='d';
	      if(pre_trans==NULL || cur_trans==NULL || pre_trans==cur_trans)
	      bank_charge=d*(.25/100);
	      else
	      bank_charge=d*(.20/100);
	      balance=balance+(d-bank_charge);
	      pre_trans=cur_trans;
	}
	void withdraw(int w)
	{
	      cur_trans='w';
	      if(pre_trans==NULL || cur_trans==NULL || pre_trans==cur_trans)
	      bank_charge=w*(.50/100);
	      else
	      bank_charge=w*(.40/100);
	      balance=balance-(w-bank_charge);
	      pre_trans=cur_trans;
	}
	void getBalance()
	{
	   cout<<"Balance Amount:"<<balance;
	}
};
int main()
{
	clrscr();
	Bank c1(100),c2(150);
	c1.withdraw(35);
	c1.deposit(55);
	c1.withdraw(23);
	c1.withdraw(33);
	c1.deposit(10);
	c1.getBalance();

	c2.deposit(35);
	c2.deposit(19);                                           
	c2.withdraw(22);
	c2.deposit(15);
	c2.getBalance();
	getch();

return 0;
}
