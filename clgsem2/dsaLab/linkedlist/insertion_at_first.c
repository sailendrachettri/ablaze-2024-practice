#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList
{
    int data;
    struct LinkedList *next;
} NODE;

void create(NODE *);
void display(NODE *);
NODE *linear_search(NODE *, int);
void insertion(NODE *, int, int);

int main()
{
    int key, val;
    NODE *head;

    head = (NODE *)malloc(sizeof(NODE));
    if (head == NULL) {
        printf("Memory allocation failed.\n");
        return -1;
    }
    create(head);
    display(head);

    printf("Where do you want to insert? Enter the key: ");
    scanf("%d", &key);

    printf("Enter the value to insert: ");
    scanf("%d", &val);

    insertion(head, val, key);

    return 0;
}

void create(NODE *h)
{
    int x;

    printf("Enter a number (999 to stop): ");
    scanf("%d", &x);

    if (x != 999)
    {
        h->data = x;
        h->next = (NODE *)malloc(sizeof(NODE));
        if (h->next == NULL) {
            printf("Memory allocation failed.\n");
            exit(-1);
        }
        create(h->next);
    }
    else
    {
        h->next = NULL;
    }
}

void display(NODE *h)
{
    printf("Linked List: ");
    while (h != NULL)
    {
        printf("%d -> ", h->data);
        h = h->next;
    }
    printf("NULL\n");
}

NODE *linear_search(NODE *h, int val)
{
    while (h != NULL)
    {
        if (h->data == val)
        {
            printf("%d found in the list.\n", val);
            return h;
        }
        h = h->next;
    }
    printf("%d not found in the list.\n", val);
    return NULL;
}

void insertion(NODE *h, int val, int key)
{
    NODE *temp, *prev;

    temp = (NODE *)malloc(sizeof(NODE));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        exit(-1);
    }
    temp->data = val;

    if (key == h->data)
    {
        printf("Inserting at the beginning of the list.\n");
        temp->next = h;
        display(temp);
    }
    else
    {
        prev = linear_search(h, key);
        if (prev != NULL)
        {
            temp->next = prev->next;
            prev->next = temp;
            display(h);
        }
        else
        {
            int choice;
            printf("Do you want to insert at the end? (1 for yes, 2 for no): ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                while (h->next != NULL)
                {
                    h = h->next;
                }
                temp->next = NULL;
                h->next = temp;
                display(h);
                break;
            case 2:
                printf("Okay, see you again!\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
            }
        }
    }
}
