/*
   Insertion Sort :- The Insertion Sort algorithm uses one part of the array to hold the sorted values, and the other part of the array to hold values that are not sorted yet.

The algorithm takes one value at a time from the unsorted part of the array and puts it into the right place in the sorted part of the array, until the array is sorted.

How it works:

1. Take the first value from the unsorted part of the array.
2. Move the value into the correct place in the sorted part of the array.
3. Go through the unsorted part of the array again as many times as there are values.

Time complexities :- 
                      best case = O(n);
                      worst case = O(n^2)

*/
#include<iostream>
using namespace std;

void InsertionSort(int arr[], int size){
    
    for(int i = 1 ; i<size ; i++){
        int temp = arr[i];
        int j = i-1;
        for (j; j>=0 ;j--){
           if(arr[j] > temp){
            arr[j+1] = arr[j];
           }
           else{
            break ;
           }

        }
        arr[j+1]=temp;
   }
   for (int k = 0 ; k<size ; k++){
    cout <<arr[k] << "-------->";
   }
   cout<<"NULL";
   return ;

}
int main(){
    int arr[5] = {5,4,1,2,3};
    int size = 5;
    InsertionSort(arr,size);
}