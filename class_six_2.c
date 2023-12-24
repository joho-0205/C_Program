# include <stdio.h>
#include <stdbool.h>
int main(){
    int score;
    printf("enter your score");
    scanf("%d",&score);
    if (score>=90){
        printf("甲");
    }else if(score>=80){
        printf("乙");
    }else if(score>=70){
        printf("丙");
    }else if(score>=60){
        printf("丁");
    }else{
        printf("不及格");
    }
    return 0;
}