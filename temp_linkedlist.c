#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void prepend(struct Node **head_ref, int x)
{
    struct Node *temp = (struct Node*)calloc(1, sizeof(struct Node));
    temp->data = x;
    temp->next = *head_ref;
    *head_ref = temp; 
}

void append(struct Node **head_ref, int x)
{
    struct Node *temp = (struct Node*)calloc(1, sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;

    struct Node *trav = (struct Node*)calloc(1, sizeof(struct Node));
    trav = *head_ref;

    if(*head_ref ==  NULL)
        *head_ref = temp;

    else
    {
        while(trav->next != NULL)
        {
            trav = trav->next;

        }
        trav->next = temp;    
    }
}

void insert(struct Node **head_ref, int dat, int prev_data)
{
    struct Node *temp = (struct Node*)calloc(1, sizeof(struct Node));
    temp->data = dat;

    struct Node *trav = (struct Node*)calloc(1, sizeof(struct Node));
    struct Node *prev = (struct Node*)calloc(1, sizeof(struct Node));
    trav = *head_ref;

    while(trav->data != dat)
    {
        trav = trav->next;
    }
    temp->next = trav->next;
    trav->next = temp;  
}

void traverse(struct Node *head_ref)
{
    struct Node *temp = (struct Node*)calloc(1, sizeof(struct Node));
    temp = head_ref;

    printf("\n\n");
    while(temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}

void search(struct Node **head_ref, int to_search)
{
    struct Node *temp = (struct Node*)calloc(1, sizeof(struct Node));
    temp = *head_ref;

    while(temp->data != to_search)
    {
        if(temp == NULL)
            break;
        temp = temp->next;
    }
    if(temp->data == to_search)
        printf("Match found\n");
    else
        printf("OOPS!! No match\n");
}

void item_count(struct Node **head_ref)
{
    struct Node *temp = (struct Node*)calloc(1, sizeof(struct Node));
    temp = *head_ref;

    int count = 0;
    if(*head_ref == NULL)
        printf("Number of items in Linked list are NONE\n");
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }    
        printf("Number of items in Linked list are %d\n", count);
    }
}

void delete(struct Node **head_ref, int to_del)
{
    struct Node *temp = (struct Node*)calloc(1, sizeof(struct Node));
    struct Node *prev = (struct Node*)calloc(1, sizeof(struct Node));
    temp = *head_ref;

    if(*head_ref == NULL)
        printf("There are no elements to be deleted\n");
    else
    {
        while(temp->data != to_del)
        {
            if(temp == NULL)
                break;
            prev = temp;
            temp = temp->next;
        }
        if(temp->data == to_del)
        {
            prev->next = temp->next;
            free(temp);
        }
        else
        {
            printf("Node with value %d does not exist here\n", to_del);
        }
    }
}

void swap(struct Node **head_ref, int f_val, int l_val)
{
    struct Node *temp = (struct Node*)calloc(1, sizeof(struct Node));
    temp = *head_ref;

    int flag = 0;
    if(*head_ref ==  NULL)
    {
        printf("There is nothing to be swapped you fool!!!\n");
        return;
    }

    else
    {
        while(temp->next != NULL)
        {
            if(temp->data == f_val)
            {
                temp->data = l_val;
                flag++;
            }
            else if(temp->data == l_val)
            {
                temp->data = f_val;
                flag++;
            }
            else if(flag == 2)
                break;
            temp = temp->next;
        }
    }
}

void reverse(struct Node **head_ref)
{
    struct Node *prev = (struct Node*)calloc(1, sizeof(struct Node));
    struct Node *temp = (struct Node*)calloc(1, sizeof(struct Node));
    struct Node *current = (struct Node*)calloc(1, sizeof(struct Node));

    temp = *head_ref;
    prev = NULL;

    if(*head_ref == NULL)
    {
        printf("Dude!! there is nothing to be reversed , first fill up the linked list\n");
    }
    else
    {
        while(temp->next != NULL)
        {
            current = temp;
            current->next = prev;
            prev = temp;
            temp = temp->next;
        }
        temp->next = prev;
        *head_ref = temp;
    }
}

void controller(struct Node **head)
{
    printf("Welcome to Linked list demonstration\n");
    while(1)
    {
        printf("**********MENU***********\n");
        printf("\t Press 1 for prepend\n\t Press 2 to append\n\t Press 3 to insert at given position\n\t Press 4 to traverse\n\t Press 5 to search\n\t Press 6 to print number of items\n\t Press 7 to delete node\n\t Press 8 to swap  nodes\n\t Press 9 to Reverse the linked list\n\tPress 10 to exit\n");
        int x;
        scanf("%d", &x);
        switch(x)
        {
            case 1: printf("Enter the number to prepend\n");
                    int to_prep;
                    scanf("%d", &to_prep);
                    prepend(head, to_prep);
                    break;
            case 2: printf("Enter the number to append\n");
                    int to_apn;
                    scanf("%d", &to_apn);
                    append(head, to_apn);
                    break;
            case 3: printf("Enter the number to insert\n");
                    int to_insrt;
                    scanf("%d", &to_insrt);
                    printf("Enter the element value to be inserted after\n");
                    int ind;
                    scanf("%d", &ind);
                    insert(head, to_insrt, ind);
                    break;
            case 4: traverse(*head);
                    break;
            case 5: printf("Enter the number to be searched\n");
                    int to_sear;
                    scanf("%d", &to_sear);
                    search(head, to_sear);
                    break;
            case 6: item_count(head);
                    break;
            case 7: printf("Enter the data to be deleted\n");
                    int data;
                    scanf("%d", &data);
                    delete(head, data);
                    break;
            case 8: printf("Enter value of first node to be swapped\n");
                    int f_ind;
                    scanf("%d", &f_ind);
                    printf("Enter the value of second node to be swapped\n");
                    int l_ind;
                    scanf("%d", &l_ind);
                    swap(head, f_ind, l_ind);
                    break;
            case 9: reverse(head);
                    break;
            case 10: exit(0);
            default: printf("You entered a wrong choice\n");
        }
    }
}

void dispose(struct Node **head_ref)
{
    struct Node *temp = (struct Node*)calloc(1, sizeof(struct Node));
    struct Node *current = (struct Node*)calloc(1, sizeof(struct Node));

    temp = *head_ref;

    if(*head_ref == NULL)
        return;
    else
    {
        while(temp != NULL)
        {
            current = temp;
            temp = temp->next;
            free(current);

        }
    }
}

int main()
{
    struct Node *head = (struct Node*)calloc(1, sizeof(struct Node));
    head = NULL;

    controller(&head);

    dispose(&head);

    return 0;
}