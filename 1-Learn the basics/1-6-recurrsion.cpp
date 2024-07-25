#include <iostream>
using namespace std;
// Recurrsion --> function calling itself

// 1 ---> printing name N times 
int func(int i, int n) {
    if(i > n) return 0;

    cout << "Ravi" << endl;
    func(i+1, n);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    func(1, n);
    return 0;
}

// 2 ---> printing 1 to N
int num1(int n , int i = 1) {
    if (n < i) {
        return 0;
    }
    cout << i << endl;
    num1(n , i+1);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    num1(n);
    return 0 ;
}

// 3 ---> printing N to 1
int num(int n) {
    if (n == 0) {
        return 0;
    }
    cout << n << endl;
    num(n-1);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    num(n);
    return 0 ;
}

// 4 ---> sum of first n numbers
int sum(int num) {
    if (num == 0 ) return 0 ;
    return num + sum(num-1);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout<< sum(n);
}

// 5 ---> factorial
int fact(int num) {
    if (num == 0 || num == 1) return 1;
    return num * fact(num-1);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout<<fact(n);
}

// 6 ---> fibonacci series
int fibo(int num) {
    if(num == 1) return 0;
    if(num == 2) return 1;
    return fibo(num-1) + fibo(num-2);
}

int main() {
    int n;
    cout << ">>";
    cin >> n;
    cout << fibo(n);
    return 0;
}

// 7 ---> reverse an array
#include <algorithm>
int rev( int arr[], int n ,int l = 0 ) {
    if(l >= n/2) return 0;
    swap(arr[l], arr[n-l-1]);
    rev(arr, n, l+1);
}

int main() {
    int n;
    cout << ">> ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
    cout << "enter element: ";
    cin >> arr[i];
    } 
    rev(arr, n);

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}

// 8.1 ---> check if string is palindrome or not
#include <algorithm>
#include <string>

string rev(string n, int l = 0) {
    if (l >= n.length() / 2) return n;
    swap(n[l], n[n.length() - l - 1]);
    return rev(n, l + 1);
}

int main() {
    string n, revN;
    cout << ">> ";
    cin >> n;
    
    revN = rev(n);
    // cout << revN << endl;
    
    if (n == revN) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    
    return 0;
}

// 8.2 ---> check if string is palindrome or not
#include <string>

bool isPalindrome(const string& str, int left, int right) {
    if (left >= right) return true;
    if (str[left] != str[right]) return false;
    isPalindrome(str, left + 1, right - 1);
}

int main() {
    string n;
    cout << ">> ";
    cin >> n;

    if (isPalindrome(n, 0, n.length() - 1)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}