#include <stdio.h>
    void main()
    {
 
        long int ARR[10], OAR[10], EAR[10];
        int i, j = 0, k = 0, n;
 
        printf("Enter the size of array AR ");
        scanf("%d", &n);
 
        printf("Enter the elements of the array ");
        for (i = 0; i < n; i++)
        {
            scanf("%ld", &ARR[i]);
            fflush(stdin);
        }
 
        /*  Copy odd and even elements into their respective arrays */
 
        for (i = 0; i < n; i++)
        {
            if (ARR[i] % 2 == 0)
            {
                EAR[j] = ARR[i];
                j++;
            }
            else
            {
                OAR[k] = ARR[i];
                k++;
            }
        }

        //spit out the arrays with even and odd integers separately 
        printf("The elements of OAR are ");
        for (i = 0; i < k; i++)
        {
            printf("%d ", OAR[i]);
        }
 
        printf("\nThe elements of EAR are ");
        for (i = 0; i < j; i++)
        {
            printf("%d ", EAR[i]);
        }
 
    }