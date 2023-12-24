# include <stdio.h>
struct person{
    char name[10];
    char phone_number[12];
    char sex[4];
    int old;
};
int main(void){
    //全域value 區域value
    struct person company_employee_list[2] = {{"tom","12345678","boy",18},{"may","12345678","girl",18}};
    for(int i=0; i<2; i++){
        scanf("%s",company_employee_list[i].name);
        scanf("%s",company_employee_list[i].phone_number);
        scanf("%s",company_employee_list[i].sex);
        scanf("%d",&company_employee_list[i].old);
    }for(int i=0; i<2; i++){
        printf("name: %s\n",company_employee_list[i].name);
        printf("phone_number: %s\n",company_employee_list[i].phone_number);
        printf("sex: %s\n",company_employee_list[i].sex);
        printf("old: %d\n",company_employee_list[i].old);
    }
    return 0;
}//hw1:1a2b,hw2:16_2用年齡排序