#include<stdio.h>
#include<string.h>

//structure : collection of primitive data members
struct Stud{
    int s_id; //member
    char s_name[20];//member
    double s_marks;//member
}
typedef stud;

int main(){
    stud s1;
    s1.s_id=101;
    char name[20]="abc";
    strcpy(s1.s_name,name);
    s1.s_marks=78.00;

    printf("id=%d\n",s1.s_id);
    printf("name=%s\n",s1.s_name);
    printf("marks=%lf\n",s1.s_marks);

    //struct array
    //int arr[size];
    stud arr[5];
    for(int i=0;i<5;i++){
        printf("enter stud_id:");
        scanf("%d",&arr[i].s_id);
        printf("enter stud_name:");
        char temp[20];
        scanf("%s",&temp);
        strcpy(arr[i].s_name,temp);
        printf("enter stud_marks:");
        scanf("%lf",&arr[i].s_marks);
    }
    for(int i=0;i<5;i++){
        printf("stud_id:%d\n",arr[i].s_id);
        printf("stud_name:%s\n",arr[i].s_name);
        printf("stud_marks:%lf\n",arr[i].s_marks);
    }
    return 0;
}