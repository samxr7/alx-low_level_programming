#include"main.h"
/**
*_isupper -prog checks for uppercase charecter
*@c: variable text
*Return: Always 0.
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
