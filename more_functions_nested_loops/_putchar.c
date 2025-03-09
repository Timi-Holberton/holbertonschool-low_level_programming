#include <unistd.h>

/*
 * _putchar - Écrit le caractère c dans stdout
 * @c: Le caractère à imprimer
 *
 * Return: En cas de succès, 1 est retourné.
 * En cas d'erreur, -1 est retourné, et errno est défini.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));  /* Écrit le caractère dans stdout */
}
