// Preprocessor Directive or Header file inclusion section
// The #include is known as a pre-processor directive in C++.
// It is used to include header files with specific methods and elements.
// Multiple #include statements are used to apply different header files in the program.
// This is the section where we include all required header files whose functions we are going to use in the program.
// The iostream is the header file that defines functions and operations related to the input/output stream.
#include <iostream>

// Namespaces are used to differentiate code blocks with the same method names. In this program,
// the using namespace std; is used to set the namespace as standard for users to apply all standard methods in programs.
// The line using namespace std; tells the compiler to use the std namespace.

// The main() Function (int main(){...})
// The main() function is the default starting point of any C++ program. It is compulsory for any C++ program to have a main function.
// The program logics are written inside the main program. The main function body is enclosed inside parenthesis ({}).
int main() {
    std::cout << "Hello World";

    // return 0; terminates main() function and causes it to return the value 0 to the calling process.
    // In C++11 and later standards, [basic.start.main]:
    // If control reaches the end of the main() function without a return statement,
    // The compiler automatically adds return 0; as a default. The effect is as if return 0; were executed.
    return 0; // Optional
}

// to be cleaned later.