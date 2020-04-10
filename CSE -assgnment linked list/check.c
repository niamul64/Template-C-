#include<stdio.h>
struct info{
int value;
int *link;
};
int main() {
    struct info *head=NULL,*tail=NULL;

    int n=3,ii;
    for (ii=0;ii<5;++ii) {
        struct info *st= malloc(sizeof(struct info));
        st->value= ii;
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

    struct info *i;
    for(i=head;i!=NULL;i=i->link)
    {
        printf("%d\n",i->value);
    }


    return 0;
}
