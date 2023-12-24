# include <stdio.h>
int main(){
    int num1,num2 = 0;
    int a,b,c = 0;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    if (num1<num2){
        b = num2;
        c = num1;
    }else{
        b = num1;
        c = num2;
    }
    int product = num1*num2;
    while (c != 0){
        a = b;
        b = c;
        c = a%b;
        //printf("\na = %d\nb = %d\nc = %d",a,b,c);
    }
    int HBF = b;
    int LCM = product/HBF;
    printf("HBF of %d and %d = %d\n",num1,num2,HBF);
    printf("LCM of %d and %d = %d\n",num1,num2,LCM);//每個print後面都加\n
    return 0;
}
