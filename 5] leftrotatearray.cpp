#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n = nums.size();
        int temp = nums[0];

        for(int i = 1; i < n; i++) {
            nums[i - 1] = nums[i];
        }

        nums[n - 1] = temp;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    obj.rotateArrayByOne(nums);

    cout << "Array after rotating by one position: ";
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
