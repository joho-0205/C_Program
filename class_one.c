# include <stdio.h>
int main(){
    // data type
    char h; //1 byte = 8 bit 0000 0000 -128 ~ 127(-2^7 ~ 2^7)
    char data = '2'; //只能用單引號代表字元
    printf("%c \n",data);
    printf("%d, byte %d\n",0b11111111/2,sizeof(data));
    int number = 0; //4 byte = 32 bit (-2^31 ~ 2^31-1)
    printf("not init %d\n",number);
    long int number_two = 0;//8 byte
    float number_float = 0.0;//4 byte 0.000000
    double number_three = 0.0;//8 byte 0.000000000000
    unsigned int unsigndata = 0;//4 byte(不能是負數)
    //Overflow(出錯)
    printf("%d",sizeof(number_two));
    return 0;
}
//hw:計算三角形、長方形面積