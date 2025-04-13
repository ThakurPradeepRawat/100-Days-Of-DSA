/*
    Priority Queue in C++ STL
    A priority queue is a data structure that stores elements in a way that allows for efficient retrieval of the highest (or lowest) priority element.
    In a priority queue, elements are ordered based on their priority, rather than their insertion order. The element with the highest priority is always at the front of the queue.
    The STL provides a built-in implementation of a priority queue, which is implemented as a max heap by default.
    This means that the highest priority element is always at the top of the queue.
    The STL priority queue is implemented as a template class, which means it can store any data type.
    
    Syntax:
        #include <queue>
        std::priority_queue<type> pq_name;

    
    functions :
        1. push() - Adds an element to the priority queue.
        2. pop() - Removes the highest priority element from the priority queue.
        3. top() - Returns a reference to the highest priority element in the priority queue.
        4. empty() - Returns true if the priority queue is empty, false otherwise.
        5. size() - Returns the number of elements in the priority queue.
        6. swap() - Swaps the contents of two priority queues.
        7. emplace() - Constructs an element in place and adds it to the priority queue.
        8. emplace_back() - Constructs an element in place and adds it to the back of the priority queue.
        9. emplace_front() - Constructs an element in place and adds it to the front of the priority queue.    
        
*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
    // Create a priority queue of integers
    priority_queue<int> pq;

    // Add elements to the priority queue
    pq.push(10);
    pq.push(20);
    pq.push(5);

    // Print the highest priority element
    cout << "Highest priority element: " << pq.top() << endl; // Output: 20

    // Remove the highest priority element
    pq.pop();

    // Print the new highest priority element
    cout << "New highest priority element: " << pq.top() << endl; // Output: 10

    // Check if the priority queue is empty
    if (pq.empty()) {
        cout << "Priority queue is empty" << endl;
    } else {
        cout << "Priority queue is not empty" << endl;
    }

    // Print the size of the priority queue
    cout << "Size of the priority queue: " << pq.size() << endl; // Output: 2

    return 0;
}
