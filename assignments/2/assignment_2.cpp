/*
 * Name        : THE FILENAME
 * Author      : THE AUTHOR
 * Description : THE DESCRIPTION
 * Sources Used: LIST SOURCES USED
 */

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include "CinReader.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

// DO NOT ALTER
// If you want to clear the screen just type: ClearScreen();
void ClearScreen();

// Program execution starts here
int main() {
  // Set up our CinReader instance
  CinReader reader;

  // Create Variables
  char again;

  // Seed the Random Number Generator
  srand(time(0));

  // Loop until the user no longer wants to play
  // This is the GAME LOOP
  do {
    // PUT CODE HERE TO HANDLE THE GAME AND INDIVIDUAL ROUNDS

    // Prompt user to see if the want to continue to play
    cout << "Would you like to play again? (Y / N)\n";
    again = toupper(reader.readChar("YNyn"));
    cout << endl;
  } while (again == 'Y');

  // This ends our program
  return 0;
}

// DO NOT ALTER
void ClearScreen() {
#ifdef _WIN32
  std::system("cls");
#else
  // Assume POSIX
  std::system("clear");
#endif
}
