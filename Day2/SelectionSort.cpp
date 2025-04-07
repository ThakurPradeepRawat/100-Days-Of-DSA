/*
  Selection Sort :- The Selection Sort algorithm finds the lowest value in an array and moves it to the front of the array.
  The algorithm looks through the array again and again, moving the next lowest values to the front, until the array is sorted.

How it works:

1. Go through the array to find the lowest value.
2. Move the lowest value to the front of the unsorted part of the array.
3. Go through the array again as many times as there are values in the array.
*/

#include<iostream>
using namespace std;

// Selection sort function 

void Selection_Sort(int arr[], int size ){
    int min_index;
    int j=0;
    while(j<size){
        min_index = j;
        for(int i = j+1 ; i<size ; i++){
            if (arr[min_index] > arr[i]){
                min_index = i;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[j];
        arr[j]=temp;
        j=j+1;

    }
    for (int k= 0; k<size ; k++){
        cout<<arr[k] <<"---> ";
        
    }
    cout<<"Null";

}
int main(){
    int arr[10] = {2,3,1,4,2,5,6,73,5,6};
    int size = 10;
    Selection_Sort(arr,size);
    
}

    