// C++ also supports the object-oriented programming approach along with the procedural programming approach.
// This example demonstrates the C++ program based on an object-oriented approach.

// Header file inclusion section:
// This is the section where we include all required header files whose functions we are going to use in the program.
#include <iostream>

// Namespace section: This is the section where we use the namespace.
// The line using namespace std; tells the compiler to use the std namespace.
using namespace std;


// Class Declaration
// A class is a template for an object, or we can say a class is a factory to produce an object.
// It is a kind of custom data type, where you construct a structure for an object.
// A class declaration has the following parts:
// Access modifiers:
// C++ supports three types of access modifiers: private, public, and protected.
// Accessibilities of the data members and member functions are defined by the access modifiers.
// Data members and member functions:
// The variables used in the class declaration are known as data members, and the member functions are those functions that work on the data members.

class Numbers {
 private:
  int a;
  int b;

 public:
  // Function to set values
  void setValues(int x, int y) {
    a = x;
    b = y;
  }

  // Function to add these numbers
  double addition() { return a + b; }

  // Function to display values
  void display() { cout << "a: " << a << ", b: " << b << endl; }
};

int main() {
  // Create an object of Numbers class
  Numbers num;

  // Set values
  num.setValues(10, 20);

  // Display the values
  num.display();

  // Find the addition
  int sum = num.addition();
  cout << "Sum of numbers: " << sum << endl;

  return 0;
}

// As per the above example, the following part of the declaration of a class –
// class Numbers {
//  private:
//   int a;
//   int b;

//  public:
//   // Function to set values
//   void setValues(int x, int y) {
//     a = x;
//     b = y;
//   }

//   // Function to add these numbers
//   double addition() { return a + b; }

//   // Function to display values
//   void display() { cout << "a: " << a << ", b: " << b << endl; }
// };

// The following are the data members which are defined under the private access modifier i.e.,
// these data members can be used by the member functions within the class –

// private:
//   int a;
//   int b;

// The following are the member functions used in the class –

// void setValues(int x, int y);
// double addition();
// void display();

// In the above example, the following statement is the object creation statement −

// Numbers num;