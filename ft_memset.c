/* void *s로 배열의 시작 주소를 받아오게 되는데  */
void *ft_memset(void *s, int c, size_t n)
{
    int i;

    i = 0;
    while (i < n && s[i])
    {
        s[i] = c;
        i++;
    }
    return (s);
}