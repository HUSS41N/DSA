#include <bits/stdc++.h>
using namespace std;

void printStack(stack<int> s)
{
    if (s.empty())
    {
        return;
    }
    int top = s.top();
    s.pop();
    printStack(s);
    cout << top << " ";
    s.push(top);
}
void deleteMiddleElementStack(stack<int> &s, int size)
{
    static int counter = 0;
    if (s.empty())
    {
        return;
    }
    int top = s.top();
    s.pop();
    counter++;
    if (counter == (size / 2) + 1)
    {
        cout << top << " ";
    }
    else
    {
        deleteMiddleElementStack(s, size);
        s.push(top);
    }
}

int main()
{
    stack<int> s;
    s.push(4);
    s.push(2);
    s.push(5);
    s.push(87);
    s.push(7);
    printStack(s);
    int size = s.size();
    cout<<endl;
    deleteMiddleElementStack(s, size);
    cout<<endl;
    printStack(s);
}
