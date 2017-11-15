
#include "stdio.h"

int max_common_divisor(int p, int q)
{
    if (p < q)
    {
        int temp = q;
        q = p;
        p = temp;
    }

    if (q == 0)
    {
        return p;
    }
    else
    {
        int r = p % q;

        return max_common_divisor(q, r);
    }
}

int main(int argc, char *argv[])
{
    int p, q;

    while (1)
    {
        printf("please keyin data(eg. data1, data2):\r\n");
        scanf("%d, %d", &p, &q);
        printf("p = %d, q = %d, max_common divisor = %d...\r\n", p, q, max_common_divisor(p, q));
    }

    return 0;
}

