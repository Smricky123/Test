#include <iostream>
using namespace std;


int fun()
{
  static int x = 0;
  x++;
  return x;
}

int main()
{
  cout << fun();
  cout << fun();
  return 0;
}
