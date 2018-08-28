#include<iostream.h>
#include<conio.h>
#include<string.h>

class IString
{
	 char *inverseText;
	public:
		IString(char *name1)
		{
		inverseText=name1;
		strrev(inverseText);
		}
	void operator =(IString t1); // prototype declare
};
	void IString::operator =(IString t1)
	{
	int l=strlen(t1.inverseText);
	int test = 0;
	 for(int i=0;i<l;i=i+2)      // increment odd position
	 {
		  if(*(inverseText+i) != *(t1.inverseText+i))
		  {
		  test=1;
		  goto out;
		  }
	 }
	 out:
	 if(test==0)
	 cout<<" \n odd positions char's are  SAME";
	 else
	 cout<<" \n odd positions char's are DIFFERENT";
	}
void main()
{
	char *myText1,*myText2;
	clrscr();
	cout<<"Enter the Text1 & Text2:";
	cin>>myText1>>myText2;

	if(strlen(myText1)==strlen(myText2))
	{
	IString   inverseStr1(myText1),inverseStr2(myText2); // initialize 2 objects

	inverseStr1=inverseStr2;      //call operator overload to perform odd position 1 3 5 7 9....
	}
	else
	{
	 cout<<"\n error both name length are not equal";
	}
	getch();
}