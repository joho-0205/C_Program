# include <stdio.h>
# include <string.h>
# define row 3
struct person{
    char name[10];
    char phone_number[12];
    char sex[4];
    int old;
};
int main(void){
    //全域value 區域value
    struct person company_employee_list[row];
    for(int i=0; i<row; i++){
        scanf("%s",company_employee_list[i].name);
        scanf("%s",company_employee_list[i].phone_number);
        scanf("%s",company_employee_list[i].sex);
        scanf("%d",&company_employee_list[i].old);
    }for(int i=row-1; i>0; i--){
        for(int j=0; j<row-1; j++){
            if(company_employee_list[j].old<company_employee_list[j+1].old){
                struct person change = company_employee_list[j];
                company_employee_list[j] = company_employee_list[j+1];
                company_employee_list[j+1] = change;
            }else{}
        }
    }for(int i=0; i<row; i++){
        printf("name: %s\n",company_employee_list[i].name);
        printf("phone_number: %s\n",company_employee_list[i].phone_number);
        printf("sex: %s\n",company_employee_list[i].sex);
        printf("old: %d\n",company_employee_list[i].old);
    }
    return 0;
    }