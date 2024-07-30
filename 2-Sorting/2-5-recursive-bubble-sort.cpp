#include <iostream>
#include <vector>
using namespace std;

void bubble_sort_recursive(vector<int> &arr, int n) {
    // Base case
    if (n == 1) {
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubble_sort_recursive(arr, n - 1);
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

    bubble_sort_recursive(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
