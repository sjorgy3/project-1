#include "Lexer.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


int main(int argc, char** argv) {

    ifstream infile(argv[1]);

    string text;

    if (infile.is_open()){
        stringstream str;
        str << infile.rdbuf();
        text = str.str();

        cout << text << endl;



    }
    infile.close();



    Lexer* lexer = new Lexer();


    lexer->Run(text);





    // TODO

    delete lexer;

    return 0;
}