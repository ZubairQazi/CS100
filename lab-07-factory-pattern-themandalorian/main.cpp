#include <iostream>

#include "base.hpp"
#include "op.hpp"
#include "factory.cpp"

int main(int argc, char** argv) {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
    Factory* f = new Factory();
    Base* ret = f->parse(argv, argc);

    std::cout << "Return String: " << ret->stringify() << std::endl;
    std::cout << "Return Evaluate: " << ret->evaluate() << std::endl;

    return 0;
}
