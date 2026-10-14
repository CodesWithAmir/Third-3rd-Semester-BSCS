#include<iostream>
using namespace std;
template <class T>
class templateQueue
{
    private:
        T* queueArray;
        int queueSize;
        int front;
        int rear;
    public:
        templateQueue(int size)
        {
            queueArray = new T[size];
            queueSize = size;
            front = rear = -1;
        }
    ~templateQueue()
    {
        delete[] queueArray;
    }
    void ENQUEUE(T val);
    void DEQUEUE();
    bool isFull();
    bool isEmpty();
    void display();

};
template <class T>
bool templateQueue<T>::isEmpty()
{
    if(front == -1 && rear == -1)
        {return true;}
    else
        {return false;}
}
template <class T>
bool templateQueue<T>::isFull()
{
    if((this->front == 0 && this->rear == this->queueSize - 1) ||
       (this->front == this->rear + 1))
        {return true;}
    else
        {return false;}
}
template <class T>
void templateQueue<T>::ENQUEUE(T val)
{
    if (isFull())
    {
        cout<<"Queue is Full. Cnanot Enqueue value"<<endl;
    }
    else{
        if (front == -1)//first value.
        {
            front = 0;
        }
        rear=(rear+1)%queueSize;
        queueArray[rear]=val;
    }//else
}//enqueue fuction
template <class T>
void templateQueue<T>::DEQUEUE()
{
    if (isEmpty())
    {
        cout << "Queue is Empty. Cannot Dequeue value" << endl;
    }
    else
    {
        cout << queueArray[front] << " is dequeued from Queue\n";
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % queueSize;
        }
    }
}
template <class T>
void templateQueue<T>::display()
{
    if(isEmpty())
    {
        cout<<"Queue is Empty. Cannot Display value"<<endl;
    }
    else{
        cout<<"Queue values are: "<<endl;
        if(front <= rear)//simple queue
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<queueArray[i]<<"IT ";
            }
        }
        else//circular queue
        {
        for(int i=front;i<=queueSize-1;i++)
        {
            cout<<queueArray[i]<<" IT ";
        }
        for(int i=0;i<=rear;i++)
        {
            cout<<queueArray[i]<<" IT ";
        }
        }
        cout<<queueArray[rear]<<endl;
    }//else
}//display function