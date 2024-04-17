#include <iostream> // for outputting messages to the console
#include <random>   // for generating random numbers
using namespace std;

int main(){
           // from the random c++ std library, we create a random number generator
   random_device num;
   default_random_engine generate(num());

          // we create a uniform distribution object that will generate this int numbers btwn 0 and 12.
   uniform_int_distribution <> generate_From(0, 12);

          // a statement that prints the numbers
    int daysUntilExpiration = generate_From(generate);
           // using if-else statements to show the results
   if (daysUntilExpiration <= 0) {
        cout << "Your subscription has expired." << endl;
    } else if (daysUntilExpiration == 1) {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%." << endl;
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
        cout << "Renew now and save 10%." << endl;
    } else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}
