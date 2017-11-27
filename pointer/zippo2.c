//
// Created by spark on 17-11-27.
//
// 指针与多维数组的关系
#include <stdio.h>
int main(void){
    int zippo[4][2]={{2,4},{6,8},{1,3},{5,7}};
    int (*pz)[2];
    pz=zippo;

    printf("   zippo =  %p,  zippo +1 = %p\n",pz,pz+1);
    printf("zippo[0] =  %p,  zippo[0] +1 = %p\n",pz[0],pz[0]+1);
    printf(" *zippo =  %p,    *zippo +1 = %p\n",*pz,*pz+1);
    printf("zippo[0][0] =  %d,  zippo[0][0] +1 = %d\n",pz[0][0],pz[0][0]+1);
    printf(" *zippo[0] = %d\n",*pz[0]);
    printf("**zippo =%d\n",**pz);
    printf("  zippo[2][1] = %d\n",pz[2][1]);
    printf("  *(*(zippo+2)+1) = %d\n",*(*(pz+2)+1));

    return 0;
}


