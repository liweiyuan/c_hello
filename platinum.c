//
// Created by spark on 17-11-13.
//
/* platinum.c -- your weight in platinum*/
#include <stdio.h>
int main(void){
    float weight; //你的体重
    float value;  //相等重量的白金价值

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please entry your weight in pounds: ");

    /*获取用户输入*/
    scanf("%f",&weight);
    /*假设白金的价格是每ansi$1700*/
    //14.5833用于把英镑转为ansi
    value=1700.0*weight*14.5833;
    printf("Your weight in platinum is worth $%.2f.\n",value);
    printf("Your are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");


    //getchar();
    //getchar();

    long long ago;
    unsigned  long long int java;

    printf("\a");
    return 0;
}

