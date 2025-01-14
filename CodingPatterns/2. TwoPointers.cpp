// Two Pointers

// The Two Pointers pattern involves using two pointers to iterate through an array or list, often used to find pairs or elements that meet specific criteria.
// Use this pattern when dealing with sorted arrays or lists where you need to find pairs that satisfy a specific condition.

// Find two numbers in a sorted array that add up to a target value.

// Example:
// Input: nums = [1, 2, 3, 4, 6], target = 6
// Output: [1, 3]

#include <iostream>
#include <vector>
using namespace std;

vector<int> findPair(vector<int> &nums, int target)
{
    int n = nums.size();
    int i = 0, j = n - 1;
    vector<int> ans;
    while (i < j)
    {
        int sum = nums[i] + nums[j];
        if (sum == target)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if (sum > target)
            j--;
        else
            i++;
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 6};
    // vector<int> nums;
    // nums.push_back(1);
    // nums.push_back(2);
    // nums.push_back(3);
    // nums.push_back(4);
    // nums.push_back(6);
    vector<int> ans = findPair(nums, 5);
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}