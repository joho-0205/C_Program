# include <stdio.h>
#include <string.h>
#define SIZE 9
void menu(){
    printf("1:\tReset Data\n2:\tAdd Data\n3:\tShow Data\n4:\tDelete Data\n5:\tSearch Data\n6:\tExit\n");
}
int main(void){
    int data[] = {1,2,3,4,5,6,7,8,9};
    int search = 0;
    int minstep = 1;
    int maxstep = SIZE+1;
    printf("what to search?\n");
    scanf("%d",&search);
    while(1){
        int searchstep = (int)(maxstep+minstep)/2;
        printf("search step: %d\n",searchstep);
        if(data[searchstep] == search){
            printf("data already searched\n");
            break;
        }else if(data[searchstep] > search){
            maxstep = searchstep-1;
        }else if(data[searchstep] < search){
            minstep = searchstep+1;
        }if(minstep > SIZE || maxstep < 0){
            printf("not found\n");
            break;
        }
    };
    return 0;
}