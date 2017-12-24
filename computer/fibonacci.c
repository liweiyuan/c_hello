//
// Created by spark on 17-12-24.
//

#include <stdio.h>
long fibonacci(int n);
int main(){

    long number=fibonacci(10);
    printf("number : %ld",number);
}
long fibonacci(int n){
    if(n<=2){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

