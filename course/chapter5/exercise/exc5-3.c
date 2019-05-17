#include <stdio.h>
#include <string.h>

int intersection(int A[], int B[], int a, int b)
{
    int i, j, t;
    t = a;
    for (i = 0; i < a; ++i)
        for (j = 0; j < b; ++j)
        {
            if (A[i] == B[j])
            {
                A[t] = B[j];
                ++t;
            }
        }
        for (i = 0; i < t - a; ++i)
        {
          A[i] = A[a + i];
        }
        return t - a;
}
int main ()
{ 
    int A[50], B[50], a = 5, b = 5, t, i;
    for (i = 0; i < a; ++i)
        scanf("%d", &A[i]);
    for (i = 0; i < b; ++i)
        scanf("%d", &B[i]);
    t= intersection(A, B, a, b);
    printf("Please Enter Array A,5 digits: Please Enter Array B,5 digits: A B intersection is:");
    for (i = 0; i < t; ++i)
        printf("%d ", A[i]);
    return 0;
}
