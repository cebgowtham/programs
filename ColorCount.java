import java.util.Scanner;
class ColorCount
{
	final String R="red";
	final String G="green";
	final String B="blue";
	
	static int redCount,blueCount,greenCount;  // if not declare static count always 1
	ColorCount(String col)
	{
		if(col.equals(R))
		System.out.println("Red count:"+ ++redCount);
		if(col.equals(G))
		System.out.println("Green count:"+ ++greenCount);
		if(col.equals(B))
		System.out.println("Blue count:"+ ++blueCount);
	}
public static void main(String args[])
{	
	Scanner scan=new Scanner(System.in);
	String colorName;
	char choice;
	ColorCount cc;
	do
	{
	System.out.println("Enter the Color");
	colorName=scan.next();
	new ColorCount(colorName);	
	System.out.println("are you want to give input again ( y/n):");
	choice=scan.next().charAt(0);
	}
	while(choice=='y');	
}
}