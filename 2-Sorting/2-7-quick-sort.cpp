#include <iostream>
#include <vector>
using namespace std;

// Divide and Conqueror
// ascending order
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];

    int i = low;
    int j = high;

    while(i < j) {
        while(arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while(arr[j] > pivot && j >= low + 1) {
            j--;
        }

        if(i < j) swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

int quick_sort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);

        quick_sort(arr, low, pIndex - 1);
        quick_sort(arr, pIndex + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements in an array: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << endl;
        cin >> arr[i];
    }

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// Divide and Conqueror
// decending order
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];

    int i = low;
    int j = high;

    while(i < j) {
        while(arr[i] >= pivot && i <= high - 1) {
            i++;
        }
        while(arr[j] < pivot && j >= low + 1) {
            j--;
        }

        if(i < j) swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

int quick_sort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);

        quick_sort(arr, low, pIndex - 1);
        quick_sort(arr, pIndex + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements in an array: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << endl;
        cin >> arr[i];
    }

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// Time complexity ---> O(nlogn)
// Space complexity ---> O(1), better than merge sort.