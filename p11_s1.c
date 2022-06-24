#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 10
int main(void)
{
	double x[N], y[N];
	int i;
	FILE* fp;
	fp = fopen("data1.txt", "r");
	for (i = 0; i < N; i++)
	{
		fscanf(fp, "%lf,%lf\n", &x[i], &y[i]);
		printf("x=%f,y=%f\n", x[i], y[i]);
	}
	fclose(fp);
	return 0;
}