#include<stdio.h>
struct info{
  int value;
  int *link;
};
struct info a[100];
int total_num,n,i;
int *head;
void insert_values()
{
    i=0;
    printf("How many numbers you would like to input? :");
    scanf("%d",&n);
    total_num+=n;
    for(i;i<total_num;i++)
    {

        if(i!=0)
        {
            a[i-1].link=&a[i].value;

        }
        scanf("%d",&a[i].value);
        if(i==0)
        {
            head=&a[i].value;

        }

        a[i].link=NULL;
    }


}
void insert_more_value()
{

}
void delete_value()
{

}
void print_value()
{

}

int main()
{
    total_num=0;
    int op;
    insert_values();
    printf("\n\n");
    while(1){
    printf("1.insert more value\n2.delete value\n3.print values\n4.exit\n\nEnter the operation number:");
    scanf("%d",&op);

    if(op==1)
    {
        insert_more_value();
    }
    if(op==2)
    {
        delete_value();
    }

    if(op==3)
    {
        print_value();
    }
    if(op==4)
        break;
}
    return 0;
}
