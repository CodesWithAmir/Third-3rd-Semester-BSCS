#include <iostream>
#include "../Assignment_Stack_Header.h"
using namespace std;

int main()
{
    string infix = "A / B * C - D + E / F / ( G + H )";

    cout << "Question 2 Part ii" << endl;
    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << infixToPostfix(infix) << endl;

    return 0;
}
