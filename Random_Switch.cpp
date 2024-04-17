#include <iostream> // for outputting messages to the console
#include <random>   // for generating random numbers
using namespace std;

int main(){
           // from the random c++ std library, we create a random number generator
   random_device num;
   default_random_engine generate(num());

          // we create a uniform distribution object that will generate this int numbers btwn 0 and 12.
   uniform_int_distribution <> generate_From(0, 11);

          // a statement that prints the numbers
    int daysUntilExpiration = generate_From(generate);
         // switch statement for code implementation
    switch(daysUntilExpiration){

          case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%." << endl;
            break;
        case 2:cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
            cout << "Renew now and save 10%." << endl;
            break;
        case 3:cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
            cout << "Renew now and save 10%." << endl;
            break;
        case 4:cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
            cout << "Renew now and save 10%." << endl;
            break;
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
            cout << "Renew now and save 10%." << endl;
            break;
        case 6:cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        case 7:cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        case 8:cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        case 9:cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout<<" You have an active subscription." << endl;
    }

    return 0;
}
