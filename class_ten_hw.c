#include <stdio.h>
int main(){
    float rectangle(float,float);//宣告(資料型態)
    float triangle(float,float);
    int function;
    printf("1.Triangle 2.Rectangle ");
    scanf("%d",&function);
    if (function ==1){
        float base,height;
        printf("Enter base and height ");
        scanf("%f %f",&base,&height);
        printf("The area is %.2f",triangle(base,height));
    }else if (function ==2){
        float length,width;
        printf("Enter length and width");
        scanf("%f %f",&length,&width);
        printf("The area is %.2f",rectangle(length,width));
    }else{
        printf("error");
    }return 0;
}

float triangle(float base, float height){
    float area = height*base/2;
    return area;
}

float rectangle(float length, float height){
    float area = height*length;
    return area;
}