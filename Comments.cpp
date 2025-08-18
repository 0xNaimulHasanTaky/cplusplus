// Multi-line comments start with /* and end with */.
// Any text in between these symbols is treated as a comment only.
// The following syntax shows how to use a multi-line comment in C++:

/* This is a comment */

/* 
  C++ comments can also
  span multiple lines
*/

// Comments within Statements
// We can also comment-out specific statements within a code block{Blocks.cpp} inside a C++ program.
// This is done using both types of comments.


#include <iostream>

// The following example explains the usage of multi-line comments within statements:

int main() {
  std::cout << "This line" /*what is this*/ << " contains a comment" << std::endl;
  return 0;
}

// The following example explains the usage of single-line comments within statements:

int main() {
  std::cout << "This line"  // what is this
       << " contains a comment" << std::endl;
  return 0;
}

// Nesting Comments
// Within a /* and */ comment, // characters have no special meaning.
// Within a // comment, /* and */ have no special meaning.
// Thus, we can "nest" one kind of comment within the other kind.
// The following example explains the usage of comments within comments using nesting:

int main() {
/* Comment out printing of Hello World:

  cout << "Hello World"; // prints Hello World

*/
  std::cout << "New, Hello World!";
  return 0;
}