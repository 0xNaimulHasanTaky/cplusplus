// Header file inclusion section:
// This is the section where we include all required header files whose functions we are going to use in the program.
#include <iostream>

// Namespace section: This is the section where we use the namespace.
// The line using namespace std; tells the compiler to use the std namespace.
using namespace std;

// The main() section:
// In this section, we write our main code.
// The line int main() is the main function where program execution begins.
int main() {

    cout << "Hello World"; // prints Hello World

    // return 0; terminates main() function and causes it to return the value 0 to the calling process.
    // In C++11 and later standards,
    // if control reaches the end of the main() function without a return statement,
    // the compiler automatically adds return 0; as a default.
    // This is equivalent to successful execution of the program.
    // From the C++ standard (C++11 and later):
    // [basic.start.main]: If control reaches the end of main() without encountering a return statement,
    // the effect is as if return 0; were executed.

    return 0; // Optional
}