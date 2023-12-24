//指標
# include <stdio.h>
# include <time.h>
# include <string.h>
# define SIZE 10
int main(void){
    int *ptr, *ptr2, data = 10,data2 = 20;
    float floatdata = 1.01;
    ptr = &data;
    ptr2 = ptr; //ptr2指向data記憶體位置
    ptr = &data2;
    printf("ptr %d\n",*ptr);
    printf("ptr2 %d\n",*ptr2);
    printf("data %d\n",data);
    printf("ptr %p\n",ptr);
    printf("ptr2 %p\n",ptr2);
    printf("===========\n");
    return 0;
}
