#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <cmath>

#include "base.hpp"
#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"

#include "factory.hpp"

Base* Factory::parse(char** input, int length) {

    std::vector<std::string> ops;
    std::string add = "";

    if (length == 1) {
        std::cout << "No Input" << std::endl;
        return new Op(nan(""));
    }

    std::string operation = std::string(input[1]);

    // std::cout << operation.size() << std::endl;
    for (int i = 0; i < operation.size(); i++) {
        if (operation.at(i) == ' ' || operation.at(i) == '\0') {
            ops.push_back(add);
            add = "";
        }
        else {
            add += operation.at(i);
            // std::cout << add << std::endl;
        }
    }
    ops.push_back(add);

    Base* sum = new Op(stod(ops.at(0)));

    // std::cout << "# of Ops: "<< ops.size() << std::endl;
    // std::cout << ops.at(ops.size() - 1) << std::endl;

    for (int i = 1; i + 1 < ops.size(); i++) {
        if (ops.at(i) == "+") {
            sum = new Add(sum, new Op(stod(ops.at(i + 1))));
        }
        else if (ops.at(i) == "-") {
            sum = new Sub(sum, new Op(stod(ops.at(i + 1))));
        }
        else if (ops.at(i) == "/") {
            sum = new Div(sum, new Op(stod(ops.at(i + 1))));
        }
        else if (ops.at(i) == "*") {
            sum = new Mult(sum, new Op(stod(ops.at(i + 1))));
        }
    }

    return sum;
}
