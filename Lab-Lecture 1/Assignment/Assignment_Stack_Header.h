
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class ExpressionStack
{
private:
    char* stackArray;
    int stackSize;
    int top;

public:
    ExpressionStack(int size = 100)
    {
        stackArray = new char[size];
        stackSize = size;
        top = -1;
    }

    ~ExpressionStack()
    {
        delete[] stackArray;
    }

    bool isEmpty();
    bool isFull();
    void Push(char value);
    char Pop();
    char Top();
};

bool ExpressionStack::isEmpty()
{
    return top == -1;
}

bool ExpressionStack::isFull()
{
    return top == stackSize - 1;
}

void ExpressionStack::Push(char value)
{
    if (!isFull())
    {
        top++;
        stackArray[top] = value;
    }
}

char ExpressionStack::Pop()
{
    if (isEmpty())
    {
        return '\0';
    }

    char value = stackArray[top];
    top--;
    return value;
}

char ExpressionStack::Top()
{
    if (isEmpty())
    {
        return '\0';
    }

    return stackArray[top];
}

bool isOperator(char value)
{
    return value == '+' || value == '-' || value == '*' ||
           value == '/' || value == '%' || value == '^';
}

int precedence(char value)
{
    if (value == '^')
    {
        return 3;
    }

    if (value == '*' || value == '/' || value == '%')
    {
        return 2;
    }

    if (value == '+' || value == '-')
    {
        return 1;
    }

    return 0;
}

bool isRightAssociative(char value)
{
    return value == '^';
}

string infixToPostfix(string infix, bool reverseForPrefix = false)
{
    ExpressionStack operators(static_cast<int>(infix.length()) + 1);
    string postfix = "";

    for (int i = 0; i < static_cast<int>(infix.length()); i++)
    {
        char current = infix[i];

        if (current == ' ')
        {
            continue;
        }

        if (isalnum(current))
        {
            postfix += current;
        }
        else if (current == '(')
        {
            operators.Push(current);
        }
        else if (current == ')')
        {
            while (!operators.isEmpty() && operators.Top() != '(')
            {
                postfix += operators.Pop();
            }

            if (!operators.isEmpty())
            {
                operators.Pop();
            }
        }
        else if (isOperator(current))
        {
            while (!operators.isEmpty() &&
                   operators.Top() != '(' &&
                   (precedence(operators.Top()) > precedence(current) ||
                    (precedence(operators.Top()) == precedence(current) &&
                     (reverseForPrefix
                          ? isRightAssociative(current)
                          : !isRightAssociative(current)))))
            {
                postfix += operators.Pop();
            }

            operators.Push(current);
        }
    }

    while (!operators.isEmpty())
    {
        postfix += operators.Pop();
    }

    return postfix;
}

string reverseAndSwapBrackets(string infix)
{
    string reversed = "";

    for (int i = static_cast<int>(infix.length()) - 1; i >= 0; i--)
    {
        if (infix[i] == '(')
        {
            reversed += ')';
        }
        else if (infix[i] == ')')
        {
            reversed += '(';
        }
        else
        {
            reversed += infix[i];
        }
    }

    return reversed;
}

string infixToPrefix(string infix)
{
    string reversedInfix = reverseAndSwapBrackets(infix);
    string reversedPostfix = infixToPostfix(reversedInfix, true);
    string prefix = "";

    for (int i = static_cast<int>(reversedPostfix.length()) - 1; i >= 0; i--)
    {
        prefix += reversedPostfix[i];
    }

    return prefix;
}
