//
// Created by spark on 17-11-23.
//
// ptr_ops.c --指针操作
#include <stdio.h>
int main(void){
    int urn[5]={100,200,300,400,500};
    int *ptr1,*ptr2,*ptr3;

    ptr1=urn;//把一个地址赋值给指针
    ptr2=&urn[2];//把一个地址赋值给指针

    printf("Pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1=%p, *ptr1=%d, &ptr1=%p.\n",ptr1,*ptr1,&ptr1);

    //指针加法
    ptr3=ptr1+4;
    printf("\nadding an int to pointer:\n");
    printf("ptr1+4 =%p, *(ptr1+4)=%d\n",ptr1+4,*(ptr1+4));

    ptr1++;
    printf("\nvalue after ptr1++:\n");
    printf("ptr1=%p, *ptr1=%d, &ptr1=%p.\n",ptr1,*ptr1,&ptr1);

    //递减指针
    ptr2--;
    printf("\nvalue after --ptr2:\n");
    printf("ptr2=%p, *ptr2=%d, &ptr2=%p\n",ptr2,*ptr2,&ptr2);

    --ptr1;
    ++ptr2;//恢复初始值
    printf("\nPointer reset to original values:\n");
    printf("ptr1=%p, ptr2=%p.\n",ptr1,ptr2);

    //一个指针减去另一个指针
    printf("\n subtracting one pointer from another:\n");
    printf("ptr2=%p, ptr1=%p, ptr2-ptr1=%td\n",ptr1,ptr2,ptr2-ptr1);

    //一个指针减去一个整数
    printf("\n subtracting an int from a pointer:\n");
    printf("ptr3=%p, ptr3-2=%p.\n",ptr3,ptr3-2);

    return 0;
}

