#include<iostream.h>
#include<conio.h>
class box
{
private:
int length;
public:
box():length(0){}
friend int printlength(box);//friend function
};
int printlength(box b)
{
b.length +=10;
return b.length;
}
int main()
{
clrscr();
box b;x
cout <<"length of box;"<<printlength(b) <<endl;
getch();
return 0;
}





