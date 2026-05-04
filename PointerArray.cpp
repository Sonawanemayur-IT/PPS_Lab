#include <stdio.h>

int main(){
	
	int array[5] = {9 , 19 , 29 , 39 , 49};
	int *ptr;
	int i ;
	
	ptr = array;
	printf("Accesing array elements using pointers :\n");
	for(i = 0 ; i < 5 ; i++)
	{
		printf("Element %d = %d\n" , i , *(ptr + i));
	}
	
	return 0;
}
