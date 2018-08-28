#include<iostream.h>
#include<conio.h>

void main()
{
	int a[]={10,25,8,18,13,44,12,19,99,2,15};
	int i,j,temp,n=11,k;
	clrscr();
	for(k=3;k>0;k--)
	{
			for(i=1;i<=n-1;i=i+k)
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
	}
	cout<<"result\n";
	for(i=0;i<=n-1;i++)
	cout<<"  "<<a[i];

	getch();
}