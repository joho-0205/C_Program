//指標
# include <stdio.h>
# include <time.h>
# include <stdlib.h>
# define SIZE 10
void swap(int*,int*);
int main(void){
    int data [5] = {1,2,3,4,5};
    int *ptr = &data; //*data=&data[0]
    for(int i=0; i<5; i++){
        printf("data %d = %d\n",i,*(ptr+i));
    }

    int ii = 0;
    int *ptri;
    ptri = &ii;
    *ptri = 1;
    *(ptr+1) = 2;
    *(ptr+2) = 3;
    printf("ii position %p = %d\n",&ii,ii);
    printf("ii+1 position %p = %d\n",(ptr+1),*(ptr+1));
    printf("ii+2 position %p = %d\n",(ptr+2),*(ptr+2));
    return 0;
}