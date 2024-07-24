#include <iostream>
using namespace std;

// STL ---> Standard Template Library
// STL = Containers + Algorithm + Iterators

// Containers ---> Object which stores data
// Algorithm ---> Procedure to process data
// Iterators ---> Object which points to an element of a container

// Types of Containers
// 1. Sequence containers :- Stores the data in linear fashion. Eg: Vector, List, Dequeue
// 2. Associative containers :- Stores the data in Tree like structures, used for fast searching, fast deletion, fast access. Eg: Map, Multi-map, Set, Multi-set
// 3. Derived containers :- Provides real world modelling. Eg: Stack, Queue, Priority queue


// Pairs
int main() {
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << endl;

    return 0;
}


// Vector
// check the capacity, element access, modifiers, etc from "cplusplus.com/reference/"
#include <vector>

// 1
void display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; // you can use any one of these
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec1;
    int element, size;
    cout << "Enter size of your vector: ";
    cin >> size;
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << " to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    // vec1.pop_back();
    display(vec1);

    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 20);
    display(vec1);
    vec1.insert(iter + 2, 30);
    display(vec1);
    vec1.insert(iter + 2, 4, 50);
    display(vec1);
    return 0;
}

// 2
template <class T>
void display(vector<T> &v) {
    cout << ">> ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

int main() {
    // Ways to create a vector
    vector<int> vec1; // zero length integer vector
    display(vec1);

    vector<char> vec2(4); // 4-element character vector
    vec2.push_back('7');
    display(vec2);

    vector<char> vec3(vec2); // 4-element character vector from vec2
    display(vec3);

    vector<int> vec4(6, 3); // 6-element vector of 3s
    display(vec4);

    return 0;
}


// List
// for access --> array is fast
// for deletion, insertion --> list is fast
#include <list>

void display(list<int> &lst) {
    list<int> :: iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
}

int main() {
    list<int> list1; // list of 0 length
    list<int> list2(3); // empty list of size 3

    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(3);
    list1.push_back(2);
    list1.push_back(1);
    list1.remove(4);
    list1.sort();
    list1.reverse();
    display(list1); // display here works as a pointer iterator which points the elements in the list from begin() to end() and prints.

    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 10;
    iter++; 
    *iter = 20;
    iter++; 
    *iter = 30;
    iter++;
    display(list2);

    list1.merge(list2);
    display(list1);

    return 0;
}


// Maps
#include <map>
#include <string>

int main() {
    map<string, int> marksMap;
    marksMap["name1"] = 64;
    marksMap["name2"] = 83;
    marksMap["name3"] = 34;
    marksMap["name4"] = 59;

    marksMap.insert({{"name5", 45}, {"name6", 17}});

    map<string, int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++) {
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    return 0;
}

// Function Objects (Functors)
#include <functional>
#include <algorithm>

int main() {
    int arr[] = {1, 5, 3, 34, 2};
    // sort(arr, arr + 3);
    sort(arr, arr + 5, greater<int>());

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}