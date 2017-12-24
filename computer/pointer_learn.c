//
// Created by spark on 17-12-24.
//
#define SIZE 50
int x[SIZE];
int y[SIZE];
int i;
int *p1,*p2;

//这是函数的下标版本
void try1(){
    for (i=0;i<SIZE;i++){
        x[i]=y[i];
    }
}

void try2(){
    for(p1=x,p2=y;p1-x<SIZE;){
        *p1++=*p2++;
    }
}

