/*
  I got this randRange code from
  http://www.cs.yale.edu/homes/aspnes/pinewiki/attachments/C(2f)Randomization/randRange.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

/* return a uniform random value in the range 0..n-1 inclusive */
int
randRange(int n)
{
    int limit;
    int r;

    limit = RAND_MAX - (RAND_MAX % n);

    while((r = rand()) >= limit);

    return r % n;
}
