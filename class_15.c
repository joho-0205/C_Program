# include <stdio.h>
# include <ctype.h>
//C struct public
//C++ class public pro private
//stack:first in last out
//queue:first in first out
#define size 5
void showdata(){
    int datafour = 10;
}
int main(void){
    //全域value 區域value
    int dataone = 10;
    for(int i=0;i<10;i++){
        int datatwo = 100;//全域變數
        printf("dataone %d",dataone);
        //printf("datathree %d",datathree);//datathree還沒被定義，會出錯
    }
    showdata();
    int datathree = 1000;
    //printf("%d",datatwo);//會出錯
    int data = 8*7+5;
    return 0;
}//hw:記array,stack,queue,動態、靜態記憶體、全域、區域變數