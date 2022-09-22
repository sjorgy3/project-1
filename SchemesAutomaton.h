//
// Created by 18017 on 9/21/2022.
//

#ifndef PROJECT_1_SCHEMESAUTOMATON_H
#define PROJECT_1_SCHEMESAUTOMATON_H



#include "Automaton.h"

class SchemesAutomaton : public Automaton
{
private:
    void S1(const std::string& input);

public:
    SchemesAutomaton() : Automaton(TokenType::SCHEMES) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //PROJECT_1_SCHEMESAUTOMATON_H
