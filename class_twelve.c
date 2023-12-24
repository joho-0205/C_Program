# include <stdio.h>
int main(){
    char str1[] = "hello";
    for(int i=0;i<5;i++){
        printf("%c",str1[i]);
        str1[i] = '5';
    }
    printf("\n");
    printf("sizeof str1 %d\n",sizeof(str1));//sizeof():有幾個bit(字元+結束符號(1bit))
    for(int i=0;i<sizeof(str1)-1;i++){ //sizeof(str1)-1 = 字元數
        printf("%c",str1[i]);
        str1[i] = '6';
    }
    printf("\n%s",str1);
    char newstr[] = {'h','e','l','l','o','w','o','r','l','d'};
    char newstr2[] = {'h','e','l','l','o','\0','w','o','r','l','d'};//\0之後結束
    char newstr3[] = "helloworld";
    printf("last %s\n",newstr);
    printf("last %s\n",newstr2);
    printf("last %s\n",newstr3);
    printf("last %d\n",sizeof(newstr));//用list,不會把結束符號算在裡面
    printf("last %d\n",sizeof(newstr2));
    printf("last %d\n",sizeof(newstr3));//用string,會把結束符號算在內
    return 0;
}