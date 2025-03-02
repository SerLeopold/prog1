#include <stdio.h>

int main()
{
    int n1;
    int n2;
    printf("Add meg az első számot: ");
    scanf("%d", &n1);
    printf("Add meg a második számot: ");
    scanf("%d", &n2);

    if (n1>n2)
    {
        printf("%d > %d", n1, n2);
    }
    else if (n1<n2)
    {
        printf("%d < %d", n1, n2);
    }
    else
    {
        printf("%d = %d", n1, n2);
    }

    return 0;
}
