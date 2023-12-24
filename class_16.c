# include <stdio.h>
struct person{
    char name[10];
    int old;
};
int main(void){
    //全域value 區域value
    struct person one_person = {"tom",18};
    struct person second_person = {"mary",20};
    printf("%s\n",one_person.name);
    return 0;
}