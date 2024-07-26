// #include <bits/stdc++.h> // for all libraries in one
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// basics
int main() {
    // std::cout << "Hello World\n";
    cout << "Hello World\n";
    // << - this is known as the INSERTION operator
    // >> - this is known as the EXTRACTION operator

    float num = 5.43;
    // cout << num << "\n";
    cout << num << endl;

    int a = 10, b = 15;
    cout << "The value of a is " <<a<< ". The value of b is " <<b;
    return 0;
}
// user defined functions in c++ :- struct, union, enum

// input and output
int main() {
    int num1, num2;
    cout << "Enter the value of number 1: ";
    cin >> num1;

    cout << "Enter the value of number 2: ";
    cin >> num2;

    cout << "Sum: " << num1 + num2;
    return 0;
}

// local and global variables
int count = 50;
int main() {
    int count = 25;
    cout << count << endl; // local variable
    cout << ::count; // global variable (::)
    return 0;
}

// referance variables
int main() { // not a pointer, different variables but same values.
    int number = 10;
    int & number1 = number;
    int & number2 = number;
    cout << number << endl;
    cout << number1 << endl;
    cout << number2 << endl;
}

// typecasting
int main() {
    float x = 5.45;
    cout << (int)x;

    float num = 56.45;
    // float num = 56.45f; // for more specifications
    long double num1 = 54.555;
    int num2 = 60;
    
    cout << sizeof(num) << endl;
    cout << sizeof(num1) << endl;
    cout << sizeof(num2) << endl;
    return 0;
}

// introduction to const in c++
int main() {
    // you can change the value of int a, but not of const a
    const int a = 45;
    int a = 34; // error: already declared as const int a
}

// manipulators, (endl is also a manipulator)
int main() {
    // setting a field width
    int a = 2, b = 45, c = 5668;
    cout << "a BEFORE: " << a << endl;
    cout << "b BEFORE: " << b << endl;
    cout << "c BEFORE: " << c << endl;

    cout << "a AFTER: " << setw(4) << a << endl;
    cout << "b AFTER: " << setw(4) << b << endl;
    cout << "c AFTER: " << setw(4) << c << endl;
}

// if - else statements
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // if (age >= 18) {
    //     cout << "You are eligible to vote.";
    // }
    // else {
    //     cout << "Not eligible to vote.";
    // }

    switch (age) {
    case 18:
        cout << "You can vote";
        break;

    case 12:
        cout << "You cannot vote";
        break;
    
    default:
        break;
    }
}

// loops (for, while, do-while)
int main() {
    int j = 10;
    // for loop
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    // while loop
    while (j >= 1) {
        cout << j << endl;
        j--;
    }

    // do-while loop
    do {
        cout << j;
        j--;
    } while (j >= 1);
}

// break and continue statement
int main() {
    // break
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        cout << i << endl;
    }

    // continue
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        cout << i << endl;
    }
}

// pointers
int main() {
    int i = 30;
    // single pointer
    int *j;
    j = &i;

    // (*) => Value(dereference operator), (&) => Address(address of operator)

    cout << "Value of i is " << i << endl;
    cout << "Value of i is " << *j << endl;
    cout << "Value of j is " << j << endl;
    cout << "Value of j is " << *(&j) << endl;

    cout << "Address of i is " << &i << endl;
    cout << "Address of i is " << j << endl;
    cout << "Address of j is " << &j << endl;
    // value of j is address of i

    // pointer of a pointer (double pointer)
    int **k;
    k = &j;

    // value of k is address of j
    cout << "Value of j is " << j << endl;
    cout << "Value of j is " << *k << endl;
    cout << "Value of k is " << k << endl;
    cout << "Value of i is " << **k << endl;
    cout << "Value of k is " << *(&k) << endl;
}

