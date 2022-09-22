//
// Created by 18017 on 9/21/2022.
//

#ifndef PROJECT_1_FACTSAUTOMATON_H
#define PROJECT_1_FACTSAUTOMATON_H



#include "Automaton.h"

class FactsAutomaton : public Automaton
{
private:
    void S1(const std::string& input);

public:
    FactsAutomaton() : Automaton(TokenType::FACTS) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //PROJECT_1_FACTSAUTOMATON_H
