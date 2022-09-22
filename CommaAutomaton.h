//
// Created by 18017 on 9/21/2022.
//

#ifndef PROJECT_1_COMMAAUTOMATON_H
#define PROJECT_1_COMMAAUTOMATON_H



class CommaAutomaton : public Automaton
{
private:
    void S1(const std::string& input);

public:
    CommaAutomaton() : Automaton(TokenType::COLON_DASH) {}  // Call the base constructor

    void S0(const std::string& input);
};

#endif //PROJECT_1_COMMAAUTOMATON_H
