/*
 * int x = 5;
   float y= x; ✅ implicit tpe casting

   float = z;
   int y = z; ❌ error
   int y =  (int)z ; ✅ explicit type casting
*/

#include <bits/stdc++.h>
using namespace std;

class Complex
{
  int real;
  int img;

public:
  Complex()
  {
  }
  Complex(int x)
  {
    real = x;
    img = x;
  }
  void display()
  {
    cout << "Real is " << real << " , "
         << "Img is " << img << endl;
  }
};

int main()
{
  Complex c = 5; // without error it will give :
                 // no suitable constructor exists to convert from "int" to "Complex"
  Complex d;
  d = 87;
  c.display();
  d.display();
  return 0;
}