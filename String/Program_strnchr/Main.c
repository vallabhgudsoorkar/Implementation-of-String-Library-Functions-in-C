/*
    Problem statement : Accept string from user and one charcter return the last occurance of that character
 
 Input : "Hello"
            l
 Output : 3

 Input : "Hello World"
              l
 Output : 9
 
 Input : "AE Demo"
                e
 Output : 4

 Input : "AE Demo"
               H
 Output : -1

 */

#include<stdio.h>

int SearchLastOcc(char str[], char ch)
{
    int i = 0;
    int iPos = -1;

    if((str == NULL) || (ch == '\0'))
    {
        return -1;
    }
    
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iPos = i;
        }
        i++;
    }
    
    return iPos;
}

int main()
{
    char arr[30];
    char cValue = '\0';
    
    int iRet = 0;
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
        
    printf("Please enter the character\n");
    scanf(" %c",&cValue);
    
    iRet = SearchLastOcc(arr,cValue);
    
    if(iRet == -1)
    {
        printf("There is no such character\n");
    }
    else
    {
        printf("Last occurance of character at : %d\n",iRet);
    }
    
    return 0;
}






























