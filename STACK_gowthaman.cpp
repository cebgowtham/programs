#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class Node
{
	public:
	int info;
	Node *next;
};
class stack
{
	Node *top;
	public:
	stack();
	void push();
	void pop();
	void display();
};
	stack::stack()
	{
	 top=NULL;
	}
	void stack::push()
	{
	 int data;
	 Node *temp=new Node();
	 cout<<"\n Enter data to add in stack:";
	 cin>>data;
	 temp->info=data;
	 temp->next=NULL;
	 if(top!=NULL)
	 temp->next=top;
	 top=temp;

	}
	void stack::pop()
	{
	 Node *temp=new Node();
	 if(top==NULL)
	 cout<<"\n stack is empty";
	 else
	 {
	  temp=top;
	  top=top->next;
	  cout<<"\n deleted element is:"<<temp->info;
	  delete temp;
	 }
	}
	void stack::display()
	{
	  Node *p=new Node();
	  p=top;
	  if(p==NULL)
	  cout<<" \n NO elements in stack:";
	  else
	  {
		while(p!=NULL)
		{
		 cout<<" "<<p->info;
		 p=p->next;
		}
	  }
	}
void main()
{
 stack s;
 int choice;
 clrscr();
 while(1)
 {
	cout<<"\n 1. push 2. pop 3. display 4. quit\n Enter choice:";
	cin>>choice;
	switch(choice)
	{
	case 1:
		s.push();
		break;
	case 2:
		s.pop();
		break;
	case 3:
		s.display();
		break;
	case 4:
		exit(0);
	default:
		cout<<"Enter correct choice:";
	}
   }
 }

