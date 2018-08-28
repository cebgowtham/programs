#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class Node
{
	public:
	int info;
	Node *next;
};
class queue
{
	Node *rear,*front;
	public:
	queue();
	void enqueue();
	void dequeue();
	void display();
};
	queue::queue()
	{
	 rear=front=NULL;
	}
	void queue::enqueue()
	{
	 int data;
	 Node *temp=new Node();
	 cout<<"\n Enter data to add in queue:";
	 cin>>data;
	 temp->info=data;
	 temp->next=NULL;
	 if(front==NULL)
		front=temp;
	 else
		rear->next=temp;
	 rear=temp;
	}
	void queue::dequeue()
	{
	 Node *temp=new Node();
	 if(front==NULL)
	 cout<<"\n queue is empty";
	 else
	 {
	  temp=front;
	  front=front->next;
	  cout<<"\n deleted element is:"<<temp->info;
	  delete temp;
	 }
	}
	void queue::display()
	{
	  Node *p=new Node();
	  p=front;
	  if(front==NULL)
	  cout<<" \n NO elements in queue:";
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
 queue q;
 int choice;
 clrscr();
 while(1)
 {
	cout<<"\n 1. enqueue 2. dequeue 3. display 4. quit\n Enter choice:";
	cin>>choice;
	switch(choice)
	{
	case 1:
		q.enqueue();
		break;
	case 2:
		q.dequeue();
		break;
	case 3:
		q.display();
		break;
	case 4:
		exit(0);
	default:
		cout<<"Enter correct choice:";
	}
   }
 }

