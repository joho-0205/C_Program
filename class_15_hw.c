# include <stdio.h>
# define size 10
int main(){
    int result[10];
    for(int i=0;i<size;i++){
        result[i] = 0;
    }
    int num,numc;
    printf("Enter a number\n");
    scanf("%d",&num);
    numc = num;
    int left;
    int times = 0;
    while(numc!=0){
        left = numc % 2;
        numc = numc/2;
        //printf("%d %d\n",left,numc);
        result[times] = left;
        times += 1;
    }for(int j=size-1;j>=0;j--){
            printf("%d",result[j]);
    }printf("\n");
}