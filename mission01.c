#include <stdio.h>


void output (int n)
{
	int count, sum;

	if(n == 0)
		return ;
	else
	{
		scanf("%d", &count);
		sum = calculate (0,count);
		printf("%d\n",sum);
		output(n-1);


	}

}

int calculate (int total , int count)
{
	int p;

	if(count == 0)
		return total;

	scanf("%d",&p);
	if(p < 0)
		return calculate (total , count - 1);
	else
		return calculate (total + (p*p) , count - 1);
}

int main ()
{
	int N;
	scanf("%d", &N);
	output(N);

	
	return 0;
}
