#include <omp.h>
#include <stdio.h>

void function1();
void function2();
void function3();


int main(){
#pragma omp parallel num_threads(3) 
	{
        #pragma omp sections 
	{
                #pragma omp section
                    function1();
                
                  #pragma omp section
                	function2();
               
                  #pragma omp section
                  	function3();
    }
}
	return 0;
}

void function1(){
	printf("I'm thread %d executing function 1 \n",omp_get_thread_num());
}

void function2(){
	printf("I'm thread %d executing function 2 \n",omp_get_thread_num());
}

void function3(){
	printf("I'm thread %d executing function 3 \n",omp_get_thread_num());
}