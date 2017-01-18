#include <stdio.h>

int main(){
	
	int first = 1;
	int second = 1;
	int next = 0;
	int sum = 0;
	
	while(second < 4000000){
		
		next = first + second;
		first = second;
		second = next;
		
		if((next % 2) == 0){
			sum = sum + next;
		}
		
	}
	
	printf("%d\n", sum);
	
}