#include<stdio.h>
#include<string.h>

struct employee{
    int eid;
    char ename[20];
    double sal;
} typedef employee;

//union: is a userdef datatype which uses primitive data-type members,
//the highest sized union-member is allocated as the memory for all the union members
//and each data-member is accessed only once.
//((member)read-write-erase-next(member)-read-write-erase) union execution seq.
union Emp{
    int eid;
    char ename[20];
    double sal;
} typedef Emp; 


int main(){
    printf("size of struct=%d\n",sizeof(employee));
    printf("size of union=%d\n",sizeof(Emp));
    Emp e1;
    Emp e2;
    e1.eid=110;
    e2.eid=120;
    printf("emp_id=%d\n",e1.eid);
    printf("emp_id=%d\n",e2.eid);
    char name[20]="prajwal";
    strcpy(e1.ename,name);
    printf("ename=%s\n",e1.ename);
    char name1[20]="nilesh";
    strcpy(e2.ename,name1);
    printf("ename=%s\n",e2.ename);
    e1.sal=25000.00;
    e2.sal=45000.00;
    printf("salary=%lf\n",e1.sal);
     printf("salary=%lf\n",e2.sal);
    return 0;
}