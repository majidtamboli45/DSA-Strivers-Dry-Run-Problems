#include <iostream>
using namespace std;

class Solution {
public:
    int largest(int arr[], int n) {
        int largest = arr[0];

        for(int i = 1; i < n; i++) {
            if(arr[i] > largest) {
                largest = arr[i];
            }
        }

        return largest;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    int result = obj.largest(arr, n);

    cout << "Largest element: " << result;

    return 0;
}
