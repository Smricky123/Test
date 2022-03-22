#include <iostream>
using namespace std;

// Changing for testing github commands
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
