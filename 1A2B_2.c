# include <stdio.h>
# include <stdlib.h>
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
    int run=1;
    while(run==1){
        int a=0,b=0;
        scanf("%d",&rep);
        int sep_rep[4];
        for(int i=3;i>=0;--i){
            sep_rep[i] = rep%10;
            rep = rep/10;
        }
        for(int i=0;i<4;i++){
            if(sep_rep[i]==ans[i]){
                a+=1;
            }else{
                for(int j=0;j<4;j++){
                    if(sep_rep[i]==ans[j]){
                        b+=1;
                    }else{}
                }
            }
        }if(a==4){
            run = 0;
        }
        printf("%dA%dB",a,b);
    }return 0;
}