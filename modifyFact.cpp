#include <iostream>
using namespace std;
// function definition of five-factorial
int fact(int num1){
    int f = 1;
    while(num1 > 1)
       f *= num1--;
       return f;
}
int main(){
  cout <<" enter a value: "<< endl;
  int k;
  cin >> k;
  unsigned long int j = fact(k);
  cout << k <<" ! is "<< j << endl;
}