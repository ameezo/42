void striter(char *s, void(*f)(char *))

void	striter(char *s, void (*f)(char *))
{
    if (s)
    {
        for (int i = 0; s[i]; i++)
        {
            f(&s[i]);
        }
    }
    return ;
}
