//
// Created by spark on 17-11-23.
//
#include <stdio.h>
#define SIZE 5
void show_array(const double ar[],int n);
void mult_array(double ar[],int n, double mult);

int main(void){
    double dip[SIZE]={20.0,17.98,3.0,24.9,34.09};

    printf("The original dip array:\n");
    show_array(dip,SIZE);
    mult_array(dip,SIZE,2.5);
    printf("The dip array after calling mult_array():\n");
    show_array(dip,SIZE);

    return 0;
}

/**显示数组的内容*/
void show_array(const double ar[],int n){
    int i;

    for(i=0;i<n;i++){
        printf("%8.3f",ar[i]);
    }
    putchar('\n');
}
/**把每一个元素的值加相同的数字*/
void mult_array(double ar[],int n,double mult){
    int i;

    for(i=0;i<n;i++){
        ar[i]+=mult;
    }

}

