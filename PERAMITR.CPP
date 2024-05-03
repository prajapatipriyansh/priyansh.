#include <iostream.h>
#include<conio.h>

class rectangle {
private:
   int width;
   int height;

public:
  //constructor with parameters
  rectangle(int w,int h){
    width = w;
    height =h;
  }
 // function to calculate area
 int calculatearea() {
  return width * height;
  }
};
int main() {
clrscr();
  // crent ing an object of rectangle with width 5 and height 6
  rectangle rect (5 , 6);
   //calculating and pninting tha area

  cout << "area of tha rectangle: " << rect.calculatearea() << endl;
  getch();
  return 0;
}
