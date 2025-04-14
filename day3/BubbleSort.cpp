/*
  Bubble Sort :- Bubble Sort is an algorithm that sorts an array from the lowest value to the highest value.
 How it works:
1.Go through the array, one value at a time.
2.For each value, compare the value with the next value.
3.If the value is higher than the next one, swap the values so that the highest value comes last.
4.Go through the array as many times as there are values in the array.
*/
#include<iostream>
using namespace std;
void Bubble_Sort(int arr[] , int size){
    int j = size ;
    bool p = true;
    // Loop through the array to find the lowest value
    while (j>1){
        for (int i =0  ; i<=j-2 ; i++){
            if (arr[i] > arr[i+1]){
                swap(arr[i],arr[i+1]);
                p = false;
            }
        }
        if (p == true){
            for (int k=0 ; k<size ;k++){
                cout<<arr[k] << "------->" ;
            }
            cout<<"Null"; 
            return  ;
        } 
        j=j-1;
    }
    for (int k=0 ; k<size ;k++){
        cout<<arr[k] << "------->" ;
    }
    cout<<"Null"; 
    return  ;

}

int main(){
    int arr[4] = {1,2,3,4};
    int size = 4;
    Bubble_Sort(arr,size);
    return 0;
}