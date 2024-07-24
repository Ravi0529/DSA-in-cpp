#include <iostream>
using namespace std;

// *****
// *****
// *****
// *****
// *****
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// *
// **
// ***
// ****
// *****
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// 1
// 12
// 123
// 1234
// 12345
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << j + 1;
        }
        cout << endl;
    }
    return 0;
}

// 1
// 22
// 333
// 4444
// 55555
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << i + 1;
        }
        cout << endl;
    }
    return 0;
}

// *****
// ****
// ***
// **
// *
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// 12345
// 1234
// 123
// 12
// 1
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << j + 1;
        }
        cout << endl;
    }
    return 0;
}

//     *
//    ***
//   *****
//  *******
// *********
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// *********
//  *******
//   *****
//    ***
//     *
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < (2 * n) - (2 * i) - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < (2 * n) - (2 * i) - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
// 1
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
// 2
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if (i > n) stars = 2 * n - i;
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// 1
// 01
// 101
// 0101
// 10101
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            if ((i + j) % 2 == 0) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
    return 0;
}

// 1      1
// 12    21
// 123  321
// 12344321
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << j + 1;
        }
        for (int j = 0; j < (2 * n) - (2 * i) - 2; j++) {
            cout << " ";
        }
        for (int j = i; j >= 0; j--) {
            cout << j + 1;
        }
        cout << endl;
    }
    return 0;
}

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
int main() {
    int n;
    int number = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << number;
            number++;
        }
        cout << endl;
    }
    return 0;
}

// A
// AB
// ABC
// ABCD
// ABCDE
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << char('A' + j);
        }
        cout << endl;
    }
    return 0;
}

// ABCDE
// ABCD
// ABC
// AB
// A
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << char('A' + j);
        }
        cout << endl;
    }
    return 0;
}

// A
// BB
// CCC
// DDDD
// EEEEE
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << char('A' + i);
        }
        cout << endl;
    }
    return 0;
}

//    A
//   ABA
//  ABCBA
// ABCDCBA
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) {
            cout << char('A' + j);
        }
        for (int j = i - 1; j >= 0; j--) {
            cout << char('A' + j);
        }
        cout << endl;
    }
    return 0;
}

// E
// DE
// CDE
// BCDE
// ABCDE
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = i; j >= 0; j--) {
            cout << char('E' - j);
        }
        cout << endl;
    }
    return 0;
}

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        for (int j = 0; j < (2 * n) - (2 * i) - 2; j++) {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        for (int j = 0; j < (2 * n) - (2 * i) - 2; j++) {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << "*";
        }
        for (int j = 0; j < (2 * i) + 2; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// ****
// *  *
// *  *
// ****
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || j == n - 1 || i == n - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}

// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
int main() {
    int n, total = 2 * n - 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;

            cout << (n - min(min(top, bottom), min(left, right))) << " ";
        }
        cout << endl;
    }
    return 0;
}