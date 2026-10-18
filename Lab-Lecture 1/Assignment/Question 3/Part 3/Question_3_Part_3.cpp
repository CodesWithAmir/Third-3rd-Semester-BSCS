#include <iostream>
#include "../Assignment_Stack_Header.h"
using namespace std;

int main()
{
    string infix = "A - B * C + D ^ E / F";

    cout << "Question 3 Part iii" << endl;
    cout << "Infix: " << infix << endl;
    cout << "Prefix: " << infixToPrefix(infix) << endl;

    return 0;
}
