# include <stdio.h>
int main(){
    int len = 0;
    printf("Enter the length of the sentence\n");
    scanf("%d", &len);
    char sen[len];
    printf("Enter the sentence\n");
    scanf("%s",&sen);
    printf("========RESULT========\n");
    for(int i = 0; i < len; i++){
        //97-122
        int sen_ascii = sen[i];
        if(sen_ascii<=122 && sen_ascii>=97){
            sen[i] = sen_ascii-32;
        }
    }printf("1.Upper:\n");
    printf("%s\n",sen);
    for(int i = 0; i < len; i++){
        //65-90
        int sen_ascii = sen[i];
        if(sen_ascii<=90 && sen_ascii>=65){
            sen[i] = sen_ascii+32;
        }
    }printf("2.Lower:\n");
    printf("%s\n",sen);
    return 0;
}