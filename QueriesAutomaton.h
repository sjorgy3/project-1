//
// Created by 18017 on 9/21/2022.
//

#ifndef PROJECT_1_QUERIESAUTOMATON_H
#define PROJECT_1_QUERIESAUTOMATON_H



#include "Automaton.h"

class QueriesAutomaton : public Automaton
{
private:
    void S1(const std::string& input);

public:
    QueriesAutomaton() : Automaton(TokenType::QUERIES) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //PROJECT_1_QUERIESAUTOMATON_H
