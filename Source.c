/*
  
  1    1
 222  222
3333333333
  1    1  
 222  222 
3333333333
	  
*/


#include <stdio.h>
int main() {
	int n, i, j,riadok,stlpec;
	//scanf("%d", &n);
	scanf("%d %d %d", &n,&riadok,&stlpec);
	for (i = 1; i <= n; i++) 
	{
		for (int x = 0; x < riadok; x++)
		{
			for (int y = 0; y < stlpec; y++) 
			{
				for (j = 1; j <= 2 * n - 1; j++)
				{
					if (j <= n - i || j >= n + i)
						printf(" ");
					else
						printf("%d", i);
				}
			}
			
		}
	printf("\n");
	}

	return 0;
}