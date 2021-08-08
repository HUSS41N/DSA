#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &nums, int start, int end, int target)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        if (mid >= start and nums[mid - 1] == target)
        {
            return mid - 1;
        }
        if (mid <= end and nums[mid + 1] == target)
        {
            return mid + 1;
        }
        if (nums[mid] > target)
        {
            end = mid - 2;
        }
        else
        {
            start = mid + 2;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {10, 3, 40, 20, 50, 80, 70};
    int start = 0;
    int end = nums.size() - 1;
    int target = 10;
    cout << binary_search(nums, start, end, target);
}
