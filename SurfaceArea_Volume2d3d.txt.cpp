#include<iostream.h>
#include<conio.h>
class Geometry2d
{
	float l,b,a;
	public:
	void surfaceArea(float a) // SQUARE
	{
	 cout<<endl<<"The area(2d) of square:"<<4*a;
	}
	void surfaceArea(float l,float b) // RECTANGLE
	{
	cout<<endl<<"The area(2d) of Rectangle:"<<(l*b);
	}
};
class Geometry3d
{
	float a,l,b,h;
	public:
	void surfaceArea_volume(float a) //CUBE
	{
	 cout<<endl<<"The area(3d) of cube  :"<<(6*a*a);
	 cout<<endl<<"The volume(3d) of cube:"<<(a*a*a);
	}
	void surfaceArea_volume(float l,float b,float h) //CUBOID
	{
	 cout<<endl<<"The area(3d) of cuboid  :"<<2*((l*b)+(b*h)+(h*l));
	 cout<<endl<<"The volume(3d) of cuboid:"<<(l*b*h);
	}
};
  void main()
  {
	Geometry2d g2d;
	Geometry3d g3d;
	clrscr();
	g2d.surfaceArea(3.0f);
	g2d.surfaceArea(2.0f,4.0f);

	g3d.surfaceArea_volume(3.0f);
	g3d.surfaceArea_volume(2.0f,4.0f,6.0f);
	getch();
  }
