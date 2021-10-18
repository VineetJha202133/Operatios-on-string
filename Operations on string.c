#include <stdio.h>
#include <string.h>
  
int main()
{
    printf("(i)\n");
    char strInp[50];
    int a;
    printf("Enter the String: ");
    scanf("%s", strInp);
    for (a = 0; strInp[a] != '\0'; ++a);
    printf("Length of Str: %d\n", a);
 
    printf("\n(ii)\n");
    char str1[50], str2[50], i, j;
    printf("\nEnter first string: ");
    scanf("%s",str1);
    printf("Enter second string: ");
    scanf("%s",str2);
    for(i=0; str1[i]!='\0'; ++i); 
    for(j=0; str2[j]!='\0'; ++j, ++i)
    {
      str1[i]=str2[j];
    }
    str1[i]='\0';
    printf("\nOutput: %s",str1);
    
    printf("\n(iii)\n");
    printf("We will reverse the string entered in first part: %s", strInp);
    printf("\nReversed string: ");
    for(int i = a-1; i >= 0; i--){
        printf("%c",strInp[i]);
    }

    printf("\n(iv)\n");
    char s1[1000],s2[1000];  
    int v;
 
    printf("Enter any string: ");
    scanf("%s", s1);
    for(v=0;s1[v]!='\0';v++)
    {
    	s2[v]=s1[v];
	}
	s2[v]='\0';
 
    printf("original string s1='%s'\n",s1);
    printf("copied string s2='%s'",s2);
    
    return 0;
}
