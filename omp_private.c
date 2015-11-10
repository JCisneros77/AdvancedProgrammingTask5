#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	srand(time(NULL));
	int var = 25000;
	printf("Se inicializa var = %d\n",var);
	#pragma omp parallel num_threads(5) private(var) 
	{
		printf("Soy el hilo = %d y mi var esta inicializada en = %d\n",omp_get_thread_num(),var);
   		var = rand() % 1000;
   		printf("Soy el hilo = %d y ahora mi var = %d\n",omp_get_thread_num(),var);
	}

	printf("Al final la var = %d\n",var);
	return 0;
}