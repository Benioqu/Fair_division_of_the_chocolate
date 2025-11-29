#include <iostream>
using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;
  int a = x%2;
  int b = y%2;
  
  if (a<b)
  {
      cout << x;
  }else
  {
      cout << y;
  }
}
