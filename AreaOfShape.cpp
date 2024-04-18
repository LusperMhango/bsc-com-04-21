#include<iostream>
#include<string>

using namespace std;
// create functions for calculating the area of triangle, rectangle and square respectively
double AreaOfTriangle(double width,double height){
return width * height * 0.5;
}
double AreaOfRectangle(double width,double height){
return width * height;
}

double AreaOfSquare(double side){
return side * side;
}
// the main method 
int main(){
     int choice;
     double width, height, side;
     cout<<" please select the area of the shape you want to calculate "<<endl;
     cout<<"1. Square"<<endl;
     cout<<"2. Rectangle"<<endl;
     cout<<"3. Triangle"<<endl;
     cout<<"4. Quit Program"<<endl;

     cout<<" Enter Selection "<<endl;
     cin>>choice;

     while(choice < 1 || choice > 3){
        cout<<" invalid choice.  please enter a valid choice"<<endl;
        cin>>choice;
     }
    // using a switch statement to chose a preffered area of a certain shape..
    switch(choice){
        case 1:
        cout<<" Enter side of a square "<<endl;
        cin>>side;
        cout<<" The area of a square is "<< AreaOfSquare(side) <<endl;
        break;
        case 2:
        cout<<" Enter the width and height of a Rectangle "<<endl;
        cin>>width>>height;
        cout<<" The area of a Rectangle is "<< AreaOfRectangle(width, height) <<endl;
        break;
        case 3:
        cout<<" Enter the width and height of a Triangle "<<endl;
        cin>>width>>height;
        cout<<" The area of a Triangle is "<< AreaOfTriangle(width,height)<<endl;
        break;
    }
    return 0;
}