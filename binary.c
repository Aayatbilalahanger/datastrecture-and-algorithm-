#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50}, lw = 0, up = 4, f = 0, item, mid;
    printf("search element");
    scanf("%d", &item);
    while (lw <= up)
    {
        mid = (lw + up) / 2;
        if (a[mid] == item)
        {
            f = 1;
            break;
        }
        if (a[mid] < item)
        {
            lw = mid + 1;
        }
        else
        {
            up = mid - 1;
        }
    }
    if (f == 1)
    {
        printf("location found %d", mid);
    }
    else
    {
        printf("location not found");
    }
}