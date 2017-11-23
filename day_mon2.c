//
// Created by spark on 17-11-22.
//
#include <stdio.h>

int main(void){

    const int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for(index=0; index< sizeof(days)/ sizeof(days[0]); index++){
        printf("Month %2d has %2d days.\n",index+1,days[index]);
    }
    printf("%ld.\n",sizeof(days));
    printf("%ld",sizeof(days[index]));

    return 0;
}

