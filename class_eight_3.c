# include <stdio.h>
int main(){    
    for(int i=1; i<8; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("========================\n");
    for(int i=8; i>0; i--){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("========================\n");
    for(int i=1;i<5;i++){
        for(int j=0;j<=5-i;j++){
            printf(" ");
        }
        for(int k=0;k<i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}//hw:做聖誕樹