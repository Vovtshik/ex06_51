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
