//
// Created by spark on 17-12-7.
//
/**
 * 多次色子投掷模拟
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "direcoll.h"

int main(void){
    int dice,roll;
    int sides;
    int status;

    srand((unsigned int) time(0));//随机种子
    printf("Enter the number of sides per die, 0 to top.\n");
    while (scanf("%d",&sides)==1&&sides>0){
        printf("How many dice?\n");
        if(status=scanf("%d",&dice)!=1){
            if(status==EOF){
                break;
            } else{
                printf("You should have entered an integer.");
                printf(" Let's begin again.\n");
                while(getchar()!='\n'){
                    continue;
                }
                printf("How many sides? Enter 0 to stop.\n");
                continue;
            }
        }
        roll=roll_n_dice(dice,sides);
        printf("You have rolled a %d using %d %d-sidesdice.\n",roll,dice,sides);
        printf("How many sides?Enter 0 to stop.\n");

    }
    printf("The rollem() function was called %d times.\n",roll_count);//使用外部变量

    printf("GOOD FORTURE RO YOU!\n");

    return 0;
}

