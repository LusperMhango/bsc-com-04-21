#include<iostream>

using namespace std;

int main(){
    int firstVal;
    int secondVal;

    int * pPointer = nullptr;
    // assign the pointers with the address of firstVal
    pPointer = &firstVal;
    *pPointer = 10;

    // assign the pointers with the address of secondVal
    pPointer = &secondVal;
    *pPointer = 20;

    cout<< "firstValue is "<<firstVal <<'\n';
    cout<< "secondValue is "<< secondVal<<endl;

    return 0;
}