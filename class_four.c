# include <stdio.h>
int main(){
    printf("input a char\n");
    char ch = getchar();//可輸入字元
    //getche():不用按enter,馬上進入下一步
    //getch():輸入時不會顯示在螢幕上
    //專業名詞：stdout 標準輸出 stdin 標準輸入
    printf("you just input ");
    putchar(ch);//ASCII number change to char 或 直接輸出字元
    return 0;
}