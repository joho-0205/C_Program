#include <stdio.h>
int main(){
    int a = 10;
    printf("a = %d \n",a);
    a+=1;
    printf("2 a = %d \n",a);
    //a+=1 ; //a=a+1
    int a2 = a++;//a++:先儲存a到a2再把a加一(減一:a--)
    printf("a2 = %d, a = %d \n",a2,a);
    int a3 = ++a;//++a:先把a加一在儲存到a3(減一:--a)
    printf("a = %d, a3 = %d \n",a,a3);
    a = 10;
    printf("a++ %d a = %d \n",a++*10-2,a);//算完後再加一
    a = 10;
    printf("(a++) %d a = %d\n",(a++)*10-2,a);//括號沒有用
    a = 10;
    printf("++a %d a = %d\n",++a*10-2,a);
    a = 10;
    printf("(++a) %d a = %d\n",(++a)*10-2,a);

    printf("%d\n",10>5 && 3>10);//&&:and(條件判斷)
    printf("%d\n",10>5 || 3>10);//||:or(條件判斷)
    printf("%d\n",7|3);
    printf("%d\n",7&3);//hw:研究23,24行

    // >> <<
    printf("%d\n",8<<2);// x<<y = x*2^y
    printf("%d\n",8>>3);// x>>y = x/2^y

    return 0;
}