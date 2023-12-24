# include <stdio.h>
#include <string.h>
#define SIZE 10
struct person{
    char name[10];
    char phone_number[12];
    char sex[4];
    int old;//1.新增會員號碼2.會員號碼排序3.用會員號碼搜尋（二元搜尋法）
};
void menu(){
    printf("1:\tReset Data\n2:\tAdd Data\n3:\tShow Data\n4:\tDelete Data\n5:\tSearch Data\n6:\tExit\n");
}
int main(void){
    char choose;
    while(1){
        menu();
        scanf("%s",&choose);
        printf("%c\n",choose);
        //buffer full
        while(getchar() != '\n');
    };
    return 0;
}