// array
// arrays are mutable
int main() {
    // int arr[] = {1,2,3,4}; // initialization of an array

    int marks[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter the marks of student " << i + 1 << endl;
        cin >> marks[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << marks[i] << endl;
    }    
}

// pointers in array
int main() {
    int marks[] = {10,20,30,40,50};
    int *ptr = marks; // no &marks is required in array

    cout << "The value of marks[0] is " << *ptr << endl;
    cout << "The value of marks[1] is " << *(ptr + 1) << endl;
    cout << "The value of marks[2] is " << *(ptr + 2) << endl;
    cout << "The value of marks[3] is " << *(ptr + 3) << endl;
    cout << "The value of marks[4] is " << *(ptr + 4) << endl;

    cout << *ptr << endl; // 10
    cout << *(ptr++) << endl; // it'll print 10, but after printing it'll increment the value (++), from 0th to 1st element of the array.
    cout << *ptr << endl; // now it is 20
}

// string initialization
int main() {
    string str1 = "hello";
    string str2 = "world";
    cout << str1 + " " + str2 << endl;
    cout << str1 << " " << str2 << endl;
}

// string input/output
int main() {
    string str;
    cout << "Enter a string: ";
    // cin >> str; // only one word
    getline(cin, str); // more than one word
    cout << str << endl;
}

// string length, concatenation, comparison
int main() {
    // length
    string str = "hello world";
    cout << "length of string: " << str.length() << endl;

    // concatenation
    string str1 = "hello";
    string str2 = "world";
    cout << str1 + " " + str2 << endl;
    cout << str1.append(" everyone") << endl;

    // comparison
    string str3 = "Hello";
    string str4 = "World";
    if (str3 == str4) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }
    // int result = str3.compare("Hello");
    int result = str3.compare(str4);
    cout << "Comparison result: " << result << endl;
}

// access characters in string
int main() {
    string str = "Hello";
    str[0] = 'h';
    cout << str;
}

// string modification
int main() {
    string str = "Hello World";

    // insert
    str.insert(6, "Beautiful "); // add on 6th position (starting from 0)
    cout << "After insert: " << str << endl;

    // erase
    str.erase(6, 10); // from 6th position, erase 10 characters
    cout << "After erase: " << str << endl;

    // replace
    str.replace(6, 5, "Everyone"); // from 6th position, erase 5 characters and insert "Everyone"
    cout << "After replace: " << str << endl;
    return 0;
}

// structures, unions and enums(enum is kinda same)
typedef struct employee {
    int eId; // 4 bytes
    char favChar; // 1 byte
    float salary; // 4 byte --- total 9 bytes allotted
} emp; // typedef character

int main() {
    // struct employee ravi, harry;
    emp ravi, harry;
    ravi.eId = 69;
    ravi.favChar = 'R';
    ravi.salary = 4667.54;

    harry.eId = 5;
    harry.favChar = 'c';
    harry.salary = 455567.67;

    cout << ravi.eId << endl;
    cout << ravi.favChar << endl;
    cout << ravi.salary << endl;
    return 0;
}

// union
union car {
   int mirrors; // 4 bytes
   char favChar; // 1 byte
   float cost; // 4 bytes --- total = maximum = only 4 bytes allotted
}; // you can access any one of them, not all of them like structure

// function
int sum(int a, int b); // function prototype
// int sum(int, int) // also eligible

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "Sum: " <<sum(num1, num2);
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

// call by value
int main() {
    // adding two numbers using sum function ---> sum(a,b)
}

// call by reference
void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// void swap(int *a, int *b) {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

int main() {
    int x = 5, y = 10;
    cout << "Before swap: " << x << " " << y << endl;
    // swap(&x, &y); // using pointer reference
    swap(x, y); // using reference variables
    cout << "After swap: " << x << " " << y << endl;
}

// inline function
// when you need to decrease the run time of your function, use inline, but only if the function is not large and does not take more memory storage
inline int sum(int a, int b) {
    return a * b;
}

// default function
int product(int a, int b = 2) {
    return a * b;
}

int main() {
    int num1 = 5, num2 = 8;
    // cout << product(num1, num2); // output ---> 40
    cout << product(num1); // output ---> 10
}

// constant function
int product(const int a, const int b) { // The const keyword in the function parameters ensures that the values of a and b cannot be changed inside the product function
    return a * b;
}

