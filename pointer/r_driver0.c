//
// Created by spark on 17-12-7.
//
/**
 * 测试rand0()函数
 */
#include <stdio.h>
extern unsigned int rand0(void);

int main(void){
    int count;

    for(count=0;count<5;count++){
        printf("%d\n",rand0());
    }
    return 0;
}

