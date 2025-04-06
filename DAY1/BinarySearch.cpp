/*
   Binary Search :-  The Binary Search algorithm works by checking the value in the center of the array. If the target value is lower, the next value to check is in the center of the left half of the array. This way of searching means that the search area is always half of the previous search area, and this is why the Binary Search algorithm is so fast.
    

   Time complexities :- 
                    Best Case: O(1) → when the target is found at the middle element on the first try.
                    Average Case: O(log n) → each step reduces the search space by half.
                    Worst Case:O(log n) → the target is at one of the ends or not present at all.
How it works:

1. Check the value in the center of the array.
2. If the target value is lower, search the left half of the array. If the target value is higher, search the right half.
3. Continue step 1 and 2 for the new reduced part of the array until the target value is found or until the search area is empty.
4. If the value is found, return the target value index. If the target value is not found, return -1.

*/


// Wap to check a element is available in array or not  using binary search 
#include<iostream>
using namespace std;
// creating a binary search function 
int binary_search(int arr[], int size , int target){
    int start = 0;
    int end = size - 1;
    int mid =  start + (end-start)/2;
    while(start <= end){
        if (arr[mid]==target){
            return mid;
        }
        else if (arr[mid] > target){
            end = mid-1;
        }
        else{
            start = end +1;
        }
        mid = start + (end-start)/2;

    }
    return -1;
}

int main(){
    int arr[10] = {10,20,13,24,45,67,34,56,78,48};
    int size = 10;
    int target ; 
    cout << "Enter number that you want to search :- ";
    cin >> target ;
    int res = binary_search(arr,size,target);
    if (res==-1){
        cout<< target << " is not available in array !";
    }
    else{
        cout << target << " is available at "<< res <<" index of array !";
    }
    return 0;
}