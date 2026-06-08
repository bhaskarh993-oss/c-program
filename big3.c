#include <stdio.h>
void biggest3()
{
    int A, B, C;

    printf("Enter thr number A, B and C; ");
    scanf("%d %d %d", &A, &B, &C);

    if (A >= B && A >= C)
	    printf("%d id the larg." , A);
    else if (B >= A && B >= C)
            printf("%d id the larg." , B);
    else
         printf("%d id the larg." , C);
    //return 0;
}



