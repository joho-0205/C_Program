# include <stdio.h>
# include <string.h>
# define row 9
void showdata(int data[row]){
    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            printf("%d x %d = %d   ",data[i],data[j],data[i]*data[j]);
        }
        printf("\n");
    }
}int main(){
    int data[row] = {1,2,3,4,5,6,7,8,9};
    showdata(data);
    return 0;
}//結果存到二維陣列