#include <stdio.h>

int main(){
	int n, m, i= 0;

	printf("Enter the Array1 size = ");
	scanf("%d", &n);

	int arr1[n];
	
	printf("Enter the %d elements : ", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
 
	printf("Enter the Array2 size = ");
	scanf("%d", &m);

	int arr2[m];
	
	printf("Enter the %d elements : ", m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}

    int totsize = n+m;

    int Mgdarr[totsize];

    for(i=0; i<n; i++){
        Mgdarr[i]=arr1[i];
    }

    for(i=0; i< totsize; i++){
        Mgdarr[n+i]=arr2[i];
    }

    for(i=0; i< totsize; i++){
        printf("%d", Mgdarr[i]);
    }

    printf("\n");

    for(int i=0; i<totsize/2; i++){
        int firstvl=Mgdarr[i];
        int secval=Mgdarr[totsize-i-1];
        Mgdarr[i]=secval;
        Mgdarr[totsize-i-1]=firstvl;}

    for(i=0; i< totsize; i++){
        printf("%d", Mgdarr[i]);
    }
    
    return 0;
}