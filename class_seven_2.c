# include <stdio.h>
int main(){
    int data = 10;
    char yes_or_no = NULL;
    //do{//do...while:先跑一次再判斷條件
        //printf("hi");
    //}while (data < 0);
    do{
        printf("Do you want to exit? y/n\n");
        scanf("%c",&yes_or_no);
        printf("hi\n");
    }while(yes_or_no != 'y');
    return 0;
}