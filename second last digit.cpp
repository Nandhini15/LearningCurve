
//Return second largest digit of the given number


#include<stdio.h>
#include<string.h>
// Read only region start

int secondLastDigitOf(int input1)
{
    // Read only region end
	// Write code here
	if(input1 < 10 && input1 > -10)
		return -1;
	
	int a = (input1 % 100)/10;
	return abs(a);
	
    
}
