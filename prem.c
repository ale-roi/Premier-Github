#include <unistd.h>

int	ft_count(char *a)
{
	int b;
	b = 0;
	while (a[b])
		b++;
	return (b);
}

int	main(void)
{
	char *a = "premier git test";
	int b = ft_count(a);

	write(1, a, b);
	write(1, "\n", 1);
	return (0);
}
