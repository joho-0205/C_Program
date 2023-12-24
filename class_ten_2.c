# include <stdio.h>
int main(){
    int num1,num2,num3,num4;
    int showhis(int,int,int,int);
    int max(int,int);
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    printf("max number is %d\n",showhis(num1,num2,num3,num4));
    return 0;
}
int max(int num1,int num2){
    if(num1>num2)return num1;
    else return num2;
}
int showhis(int num1,int num2,int num3,int num4){
    int maxdata1 = max(num1,num2);
    int maxdata2 = max(num3,num4);
    return max(maxdata1,maxdata2);
    //0 正常，1 錯誤
}