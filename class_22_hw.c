//指標
# include <stdio.h>
# include <time.h>
# include <stdlib.h>
# define SIZE 10
void swap(int*,int*);
int main(void){
    int data [6] = {-2,-100,0,-1,-99,-98};
    int *ptr = &data[0]; //*data=&data[0]
    int max=*ptr,min=*ptr;
    for(int i=0; i<6; i++){
        printf("%d\n",*(ptr+i));
        if(*(ptr+i)>max){
            max=*(ptr+i);
        }else if(*(ptr+i)<min){
            min=*(ptr+i);
        }
    }printf("MAX: %d, min: %d\n",max,min);
}//hw:用指標找最大最小值