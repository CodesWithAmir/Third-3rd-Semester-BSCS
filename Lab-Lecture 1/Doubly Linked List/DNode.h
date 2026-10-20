using namespace std;
class DNode
{
    public:
        double data;
        DNode *next;
        DNode *prev;
        DNode(double d=0.0, DNode *n=0, DNode *p=0)
        {
            data=d;
            next=n;
            prev=p;
        }
};

    