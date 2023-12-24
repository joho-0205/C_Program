# include <stdio.h>
#include <string.h>
#define SIZE 10
struct person{
    char name[10];
    char phone_number[12];
    char sex[4];
    int old;//1.新增會員號碼2.會員號碼排序3.用會員號碼搜尋（二元搜尋法）
    int vip_number;
};
void menu(){
    printf("1:\tReset Data\n2:\tAdd Data\n3:\tShow Data\n4:\tDelete Data\n5:\tSearch Data\n6:\tExit\n");
}
int reset_data(struct person *data){//c語言陣列不能直接copy,要用strcpy
    for(int i=0; i<SIZE; i++){
        strcpy(data[i].name,"");
        strcpy(data[i].phone_number,"");
        strcpy(data[i].sex,"");
        data[i].old = 0;
    }
    return 0;
}
int show_data(struct person *data, int len){
    for(int i=0; i<len; i++){
        printf("name: %s\n",data[i].name);
        printf("phone_number: %s\n",data[i].phone_number);
        printf("sex: %s\n",data[i].sex);
        printf("old: %d\n",data[i].old);
    }
    return 0;
}
int delete_data(struct person *data,int delete,int len){
    if(delete>SIZE-1){
        printf("ERROR");
    }else{
        if(delete<SIZE-1){
            for(int i=delete; i<SIZE-1; i++){
                strcpy(data[i].name,data[i+1].name);
                strcpy(data[i].phone_number,data[i+1].phone_number);
                strcpy(data[i].sex,data[i+1].sex);
                strcpy(data[i].old,data[i+1].old);
            }
        }
        strcpy(data[SIZE-1].name,"");
        strcpy(data[SIZE-1].phone_number,"");
        strcpy(data[SIZE-1].sex,"");
        data[SIZE-1].old = 0;
        return len-1;
    }
}
int add_data(struct person *data,int len,int vip){
    printf("name: ");
    scanf("%s",data[len].name);
    printf("phone_number: ");
    scanf("%s",data[len].phone_number);
    printf("sex: ");
    scanf("%s",data[len].sex);
    printf("old: ");
    scanf("%d",&data[len].old);
    data[len].vip_number = vip;
    printf("Your vip number is: %d\n",vip);
    return len + 1;
}
int search_data(struct person *data,int len){
    char search[10];
    int fin = 0;
    printf("Enter the name you want to search");
    scanf("%s",search);
    for(int i=0; i<len; i++){
        if(strcmp(search,data[i].name) == 0){
            fin = 1;
            printf("name: %s\n",data[i].name);
            printf("phone_number: %s\n",data[i].phone_number);
            printf("sex: %s\n",data[i].sex);
            printf("old: %d\n",data[i].old);
        }
    }if(fin == 0){
        printf("Not Found\n");
    }
    return 0;
}
int search(struct person *data,int len){
    int search = 0;
    int minstep = 0;
    int maxstep = len;
    printf("Enter your VIP number: \n");
    scanf("%d",&search);
    while(1){
        int searchstep = (int)(maxstep+minstep)/2;
        //printf("search step: %d\n",searchstep);
        if(data[searchstep].vip_number == search){
            printf("data searched:\n");
            printf("VIP Number: %d\n",data[searchstep].vip_number);
            printf("name: %s\n",data[searchstep].name);
            printf("phone_number: %s\n",data[searchstep].phone_number);
            printf("sex: %s\n",data[searchstep].sex);
            printf("old: %d\n",data[searchstep].old);
            break;
        }else if(data[searchstep].vip_number > search){
            maxstep = searchstep-1;
        }else if(data[searchstep].vip_number < search){
            minstep = searchstep+1;
        }if(minstep > SIZE+1 || maxstep < 1){
            printf("not found\n");
            break;
        }
    };
    return 0;
}
int main(void){
    struct person company[SIZE];
    reset_data(company);
    char choose;
    int len = 0;
    int run = 1;
    int vip = 1;
    while(run == 1){
        menu();
        scanf("%s",&choose);
        switch (choose){
            case '1':
                len = reset_data(company);
                break;
            case '2':
                len = add_data(company,len,vip);
                vip+=1;
                break;
            case '3':
                show_data(company,len);
                break;
            case '4':
                printf("The number of array you want to delete: ");
                int delete = 0;
                scanf("%d",&delete);
                len = delete_data(company,delete,len);
                break;
            case '5':
                //search_data(company,len);
                search(company,len);
                break;
            case '6':
                return 0;
                //break;
        default:
            printf("This is Error\n");
            break;
        }
        //while(getchar() != '\n');
    };
    return 0;
}//hw:1.輸出特定資料，用name查2.debug delete data