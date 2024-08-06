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

// 5 ---> rotating array to left (1st index)
int leftRotate1(vector<int> &arr) {
    int temp = arr[0];

    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    return arr;
}

// 6 ---> right rotation of the array by D places
void rotateD(vector<int> &nums, int k) {
    int n = nums.size();
    k = k % n;

    vector<int> temp(n);
    for (int i = 0; i < k; ++i) {
        temp[i] = nums[n - k + i];
    }
    for (int i = k; i < n; ++i) {
        temp[i] = nums[i - k];
    }
    for (int i = 0; i < n; ++i) {
        nums[i] = temp[i];
    }
}

int main() {
    largest(arr, n);
    secondLargest(arr);
    sorted(arr);
    removeDuplicates(arr);
    leftRotate1(arr);
    rotateD(arr);

    return 0;
}