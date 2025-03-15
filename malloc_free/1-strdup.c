#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string which is a duplicate of str
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if memory allocation fails
 */
char *_strdup(char *str)
{
    char *t;
    unsigned int i, length = 0;

    if (str == NULL)
        return (NULL);

    /* Obtener la longitud de la cadena */
    while (str[length] != '\0')
        length++;

    /* Asignar memoria (incluye espacio para el terminador nulo) */
    t = malloc(sizeof(char) * (length + 1));
    if (t == NULL)
        return (NULL);

    /* Copiar la cadena */
    for (i = 0; i < length; i++)
        t[i] = str[i];

    /* Agregar el terminador nulo */
    t[length] = '\0';

    return (t);
}
