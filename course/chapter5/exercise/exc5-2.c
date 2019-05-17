#include <stdio.h> 
#include <stdlib.h>

int main() 
{ 
    int i, j, k, t; 
    int m, n;
    scanf("%d %d", &m, &n);
	printf("Input m: Input n: ");
    if (m > n)
    {
        t = m;
        m = n;
        n = t;
    }
    for (t = m; t <= n; ++t) 
    { 
        i = t / 100;
        j = t / 10 % 10;
        k = t % 10;
        if (t == i * i * i + j * j * j + k * k * k) 
        { 
            printf("%d\n", t); 
        } 
    }
    return 0;
}