#include "main.h"
#include <stddef.h>

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0; 
int i = 0; 

while (s[i] != '\0')
{
if (strchr(accept, s[i]) != NULL)
{
count++;
}
else
{
break;
}
i++;
}

return (count); 
}
