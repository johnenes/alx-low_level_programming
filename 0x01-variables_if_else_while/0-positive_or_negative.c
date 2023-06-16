#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
* main - Betty style 
* Discription: The variable n will store a different value every time you will run this program
* Return: 0 (Success)
*/
int main(){
	int n;
	srand(time(0)); 
	n = rand()-RAND_MAX/2;
	printf("The result of the number :%d\n",n);
	if(n>0){
	    printf("is positive\nt");
	}else if(n<0){
	     printf("is negative\n");
	}else{
	     printf("is zero\n");
	}	
	 return (0);
}
