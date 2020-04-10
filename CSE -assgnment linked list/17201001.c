#include<stdio.h>


struct doc
{
    int p;
    int *q;
};
struct doc *top,*bottom;
struct doc *i;
int total;
void Insert()
{


    printf("insert the value:  ");
    struct doc *in= malloc(sizeof(struct doc));
    scanf("%d",&in->p);
    in->q= NULL;

    if (top==NULL)
    {
        top= in;
    }
    if (bottom==NULL)
    {
        bottom= top;
    }
    else
    {
        bottom->q= in;
        bottom= bottom->q;
    }
    total++;

}
void Delete()
{
    int x,j;
    struct doc *k;
    printf("enter the value:  ");
    scanf("%d",&x);
    for(i=top,j=1; i!=NULL; i=i->q,j++)
    {
        if(x==(i->p) && j==1)
        {

            top=i->q;
            break;
        }
        else if(x==(i->p) && j==total)
        {
            k->q=i->q;
            bottom=k;
            break;
        }
        else if(x==(i->p))
        {
            k->q=i->q;

        }

        k=i;
    }
    total--;
}
void Print()
{

    for(i=top; i!=NULL; i=i->q)
    {
        printf("%d\n",i->p);
    }
}

int main()
{
    total=0;

    int op;

    top=NULL;
    bottom=NULL;
    while(1)
    {
        printf("1.insert value\n");
        printf("2.delete value\n");
        printf("3.print values\n");
        printf("4.exit\n");
        printf("\nOperation number:");

        scanf("%d",&op);
        printf("\n");

        if(op==1)
        {
            Insert();
        }
        if(op==2)
        {
            Delete();
        }

        if(op==3)
        {
            Print();
        }
        if(op==4)
            break;

        printf("\n");
    }
    return 0;
}

