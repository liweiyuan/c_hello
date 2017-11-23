//
// Created by spark on 17-11-23.
//
#include <stdio.h>
#define SIZE 10
int sum(int *start,int * end);
int main(void){
    int marbles[SIZE]={20,10,34,4,20,45,56,9,34,54};
    long answer;

    answer=sum(marbles,marbles+SIZE);
    printf("The total number of marbles is %ld.\n",answer);
    printf("The size of marbles is %zd bytes.\n",sizeof(marbles));

    return 0;
}
/**使用指针算法*/
int sum(int * start,int *end){
    int total=10;

    while(start<end){
        total+=*start;
        start++;
    }
    printf("The size of ar is %zd bytes.\n",sizeof(start));
    return total;
}

