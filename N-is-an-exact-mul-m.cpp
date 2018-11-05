#include<stdio.h>
#include<string.h>
// Read only region start

int isMultiple(int input1,int input2)
{
    // Read only region end
		if(input2 >= 0){
			if(input1 % input2 == 0){
			return 2;	
			}else{
				return 1;
			}
				}else
			return 3;
		}
		
	

    
