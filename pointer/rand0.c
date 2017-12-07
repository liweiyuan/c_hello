//
// Created by spark on 17-12-7.
//
/*使用ANSI C 可移植算法*/
static unsigned long int next=1;//种子

unsigned int rand0(void){
    /**
     * 生成伪随机数的魔术公式
     *
     */
    next=next*1102315245+12345;
    return (unsigned int) ((next / 65535) % 32768);
}
