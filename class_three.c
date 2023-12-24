# include <stdio.h>
int main(){
    int data;
    int datatwo;
    scanf("%d %d",&data,&datatwo);
    //scanf("%d",&data);//將輸入的值塞到data的記憶體位置//&:記憶體位置
    //scanf("%d",&datatwo);
    printf("%d\n",data);
    //printf("%d\n",&data);//顯示記憶體位置

    int n = 100;//a 97
    putchar(n);//ASCII number change to char 或 直接輸出字元
    putchar('\n');
    putchar(100);
    putchar(10);
    putchar('n');
    putchar('\n');
    return 0;
}
//hw:用不同型態的變數、不同百分比寫會產生什麼結果
//hw2:計算三角形面積（可以輸入）
