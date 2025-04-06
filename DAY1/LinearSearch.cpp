/* 
 Linear Search :-  The Linear Search algorithm searches through an array and returns the index of the value it searches for.

 How it works:

1. Go through the array value by value from the start.
2. Compare each value to check if it is equal to the value we are looking for.
3. If the value is found, return the index of that value.
4. If the end of the array is reached and the value is not found, return -1 to indicate that the value was not found.

*/
// Wap to check given number is available in array or not .
#include<iostream>
using namespace std;
int LinearSearch(int arr[],int size ,  int target){
    for(int i =0 ; i<=size; i++){
        if (arr[i]==target){
            return i;
        }
        
    }
    return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size = 5;
    int target;
    cout<<"Enter number which you want to search :- ";
    cin >> target ;
    int res = LinearSearch(arr , size , target);
    if (res == -1){
        cout<<target<<" Is not available in array ";

    }
    else{
        cout<<target <<" is available at "<< res << " index ";
    }
    return 0;

}
