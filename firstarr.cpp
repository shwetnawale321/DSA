#include <iostream>
#include <string>
using namespace std;

// Array Operations
void insertElement(int arr[], int &n, int pos, int value) {
if (pos < 0 || pos > n) {
cout << "Invalid position\n";
return;
}
for (int i = n; i > pos; i--) {
arr[i] = arr[i - 1];
}

arr[pos] = value;
n++;
}

void deleteElement(int arr[], int &n, int value) {
int pos = -1;
for (int i = 0; i < n; i++) {
if (arr[i] == value) {
pos = i;
break;
}
}
if (pos == -1) {
cout << "Element not found\n";
return;
}
for (int i = pos; i < n - 1; i++) {
arr[i] = arr[i + 1];
}
n--;
}

void traverseArray(int arr[], int n) {
cout << "Array Elements: ";
for (int i = 0; i < n; i++) {
cout << arr[i] << " ";
}
cout << endl;

}

void searchElement(int arr[], int n, int value) {
for (int i = 0; i < n; i++) {
if (arr[i] == value) {
cout << "Element " << value << " found at index " << i << endl;
return;
}
}
cout << "Element " << value << " not found\n";
}

// String Manipulations
void stringOperations() {
string str = "Hello World";

cout << "\nOriginal String: " << str << endl;
cout << "Length of string: " << str.length() << endl;
cout << "Uppercase: ";
for (char c : str) {
cout << (char)toupper(c);
}
cout << endl;

cout << "Lowercase: ";
for (char c : str) {
cout << (char)tolower(c);
}

cout << endl;

string replaced = str;
replaced.replace(6, 5, "C++");
cout << "After replacement: " << replaced << endl;

cout << "Substring (0 to 4): " << str.substr(0, 5) << endl;

if (str.find("World") != string::npos) {
cout << "'World' found in the string\n";
} else {
cout << "'World' not found\n";
}
}

int main() {
// Array Demo
int arr[100] = {10, 20, 30, 40, 50};
int n = 5;

cout << "Initial Array:\n";
traverseArray(arr, n);

insertElement(arr, n, 2, 25);
cout << "After Insertion:\n";
traverseArray(arr, n);

deleteElement(arr, n, 40);

cout << "After Deletion:\n";
traverseArray(arr, n);

searchElement(arr, n, 30);

// String Demo
stringOperations();

return 0;
}
