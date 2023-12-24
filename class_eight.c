# include <stdio.h>
int main(){
    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            printf("%d x %d = %d\t", i, j, i*j);//\t:保留字元（用來排版）
        }
        printf("\n");
    }
    //python: for i in range(10) [0,1,2,3,4,5,6,7,8,9]
    //for i in "Python"
    return 0;
}