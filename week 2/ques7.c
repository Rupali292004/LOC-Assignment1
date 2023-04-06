#include<stdio.h>

int main(){
int arr[]={1,2,-9,-6,4,2}; 
int j=0;
for(int i=0;i<6;i++){
    if(arr[i]<0){ 
        if(i!=j){
            int temp=arr[i]; 
            arr[i]=arr[j]; 
            arr[j]=temp;
        }
        j++;
    }
}
for(int i=0;i<6;i++){
    printf("%d ", arr[i]);
}
}
Footer
