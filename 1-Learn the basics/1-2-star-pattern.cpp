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