int main() {
    int num1 = 5, num2 = 8;
    cout << product(num1, num2);
}

// recurssion
int fact(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * fact(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
     cout << "The factorial of " << num << " is " << fact(num);
}

// function overloading
// c++ will automatically detect the funtion from their number of arguments passed and will run the function as needed
int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int num1 = 1, num2 = 2, num3 = 3;
    cout << "sum of 1 and 2 is: " << sum(num1, num2);
    cout << "sum of 1, 2 and 3 is: " << sum(num1, num2, num3);
}

// object oriented programming (oops), private and public
// :: ---> scope resolution operator
class Employee {
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // declaration
        void getData() {
            cout << "The value of a is: " << a << endl;
            cout << "The value of b is: " << b << endl;
            cout << "The value of c is: " << c << endl;
            cout << "The value of d is: " << d << endl;
            cout << "The value of e is: " << e << endl;
        }
};

void Employee :: setData(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}

int main() {
    Employee ravi;
    // ravi.a = 123; // error: because it is private
    ravi.d = 4;
    ravi.e = 5;
    ravi.setData(1, 2, 3);
    ravi.getData();
    return 0;
}

// oops - classes and objects (nesting of member functions)
// classes = structures + more
// private, public, methods. properties, etc are more in classes
class binary {
    // private:
        string s; // by default this is private

    public:
        void read(void);
        void check_binary(void);
        void ones(void);
        void display(void);
};

void binary :: read(void) {
    cout << "Enter a binary number: ";
    cin >> s;
}

void binary :: check_binary(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "Incorrect Binary format!" << endl;
            exit(0);
        } 
    }
}

void binary :: ones(void) {
    check_binary(); // nesting of member function
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '0') {
            s.at(i) = '1';
        }
        else {
            s.at(i) = '0';
        }
    }
}

void binary :: display(void) {
    cout << endl << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++) {
        cout << s.at(i);
    }
}

int main() {
    binary b;
    b.read();
    // b.check_binary();
    b.display();
    b.ones();
    b.display();
    return 0;
}

// memory allocation and using array in classes
// this is not dynamic memory allocation
class Shop {
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
        void initCounter() {
            counter = 0;
        }
        void setPrice();
        void displayPrice();
};

void Shop :: setPrice() {
    cout << "Enter Id of your item no " << counter + 1 << " ";
    cin >> itemId[counter];

    cout << "Enter Price of your item no " << counter + 1 << " ";
    cin >> itemPrice[counter];

    counter++;
}

void Shop :: displayPrice() {
    for (int i = 0; i < counter; i++) {
        cout << endl << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main() {
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}

// static data memebers and methods in c++
class Employee {
    int id;
    static int count; // now it won't change when a new object is printed or etccc

    public:
        void setData() {
            cout << "Enter the id: ";
            cin >> id;
            count++;
        }
        void getData() {
            cout << endl << "The id of this employee is " << id << endl << "And this is the employee number: " << count << endl;
        }
};

int Employee :: count; // default value is 0

int main() {
    Employee ravi, govind, harry;
    // ravi.id = 1;
    // ravi.count = 34; // cannot do this, as id and count both are private
    ravi.setData();
    ravi.getData();

    govind.setData();
    govind.getData();

    harry.setData();
    harry.getData();
    return 0;
}

// array of objects and passing objects as function arguments
class Employee {
    int id;
    int salary;

    public:
        void setId() {
            salary = 122;
            cout << "Enter the id of employee ";
            cin >> id;
        }
        void getId() {
            cout << "The id of this employee is " << id << endl;
        }
};

int main() {
    // Employee name1, name2, name3, name4;
    // name1.setId();
    // name1.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++) {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}

class complex {
    int a;
    int b;

    public:
        void setData(int v1, int v2) {
            a = v1;
            b = v2;
        }
        void setDataBysum(complex o1, complex o2) {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void printNumber() {
            cout << "Your complex number is " << a << "+" << b << "i" << endl;
        }
};

int main() {
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBysum(c1, c2);
    c3.printNumber();
    return 0;
}