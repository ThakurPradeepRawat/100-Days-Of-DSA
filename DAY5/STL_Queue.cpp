/*
    STL Queue in C++
    STL Queue is a container adapter that gives the programmer the functionality of a queue data structure.
    It is a First In First Out (FIFO) data structure, meaning that the first element added to the queue will be the first one to be removed.
    The STL Queue is implemented as a template class, which means it can store any data type.

    Syntax:
        #include <queue>
        std::queue<type> queue_name;

    Functions:
        1. push() - Adds an element to the back of the queue.
        2. pop() - Removes the front element from the queue.
        3. front() - Returns a reference to the front element of the queue.
        4. back() - Returns a reference to the last element of the queue.
        5. empty() - Returns true if the queue is empty, false otherwise.
        6. size() - Returns the number of elements in the queue.

    Example:
*/
#include<iostream>
#include<queue> // Header file for queue
using namespace std;
int main(){
    queue<int>q; // creating a queue of integers
    q.push(1); // adding elements to the back of the queue
    q.push(2); // adding elements to the back of the queue
    q.push(3); // adding elements to the back of the queue
    q.push(4); // adding elements to the back of the queue
    cout<<"The size of the queue is: "<<q.size()<<endl; // printing the size of the queue
    cout<<"The front element of the queue is: "<<q.front()<<endl; // printing the first element of the queue
    cout<<"The last element of the queue is: "<<q.back()<<endl; // printing the last element of the queue
    
    cout<<"The elements of the queue are: "<<endl; // printing the elements of the queue
    while(!q.empty()){ // iterating through the queue using a while loop
        cout<<q.front()<<" "; // printing the elements of the queue
        q.pop(); // removing the front element of the queue
    }
    cout<<endl;
    
    cout<<"The size of the queue after removing all elements is: "<<q.size()<<endl; // printing the size of the queue after removing all elements
}