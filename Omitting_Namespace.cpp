// We can explicitly use the std:: prefix for standard library objects and functions instead of using the "using namespace std".
// In this example we had directly used std::string and std::count instead of using using namespace std;
// Omitting namespaces in C++ can be beneficial in several scenarios. Here we will discuss some key reasons and scenarios −

// Large projects −
// Using "using namespace std" in large codebases may create issues like naming conflicts,
// especially when working with multiple libraries and overlapping.
// Library Development −
// While creating libraries it is important to avoid "polluting global namespace"
// (which occurs when too many identifiers are declared in global namespace such as function, classes, variables etc)
// to prevent conflicts with other libraries. Using std:: helps avoid conflicts with other libraries or
// user-defined names which might have the same identifiers.
// Improved Readability and Better Maintenance −
// std:: makes it easier to track dependencies and to understand the origins of various functions and objects,
// which is helpful during debugging and maintenance.
#include <iostream>

int main() {
   std::string greeting = "Hello!";
   std::cout << greeting << std::endl;
   return 0;
}