#include<iostream.h>
#include<conio.h>

void main()
{
	int a[]={10,25,8,18,13};
	int i,j,temp,n=5;
	clrscr();
	for(i=1;i<=n-1;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j] && j>=0)
		{
		   a[j+1]=a[j];
		   j=j-1;
		}
		a[j+1]=temp;
	}
	cout<<"result\n";
	for(i=0;i<=n-1;i++)
	cout<<"  "<<a[i];

	getch();
}