// Program used to find the volume and surface area of a given cylinder

/*
Name:Nicole Wangatia
ADM No:BDSA-03-0022/2026
Date:23-05-2026
*/

#include<stdio.h>

int main(){
	double radius, height,volume,surface_area;
	float pi=3.14;
	
	//user enters the radius and height
	printf("Enter the radius of the cylinder");
	scanf("%lf",&radius);
	printf("Enter the height of the cylinder");
	scanf("%lf",&height);
	
	//calculates the volume and surface area
	volume = pi*radius*radius*height;
	surface_area = 2*pi*radius*radius + 2*pi*radius*height;
	
	//output the volume and surface area
	printf("The volume of the cylinder is%.2lf\n", volume);
	printf("The surface area of the cylinder is%.2lf\n", surface_area);
	
  return 0;	
}