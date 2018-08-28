#include<iostream.h>
#include<conio.h>
#include<string.h>
class Parent
{
		protected:
		char firstName[20];
		char fatherIrisColor[10];
		char motherIrisColor[10];
		char lastName[20];
		char address[50];

	public:
		void getDetails()
		{
		cout<<"Enter first name:";
		cin>>firstName;
		cout<<"Enter father iris color:";
		cin>>fatherIrisColor;
		cout<<"Enter mother iris color:";
		cin>>motherIrisColor;

		}
};
class Child : public Parent
{
	public:
		void getDetails()
		{
		Parent::getDetails();
		cout<<"Enter lastName:";
		cin>>lastName;
		cout<<"Enter address:";
		cin>>address;
		}
		void displayDetails()
		{
			cout<<"\n First Name:"<<firstName;
			cout<<"\n last Name :"<<lastName;
			cout<<"\n Address   :"<<address;


		   if(strcmp(fatherIrisColor,motherIrisColor)==0)
		   cout<<"\n Male Child iris Color : BLUE";
		   else if(strcmp(fatherIrisColor,"blue")==0 && strcmp(motherIrisColor,d"black")==0)
		   cout<<"\n Male Child iris color : BLACK \n Female child iris color : BLUE";
		   else if(strcmp(fatherIrisColor,"black")==0 && strcmp(motherIrisColor,"blue")==0)
		   cout<<"\n Male Chlild iris color : BLUE \n Female child iris color : BLACK";
		   else
		   cout<<"\n input wrong ";
		}
};
void main()
{
	Child c;
	clrscr();
	c.getDetails();
	c.displayDetails();
	getch();
}