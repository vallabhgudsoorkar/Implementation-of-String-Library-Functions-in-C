

#include<stdio.h>

// strncat_new function accept starting address of a string in a pointer.
char* strncat_new(char *dest, const char *src, unsigned int no)
{
// Create a temporary pointer of traversal purpose.
char *temp1 = src;
char *temp2 = dest;

// Check whether string is empty or not
if(src == NULL || dest == NULL)
{
return 0;
}

// Traverse the source string till '\0'
while(*temp1 != '\0')
{
++temp1;
}

// Append the contents of destimnation string at the end of source string
while((*temp2 != '\0') && (no != 0))
{
*temp1 = *temp2;
++temp1;
++temp2;
--no;
}

// Append \0 at the end of concatenated string
*temp1 = '\0';

// Return the base address of concatenated string
return src;
}

int main()
{
char string1[100],string2[100];
char *d = NULL;
int no = 0;

// Accept the string from user
printf("Enter the source string\n");
gets(string1);

printf("Enter the destination string\n");
gets(string2);

printf("Enter number of elements to concatenate at destination string\n");
scanf("%d",&no);

d = strncat_new(string2, string1, no);
printf("Concatenated string is %s\n",string1);

return 0;
}