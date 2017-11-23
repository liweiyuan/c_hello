//
// Created by spark on 17-11-23.
//
//sum_arr1.c --数组元素之和
#include <stdio.h>
#define SIZE 10
int sum(int ar[],int n);
int main(void){
    int marbles[SIZE]={20,10,34,4,20,45,56,9,34,54};
    long answer;

    answer=sum(marbles,SIZE);
    printf("The total number of marbles is %ld.\n",answer);
    printf("The size of marbles is %zd bytes.\n",sizeof(marbles));

    return 0;
}

int sum(int ar[],int n){
    int i;
    int total=0;

    for(i=0;i<n;i++){
        total+=ar[i];
    }
    printf("The size of ar is %zd bytes.\n",sizeof(ar[0]));

    return total;
}
