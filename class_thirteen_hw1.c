# include <stdio.h>
# include <string.h>
int main(){
    char str1[10];
    char str2[10];
    printf("Enter string\n");
    gets(str1);
    for(int i=0; i<10; i++){
        str2[i] = str1[i];
    }printf("str1: %s\n",str1);
    printf("str2: %s\n",str2);
    return 0;
}