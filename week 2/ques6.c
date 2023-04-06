#include<stdio.h>
int main(){ 
int arr[]={1,7,5,3,1};
int MaxCount=0;
int MaxFreq;
for(int i=0;i<5;i++){
    int count=0; 
    for(int j=0;j<5;j++){
        int k=arr[i]; 
        if(arr[j]==k){
            count++;
}
    }
if (count >MaxCount){
    MaxCount=count;
MaxFreq = arr[i];
}
}
printf("The most frequent no is : %d and it has occured %d times",MaxFreq, MaxCount);
}
Footer
