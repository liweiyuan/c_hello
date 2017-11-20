//
// Created by spark on 17-11-14.
//
/*shoes.c --把鞋码转换为英寸*/
#include <stdio.h>
#define ADJUST 7.31
int main(){
    const double SCALE=0.333;  //const变量
    double shoe,foot;

    shoe=9.0;
    foot=SCALE*shoe+ADJUST;
    printf("Shoe size (men's) foot length\n");
    printf("%10.1f %15.2f inches\n",shoe,foot);

    return 0;
}

