#include<stdio.h>
void main()
{
	int n;
	printf("How many numbers you want to enter\n");
 	scanf("%d", &n);
	int a[n], b, i, j, k, l;
	for (i = 0; i < n; i ++) {
 		scanf("%d", &a[i]);	
	}

	for (j = 0; j <n - 1; j ++) {
		b = j;
		for(k = j; k < n - 1; k ++) {
			if (a[b] > a[k+1])
			{
				b = k+1;
			}
 		}	
		//printf("b%db\n", b);
		int temp = a[b];
		a[b] = a[j];
		a[j] = temp;	
	}
	for (l = 0; l < n; l ++) {
		printf("%d ", a[l]);
	}
	printf("\n");
}

