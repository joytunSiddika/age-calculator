#include <stdio.h>
#include <stdlib.h>
#include<conio.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d1,d2,m1,m2,y1,y2 ,i;
//	decoration

			for ( i=0; i<40; i++){
			printf("**");
			}
		
	
			printf("\n\t\t \t\xB3 \xB2     AGE - CALCULATOR \xB2 \xB3\n");
	
	
			for ( i=0; i<40; i++){
			printf("**");
			
			}

//for birthdate
		printf("\n\t enter your date of birth <0>  :-  \n");
		printf("\t day :");
		scanf("%d", &d1);
		printf("\t month :");
		scanf("%d", &m1);
		printf("\t year :");
		scanf("%d", &y1);
		
//for current date 
		printf("\n\tenter todays date <0> : \n");
		printf("\t day :");
		scanf("%d", &d2);
		printf("\t month :");
		scanf("%d", &m2);
		printf("\t year :");
		scanf("%d", &y2);
//for birthday 
		if (d1==d2 && m1==m2)
		{
			printf(" \xB3 \xB2 happy birthday \xB2 \xB3");
		}
//		realcode		
		if (d2>d1)
		{
			d2-=d1;
			
		}
		else {
			m2--;
			d2+=30;
			d2-=d1;
			
		}
		if (m2>=m1)
		{
			m2-=m1;
			
		}
		else {
			y2--;
			m2+=12;
			m2-=m1;
		}
		y2-=y1;
//		result code
	for ( i=0; i<40; i++){
	printf("**");
			
			}
				printf("\n\t\xB3 \xB2  your age is : ");
				printf(" %d   year ",y2);
				printf(" %d  month",m2);
				printf(" %d day \xB2 \xB3\n ", d2);
	for ( i=0; i<40; i++){
	printf("**");

			
	}
		
//		extra
	m2=11-m2;
	d2=30-d2;
	
				printf("\n\t\xB3 \xB2  your next birthday time left is : ");
				printf(" %d month",m2);
				printf(" %d day \xB2 \xB3\n ", d2);
	for ( i=0; i<40; i++){
	printf("==");
			
	}
	
	
	return 0;
}
