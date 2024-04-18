#include<iostream>
using namespace std;

int main(){
    // initialise variables
    int num;
    bool value = false;
    // using a for loop to iterate based on the condition
    while(!value){
        cout<<" Enter the value between 5 and 10 "<<endl;
        cin>>num;
        if(num > 5 && num < 10){
            cout<<" your input value("<<num<<") has been accepted "<<endl;
            break;  
        }
        else{
            cout<<" sorry, u entered an invalid number, please try again "<<endl;
            cout<<" you entered "<< num<<". please enter a number between 5 and 10 "<<endl; 
        }
    }
    return 0;
}