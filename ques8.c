#include <stdio.h> 
#include<string.h>
int main(){  
   int i,v=0,c=0;  
   char str[100];  
   printf("Enter the string:");
   gets(str);
   for(i = 0; i < strlen(str); i++){  
       if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {    
            v++;  
        }  
        else if(str[i] >= 'a' && str[i] <= 'z'){   
            c++;  
        }  
   }  
   printf("Number of vowels : %d\n", v);  
   printf("Number of consonant : %d", c);  
   return 0;  
}
Footer
