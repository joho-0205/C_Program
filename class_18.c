# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main(void) {
    char strone[5] = "123";
    char strtwo[5];
    scanf("%s", strtwo);//char string == //python is
    int same = 1;
    for(int i = 0; i < 5; i++){
        if(strone[i] != strtwo[i]){
            same = 0;
        }
    }
    //printf("same1 is %d\n", same);
    printf("%d",strcmp(strone,strtwo));//兩字串相同時會回傳0

}