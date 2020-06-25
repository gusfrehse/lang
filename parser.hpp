#include <functional>
#include <string>
#include <tuple>
#include <iostream>

namespace Parsing
{
    // A parser is function that recieves a string an returns a tuple which
    // contains both a structure generated from the part of the string which was
    // parsed and the remaining string which was not parsed.
    using parser = std::function<std::tuple<std::string,
					    std::string>(std::string)>;

    // Generates a parser that parses a char
    auto character(char c) -> parser
    {
	return [=](std::string src){
		   if (src[0] == c)
		   {
		       return std::make_tuple(std::string(1, c), src.substr(1));
		   }
		   else
		   {
		       return std::make_tuple(std::string(""), src);
		   }
	       };
    }
}
