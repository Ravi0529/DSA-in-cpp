#include <iostream>
#include <vector>
using namespace std;

// Insertion sort ---> checks and swap the minimum in front
void insertion_sort(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;

            j--;
        }
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

    insertion_sort(arr, n);

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