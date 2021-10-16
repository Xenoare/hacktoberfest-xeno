// Name   : Xenoare
// github : https://github.com/Xenoare

#include <iostream>
using namespace std;

int main()
{
 int N;
 cin >> N;

 for (int i = N - 1; i > 0; i--)
 {
  if (N == 1)
  {
   cout << 1;
  }
  N *= i;
 }

 cout << N;

 return 0;
}