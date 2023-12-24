//指標
# include <stdio.h>
# include <time.h>
# include <string.h>
# define SIZE 10
int main(void){
    void adddata(int,int,int*);
    int result = 0,*ptr;
    ptr = &result;
    adddata(5,5,ptr);
    printf("%d\n",result);
}

void adddata(int a,int b,int *ptr){
    *ptr = a+b;
}