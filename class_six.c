# include <stdio.h>
#include <stdbool.h>
int main(){
    int age = 18;
    if (age > 18){ //條件要用小括號，大括號=python縮排
        printf("you are over eighteen years old\n");
    }else if (age==18){
        printf("you are eighteen years old\n");
    }else{
        printf("you are not eighteen years old\n");
    }

    if (age > 18){ //條件要用小括號，大括號=python縮排
        printf("you are over eighteen years old\n");
    }else if (age==18){
        printf("you are eighteen years old\n");
    }else{
        printf("you are not eighteen years old\n");
    }

    //========================
    int integer;
    scanf("%d",&integer);
    if(integer%2==0){
        printf("even number\n");
    }else{
        printf("odd number\n");
    }
    //=========================
    switch (age)
    {
    case 18://判斷age是否等於18
        printf("you are eighteen years old");
        break;
    case 19:
    printf("you are nineteen years old");
    break;
    default://若前面條件皆不符合會跑這裡
        printf("nothing");
        break;
    return 0;
    }
}//hw:將字元轉成ascii碼(用if,switch兩種寫法都要寫)