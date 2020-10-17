/* Single Linked list operations */

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *root = NULL;
int len;

void append(void);
void addatbegin(void);
void addatafter(void);
int length(void);
void display(void);
void deletenode(void);

void main()
{
    int ch;
    while(1)
    {
        printf("========= Single linked lists operation =========\n");
        printf("1. Append \n 2. Add at begin \n 3. Add at after \n 4. Length \n 5. Display \n 6. Delete \n 7. Quit \n");
        printf("Please enter your choice : \n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            append();
            break;
        case 2:
            addatbegin();
            break;
        case 3:
            addatafter();
            break;
        case 4:
            length();
            break;
        case 5:
            display();
            break;
        case 6:
            deletenode();
            break;
        case 7:
            exit(1);
        default:
            printf("Invalid choice entered (-_-) \n");
        }
    }
}
void append()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter node data :\n");
    scanf("%d",&temp->data);
    temp->link = NULL ;
    if (root == NULL ) // list is empty
    {
        root = temp;
    }
    else
    {
        struct node *p;
        p = root;
        while(p->link !=NULL)
        {
            p= p->link;
        }
        p->link=temp;
    }
}
int length()
{
    int count =0;
    struct node *temp;
    temp = root;
    while(temp!=NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}
void display()
{
    struct node *temp;
    temp=root;
    if(temp==NULL)
    {
        printf("List is empty \n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d-->",temp->data);
            temp = temp->link;
        }
        printf("\n\n");
    }
}
void deletenode(void)
{

}
void addatbegin(void)
{
}
void addatafter(void)
{
    struct node *temp, *p;
    int loc, i=1;
    printf("Enter location : \n");
    scanf("%d",&loc);
    len = lenght();
    if(loc>len)
    {
        printf("Invalid location entered\n");
        printf("Currently list having %d nodes",len);
    }
    else
    {
        while(i<loc)
        {
            p=p->link;
            i++;
        }
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter node data :\n");
        scanf("%d",&temp->data);
        temp->link = NULL ;
        temp->link = p->link;
        p->link = temp;
    }
}
