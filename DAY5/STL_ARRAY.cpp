/*
 STL is a library that consist of different data structures and algorithms to effectively store and manipulate data.

*/
#include <iostream>
#include<array>
using namespace std;
int main(){
    // Array declaration
    array<int, 5> arr = {1, 2, 3, 4, 5}; // array of size 5
    // Accessing elements
    cout << "First element: " << arr[0] << endl; // Accessing first element
    cout << "Second element: " << arr.at(1) << endl; // Accessing second element using at() function
    cout << "Last element: " << arr.back() << endl; // Accessing last element
    cout << "Size of array: " << arr.size() << endl; // Getting size of array
    cout << "Empty: " << arr.empty() << endl; // Checking if array is empty
    cout << "Front element: " << arr.front() << endl; // Accessing first element using front() function
    cout << "Last element: " << arr.back() << endl; // Accessing last element using back() function
    cout << "Array elements: ";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " "; // Accessing elements using for loop
    }
    cout << endl;
    
}