/*
  A deque (stands for double-ended queue) however, is more flexible, as elements can be added and removed from both ends (at the front and the back). You can also access elements by index numbers.
 To use a deque, you have to include the <deque> header file:
*/
#include<iostream>
#include<deque> // Header file for deque
using namespace std;
int main(){
    deque<int>dq; //creating a deque of integers
    dq.push_back(1); //adding elements to the back of the deque
    dq.push_front(2); //adding elements to the front of the deque
    dq.push_back(3); //adding elements to the back of the deque
    dq.push_front(4); //adding elements to the front of the deque
    cout<<"The size of the deque is: "<<dq.size()<<endl; //printing the size of the deque
    cout<<"The front element of the deque is: "<<dq.front()<<endl; //printing the first element of the deque
    cout<<"The last element of the deque is: "<<dq.back()<<endl; //printing the last element of the deque

    cout<<"The elements of the deque are: "<<endl; //printing the elements of the deque
    for (auto i:dq){ //iterating through the deque using a range-based for loop
        cout<<i<<" "; //printing the elements of the deque
    }
    cout<<endl;
    dq.pop_back(); //removing the last element of the deque
    dq.pop_front(); //removing the first element of the deque
    cout<<"The elements of the deque after removing the first and last elements are: "<<endl; //printing the elements of the deque
    for (auto i:dq){ //iterating through the deque using a range-based for loop
        cout<<i<<" "; //printing the elements of the deque
    }
    cout<<endl;
    cout<<"The first element of the deque is: "<<dq.at(0)<<endl; //printing the first element of the deque using at() function
    cout<<"The last element of the deque is: "<<dq.at(dq.size()-1)<<endl; //printing the last element of the deque using at() function
    cout<<"The first element of the deque is: "<<dq[0]<<endl; //printing the first element of the deque using [] operator
    cout<<"The last element of the deque is: "<<dq[dq.size()-1]<<endl; //printing the last element of the deque using [] operator
    cout<<"The elements of the deque in reverse order are: "<<endl; //printing the elements of the deque in reverse order
    for (auto i=dq.rbegin();i!=dq.rend();i++){ //iterating through the deque in reverse order using a reverse iterator
        cout<<*i<<" "; //printing the elements of the deque in reverse order
    }
    cout<<endl;
    
}