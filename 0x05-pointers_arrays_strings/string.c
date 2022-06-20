#include <stdio.h>
#include <string.h>

int main(void)
{
char *s = "The boy";
int len = _strlen(s);
printf("our lenght: %d\n", len);
}
int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
{
	len++;
return (len + 1);
}
}
