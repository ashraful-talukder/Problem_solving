#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
struct node * head,*store;
int main()
{
    insert(2,1);
    insert(4,2);
    insert(6,3);
    insert(8,4);
    insert (10,2);
    print();
}
void insert(int d,int pos)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=NULL;
    if(pos==1)
    {
        head=temp;
        //store=temp;
    }
    else
    {
        int i;
        store=head;
        for(i=1; i<pos-1; i++)
        {
            store=store->next;
        }
        temp->next=store->next;
        store->next=temp;
    }
}
void print()
{
    struct node* temp= head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
