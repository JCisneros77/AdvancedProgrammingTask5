#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));

	   int fac = 1;
   #pragma omp parallel for reduction(*:fac)
   		for(int n=2; n<=25; ++n)
     		fac *= n;

  		printf("Factorial: %d\n",fac);

	return 0;
}
