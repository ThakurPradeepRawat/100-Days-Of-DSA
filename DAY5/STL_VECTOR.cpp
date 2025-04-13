/*
A vector in C++ is like a resizable array.
Both vectors and arrays are data structures used to store multiple elements of the same data type.
The difference between an array and a vector, is that the size of an array cannot be modified (you cannot add or remove elements from an array). A vector however, can grow or shrink in size as needed.
To use a vector, you have to include the <vector> header file:
*/
#include<iostream>
#include<vector> // Header file for vector
using namespace std;
int main(){
    // Vector declaration
    vector<int> vec; // Empty vector of integers
    // vector by default is empty
    cout << "Size of vector: " << vec.size() << endl; // Getting size of vector
    cout << "Empty: " << vec.empty() << endl; // Checking if vector is empty
    // capacity of vector
    cout << "Capacity of vector: " << vec.capacity() << endl; // Getting capacity of vector
    // Adding elements to vector
    vec.push_back(1); // Adding element 1 to vector
    vec.push_back(2); // Adding element 2 to vector
    vec.push_back(3); // Adding element 3 to vector
    vec.push_back(4); // Adding element 4 to vector
    vec.push_back(5); // Adding element 5 to vector
    cout << "Size of vector: " << vec.size() << endl; // Getting size of vector after adding elements
    cout << "Capacity of vector: " << vec.capacity() << endl; // Getting capacity of vector after adding elements
    cout << "Elements of vector: ";
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " "; // Accessing elements using for loop
    }
    cout << endl;
    // Accessing elements using at() function
    cout << "First element: " << vec.at(0) << endl; // Accessing first element using at() function
    cout << "Second element: " << vec.at(1) << endl; // Accessing second element using at() function
    cout << "Last element: " << vec.at(vec.size()-1) << endl; // Accessing last element using at() function
    // Accessing elements using front() and back() function
    cout << "First element using front (): " << vec.front() << endl; // Accessing first element using front() function
    cout << "Last element using back(): " << vec.back() << endl; // Accessing last element using back() function
    // Removing elements from vector
    vec.pop_back(); // Removing last element from vector
    cout << "Size of vector after removing last element: " << vec.size() << endl; // Getting size of vector after removing last element
    cout << "Elements of vector after removing last element: ";
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " "; // Accessing elements using for loop after removing last element
    }
    cout << endl;
    // Clearing vector
    vec.clear(); // Clearing vector
    cout << "Size of vector after clearing: " << vec.size() << endl; // Getting size of vector after clearing
    cout << "Empty: " << vec.empty() << endl; // Checking if vector is empty after clearing
    cout << "Capacity of vector after clearing: " << vec.capacity() << endl; // Getting capacity of vector after clearing
    // Resizing vector
    vec.resize(5); // Resizing vector to size 5
    cout << "Size of vector after resizing: " << vec.size() << endl; // Getting size of vector after resizing
    cout << "Capacity of vector after resizing: " << vec.capacity() << endl; // Getting capacity of vector after resizing
    cout << "Elements of vector after resizing: ";
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " "; // Accessing elements using for loop after resizing
    }
    cout << endl;
}