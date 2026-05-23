// Program that prompts the user to enter Height, Bank balance and Phone Number and displays values back

/*
Name:Nicole Wangatia
ADM No:BDSA-03-0022/2026
Date:23-05-2026
*/

#include<stdio.h>

int main() {
	float Height, Bank_balance;
	char Phone_number[15];
	//user to enter credentials
    printf("Please enter your height(in m)");
    scanf("%f",&Height);
    printf("Enter your bank balance(in Ksh)");
    scanf("%f",&Bank_balance);
    printf("What is your phone number?");
    scanf("%s",Phone_number);
    
    //displays user's credentials
    printf("Height is: %.2f\n", Height);
    printf("Bank balance is: %.2f\n", Bank_balance);
    printf("Phone number is: %s\n", Phone_number);
	 
	 
	 return 0;
}