#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int linearSearch(vector<int>&nums,int target)
{
    int n = nums.size();
    for(int i = 0 ; i < n ; i++)
    {
        if(nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int>nums = {1,4,5,6,9,7,11};
    int target = 11;
    cout << linearSearch(nums,target) << endl;
    return 0;
}
