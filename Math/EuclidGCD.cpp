#include <iostream>

int getGCD(int x, int y){
    int result = x%y;
    while(result != 0){
        x = y;
        y = result;
        result = x%y;
    }
    return y;
}

int main(){
    std::cout << getGCD(20, 99) << std::endl;
    return 0;
}