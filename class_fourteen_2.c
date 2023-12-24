# include <stdio.h>
# include <string.h>
# define row 3
# define column 3
void showdata(int data[row][column]){
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int data[row][column] = {1,2,3,4,5,6,7,8,9};
    int datatwo[row][column];
    printf("%d\n",data[0][2]);
    printf("%d\n",data[1][0]);
    printf("%d\n",data[2][2]);
    showdata(data);
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            scanf("%d",&datatwo[i][j]);
        }
    }
    showdata(datatwo);
}//hw2:99乘法表用成二維陣列//hw3:排序一個data