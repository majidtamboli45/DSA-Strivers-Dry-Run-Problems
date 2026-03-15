#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
  
    void Reversearray(vector<int>& arr , int left , int right)
    {
        while(left < right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }

    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;

        Reversearray(arr, 0, d-1);
        Reversearray(arr, d, n-1);
        Reversearray(arr, 0, n-1);
    }
};

int main()
{
    int n, d;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter rotation value: ";
    cin >> d;

    Solution obj;
    obj.rotateArr(arr, d);

    cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}