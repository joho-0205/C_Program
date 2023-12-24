# include <stdio.h>
int main(){
    int score;
    printf("enter your score");
    scanf("%d",&score);
    switch (score/10)
    {
    case 10:
        printf("甲");
        break;
    
    default:
        break;
    }
}