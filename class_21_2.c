//指標
# include <stdio.h>
# include <time.h>
# include <string.h>
# define SIZE 10
int main(void){
    int *ptri,i;// 4 byte
    char *ptrc,c;// 1 byte
    ptri = &i;
    ptrc = &c;
    for(i=3;i>=1;i--){
        printf("ptr ptri-%d = %p\t",i,ptri-i);
        printf("ptr ptrc-%d = %p\n",i,ptrc-i);
    }
    printf("===============================\n");
    printf("ptr ptri = %p\t",ptri);
    printf("ptr ptrc = %p\n",ptrc);
    printf("===============================\n");
    return 0;
}