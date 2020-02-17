#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>  //Header file for sleep(). man 3 sleep for details. 
#include <pthread.h> 
  
// A normal C function that is executed as a thread  
// when its name is specified in pthread_create() 
void *myThreadFun(void *vargp) 
{ 
	long long *limit_ptr = (long long*) vargp;
	long long limit = *limit_ptr;
	sleep(1); 
	printf("You entered: %lld\n", limit);
	printf("Printing GeeksQuiz from Thread \n"); 
	return NULL; 
} 
   
int main() 
{ 
	// Initialise random number evertime
	srand(time(NULL));
	int rows = 3;
	int columns = 3;
	/*
		printf("Please enter either 2 or 3 for how many rows you want:");
		scanf("%d", &rows);  
		printf("Rows = %d",rows);
		printf("Please enter either 2 or 3 for how many columns you want:");
		scanf("%d", &columns);  
		printf("Rows = %d",columns);
	*/

	int matA[rows][columns]; 
	int matB[rows][columns];

	// Generating random values in matA and matB 
    	for (int i = 0; i < rows; i++) 
	{ 
	        for (int j = 0; j < columns; j++) 
		{ 
            		matA[i][j] = rand() % 10; 
            		matB[i][j] = rand() % 10; 
        	} 
    	} 

	// Displaying matA 
    	printf("\nDisplaying matA: \n");
   	for (int i = 0; i < rows; ++i)
        	for (int j = 0; j < columns; ++j) 
		{
            		printf("%d   ", matA[i][j]);
            		if (j == columns - 1) 
			{
                		printf("\n\n");
            		}
        }	 
  
	// Displaying matB

	/*
		long long limit = 5;
		pthread_t thread_id; 
		printf("Before Thread\n"); 
		pthread_create(&thread_id, NULL, myThreadFun, &limit); 
		pthread_join(thread_id, NULL); 
		printf("After Thread\n"); 
		exit(0); 
	/*


/*	// Displaying the result matrix 
    	cout << endl 
        << "Multiplication of A and B" << endl; 
    		for (int i = 0; i < MAX; i++) 
		{ 
        		for (int j = 0; j < MAX; j++)  
            		cout << matC[i][j] << " ";         
        		cout << endl; 
    		} 
*/
}
