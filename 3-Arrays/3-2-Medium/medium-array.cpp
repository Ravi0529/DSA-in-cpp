#include <iostream>
#include <vector>
#include <map>
using namespace std;

// 1 ---> 2 sum, brute force and better soln
vector<int> twoSum(vector<int>& nums, int target) {
   for (int i = 0; i < nums.size(); i++) {
     for (int j = i + 1; j < nums.size(); j++) {
        if(nums[i] + nums[j] == target) cout << i << "," << j << endl;
     }
   }    
}

// 1 ---> 2 sum, optimal soln
vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> mpp;
    for(int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int moreNeeded = target - num;
        if(mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

// 2 ---> sort array in 0's, 1's and 2's, brute force soln
// merge sort

// 2 ---> sort array in 0's, 1's and 2's, better soln
void sortColors(vector<int> &nums) {
    int count0 = 0, count1 = 0, count2 = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 0) count0++;
        else if(nums[i] == 1) count1++;
        else count2++;
    }

    for(int i = 0; i < count0; i++) nums[i] = 0;
    for(int i = count0; i < count0 + count1; i++) nums[i] = 1;
    for(int i = count0 + count1; i < nums.size(); i++) nums[i] = 0;
}

// 2 ---> sort array in 0's, 1's and 2's, optimal soln (Dutch National flag Algorithm)
void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;

    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1) {
            swap(nums[low], nums[mid]);
            mid++;
        }
        else {
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}

// 3 ---> majority elements, brute force soln
int majorityElement(vector<int>& nums) {
    for(int i = 0; i < nums.size(); i++) {
        int count = 0;

        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] == nums[i]) count++;
        }
        if(count > (nums.size() / 2)) return nums[i];
    }
}

// 3 ---> majority elements, better soln
int majorityElement(vector<int>& nums) {
    map<int, int> mpp;
    // O(NlogN)
    for(int i = 0; i < nums.size(); i++) {
        mpp[nums[i]]++;
    }
    // O(N)
    for(auto iter : mpp) {
        if(iter.second < (nums.size() / 2)) return iter.first;
    }
    return -1;
}

// 3 ---> majority elements, optimal soln (Moore's Voting Algorithm)
int majorityElement(vector<int>& nums) {
    int count = 0, el;
    for(int i = 0; i < nums.size(); i++) {
        if(count == 0) {
            count == 1;
            el = nums[i];
        }
        else if(nums[i] == el) count++;
        else count--;
    }

    int count1 = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == el) count1++;
    }
    if(count1 > (nums.size() / 2)) return el;
    return -1;
}

int main() {
    // 1 
    vector<int> arr = {1,2,3,4,5};
    int target = 3;
    twoSum(arr, target);

    // 2
    vector<int> arr1 = {1,2,0,0,0,2,2,1,2,0,1};
    sortColors(arr1);

    // 3
    vector<int> arr3 = {1,1,1,2,4,6,2,1,1,1};
    majorityElement(arr3);

    return 0;
}