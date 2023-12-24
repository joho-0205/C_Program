#include <stdio.h>
int main(){
    void showhi();
    int showhis();//宣告function
    for(int i=0; i<10; i++){

        if(i == 5) continue;//如果只有一行，可以不用大括號
        printf("%d",i);
        if(i == 7)break;
        goto endloop;//直接跳到endloop，前面的指令不做
    }
    printf("fin\n");
    endloop:
    printf("finished\n");
    printf("finished\n");
    //無窮迴圈1.for(;;){}
    //2.for(int i=0; i<10;){};
    showhi();
    int data = showhis();
    printf("%d\n", data);
    return 0;
}
void showhi(){//沒有回傳值的function
    printf("hi\n");
}

int showhis(){//有回傳值的function
    int data = 0;
    return 0;
    //0正常，1錯誤
}