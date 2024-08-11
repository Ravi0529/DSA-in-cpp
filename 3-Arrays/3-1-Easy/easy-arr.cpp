#include <iostream>
#include <vector>
#include <set>
using namespace std;

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

    int secondLargest = -1;
    for (int i = 0; i < arr.size(); i++) {
        if(secondLargest <= arr[i] && arr[i] != largest) secondLargest = arr[i];
    }

    return secondLargest;
}

// 3 ---> check if array is sorted or not
bool sorted(vector<int> &arr) {
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
int leftRotate1(vector<int> &arr, int n) {
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

// 7 ---> moves zeros at the last
void moveZeros(vector<int> &nums) {
    int j = -1;
    for (int i = 0; i < nums.size(); i++) {
        if(nums[i] == 0) {
            j = i;
            break;
        }
    }

    if(j == -1) return;

    for (int i = j + 1; i < nums.size(); i++) {
        if(nums[i] != 0) {
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
        }
    }
}

// 8 ---> linear search
int searchInSorted(int arr[], int N, int K) {
    for (int i = 0; i < N; i++) {
        if(arr[i] == K) return 1;
    }
    return -1;
}

// 9 ---> find union of 2 arrays
vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
    set<int> st;
    for (int i = 0; i < n; i++) {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++) {
        st.insert(arr2[i]);
    }

    vector<int> temp;
    for (auto iter : st) {
        temp.push_back(iter);
    }
    return temp;
}

// 10 ---> Missing number from 1 to (n - 1) in an array
// 10.1 ---> using hashing
// time complexity --> O(n), space complexity --> O(n)
int missingNum(vector<int> &nums) {
    int n = nums.size();
    int hashing[n + 1];
    for (int i = 0; i < n; i++) {
        hashing[nums[i]]++;
    }

    for (int i = 1; i < n; i++) {
        if(hashing[i] == 0) return i;
    }
}

// 10.2 ---> using Sum method
// time complexity --> O(n), space complexity --> O(1)
int missingNum(vector<int> &nums) {
    int n = nums.size();
    int sum = n * (n + 1) / 2;

    int newSum = 0;
    for(int i = 0; i < n; i++) {
        newSum += nums[i];
    }
    return sum - newSum;
}

// 10.3 ---> using XOR method
// time complexity --> O(n), space complexity --> O(1) but it'll never exceed the given size of array
int missingNum(vector<int> &nums) {
    int xor1 = 0, xor2 = 0;
    int N = nums.size();
    for (int i = 0; i < N; i++) {
        xor2 = xor2 ^ nums[i];
        xor1 = xor1 ^ (i + 1);
    }

    // xor1 = xor1 ^ N;
    return xor1 ^ xor2;
}

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maximum = 0;
    int count = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 1) {
            count++;
            maximum = max(maximum, count);
        }
        else count = 0;
    }
    return maximum;
}

int singleNum(vector<int> &nums) {
    int xorr = 0;
    for (int i = 0; i < nums.size(); i++) {
        xorr = xorr ^ nums[i];
    }
    return xorr;
}

int main()
{
    largest(arr, n);
    secondLargest(arr);
    sorted(arr);
    removeDuplicates(arr);
    leftRotate1(arr, n);
    rotateD(nums);
    moveZeros(nums);
    searchInSorted(arr, N, K);
    findUnion(arr1, arr2, n, m);
    missingNum(nums);
    findMaxConsecutiveOnes(nums);
    singleNum(nums);

    return 0;
}