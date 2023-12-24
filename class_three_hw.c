# include <stdio.h>
int main(){
    float base;
    float height;
    printf("Base:");
    scanf("%f",&base);
    printf("Height:");
    scanf("%f",&height);
    float area = base*height/2;
    printf("Area: %.2f",area);
    return 0;
}