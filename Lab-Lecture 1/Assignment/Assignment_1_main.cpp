#include <iostream>
#include "Assignment_Stack_Header.h"
using namespace std;

void displayAnswers()
{
    cout << "\n========== ASSIGNMENT 1 ANSWERS ==========\n";

    cout << "\nQuestion 1: Operator Precedence and Associativity\n";
    cout << "------------------------------------------------\n";
    cout << "Operator       Precedence       Associativity\n";
    cout << "Parentheses    Highest          Left to right\n";
    cout << "^              3                Right to left\n";
    cout << "*, /, %        2                Left to right\n";
    cout << "+, -           1                Left to right\n";

    string expressions[4] =
    {
        "A + B * ( C - D ) / E",
        "A / B * C - D + E / F / ( G + H )",
        "A - B * C + D ^ E / F",
        "( ( A - ( B + C ) ) * D ) ^ ( E + F )"
    };

    cout << "\nQuestion 2: Infix to Postfix\n";
    cout << "-----------------------------\n";

    for (int i = 0; i < 4; i++)
    {
        cout << i + 1 << ". " << expressions[i] << endl;
        cout << "   Postfix: " << infixToPostfix(expressions[i]) << endl;
    }

    cout << "\nQuestion 3: Infix to Prefix\n";
    cout << "----------------------------\n";

    for (int i = 0; i < 4; i++)
    {
        cout << i + 1 << ". " << expressions[i] << endl;
        cout << "   Prefix: " << infixToPrefix(expressions[i]) << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== ASSIGNMENT 1 MENU ==========\n";
        cout << "1. Show complete assignment answers\n";
        cout << "2. Convert a custom infix expression to postfix\n";
        cout << "3. Convert a custom infix expression to prefix\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(1000, '\n');

        switch (choice)
        {
        case 1:
            displayAnswers();
            break;
        case 2:
        {
            string infix;
            cout << "Enter infix expression: ";
            getline(cin, infix);
            cout << "Postfix expression: " << infixToPostfix(infix) << endl;
            break;
        }
        case 3:
        {
            string infix;
            cout << "Enter infix expression: ";
            getline(cin, infix);
            cout << "Prefix expression: " << infixToPrefix(infix) << endl;
            break;
        }
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
