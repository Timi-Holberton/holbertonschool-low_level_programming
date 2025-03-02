int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    /* Première boucle : pour parcourir les signes et autres caractères avant le nombre */
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '-')
        {
            sign *= -1; /* On inverse le signe */
        }
        else if (s[i] == '+')
        {
            /* On ne fait rien pour '+' */
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            /* On a trouvé le début du nombre, on sort de cette boucle pour commencer à lire les chiffres */
            break;
        }
    }

    /* Deuxième boucle : pour lire les chiffres du nombre */
    for (; s[i] >= '0' && s[i] <= '9'; i++)
    {
        result = result * 10 + (s[i] - '0');
    }

    return result * sign;
}
