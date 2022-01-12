#include <iostream>
#include <cmath>

/**
 * Jump Search is an improve version of linear search who only works on sorted array. It jumps by some amount from the starting position then perform a linear search.
 * 1.) let 'step' be the square root of the size of the container
 * 2.) Let 'i' be the iteration index.
 * 3.) Iterate through the container by 'step' amount
 * 4.) if the container[i] is greater than the soughted value, then i+=step
 * 5.) if we didn't find it, then return -1
 * 6.) if the container [i] is less than the soughted value, store the value in a variable called 'startingIndex'
 * 7.) do a linear search starting from 'startingIndex' until the last element of the array 
 */

int jumpSearch(int *arr, int size, int sought){
    // stores the steps per each iteration
    int steps = std::sqrt(size);
    // stores the startingIndex
    int startingIndex = 0;
    // iterate through the array by 'steps' amount
    for(int i = 0; i < size; i+=steps){
        // find the relative startingIndex of the soughted value
        if(arr[i] > sought){
            startingIndex = (i-steps);
            break;
        }
    }
    // linear search 
    for(int i = startingIndex; i < size; ++i){
        if(arr[i] == sought){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << jumpSearch(arr, 10, 1) << std::endl;
    std::cout << jumpSearch(arr, 10, 10) << std::endl;
    std::cout << jumpSearch(arr, 10, 2) << std::endl;
    std::cout << jumpSearch(arr, 10, 9) << std::endl;
    std::cout << jumpSearch(arr, 10, 3) << std::endl;
    std::cout << jumpSearch(arr, 10, 8) << std::endl;
    std::cout << jumpSearch(arr, 10, 4) << std::endl;
    std::cout << jumpSearch(arr, 10, 7) << std::endl;
    std::cout << jumpSearch(arr, 10, 5) << std::endl;
    return 0;
}