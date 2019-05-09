#include <stdio.h>

int main()
{
	float a[12], s = 0;
	int i, j, k;
	for (i = 0; i < 12; ++i)
	{
		scanf("%f", &a[i]);
		s = s + a[i];
	}
	for (i = 0;i < 12; ++i)
	{
		k = a[i] / s * 100 + 0.5;
		printf("%d(%d%%)", i + 1, k);
		for (j = 0; j < k; ++j)
			printf("#");
		printf("\n");
	}
	return 0;
}
