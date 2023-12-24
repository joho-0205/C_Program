# include <stdio.h>
# include <string.h>
# define row 9
void list(int data[row]){
    for(int i=row-1; i>0; i--){
            for(int j=0; j<row-1; j++){
                if(data[j]<data[j+1]){
                    int change = data[j];
                    data[j] = data[j+1];
                    data[j+1] = change;
                }else{}
            }
    }
}int main(){
    int data[row] = {50,631,322,4,1,8,90,482,33};
    printf("========Original Data===========\n");
    for(int i=0; i<row; i++){
        printf("%d ", data[i]);
    }printf("\n");
    list(data);
    printf("========Sorted Data===========\n");
    for(int i=0; i<row; i++){
        printf("%d ", data[i]);
    }printf("\n");
    return 0;
}