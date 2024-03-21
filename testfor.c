#include <stdio.h>

int main()
{
    int i, res, npass, nfail;

    npass = 0;
    nfail = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter result(1 = pass,2 = fail):");
        scanf("%d", &res);
        if (res == 1)
            npass++;
        else
            nfail++;
    }

    printf("Passed = % d \n", npass);
    printf("Failed = % d \n", nfail);
    return 0;
}
