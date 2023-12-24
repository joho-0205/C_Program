# include<stdio.h>
int main(){
    int num1,num2 = 0;
    int a,b,c = 0;
    scanf("%d %d",&num1,&num2);
    b = num1;
    c = num2;
    while (c != 0){
      a = b;
      b = c;
      c = a%b;
    }
    printf("%d and %d HCF = %d\n",num1,num2,b);
    return 0;
}
//hw:最小公倍數