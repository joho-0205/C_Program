//指標
# include <stdio.h>
# include <time.h>
# include <string.h>
# define SIZE 10
int main(void){
    int data = 10;// 4byte
    float fdata = 10.1;
    void *ptr;
    ptr = &data;
    printf("data = %d\n",*(int *)ptr);
    ptr = &fdata;
    printf("data = %f\n",*(float *)ptr);
    ptr = &data;
    printf("data = %d\n",*(int *)ptr);
    scanf("%d",(int *)ptr);
    printf("data = %d\n",*(int *)ptr);
    return 0;
}