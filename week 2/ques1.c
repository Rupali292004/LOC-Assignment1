
#include <stdio.h>

int main(){
	int n, i, num, occr = 0;

	printf("Enter the Array size = ");
	scanf("%d", &n);

	int arr[n];
	
	printf("Enter the %d elements : ", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Enter the Item to Know = ");
	scanf("%d", &num);

	for (i = 0; i < n; i++)
	{
		if (arr[i] == num)
		{
			occr++;
		}
	}

	printf("%d Occurred %d Times.\n", num, occr);
}
