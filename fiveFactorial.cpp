#include <iostream>
using namespace std;
// function definition of five-factorial
int fact(int num1){
    int f = 1;
    while(num1 > 1)
       f *= num1--;
       return f;
}
 // the main method 
 int main(){
    int x = fact(5);
    cout << " 5! is " << x << endl;
 }