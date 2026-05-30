/* 
Bank loan program

Name:Nicole Wanjiru Wangatia
Adm No:BDSA-03-0022/2026
Date:30-05-26
*/

#include<stdio.h>

int main(){
	int Age;
	float Income;
	
	printf("Enter your age");
	scanf("%d",&Age);
	printf("Enter your income");
	scanf("%f",&Income);
	
	if (Age>=21){
		if (Income>=21000) {
			printf("Congratulations you qualify for a loan");
		}
		else {printf("Unfortunately, we are unable to offer you a loan at this time");
		}
	}
	else {printf("Unfortunately, we are unable to offer you a loan at this time");
	}
	

	return 0;
}
