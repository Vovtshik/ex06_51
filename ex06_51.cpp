/*ex06_51.cpp*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int mystery(int, int);

int main()
{
   int x, y;
   
   cout << "Enter two integers: ";
   cin >> x >> y;
   while(y == 0)
   {
       cout << "y cannot have 0, enter a number other than 0 for y:\n";
       cin >> y;
   }
   if(y < 0)
      y = y * (-1);
   cout << "The result is " << mystery(x, y) <<endl;

   return 0;
}

int mystery(int a, int b)
{
   if(b == 1)
      return a;
   else
      return a + mystery(a, b - 1);
}
