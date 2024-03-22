#include <unistd.h>

void	ft_putchar(char c);
void	borderlines(int x);
void	middlelines(int x);
void	yline(int x, int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Please use numbers above 0!", 27);
	}
	else
	{
		yline(x, y);
	}
}

void	toplines(int x)
{
	int		i;

	i = 0;
	ft_putchar('/');
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x >= 2)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	middlelines(int x)
{
	int		i;

	i = 0;
	ft_putchar('*');
	while (i < x - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (x >= 2)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	bottomlines(int x)
{
	int	i;

	i = 0;
	ft_putchar('\\');
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x >= 2)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	yline(int x, int y)
{
	int	i;

	i = 0;
	toplines(x);
	while (i < y - 2)
	{
		middlelines(x);
		i++;
	}
	if (y >= 2)
	{
		bottomlines(x);
	}
}
