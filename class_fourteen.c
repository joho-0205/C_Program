# include <stdio.h>
# include <string.h>
# define size 5
void changedata(int data[],int number){
    //array只是傳送記憶體位置，所以在func中更改時func外的變數也會更改
    //一般的只會複製到另一個位置
    for(int i=0; i<size; i++){
        printf("%d\n", data[i]);
    }data[0] = 100;

}
int main(){
    int data[size] = {1,1,1,1,1};
    int datatwo[] = {1,2,3,4,5};
    changedata(data,5);
    for(int i=0; i<size; i++){
        printf("%d\n", datatwo[i]);
    }
    changedata(datatwo,5);
    for(int i=0; i<size; i++){
        printf("%d\n", datatwo[i]);
    }printf("%p\n",&datatwo);//%p:記憶體位置
    printf("%p\n",&datatwo[2]);//[n+1] = [n]+4 
    return 0;
}//hw1:10進位變2進位