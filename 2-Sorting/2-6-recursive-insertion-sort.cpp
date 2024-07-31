#include <iostream>
#include <vector>
using namespace std;

void insertion_sort_recursive(vector<int> &arr, int n) {
    if (n <= 1) {
        return;
    }

    insertion_sort_recursive(arr, n - 1);

    int j = n - 2;

    while (j >= 0 && arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        j--;
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

    insertion_sort_recursive(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}