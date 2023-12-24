# include <stdio.h>
int main(){
    printf("please input 0~9\n");
    char ch = getchar();
    printf("%d",ch);
    if(ch == putchar(48)){
        printf("the ASCII number is 48");
    }else if(ch == putchar(49)){
        printf("the ASCII number of %c is 49",ch);
    }else if(ch == putchar(50)){
        printf("the ASCII number of %c is 50",ch);
    }else if(ch == putchar(51)){
        printf("the ASCII number of %c is 51",ch);
    }else if(ch == putchar(52)){
        printf("the ASCII number of %c is 52",ch);
    }else if(ch == putchar(53)){
        printf("the ASCII number of %c is 53",ch);
    }else if(ch == putchar(54)){
        printf("the ASCII number of %c is 54",ch);
    }else if(ch == putchar(55)){
        printf("the ASCII number of %c is 55",ch);
    }else if(ch == putchar(56)){
        printf("the ASCII number of %c is 56",ch);
    }else if(ch == putchar(57)){
        printf("the ASCII number of %c is 57",ch);
    }else{
        printf("error");
    }
    return 0;
}