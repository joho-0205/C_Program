#include <stdio.h>
int main(){
    int showis();
    int compare();
    int num1, num2, num3, num4;
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    printf("max number is %d\n",showis(num1, num2, num3, num4));
    printf("max number is %d\n",compare(num1, num2, num3, num4));
    return 0;
}

int showis(int num1, int num2, int num3, int num4){//有回傳值的function
    int data = 0;
    if(num1 > num2)
        if(num3 > num4)
            if(num3 > num1)
                return num3;
            else
                return num1;
        else
            if(num4 > num1)
                return num4;
            else
                return num1;
            
    else
        if(num3 > num4)
            if(num3 > num2)
                return num3;
            else
                return num2;
        else
            if(num4 > num2)
                return num4;
            else
                return num2;   
    return 0;
    //0正常，1錯誤
}

int compare(int num1, int num2, int num3, int num4){
    int maxdata1 = 0;
    int maxdata2 = 0;
    if(num1>num2)
        maxdata1 = num1;
    else
        maxdata1 = num2;
    if(num3>num4)
        maxdata2 = num3;
    else
        maxdata2 = num4;
    if(maxdata1>maxdata2)
        return maxdata1;
    else
        return maxdata2;
}
//hw:1.做三角形、正方形面基function(要有小數點)2.輸入兩個數，設計一個function計算兩個數及中間所有數的和