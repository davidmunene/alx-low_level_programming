#include "main.h"
#include <string.h>
/**
 * _strspn - Function to get the length of a prefix substring
 * @s: string to check
 * @accept: string to check against
 * Return: number of bytes to accept
 */

unsigned int _strspn(char *s, char *accept)

{
return (strspn(s, accept));
}
