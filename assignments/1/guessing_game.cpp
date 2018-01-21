/*
 * Name        : THE FILENAME
 * Author      : THE AUTHOR
 * Description : THE DESCRIPTION
 * Sources Used: LIST SOURCES USED
 */

// Library Includes
#include <iostream>
// To help generate a random number.
#include <cstdlib>
#include <ctime>

// Alias common commands
using std::cout;
using std::cin;
using std::endl;
using std::srand;
using std::time;
using std::rand;

// Program execution starts here
int main() {
  // Setup the random number generator
  srand(time(0));

  // Use the following code to generate a random number
  // NOTE: You will need to store this number in a variable
  // rand() % 10;

  // Use the following code to compare the numbers
  if (users_guess == computers_guess) {
    // Guess was Correct!
  } else {
    // Guess was Incorrect!
  }

  // This ends the program
  return 0;
}
