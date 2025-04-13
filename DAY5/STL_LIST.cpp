/*
 A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.
However, two major differences between lists and vectors are:
You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.

Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.
To use a list, you have to include the <list> header file:
*/
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l; //creating a list of integers
    l.push_back(1); //adding elements to the list
    l.push_front(2); //adding elements to the front of the list
    l.push_back(3); //adding elements to the list
    l.push_front(4); //adding elements to the front of the list
    cout<<"The size of the list is: "<<l.size()<<endl; //printing the size of the list
    cout<<"The front element of the list is: "<<l.front()<<endl; //printing the first element of the list
    cout<<"The last element of the list is: "<<l.back()<<endl; //printing the last element of the list

    cout<<"The elements of the list are: "<<endl; //printing the elements of the list
    for (auto i:l){ //iterating through the list using a range-based for loop
        cout<<i<<" "; //printing the elements of the list
    }
    cout<<endl;
    l.pop_back(); //removing the last element of the list
    l.pop_front(); //removing the first element of the list
    cout<<"The elements of the list after removing the first and last elements are: "<<endl; //printing the elements of the list
    for (auto i:l){ //iterating through the list using a range-based for loop
        cout<<i<<" "; //printing the elements of the list
    }
    cout<<endl;
}