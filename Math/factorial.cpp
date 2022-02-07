#include <iostream>

int factorial(int num){
    int total = 1;
    for(int i = 2; i <= num; ++i){
        total *= i;
    }
    return total;
}

int rFactorial(int num){
    if(num == 1){
        return 1;
    }
    return num * rFactorial(num-1);
}

int main(){
    std::cout << "Loop Factorial: " << factorial(5) << '\n';
    std::cout << "Recursive Factorial: " << rFactorial(5) << '\n';
    return 0;
}