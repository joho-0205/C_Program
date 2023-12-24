# include <stdio.h>
#include <string.h>
int main(){
    char name[10];
    char name2[10];
    int one;
    int two;
    fgets(name,10,stdin);//可以輸入空格,fgets:可以輸入任何型態ex:檔案、字串......,stdin:標準輸入
    //fgets會自動空一行
    printf("str1: %s\n",name);
    gets(name2);
    printf("str2: %s\n",name2);
    puts(name);
    puts(name);
    printf("array長度:%d\n",sizeof(name));//byte char = 1 byte//array長度
    printf("string長度:%d\n",strlen(name));//byte char = 1 byte//string長度
    return 0;
}