// Name   : Xenoare
// github : https://github.com/Xenoare

#include <iostream>
using namespace std;

int binaryToDecimal(int binary)
{
 int total_sum = 0;
 int base = 1;
 int temp_binary = binary;

 while (temp_binary)
 {
  int last_digit = temp_binary % 10;
  temp_binary /= 10;

  total_sum += last_digit * base;
  base *= 2;
 }

 return total_sum;
}

int main()
{

 int binary;
 cin >> binary;

 cout << "Binary from " << binary << " to Decimal " << binaryToDecimal(binary) << endl;

 return 0;
}