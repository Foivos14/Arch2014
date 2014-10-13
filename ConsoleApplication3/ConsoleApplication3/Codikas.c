#include <stdio.h>
#include <string.h>
#include <math.h>

#define taken 1;
#define not_taken 0;


 int Arrayelegxos(char,char);

int Arrayelegxos(char a[],char b[])
	{
		int x=0;
		int count=0;
		
	
		while (x<8)
		{
			if (a[x]==b[x])
			{
				count++;
			}
			x++;

		}
		
			if (count==8)
			{
				return 1;
			}	
			else 
			{
				return 0;
			}
		

	}

int main()
{
	
	int i;
	int counter=0;
	int counterL=0;
	char c;
	char Arr1[8];
	char Arr2[8];
	char Arr3[8];
	int elegxos=0;
	int q;
	int j=0;
	int d=0;
	int x=0;
	int k=0;
	int array12=0;
	int array23=0;
	int array13=0;
	FILE *input_file;
	FILE *output_file;
	int flag=0;
	int counterouter=0;
	int innercounter=0;
	int sinthiki=1;
	int miss=0;
	int hit=0;
	int sinthiki2bit=1;
	int hit2bit=0;
	int miss2bit=0;
	int changecounter2=0;
	input_file=fopen("input.txt","r");
	output_file=fopen("exodos.txt","w");

	
	
	while ((c=fgetc(input_file))!=EOF)
	
	{flag=-1;
	
		if ((elegxos==0)&&(c!='\n'))
		
			{
				Arr1[counter]=c;	
				
			}
			
		
		if ((elegxos==1)&&(c!='\n'))
		
			{
				
				Arr2[counter]=c;
				
				
			}
		if ((elegxos==2)&&(c!='\n'))
			{
				Arr3[counter]=c;
				
				
			}

		if ((elegxos==2)&&(c=='\n'))
		{
		array13=Arrayelegxos(Arr1,Arr3);
		array23=Arrayelegxos(Arr2,Arr3);
		
		flag=2;
		
		}

		if ((elegxos==1)&&(c=='\n'))
		{
			array12=Arrayelegxos(Arr1,Arr2);
			
		flag=1;
		}

		if ((elegxos==0)&&(c=='\n')){
		flag=0;
		}

		if(flag==0){
			
		elegxos=1;
		}

		if(flag==1){
			if(array12==0){
				if (sinthiki==1){
				miss++;
				sinthiki=0;
				}
				else if(sinthiki==0)
				{hit++;}

				if (sinthiki2bit==1){
				miss2bit++;
				changecounter2++;
			}
			else if  (sinthiki2bit==0){
				hit2bit++;
				
			}

			if ((changecounter2==2)&&(sinthiki2bit==1)){
				sinthiki2bit=0;
				changecounter2=0;
			}
			else if ((changecounter2==2)&&(sinthiki2bit==0)){
			sinthiki2bit=1;
			changecounter2=0;
			}

			//printf("Not Taken\n");
			elegxos=2;
				}


			else if (array12==1)
			{elegxos=1;
			if (sinthiki==1){
				hit++;
				
				}
				else if(sinthiki==0)
				{miss++;
				sinthiki=0;}


			if (sinthiki2bit==1){
				hit2bit++;
			}
			else if  (sinthiki2bit==0){
				miss2bit++;
				changecounter2++;
			}

			if ((changecounter2==2)&&(sinthiki2bit==1)){
				sinthiki2bit=0;
				changecounter2=0;
			}
			else if ((changecounter2==2)&&(sinthiki2bit==0)){
			sinthiki2bit=1;
			changecounter2=0;
			}
			
			//printf("Taken\n");
			counterouter++;
			}

			
		}

		if(flag==2){
		if (array13==1)
		{for (q=0;q<8;q++)
				{
					Arr1[q]=Arr2[q];
				}

		for (q=0;q<8;q++)
				{
					Arr2[q]=Arr3[q];
				}
		if (sinthiki==1){
				hit++;
				
				}
				else if(sinthiki==0)
				{miss++;
				sinthiki=0;}


		if (sinthiki2bit==1){
				hit2bit++;
			}
			else if  (sinthiki2bit==0){
				miss2bit++;
				changecounter2++;
			}

			if ((changecounter2==2)&&(sinthiki2bit==1)){
				sinthiki2bit=0;
				changecounter2=0;
			}
			else if ((changecounter2==2)&&(sinthiki2bit==0)){
			sinthiki2bit=1;
			changecounter2=0;
			}


			//printf("Taken\n");
		    counterouter++;
		    
			elegxos=2;
		}
		else if (array23==1)
		{
			if (sinthiki==1){
				hit++;
				
				}
				else if(sinthiki==0)
				{miss++;
				sinthiki=0;}


			if (sinthiki2bit==1){
				hit2bit++;
			}
			else if  (sinthiki2bit==0){
				miss2bit++;
				changecounter2++;
			}

			if ((changecounter2==2)&&(sinthiki2bit==1)){
				sinthiki2bit=0;
				changecounter2=0;
			}
			else if ((changecounter2==2)&&(sinthiki2bit==0)){
			sinthiki2bit=1;
			changecounter2=0;
			}


			//printf("Taken\n");
			elegxos=2;
			innercounter++;
		}
		else
		{
		for (q=0;q<8;q++)
				{
					Arr1[q]=Arr2[q];
				}

		for (q=0;q<8;q++)
				{
					Arr2[q]=Arr3[q];
				}
		
		if (sinthiki==1){
				miss++;
				sinthiki=0;
				}
				else if(sinthiki==0)
				{hit++;}

		if (sinthiki2bit==1){
				miss2bit++;
				changecounter2++;
			}
			else if  (sinthiki2bit==0){
				hit2bit++;
				
			}

			if ((changecounter2==2)&&(sinthiki2bit==1)){
				sinthiki2bit=0;
				changecounter2=0;
			}
			else if ((changecounter2==2)&&(sinthiki2bit==0)){
			sinthiki2bit=1;
			changecounter2=0;
			}

		//printf("Not Taken\n");
		elegxos=2;
		}
		
		
		}

		counter++;
		if(c=='\n')
		{
		counter=0;
		counterL++;
		}
		
	}


	printf("outerloups are %d\n",counterouter);
	printf("innerloups are %d\n",innercounter);


	printf("\nhit1bit are %d\n",hit);
	printf("misses1bit are %d\n",miss);
	

	printf("\nhit2bit are %d\n",hit2bit);
	printf("misse2bit are %d\n",miss2bit);
	printf("\nNumber of loops:%d\n\n",counterouter+innercounter);
	
	fprintf(output_file,"correctness of 1-bit predictor = %d/%d\n",hit,miss+hit);
	fprintf(output_file,"\ncorrectness of 2-bit predictor = %d/%d\n",hit2bit,miss2bit+hit2bit);
	fprintf(output_file,"\nNumber of loops:%d\n",counterouter+innercounter); 
	

	
		fclose(input_file);
		fclose(output_file);
		system("pause");
		return 0;
		
	
}
		