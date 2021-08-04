#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 0};
    int start = 0;
    int end = nums.size() - 1;
    while (start < end)
    {
        if (nums[start] == 0)
        {
            nums.push_back(0);
            nums.erase(nums.begin() + start);
            end--;
        }
        else
        {
            start++;
        }
    }
    for (auto num : nums)
    {
        cout << num << " ";
    }
}
