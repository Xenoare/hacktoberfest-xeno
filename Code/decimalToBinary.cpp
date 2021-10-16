// Name   : Xenoare
// github : https://github.com/Xenoare

#include <iostream>
using namespace std;

void decimalToBinary(int N)
{
 int arr[32];

 int i = 0;
 while (N > 0)
 {
  arr[i] = N % 2;
  N /= 2;
  i++;
 }

 for (int j = i - 1; j >= 0; j--)
 {
  cout << arr[j];
 }
}

int main()
{
 int N;
 cin >> N;
 decimalToBinary(N);
 return 0;
}