#include <stdio.h>
#include <stdbool.h>
int main(){
    bool x = NULL;//NULL:「沒有」的意思
    bool int_x = 0;
    bool int_x2 = 1;
    bool float_number = 0.0;
    bool float_number2 = 0.1;
    _Bool string_y = '2';//bool,_Bool是一樣的，布林值不要用字元
    printf("x = %d, int_x = %d, int_x2 = %d, string_y = %d, float_number = %d, float_number2 = %d,byte = %d \n"
    ,x,int_x,int_x2,string_y,float_number,float_number2,sizeof(_Bool));//sizeof(資料型態)：顯示佔了多少byte
    bool inputd;
    scanf("%c",&inputd);//%c:char,自動轉成布林值
    printf("data = %d",inputd);
    return 0;
}