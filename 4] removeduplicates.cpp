#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> removeDuplicates(vector<int>& arr) {
        vector<int> ans;

        for(int i = 0; i < arr.size(); i++) {
            if(i == 0 || arr[i] != arr[i-1]) {
                ans.push_back(arr[i]);
            }
        }

        return ans;
    }
};

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    vector<int> result = obj.removeDuplicates(arr);

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
