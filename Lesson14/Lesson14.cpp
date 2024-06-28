#include <iostream>

int main()
{
    std::string instr{"Hello, world!"};
    size_t len = instr.length();

    std::cout << instr << ", length: " << len << ", first char: '" << instr[0] << "', last char: '" << instr[len - 1] << "'\n";
}

