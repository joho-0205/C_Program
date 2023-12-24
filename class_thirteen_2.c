# include <stdio.h>
# include <string.h>
int main(){
    char str1[10];
    char str2[10];
    char str3[10];
    char str4;
    //scanf("%c",&str3);
    //str4 = str3;
    //printf("%c",str4);
    //printf("input str1 value\n");
    //gets(str1);
    //printf("input str2 value\n");
    //gets(str2);
    //printf("%d",strcmp(str1,str2));//strcmp:比較大小//0 same
    gets(str1);
    //不可用str2 = str1,因為是陣列
    strcpy(str2,str1);//將str1複製到str2
    printf("%s\n",str2);
    strncpy(str3,str1,5);//控制copy多少字元
    printf("%s\n",str3);
    return 0;
}//hw1:用for迴圈 hw2:3種水果，各多少個，週日九折