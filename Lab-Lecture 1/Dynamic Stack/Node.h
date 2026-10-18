#ifndef DYNAMIC_STACK_NODE_H
#define DYNAMIC_STACK_NODE_H

class Node
{
public:
    double data;
    Node* next;

    Node(double value = 0, Node* nextNode = 0)
    {
        data = value;
        next = nextNode;
    }
};

#endif
