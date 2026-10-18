#include <iostream>
#include "../Assignment_Stack_Header.h"
using namespace std;

int main()
{
    string infix = "A + B * ( C - D ) / E";

    cout << "Question 3 Part i" << endl;
    cout << "Infix: " << infix << endl;
    cout << "Prefix: " << infixToPrefix(infix) << endl;

    return 0;
}
