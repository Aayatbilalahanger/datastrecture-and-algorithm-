#include <stdio.h>
#include <stdlib.h>
int queue[5], f = -1, r = -1;
void rare();
void front();
void show();
void main()
{
    int ch;
    printf("[1].REARE\n");
    printf("[2].FROENT\n");
    printf("[3].SHOW\n");
    printf("[4].EXIT\n");
    while (1)
    {
        printf("enter choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            rare();
            break;
        case 2:
            front();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("invalid choice\n ");
        }
    }
}
void rare()
{
    int item;
    if (r == 5 - 1)
    {
        printf("queue is full\n");
    }
    else
    {
        if (f == -1)
        {
            f = 0;
        }
    }
    printf("insert element in queue:\n");
    scanf("%d", &item);
    r = r + 1;
    queue[r] = item;
}
void front()
{
    if (f == -1)
    {
        printf("queue is empety\n");
    }
    else
    {
        printf("DELETED %d", queue[f]);
        f = f + 1;
    }
}
void show()
{
    int i;
    if (f == -1)
    {
        printf("queue is full\n");
    }
    else
    {
        printf("queue elements:\n");
        for (i = f; i <= r; i++)
        {
            printf("%d \t", queue[i]);
        }
    }
}
