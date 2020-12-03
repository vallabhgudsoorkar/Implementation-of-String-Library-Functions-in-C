
#include<stdio.h>
#include<string.h>

// strncmp_new function accept starting address of a string in a pointer.
int strncmp_new(const char *str1, const char *str2 ,unsigned int no)
{
// Create a temporary pointer of traversal purpose.
char *temp1 = str1;
char *temp2 = str2;

// Check whether string is empty or not
if(str1 == NULL || str2 == NULL)
{
return NULL;
}

// Traverse the source string till '\0'
while(*temp1 && *temp2 && no!=0)
{
if(*temp1==*temp2)
{
temp1++;
temp2++;
--no;
}

else
{
if(*temp1 != *temp2)
{
return (*temp1 - *temp2);
}
}

}

return 0;
}

int main()
{
char string1[100],string2[100];
int no = 0;

// Accept the string from user
printf("Enter the source string to compaire\n");
gets(string1);

printf("Enter the destination string to to compaire\n");
gets(string2);

printf("Enter number characters to compaire\n");
scanf("%d",&no);

no = strncmp_new(string1, string2, no);
printf("\n%d\n\n",no);
if(no == 0)
{
printf("Both the strings are equal\n");
}
else if(no < 0)
{
printf("First string is smaller than the second\n");
}
else
{
printf("First string is larger than the second\n");
}

return 0;
}