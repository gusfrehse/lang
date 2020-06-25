#include <iostream>
#include "parser.hpp"

int main(int argc, char** argv)
{
    auto sample = std::string("test");
    auto parser = Parsing::character('t');
    auto t = parser(sample);
    std::cout << "(" << std::get<0>(t) << ", " << std::get<1>(t) << ")"
	      << std::endl;
}
