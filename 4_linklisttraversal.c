#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

void linklisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element=%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 34;
    third->next = fourth;

    fourth->data = 44;
    fourth->next = NULL;

    linklisttraversal(head);

    return 0;
}