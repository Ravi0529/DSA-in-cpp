#include <iostream>
#include <vector>

// 1 ---> find largest from the array
int largest(vector<int> &arr, int n) {
    int largest = arr[0];

    for (int i = 0; i < n; i++) {
        if(largest < arr[i]) largest = arr[i];
    }
    return largest;
}

// 2 ---> find second largest from the array
int secondLargest(vector<int> &arr) {
    int largest = arr[0];
    for (int i = 0; i < arr.size(); i++) {
        if(largest <= arr[i]) largest = arr[i];
    }

    secondLargest = -1;
    for (int i = 0; i < arr.size(); i++) {
        if(secondLargest <= arr[i] && arr[i] != largest) secondLargest = arr[i];
    }

    return secondLargest;
}

// 3 ---> check if array is sorted or not
bool sorted(int vector<int> &arr) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > arr[i + 1]) return false;
    }
    return true;
}

// 4 ---> remove duplicates from an array
int removeDuplicates(vector<int> &arr) {
    int i = 0;
    for(int j = 1; j < arr.size(); j++) {
        if(arr[i] != arr[j]) {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    return i + 1;
}

int main() {
    largest(arr, n);
    secondLargest(arr);
    sorted(arr);
    removeDuplicates(arr);

    return 0;
}