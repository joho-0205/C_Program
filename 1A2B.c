# include <stdio.h>
int *separate_answer(int rep){
    int sep_rep[4];
    for(int i=3;i>=0;--i){
        sep_rep[i] = rep%10;
        rep = rep/10;
    }
    for(int i=0;i<4;i++){
        printf("sep_rep[%d]=%d\n",i,sep_rep[i]);
    }
    return sep_rep;
}
int main(){
    int ans[4] = {0,8,5,7};
    int rep;
    scanf("%d",&rep);
    int* real_rep = separate_answer(rep);
    for(int j=0;j<4;j++){
        if(*(real_rep+j) == 1){
            printf("good\n");
        }else{printf("bad\n");}
    }
}