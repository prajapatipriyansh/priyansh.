#include<iostream.h>
#include<conio.h>
class accountno
{
// access specifire
public:
//data member
char accountno[10];
//member functions()
void printno()
{
cout<<"accountno is:"<<accountno;}
};
int main ()
{
clrscr ();
//declare an  object  of  class studentname
accountno obj1;
//accessing data member
cout<<"enter no";
cin>>obj1.accountno;
//studentnamen obj1.studentname="priyansh";
//accessing number function
obj1.printno();
getch();
return 0;
}
