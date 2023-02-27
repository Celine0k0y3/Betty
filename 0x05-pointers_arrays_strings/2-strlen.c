/**
 * _strlen - find lenght of a string
 * @s: pointer to the string to check
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	i++;

	return (i);
}
