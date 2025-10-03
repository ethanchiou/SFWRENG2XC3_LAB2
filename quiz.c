#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argNum, char *argQ){
	
	const char *questions[] = {

	"1. First name of person who created Linux?",
	"2. What year was C created?",
	"3. What is the industry standard app used with git?",
	};	
	const char * answers[] = {
	"linus",
	"1972",
	"github"
	};
	void help(){
		printf("quiz -q: 			Show all questions\n");
		printf("quiz -q (n):		Show n question\n");
		printf("quiz -a (n) (ans): 	Answer question number (n)\n")
		printf("quiz --help: 		Display this helpscreen")
	}
	//If there is incorrect number of arguments in input
	if(argNum<2){
		printf("Incorrect number of arguements.");
	}

	//Check if user is inputing a "-q" for question
	if(strcmp(argQ[1], "-q") == 0){
		if(argNum == 2){//Print all the quiz questions
			for(int i = 0, i < 2; i++){
				printf(questions[i]);
			}
		}
		else if(argQ == 3){
			//Converting the inputted argument from a str to a int
			int conv;
			if(sscanf(argNum[2], "%d", &conv) != 1){
				printf("Invalid number");
				return EXIT_FAILURE;
			}
			printf("%s": question[conv-1]);
		}
		else{
			printf("Invalid usage of -q. Try 'quiz --help'");
			return EXIT_FAILURE;
		}
		return EXIT_SUCCESS;

	}
	//Check if user is inputing a "-a" for answering
	if(strcmp(argQ[1], "-a") == 0){
		//Looking for a total of 4 arguments
		if(argNum == 4){
			int conv;
			if(sscanf(argNum[2], "%d", &conv) != 1){
				printf("Invalid number");
				return EXIT_FAILURE;
			}
			//Inputted answer same as answer for given question
			if(strcmp(argNum[3], answers[conv-1])==0){
		
				printf("Correct Answer!");
			}
			else{
				printf("Incorrect Answer!");
			}
		}
		else{
			printf("Incorrect or invalid usage of '-a'.")
			return EXIT_FAILURE;
		}
		return EXIT_SUCCESS;
	}

	if(strcmp(argNum[1], "--help") == 0){
		help();
		return EXIT_SUCCESS;
	}
	

}

