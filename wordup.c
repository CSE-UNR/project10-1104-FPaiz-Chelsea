//Chelsea F Paiz
//5-6-25
//Peoject 10

#include <stdio.h>
#define FILENAME "word.txt"
#define row 6
#define col 6


//Reads the word so words = said thing
	int CHOSEN(FILE *file, char words[row][col], char answer[6]){
		file = fopen(FILENAME, "r");
		if(file == NULL){
			printf("WRONG\n");}
		
		int i = 0;
		while (fscanf(file,"%s", words[i]) == 1){
			i++;
		}
		for (int j = 0; j < i; j++){
		}
		
		for(int i = 0; i < 6; i++){
			answer[i] = words[0][i];
			}
		
		 fclose(file);	
	     }
//should count the letters
	     
	int COUNT(char g1[7], int count){
	
	printf("GUESS 1! Enter your guess: ");	
	scanf("%s", g1);
	  	
	 for(int index = 0; g1[index] != '\0'; index++){
		if(g1[index] >= 'A' && g1[index] <= 'Z'||g1[index] >= 'a' && g1[index] <= 'z'){
			count++;
			}
		      }
		    
	 if(count != 5){
	     do{ 
	         count = 0;
                 printf("Your guess must be 5 letters long. Please try again: ");
                 scanf("%5s", g1);
		
	for(int index = 0; g1[index] != '\0'; index++){
		if(g1[index] >= 'A' && g1[index] <= 'Z'||g1[index] >= 'a' && g1[index] <= 'z'){
			count++;
			}
		      }	  
	 }while(count != 5);
	 
	 
	 
	 
          return count;
	       	}
	      }
	      

	int main(){
		FILE *file;
		char words[row][col];
		char g1[7], guess1;
		int count; 
		char answer[7];
		
		CHOSEN(file, words, answer);
	
		COUNT(g1, count);
			
		
// the guesses

	    if(g1[7] == answer[7]){
	 	printf("================================\n");
		printf("           %5s \n", answer);
		printf("     You won in 1 guess!\n");
		printf("          GOATED!\n");

            }else if(g1[7]!= answer[7]){
            	printf("================================\n");
            	printf("%5s\n", g1);
            	}
		       
		       
//Answer is set to bucky

	return 0;
}
