#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   // create an object that will perform all input operations on the file that we have already created
   ifstream Read;
   string name;
   int Age;
   
   // open the file
   Read.open("people.txt");
   //check if the files has been openned successifully
   if(!Read.is_open()){
     cout<<" Error openning a file "<<endl;
    return 1;
   }
   // perform reading operations
   Read >> name >> Age;
   // display from people.txt
   cout<< "name is: " << name << " Age is: "<< Age << endl;

   Read.close();
   cout<<" file read success ";

   return 0;

}