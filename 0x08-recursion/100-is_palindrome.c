#include "main.h"
#include "2-strlen_recursion.c"

/**
 * is_pali - function to check if the s is pali with recursion
 * @s: the string
 * @i: counter
 * @len: the lenght of s
 * Return: 0 or 1
 */
int is_pali(char *s, int i, int len)
{
	if (i < len && s[i] != s[len - i - 1])
		return (0);
	if (i >= len)
		return (1);
	return (is_pali(s, i + 1, len));
}
/**
 * is_palindrome - function to check if a string is palindrome
 * @s: the string to check
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen_recursion(s);

	if (*s == '\0')
		return (1);
	return (is_pali(s, i, len));
}
