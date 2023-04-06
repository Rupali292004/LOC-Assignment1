#include<stdio.h>
int main(){

    int a[100],i,n;
   
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     
    int b[n];
  
    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }
    printf("The first array is:");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("The second array is:");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}
Footer
