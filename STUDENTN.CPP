#include<iostream.h>
dinclude<conio.h>
class studentname
{
// access specifire
public:
//data member
char studentname [10];
//member functions()
void printname()
{
cout<<"studentname is:"<<studentname;}
};
int main ()
{
clrscr ();
//declaer an  pbject  of  class studentname
studentname obj1;
//accessing data member
cout<<"enter name";
cin>>obj1.studentname;
//studentname obj1.studentname="priyansh";
//accessing number function
obj1.printname();
getch();
return 0;
}
