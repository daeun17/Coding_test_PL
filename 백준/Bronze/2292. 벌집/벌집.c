#include<stdio.h>

int main()
{
	int Room = 1;
	int hexagon = 6;
	int Now = 0;
	int N = 0;
	scanf("%d", &N);

	N = N - 1;

	while ((N > Now))
	{
		Now = Now + (Room * hexagon);
		Room++;
	}

	printf("%d\n", Room);
}