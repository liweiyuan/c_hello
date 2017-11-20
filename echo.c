//
// Created by spark on 17-11-20.
//
/** echo.c --重复输入*/
#include <stdio.h>
int main(void){
    char ch;

    while((ch=getchar())!=EOF){//(ch=getchar())!='#'
        putchar(ch);
    }
    return 0;
}

