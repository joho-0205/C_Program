# include <stdio.h>
int main(){
    //list:動態記憶體，要用時才給記憶體
    //array:靜態記憶體，先給定記憶體大小
    int id[2];//int:只能放int,[]內數字代表array長度
    id[0] = 10;
    id[1] = 20;
    printf("id[0] = %d id[1] = %d\n", id[0], id[1]);
    int id_two[10];
    for(int i=0; i<10; i++){
        id_two[i] = 0;//init 初始值
    }for(int i=0; i<10; i++){
        scanf("%d",&id_two[i]);
    }for(int i=0; i<10; i++){
        printf("%d = %d %d = %d\n",i,id_two[i],i+1,id_two[i+1]);//沒宣告到的部分會產生亂碼
    }
    char name_two[10];
    scanf("%s",&name_two);//init 初始值 %s:string
    printf("your name is %s",name_two);
    printf("\n");
    char str[] = "alccdea345";//ascii \0 = 0(以0結尾)
    //char "c" 1 byte <==> string "c\0" 2 byte
    printf("str is %s",str);
    return 0;
}//hw1:判斷有沒有英文字母，若有則輸出出兩次：第一次全部大寫，第二次全部小寫；若沒有則不改變，同樣輸出兩次