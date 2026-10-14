#include<iostream>
using namespace std;
class CharStack{
	private :
		char* ArrayStack;
		int StackSize;
		int top;
	
	public :
	CharStack(int size )
	{
	ArrayStack = new char[size]; 
        StackSize = size;
        top = -1;
	}


	~CharStack()
    {
        delete [] ArrayStack;
    }

    void PUSH(char vol);
    void POP();
    void Display();
    char top();  //today
    bool isFull();
    bool isEmpty(); 
    bool isOperator(char op);  //today
    int precedence(char op);   //today
    string infixtopostfix(string infix); ///today
};

bool CharStack::isFull()
{
    return (top == StackSize - 1);
}

bool CharStack::isEmpty()
{
    return (top == -1);
}

void CharStack::PUSH(char vol)
{
    if (isFull())
    {
        cout << "[OVERFLOW] Stack is full! Cannot push " << vol << endl;
    }
    else 
    {
        top++;
        ArrayStack[top] = vol;
        cout << "[PUSH] " << vol << " added to stack." << endl;
    }
}
void CharStack::POP()
{
    if (isEmpty())
    {
        cout << "[UNDERFLOW] Stack is empty! Cannot pop element." << endl; 
    }
    else
    {
        cout << "[POP] " << ArrayStack[top] << " popped from stack." << endl;
        top--; 
    }
}
void CharStack :: Display()
{

    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
        return;
    }
}
bool charStack::isOperator(char op)
{
	return ( op=="+" || op=="-" || op=="*" || op=="/" || op=="^")
	
}
int charStack::precedence(char op)
{
	if(op=="+" || op=="-") return 1;
	if(op=="*" || op=="/") return 2;
	if(op=="^") return 3;
}
string charStack::infixtopostfix(stringinfix)
{
	string position ;
	for(int i=0;i<infix.length();i++)
	{
		char c=infix[i];
		if (c==' ')continue;
		if(isalnum(c)) //Rule 1
		{
			finalString+=c;
		}
		
		
		else if(isOperator(c))
		{
			if(!isEmpty()&&precedance(top())>=precedance(c)0
			{
				finalstring+=top();
				pop();
			}
			push(c);
		}
		else if (c=='(')
		{
			push(c);)
		}
		{
			while(!isEmpty()&&top()!='(')
			{
				finalstring+=TOP();
				POP();
			}
		}
	}
}