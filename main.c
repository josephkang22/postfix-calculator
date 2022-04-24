#include <stdio.h>
#include <string.h>

char input[100];
int len;
int stack[100];
int stack_index=0;

void push(int x) {
    stack[stack_index] = x;
    stack_index = stack_index+1;
}

int pop () {
    stack_index = stack_index-1;
    return stack[stack_index];
}

int main() {
	gets(input);
	len = strlen(input);
	for (int i=0; i<len; i++) {
  	if (input[i] == '+') {
			int x = pop();		
		 	int y = pop();
   		int sum = x + y;
      push(sum);     
    } else if (input[i] == '-') {
           
			int z =	pop();
			int sum =	pop(); 
			int difference = sum - z;
			push(difference);
    } else if (input[i] == '*') {
			
			int x = pop();
			int y = pop();
			int product = x*y;
			push(product);
			
		} else if (input[i] == '/') {
			
			int x = pop();
			int y = pop();
			int quotient = y/x;
			push(quotient);
			
			
    } else {
      int num = input[i] - '0'; // Value of the number at input[i]
      push(num);
    } 
  }
  printf("Final output, %d\n", pop());
}
 

