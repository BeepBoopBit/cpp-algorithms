#include <iostream>

int binarySearch(int *arr, int size, int sought){
    int left = 0,
        right = size-1,
        mid = (left+right)/2;
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