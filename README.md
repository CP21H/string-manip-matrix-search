# string_manip.cpp
String Manipulation program which covers creation, manipulation, and parsing information from a string in C++. Use cases of built in functions of the <string> class are covered, namely `erase()` `replace()` `compare()` `swap()` and `find()`.

# matrix_string_search.cpp
In this program, a matrix of vectors of chars is made (in the sample test, a 5x4 matrix), paired with a function `find_in_matrix` which takes in a vector of vectors of type char, which is how we represent a matrix, as well as a string `word` which is the word we want to find within that matrix. The function, `find_in_matrix` first checks for the word horizontally in rows, then checks for the wrod vertically in columns.

# Alternating between Programs
In order to switch which .cpp file is ran, these are the steps to take:

Within the `CMakeLists.txt` file, at the very bottom, you should see a line that looks like this:
> `add_executable(everything_strings matrix_string_search.cpp)`

If you wanted to switch to the `string_manip.cpp` program, you could replace the above line to:
> `add_executable(everything_strings string_manip.cpp)`

The opposite can be done as well.
