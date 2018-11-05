#include<stdio.h>
#include<string.h>
// Read only region start

int countEvens(int input1,int input2,int input3,int input4,int input5)
{
    // Read only region end
	// Write code here
	int static count = 0;
	int a[5] = {input1, input2, input3, input4, input5};
	int n = sizeof(a)/sizeof(a[0]);
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0)
		count++;
	}
	return count;
	
    
}
