#include <iostream>
#include <string>

int main() {
    // SAMPLE STRING: This is a string, and it is being made. Hello!

    // CREATION OF A STRING USING <STRING>
    std::string sample_string = "";
    std::cout << "String Content: " << std::endl;

    // GETTING A LINE FROM USER INPUT TO INITIALIZE STRING
    std::getline(std::cin, sample_string);
    std::cout << sample_string << std::endl;

    // INSERTING INTO A STRING
    sample_string.insert(2, " ");
    std::cout << sample_string << std::endl;

    // APPENDING TO A STRING -- ADDS AN ENTIRE STRING
    sample_string.append(" gummy candy");
    std::cout << sample_string << std::endl;

    // USING PUSH_BACK ON A STRING -- ADDS ONLY ONE CHARACTER
    sample_string.push_back('c');
    std::cout << sample_string << std::endl;

    // ERASING CHARACTERS USING ERASE() -- REMOVES ONLY ONE CHARACTER
    sample_string.erase(sample_string.length() - 1);
    std::cout << sample_string << std::endl;

    // REPLACING CHARACTERS USING REPLACE() -- REPLACING FROM POS1 TO POS2 WITH A STRING
    sample_string.replace(0, 2, "Sith");
    std::cout << sample_string << std::endl;

    // USING COMPARE() TO COMPARE THE CONTENTS OF TWO STRINGS IF THEY ARE THE SAME
    std::string str = "Test string.";
    std::string str1 = "Test string.";
    if (str.compare(str1) == 0) {
        std::cout << "str and str1 have the same content" << std::endl;
    }

    // CONCATENATING TWO STRINGS TOGETHER USING +
    std::string str_full = str + str1;
    std::cout << str_full << std::endl;

    // SWAPPING THE CONTENTS OF TWO STRINGS USING SWAP()
    std::string str_a = "Second";
    std::string str_b = "First";
    str_a.swap(str_b);
    std::cout << str_a << " and " << str_b << std::endl;

    // SEARCHING FOR A SUBSTRING WITHIN A STRING USING FIND()
    // -> We have to create a variable called 'found' which uses find() to search for a substring
    // -> within a string
    std::string str3 = "and";
    std::size_t found = sample_string.find(str3);
    if (found != std::string::npos) {
        std::cout << "first 'and' found at: " << found << std::endl;
    }


    return 0;
}
