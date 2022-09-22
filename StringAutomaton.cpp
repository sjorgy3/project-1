//
// Created by 18017 on 9/21/2022.
//

#include "StringAutomaton.h"
void StringAutomaton::S0(const std::string& input) {
    if (input[index] == ':') {
        inputRead = 1;
    }
    else {
        Serr();
    }
}