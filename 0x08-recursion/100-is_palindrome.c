#include "main.h"
/**
 * _strlen_recursion - returns strlen
 * @s: char tested
 * Return: 0
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

else
return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - Compares two strings
 * @s: String char
 *Return: 1
 *@left: int
 *@right: int
 */

int compare_string(char *s, int left, int right)
{
if ((*s + left) == (*s + right))
{
if (left == right || left == right + 1)
{
return (1);
}
return (0 + compare_string(s, left + 1, right - 1));
}
return (0);
}

/**
 * is_palindrome - palindrome letters
 * @s: string tested
 * Return: 1
 */

int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
