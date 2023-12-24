//fruit selling
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
int main(){
    printf("----------Fruit Selling------------\nApples $50\nMangos $70\nWatermelons $100\n");
    int day;
    int mango;
    int apple;
    int watermelon;
    printf("what day is today?(1~7)\n");
    scanf("%d",&day);
    if(day<1||day>7){
        printf("ERROR");
        exit(0);
    }else{
        printf("How many Apples?\n");
        scanf("%d",&apple);
        printf("How many Mangos?\n");
        scanf("%d",&mango);
        printf("How many Watermelons?\n");
        scanf("%d",&watermelon);
        int total = apple*50+mango*70+watermelon*100;
        if(day == 7){
            total = total*0.9;
        }else{}
        printf("The total is: $%d\n",total);
    }
    return 0;
}