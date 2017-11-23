//
// Created by spark on 17-11-22.
//
/* day_mon1.c  --打印每个月的天数*/
#include <stdio.h>
#define MONTH 12

int main(void){
    int days[MONTH]={31,28,31,30,31,30,31,31,30,31,30,31};

    for(int i=0;i<MONTH;i++){
        printf("Month %2d has %2d days.\n",i+1,days[i]);
    }

    return 0;
}

