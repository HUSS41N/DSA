#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == n || j == 1 || j == i)
            {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}