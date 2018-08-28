import java.util.Scanner;
class Sort // without using CompareTo function
	{
		int element;
		Sort() {}	
		Sort(int k)
		{
		element=k;
		}
		void display()
		{
		System.out.print("  "+element);
		}
		void findSort(Sort s[])
		{
			 int len=s.length,temp;			
			for(int i=0;i<len;i++)
			{
			for(int j=i+1;j<len;j++)
			{
			if(s[i].element>s[j].element)
			{
			temp=s[i].element;
			s[i].element=s[j].element;
			s[j].element=temp;	
			}
			}
		}
		 
		}
	}
class SortNumber
{
	public static void main(String ar[])
	{
	int temp;
	Scanner scan=new Scanner(System.in);
	System.out.println("Enter Total No. of size:");
	int size=scan.nextInt();
	Sort s[]=new Sort[size]; // array of object
	Sort s1=new Sort();
	for(int i=0;i<size;i++)
	{
	s[i]=new Sort(scan.nextInt());
	}
	System.out.println("\n Before Sort in List of Object ");
	for(int i=0;i<size;i++)
	{
		s[i].display();
	}	
		s1.findSort(s);	
	System.out.println("\n After Sort in List of Object ");
	for(int i=0;i<size;i++)
	{
		s[i].display();
	}	
	
}
}