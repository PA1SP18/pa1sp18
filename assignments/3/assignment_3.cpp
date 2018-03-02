/*
 * Name        : assignment_3.cpp
 * Author      : Luke Sathrum / YOUR NAME HERE
 * Description : FILL IN
 */

#include <iostream>
using std::cout;
using std::endl;

/*
 * Class Distance - DO NOT ALTER THE CLASS DECLARATION
 * A class that converts distances. It will always internally store in meters. 
 */
class Distance {
 public:
  /*
   * Mutator
   * For now, just stub this function.
   */
  void set_meters(double meters);
  
  /*
   * Accessor
   * For now, stub the function and have it return 0.
   */
  double meters();
  
  /*
   * Converts the supplied distance to meters and internally stores it.
   * For now, just stub this function
   */
  void SetDistance(double length, char unit);
  
  /*
   * Returns the internal distance converted based on the unit specified. 
   * For now, stub the function and have it return 0.
   */
  double GetDistance(char unit);
  
  /*
   * Outputs a representation of the distance.
   * For now, just stub the function
   */
  void Output(char unit);
  
 private:
  double meters_;
};



// Program starts here
// DO NOT ALTER main
int main() {
  // Testing your Class
  Distance one;
  
  // Testing set_meters()
  one.set_meters(0);
  cout << "PASSED set_meters()\n";
  
  // Testing SetDistance()
  one.SetDistance(0, 'm');
  cout << "PASSED SetDistance()\n";
  
  // Testing Output
  one.Output('m');
  cout << "PASSED Output()\n";

  // Testing meters()
  if (one.meters() == 0)
    cout << "PASSED meters()\n";
  else
    cout << "FAILED meters()\n";

  // Testing meters()
  if (one.GetDistance('m') == 0)
    cout << "PASSED GetDistance()\n";
  else
    cout << "FAILED GetDistance()\n";

  // This ends our program
  return 0;
}

// CODE CLASS FUCTION DEFINITON STUBS HERE

