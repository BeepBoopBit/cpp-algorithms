#include <iostream>


int loopFib(int data){
    if((data == 1) || (data == 2)){
        return 1;
    }
    int prevVal = 1,
        newVal  = 1;
    for(int i = 2; i < data; ++i){
        int tempPrevVal = newVal;
        newVal += prevVal;
        prevVal = tempPrevVal;
    }
    return newVal;

}

int recursiveFib(int data){
    if(data == 1 || data == 2){
        return 1;
    }
    return recursiveFib(data-1) + recursiveFib(data-2);
}

int main(){
    for(int i = 1; i <= 10; ++i){
        std::cout << recursiveFib(i) << ' ';
    }
    std::cout << std::endl;
    for(int i = 1; i <= 10; ++i){
        std::cout << loopFib(i) << ' ';
    }
    std::cout << std::endl;
    return 0;
}