#include<stdio.h>
#include<string.h>
int main()    
{     
    int size;  
    
    char str[] = "Gaurav, 11Pandey... i1s go1od";
    size  =strlen(str); 
    char str1[size];
    printf("input string : %s\t\n",str); 

    int j=0; 
    
    for(int i=0; i<str[i] !='\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
        {
            str1[j] = str[i];
            j++;
        }
    }
    str1[j] = '\0';
    printf("\n\nAfter Done \n %s \n",str1);
    
    int start =0;
    int end = strlen(str1)-1;
    for(int i=0; i<str1[i] != '\0'; i++)
    {
        if(str1[start] != str1[end])
        {
            printf("Not Prime");
            return 0;
        }
        start++;
        end--;
    }
    printf("Prime");
    
    return 0;
    
    return 0;
}
