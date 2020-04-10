#include<stdio.h>
struct info{
int value;
int *link;
};

    struct info *head,*tail;

    struct info *i;
    int total_numbers;
void insert_value()
{


    printf("insert the value:  ");
    struct info *st= malloc(sizeof(struct info));
        scanf("%d",&st->value);
        st->link= NULL;

        if (head==NULL) {
            head= st;
        }
        if (tail==NULL) {
            tail= head;
        }
        else {
            tail->link= st;
            tail= tail->link;
        }
total_numbers++;

}
void delete_value()
{
    int x,j,m=0;
    struct info *k;
    printf("enter the value ,you want to delete :  ");
    scanf("%d",&x);
    for(i=head,j=1;i!=NULL;i=i->link,j++)
    {
        if(x==(i->value) && j==1)
        {

            head=i->link;
            m=1;
            break;
        }
        else if(x==(i->value) && j==total_numbers)
        {
            m=1;
            k->link=i->link;
                tail=k;
                break;
        }
        else if(x==(i->value))
        {
            m=1;
            k->link=i->link;

        }

        k=i;
    }
    if(m==1)
    total_numbers--;
}
void print_values()
{

    for(i=head;i!=NULL;i=i->link)
    {
        printf("%d\n",i->value);
    }
}

int main()
{
    total_numbers=0;

    int op;

    head=NULL;
    tail=NULL;
    while(1){
    printf("1.insert value\n2.delete value\n3.print values\n4.exit\n\nEnter the operation number:");
    scanf("%d",&op);
    printf("\n");

    if(op==1)
    {
        insert_value();
    }
    if(op==2)
    {
        delete_value();
    }

    if(op==3)
    {
        print_values();
    }
    if(op==4)
        break;

    printf("\n");
}
    return 0;
}

