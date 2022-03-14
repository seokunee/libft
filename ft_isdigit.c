/* 10진수인지 아닌지 판단 */
int ft_isdigit(int c) 
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}