//指標
# include <stdio.h>
# include <time.h>
# include <stdlib.h>
# define SIZE 10
void swap(int*,int*);
int main(void){
    int a=5,b=10;
    printf("at main\n");
    printf("*a=%d, *b=%d\n",a,b);
    printf("a position %p\n",a);
    printf("b position %p\n",b);
    swap(&a,&b);
    printf("after swap\n");
    printf("*a=%d, *b=%d\n",a,b);
    printf("a position %p\n",a);
    printf("b position %p\n",b);
    return 0;
}
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("at swap\n");
    printf("*a=%d, *b=%d\n",*a,*b);
    printf("a position %p\n",a);
    printf("b position %p\n",b);
}