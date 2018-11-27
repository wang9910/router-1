#include "read.h"
#include<fstream>
#define N 9

void ReadFile()
{
	int chart[N][N], i, j;
	ifstream r("route.txt");
	if (r.is_open()) {
		for (i = 0; i < N; i++)
			for (j = 0; j < N; j++)
				r >> chart[i][j];
		r.close();
	}
}
