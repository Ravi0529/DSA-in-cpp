#include <iostream>
#include <vector>
using namespace std;

// Bubble sort ---> Pushes the maximum number to the end
void bubble_sort(vector<int> &arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int didSwap = 0;

        for (int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }

        if (didSwap == 0) break; // best case (already sorted array)
    }
}

int main() {
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << endl;
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// the inner loop will run like this;
// [0 --> n)
// [1 --> n)
// [2 --> n)
// [3 --> n) and so on.
// time complexity ---> summation will be around n(n+1)/2
// time complexity ---> O(n^2) ---> for worst and avg case.
// time complexity ---> O(n) ---> for best case.