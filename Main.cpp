#include <iostream>
#include "list.cpp"
using namespace std;

int main()
{
    sList<string> ls(sList<string>::QUEUE);
    ls.push("a");
    ls.push("b");
    ls.push("c");
    ls.push("d");
    cout << "Hello" << ls.pop() << ls.pop() << ls.pop() << ls.pop() << ls.pop();
}