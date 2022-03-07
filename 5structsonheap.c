#include<stdio.h>
#include<stdlib.h>
struct stu 
{
    int data;
};
void print_struct(struct stu *,int);
int main()
{
    void (*fp)(struct stu *,int n);
    int i,n;
    printf("enter size of structure array: ");
    scanf("%d",&n);
    struct stu *s;
    s=(struct stu *)malloc(n*sizeof(struct stu));
    printf("enter a data: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&(s+i)->data);
    }
    fp=&print_struct;
    fp(s,n);
    free(s);
    return 0;
}

void print_struct(struct stu *s,int n)
{
    int i;
    printf("Data in a structure: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",(s+i)->data);
    }
}


