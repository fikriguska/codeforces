#include <stdio.h>
#include <math.h>

int main()
{
	double m, n, a, total;
	scanf("%lf %lf %lf", &m, &n, &a);
	
	total = ceil(m/a)*ceil(n/a);
	
	printf("%0.lf\n", total);
}
