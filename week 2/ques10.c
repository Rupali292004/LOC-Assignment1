#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[100]; 
    int i,k,alpha=0,digit=0,spchar=0;
 
    printf("Enter  the string : ");
    gets(s);

    k=strlen(s);
     
    for(i=0;i<k;i++)  {
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
          alpha++;
        else if(s[i]>=48 && s[i]<=57)
          digit++;
        else
          spchar++;
 
 	}
 	
     
    printf("Alphabets = %d\n",alpha);
    printf("Digits = %d\n",digit);
    printf("Special characters = %d", spchar);
    return 0;
}