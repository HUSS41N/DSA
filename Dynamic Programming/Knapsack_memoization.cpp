#include <bits/stdc++.h>
using namespace std;

const int D = 1000;

int t[D][D]; // DP matrix

int knapsack(int weight[], int value[], int W, int n)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (t[n][W] != -1)
    {
        return t[n][W];
    }
    else
    {

        if (weight[n - 1] <= W)
        {
            t[n][W] = max(value[n - 1] + knapsack(weight, value, W - weight[n - 1], n - 1),
                          knapsack(weight, value, W, n - 1));
        }

        if (weight[n - 1] > W)
        {
            t[n][W] = knapsack(weight, value, W, n - 1);
        }
        return t[n][W];
    }
}

int main()
{
    int weight[] = {10, 20, 30};
    int value[] = {60, 100, 120};
    int n = 3;
    int W = 50; // total capacity
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            t[i][j] = -1;
        }
    }
    cout << knapsack(weight, value, W, n);
}
