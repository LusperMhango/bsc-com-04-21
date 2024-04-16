#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
   // create an object to handle file manipulation
   ofstream Myfile;
   string name1,name2,name3;
   int Age1,Age2,Age3;
   //create a file and open a file
   Myfile.open("people.txt");
   //get input from the keyboard
   cout<< "Enter the name of the first person and Age "<<endl;
   cin>> name1;
   cin>>Age1;
   cout<<" Enter the name of the second person and Age "<<endl;
   cin>>name2;
   cin>>Age2;
   cout<<" Enter the name and Age of the third person "<<endl;
   cin>>name3;
   cin>>Age3;
   //display out put on the console
   cout<< name1 <<" "<< Age1 <<endl;
   cout<< name2 <<" "<< Age2 <<endl;
   cout<< name3 <<" "<< Age3 <<endl;

   // close the file that you have created 
   Myfile.close();
   
   cout<<"File added some text went successifully "<<endl;
   return 0;

}
