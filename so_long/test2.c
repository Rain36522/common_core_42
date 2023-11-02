

#include <stdio.h>
#include <math.h>

int	main(void)
{
	double	x;
	double	y;
	double	z;

	printf("a\n");
	x = 1.0;
	y = 5667.9;
	z = 1.0;
	while (x < 2000000.0)
	{
		z = fmod(x, y);
		x += 0.1;
	}
	printf("b\n");
}