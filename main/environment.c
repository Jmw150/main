#include <stdio.h>
 
#define JOBS 12
#define jobs(a) for (switch_to(a = 0); a < JOBS || !printf("\n"); switch_to(++a))
typedef struct { int seq, cnt; } env_t;
 
env_t env[JOBS] = {{0, 0}};
int *seq, *cnt;
 
void hail()
{
	printf("% 4d", *seq);
	if (*seq == 1) return;
	++*cnt;
	*seq = (*seq & 1) ? 3 * *seq + 1 : *seq / 2;
}
 
void switch_to(int id)
{
	seq = &env[id].seq;
	cnt = &env[id].cnt;
}
 
int main()
{
	int i;
	jobs(i) { env[i].seq = i + 1; }
 
again:	jobs(i) { hail(); }
	jobs(i) { if (1 != *seq) goto again; }
 
	printf("COUNTS:\n");
	jobs(i) { printf("% 4d", *cnt); }
 
	return 0;
}

/*
1   2   3   4   5   6   7   8   9  10  11  12
   1   1  10   2  16   3  22   4  28   5  34   6
   1   1   5   1   8  10  11   2  14  16  17   3
   1   1  16   1   4   5  34   1   7   8  52  10
   1   1   8   1   2  16  17   1  22   4  26   5
   1   1   4   1   1   8  52   1  11   2  13  16
   1   1   2   1   1   4  26   1  34   1  40   8
   1   1   1   1   1   2  13   1  17   1  20   4
   1   1   1   1   1   1  40   1  52   1  10   2
   1   1   1   1   1   1  20   1  26   1   5   1
   1   1   1   1   1   1  10   1  13   1  16   1
   1   1   1   1   1   1   5   1  40   1   8   1
   1   1   1   1   1   1  16   1  20   1   4   1
   1   1   1   1   1   1   8   1  10   1   2   1
   1   1   1   1   1   1   4   1   5   1   1   1
   1   1   1   1   1   1   2   1  16   1   1   1
   1   1   1   1   1   1   1   1   8   1   1   1
   1   1   1   1   1   1   1   1   4   1   1   1
   1   1   1   1   1   1   1   1   2   1   1   1

COUNTS:
   0   1   7   2   5   8  16   3  19   6  14   9

*/