#include <iostream>
using namespace std;

int sum(int i1, int i2)
  {
 int sum = 0;
  for (int i = i1; i <= i2; i++)
  sum += i;
  
  return sum;
  }
  
 int main()
 {
 cout << "Sum from 1 to 10 is " << sum(1, 10) << endl;
 cout << "Sum from 20 to 37 is " << sum(20, 37) << endl;
 cout << "Sum from 35 to 49 is " << sum(35, 49) << endl; 
 return 0;
 }