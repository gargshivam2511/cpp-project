#include <iostream>

using namespace std;

template <class m>
class sList
{
public:
    static const int STACK = 0;
    static const int QUEUE = 1;

    sList(int mode)
    {
        this->mode = mode;
    }
    bool pushTail(m value)
    {
        Node *node = getNode(value);
        if (head == nullptr)
        {
            head = node;
            return true;
        }
        Node *tmpNode = head;
        while (tmpNode->next != nullptr)
        {
            tmpNode = tmpNode->next;
        }
        tmpNode->next = node;
        return true;
    }
    bool pushHead(m value)
    {
        Node *node = getNode(value);
        node->next = head;
        head = node;
        return true;
    }
    bool push(m value)
    {
        if (mode == STACK)
            return pushHead(value);
        else
            return pushHead(value);
    }

    m pop()
    {
        if (mode == STACK)
            return popHead();
        else
            return popTail();
    }
    m popHead()
    {
        if (head == nullptr)
        {
            throw "null pointer";
        }
        Node *val = head;
        head = head->next;
        return val->value;
    }

    m popTail()
    {
        if (head == nullptr)
        {
            throw "null pointer";
        }
        Node *val = head;
        Node *valPrev = nullptr;
        while (val->next != nullptr)
        {
            valPrev = val;
            val = val->next;
        }
        if (valPrev == nullptr)
        {
            head = nullptr;
        }
        else
        {
            valPrev->next = nullptr;
        }

        return val->value;
    }

private:
    typedef struct node
    {
        m value;
        struct node *next;
    } Node;
    Node *getNode(m value)
    {
        Node *newNode = new Node();
        newNode->value = value;
        newNode->next = nullptr;
        return newNode;
    }

    Node *head = nullptr;
    int mode = 0;
};