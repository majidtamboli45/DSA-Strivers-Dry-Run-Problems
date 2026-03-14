#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        int n = arr.size();
        for(int i = 1; i < n; i++)
        {
            if(arr[i-1] > arr[i])
            {
                return false;
            }
        }
        return true;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution obj;

    if(obj.isSorted(arr))
        cout << "Array is Sorted";
    else
        cout << "Array is Not Sorted";

    return 0;
}
