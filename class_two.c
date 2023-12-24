#include <stdio.h>
#define pi 3.14159 //定義參數(不能修改)
int main(){
    int data = 1;
    printf("pi = %f\n",pi);
    const int datas = 10; //不能修改，一定要有初始值

    char x = 127; //-128~127
    x = x+1;
    printf("x = %d\n",x);
    
    unsigned char y = 0; //0~255
    y = y-1;
    printf("y = %d\n",y);

    float z = 3.4e38;
    z = z*10;
    printf("z = %f\n",z);

    return 0;
}