#include <stdio.h>
#include <pthread.h>

#define THREADS_MAX_AMOUNT	2
#define END_OF_A_LOOP		100

void *thread(void *args)
{
        for(int thread_cnt = 0; thread_cnt < END_OF_A_LOOP; thread_cnt++)
        {
                printf("thread current value is %d\n", thread_cnt);
        }
        pthread_exit(NULL);
}

int main(void)
{
        pthread_t threads[THREADS_MAX_AMOUNT];
		
		printf("Creating 2 threads\n");
        
        for (int i = 0; i < THREADS_MAX_AMOUNT; i++)
        {
                pthread_create(&threads[i], NULL, thread, NULL);
        }
        printf("Waiting for threads to finish execution\n");
		
        for (int j = 0; j < THREADS_MAX_AMOUNT; j++)
        {
                pthread_join(threads[j], NULL);
        }
        
        printf("Threads have finished their execution\n");
}
