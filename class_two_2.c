#include <stdio.h>

int main(){
    int one = 7;
    int two = 3;
    float result;
    result = one/two;
    printf("result = %f\n",result);

    result = (float)one / two; //型態轉換：(要轉換成的型態)
    printf("result2 = %07.2f\n",result); //07:保留7個位置，剩下用0填充;.2:保留小數點後兩位

    float intdata = 3/2;
    printf("intdata = %d\n",(int)intdata); //強迫轉換(無條件捨去)

    char i = 'a';
    char j = 'A'; //ASCII
    printf("i = %d\nj = %d\n",i,j); //字元->ASCII(不用強迫轉換)

    int data = 97;
    printf("data = %c\n",data); //ASCII->字元(不用強迫轉換)

    float floatdata = 1.123456789;
    printf("floatdata = %d\n",(int)floatdata);
    //double float
    double doubledata = 0.000000000001;
    printf("double %f",doubledata);
    // %d %c %f
    return 0;
}
