//指標
# include <stdio.h>
# include <time.h>
# include <string.h>
# define SIZE 10
int main(void){
    int *ptr, data = 10;
    float floatdata = 1.01;
    ptr = &data; //&data:指向data
    printf("ptr %p\n",ptr);
    printf("data %d\n",data);
    printf("datap %p\n",&data);
    printf("=====\n");
    *ptr = 35;//改變指標內部記憶體
    printf("ptr %p\n",*ptr);
    printf("data %d\n",data);
    printf("datap %p\n",&data);
    printf("=====\n");
    ptr = &floatdata; //指標僅限在同樣的資料型態中
    printf("ptr %p\n",*ptr);
    printf("data %d\n",data);
    printf("datap %p\n",&data);
    printf("=====\n");
    return 0;
}