#include <stdio.h>
#include <math.h>

int main() {
    int a0,a1;
    int add();
    scanf("%d %d",&a0,&a1);
    printf("%d\n",add(a0,a1));
    return 0;
}int add(a0,a1){
    int amount = a0-a1;
    if (amount < 0){
        amount = -amount+1;
    }else{
        amount = amount+1;
    }
    int result = (a0+a1)*amount/2;
    return result;
}