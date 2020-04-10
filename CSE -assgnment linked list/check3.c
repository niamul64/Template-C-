#include<stdio.h>
struct info{
int value;
int *link;
};

    struct info *head,*tail;
    int n=3,ii;
    struct info *i;

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


}
void delete_value()
{
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


