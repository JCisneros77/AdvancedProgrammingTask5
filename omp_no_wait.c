#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	#pragma omp parallel num_threads(10)
 	{
   		#pragma omp for nowait
   			for(int n=0; n< 10; ++n)
     			sleep(rand() % 10 + 1);


     	printf("Soy el hilo %d y no me esperé a que acabaran los demas.\n",omp_get_thread_num());
     }
	return 0;
}