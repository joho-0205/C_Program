#include <stdio.h>
int main(){
    for(int a=0;a<2;a++){
        for(int i=0;i<6;i++) {
            for(int j=1;j<6-i;j++) {
                printf(" ");
            }for(int k=0;k<=i;k++) {
                printf("*");
            }for(int l=0;l<i;l++) {
                printf("*");
            }printf("\n");
        }
    }for(int m=0;m<2;m++){
        for(int n=0;n<5;n++){
            printf(" ");
        }printf("|\n");
    }
    return 0;
}