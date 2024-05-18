#include <sys/time.h>
#include <stdio.h>

int main(void)
{
	struct timeval	time;
	struct timeval	tmp;

	int i;
	i = 0;

	gettimeofday(&time, NULL);
	gettimeofday(&tmp, NULL);
	while (tmp.tv_usec > time.tv_usec + 1000)
	{
		i++;
		gettimeofday(&tmp, NULL);
	}
	dprintf(2, "i = %d\n", i);
	return 0;
}
