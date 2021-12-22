#include <iostream>

using namespace std;

template <class m>
class sList
{
public:
    bool push(m value)
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

    m pop()
    {
        if (head == nullptr)
        {
            exit(1);
        }
        Node *val = head;
        head = head->next;
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
};