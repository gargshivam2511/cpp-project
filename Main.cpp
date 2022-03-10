#include <iostream>
#include <vector>
#include "list.cpp"

using namespace std;

int getRadius(std::vector<int> houses, std::vector<int> lamps)
{
    // fill in
    // with solution
    int minRadius = 0;
    for (int i = 0; i < houses.size(); i++)
    {
        int minH = 1000000;
        for (int j = 0; j < lamps.size(); j++)
        {
            if (abs(lamps[j] - houses[i]) < minH)
                minH = abs(lamps[j] - houses[i]);
        }
        if (minH > minRadius)
        {
            minRadius = minH;
        }
    }
    return minRadius;
}

int main()
{
    sList<string> ls(sList<string>::QUEUE);
    ls.push("a");
    ls.push("b");
    ls.push("c");
    ls.push("d");
    cout << "Hello" << ls.pop() << ls.pop() << ls.pop() << ls.pop() << getRadius({1, 3, 4}, {0, 2});
}