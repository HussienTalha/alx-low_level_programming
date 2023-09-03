/**
 * _islower - checks if lower case or upper case
 * @c: the ascii of the letter
 * Return: return 1 if lowercase and 0 if uppercase
 */
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
if (c > 64 && c < 91)
return (0);
return (0);
}
