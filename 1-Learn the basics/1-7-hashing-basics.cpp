#include <bits/stdc++.h>
using namespace std;

// Why Hashing?
// Eg: how many times a number appears in an array (counting frequencies of array elements)
// here, time complexity without using hashing is O(n) for each element in an array
// if we use hash, the time and space complexity both are reduced as well as maintained

// Hashing is something like ---> prestoring and fetching


// 1 ---> Counting frequencies of array elements (number hashing)
int main() {
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << " element: " << endl;
        cin >> arr[i];
    }

    // value inside it varies as per the requirement (13)
    int hashing[13] = {0}; // if, at max we want to know the frequency of 12
    for (int i = 0; i < n; i++) {
        cout << hashing[arr[i]]++; // counts the frequency of each element and stores
    }

    int q;
    cout << "Frequency of how many numbers you want to find out? " << endl;
    cin >> q;
    while(q--) {
        int number;
        cout << "Enter number you want to know the frequency of: " << endl;
        cin >> number;

        cout << "Frequency is: " << hashing[number] << endl;
    }

    return 0;
}
// here, highest number in the frequency check list is 12, so we have assigned arr[12 + 1].
// for int, you can declare maximum value in an array is 10^6 in main function and 10^7 in global declaration section.
// In boolean array, in main function you can declare upto 10^7 and globally you can declare upto 10^8.


// 2 ---> Counting frequencies of array elements (character hashing)
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    // int hashing[26] = {0};
    int hashing[256] = {0}; // a to z, A to Z ASCII value are upto 256
    for (int i = 0; i < s.size(); i++) {
        // hashing[s[i] - 'a']++; // s[i] - 'a' is for getting the ascii value as the index
        hashing[s[i]]++; // stores according to ascii value in the hashing array
    }

    int q;
    cout << "Frequency of how many characters you want to find out? ";
    cin >> q;
    while(q--) {
        char c;
        cout << "Enter character you want to know the frequency of: " << endl;
        cin >> c;

        // cout << hashing[c - 'a'] << endl; // for lower characters
        cout << "Frequency is: " << hashing[c] << endl;
    }

    return 0;
}


// now if we need to hash values mores than 10^6 or 7 then?
// we will use map and unordered map for the same
// syntax: map<int, int> ---> (key, value)
// map ---> stores the sorted array by default
// unordered map ---> stores the array in a random manner, not sorted

// in array hashing you have to declare a 13 size array if the input is 1,2,3 and 12, more space stored which is unnecessary
// map won't store unnecessary space, only the number or character present inside the array, it'll store in it.
// space complexity reduced


// 3 ---> Counting frequencies of array elements (number hashing using map unordered map)
int main() {
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << " element: " << endl;
        cin >> arr[i];
    }

    // pre-computation
    unordered_map<int, int> mpp;
    // map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    // for understanding that map stores in sorted manner and unordered map does not
    for (auto iter : mpp) {
        cout << iter.first << "--->" << iter.second << endl;
    }

    int q;
    cout << "Frequency of how many numbers you want to find out? " << endl;
    cin >> q;
    while(q--) {
        int number;
        cout << "Enter number you want to know the frequency of: " << endl;
        cin >> number;

        // fetch
        cout << "Frequency is: " << mpp[number] << endl;
    }

    return 0;
}

// 4 ---> Counting frequencies of array elements (character hashing using map and unordered map)
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    unordered_map<int, int> mpp;
    // map<int, int> mpp;
    for (int i = 0; i < s.size(); i++) {
        mpp[s[i]]++;
    }

    // for understanding that map stores in sorted manner and unordered map does not
    for (auto iter : mpp) {
        cout << iter.first << "--->" << iter.second << endl;
    }

    int q;
    cout << "Frequency of how many characters you want to find out? ";
    cin >> q;
    while(q--) {
        char c;
        cout << "Enter character you want to know the frequency of: " << endl;
        cin >> c;

        // cout << hashing[c - 'a'] << endl; // for lower characters
        cout << "Frequency is: " << mpp[c] << endl;
    }

    return 0;
}

// Time complexity:
// for storing and fetching in map ---> worst, avg, best: O(log10n)
// for storing and fetching in unordered map ---> worst: O(n) rarest case, avg, best: O(1)

// Finding highest/lowest frequency element
// 1 (number)
int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << " in the array" << endl;
        cin >> arr[i];

        mpp[arr[i]]++;
    }

    // Variables to store the highest and lowest frequency elements
    int maxFreq = INT_MIN, minFreq = INT_MAX; // include climits for this
    int maxFreqElement, minFreqElement;

    for (auto iter : mpp) {
        if(iter.second > maxFreq) {
            maxFreq = iter.second;
            maxFreqElement = iter.first;
        }
        if(iter.second < minFreq) {
            minFreq = iter.second;
            minFreqElement = iter.first;
        }
    }

    cout << "Highest frequency element is " << maxFreqElement << "(Frequency ---> " << maxFreq << ")" << endl;
    cout << "Lowest frequency element is " << minFreqElement << "(Frequency ---> " << minFreq << ")" << endl;

    return 0;
}

// 2 (character)
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    unordered_map<char, int> mpp;

    for (int i = 0; i < s.size(); i++) {
        mpp[s[i]]++;
    }

    // Variables to store the highest and lowest frequency elements
    int maxFreq = INT_MIN, minFreq = INT_MAX; // include climits for this
    int maxFreqElement, minFreqElement;

    for (auto iter : mpp) {
        if(iter.second > maxFreq) {
            maxFreq = iter.second;
            maxFreqElement = iter.first;
        }
        if(iter.second < minFreq) {
            minFreq = iter.second;
            minFreqElement = iter.first;
        }
    }

    cout << "Highest frequency element is " << char(maxFreqElement) << "(Frequency ---> " << maxFreq << ")" << endl;
    cout << "Lowest frequency element is " << char(minFreqElement) << "(Frequency ---> " << minFreq << ")" << endl;

    return 0;
}