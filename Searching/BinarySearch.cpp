#include <iostream>

/**
 * Binary Search works only on sorted array, the algorithm is as follows
 * 1.) Create a variable 'left' and 'right' such that 'left' is pointing to the first element and 'right' is pointing to the last element
 * 2.) Create a variable 'mid' that points to the average of 'left' and 'right'
 * 3.) While 'left' is <= to 'right' then do 4, 5, 6, and 7
 * 4.) if mid is equal to 'sought' then return the index
 * 5.) if mid is > than 'sought', then make right = mid - 1
 * 6.) if mid is < than 'sought', then male left = mid + 1
 * 7.) get the average of 'left' and 'right'
 * 8.) return -1 if 'sought' is not in the array
 */

int binarySearch(int *arr, int size, int sought){
    // variable to store the indexes
    int left = 0,
        right = size-1,
        mid = (left+right)/2;
    
    // while there are still values to be iterated from
    while(left <= right){
        if(arr[mid] == sought){
            return mid;
        }
        if(arr[mid] > sought){
            right = mid-1;
        }else if(arr[mid] < sought){
            left = mid+1;
        }
        mid = (left+right)/2;
    }
    return -1;
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << "The index of 10 is " << binarySearch(arr, 10, 10) << '\n';
    std::cout << "The index of 1 is " << binarySearch(arr, 10, 1) << '\n';
    std::cout << "The index of 2 is " << binarySearch(arr, 10, 2) << '\n';
    std::cout << "The index of 7 is " << binarySearch(arr, 10, 7) << '\n';
    return 0;
}


// find 4
// 1 2 3 4 5 6 7 8 9
// half