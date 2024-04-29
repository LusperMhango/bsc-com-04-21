#include <iostream>
using namespace std;

int main() {
  // Declare variables
  int rows, cols;

  // Read the number of rows and columns from the user
  cout << "Enter the number of rows: ";
  cin >> rows;
  cout << "Enter the number of columns: ";
  cin >> cols;

  // Check if the number of rows and columns exceeds 3
  if (rows > 3 || cols > 3) {
    cerr << "Error: The number of rows and columns must not exceed 3." << endl;
    return 1;
  }

  // Dynamically allocate a 2D array of doubles
  double** array = new double*[rows];
  for (int i = 0; i < rows; ++i) {
    array[i] = new double[cols];
  }

  // Assign values to each element of the array using nested for loops
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      array[i][j] = i * cols + j + 1;
    }
  }

  // Output the value of each element of the array onto the console
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }

  // Free the dynamically allocated memory to prevent memory leaks
  for (int i = 0; i < rows; ++i) {
    delete[] array[i];
  }
  delete[] array;

  return 0;
}