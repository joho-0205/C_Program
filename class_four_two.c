# include <stdio.h>
int main(){
    float C , F = 0.0;//只能用在兩個值相同，不能用逗號
    printf("F = \n");
    scanf("%f",&F);//float會直接無條件捨去小數點後第六位後的數字
    C = (F-32)*5/9;//stack//
    printf("C = %.2f",C);//.2f:四捨五入到小數點後第二位
    return 0;
}