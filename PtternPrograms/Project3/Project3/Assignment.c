#include<stdio.h>
#include<string.h>
#include<malloc.h>


/*
			Instruction to run file:
	=> Every pattern is written within one function .
	=> See the function name below pattern  and uncomment same block of code in main function which have that function.
	=> Provide the appropriate format of input to the program to get expected result.
*/


	//int main() {

		/*void printPattern(int);
		int size;
		printf("Enter the size of Patternt : ");
		scanf_s("%d", &size);
		printPattern(size);	*/
	

		// for letter pattern		//printf("\a");   // To make sound

		/*void printLetterPattern(char);
		char letter;
		printf("Enter the letter for Patternt : ");
		letter = getchar();
		printLetterPattern(letter);*/

			// For passing string and size to print charecter Pattern
		/*void printLetterStringPattern(int,char[]);
		char string[20];
		printf("Enter the name to print Patternt (length<20) : ");
		gets_s(string,19);
		int size=0,i=0;
		while (string[i] != '\0') {
			size++;
			i++;
		}
		printLetterStringPattern(size,string);*/
//}

//==========================================================================
							/*		1 
                                  1 2 1 
                                1 2 3 2 1 
                              1 2 3 4 3 2 1 
                            1 2 3 4 5 4 3 2 1 
                          1 2 3 4 5 6 5 4 3 2 1 
                        1 2 3 4 5 6 7 6 5 4 3 2 1 
                      1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 
                    1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 
                  1 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 1		*/

		/*void printPattern(int size) {
			for (int i = 1; i <= size; i++){
				int space = size - i;
				int colNo = (size + i - 1);
				int prntNum = 1;
				for (int j = 1; j <= colNo; j++) {
					int prntDig = (j <= size) ? prntNum + (j - space - 1) : prntNum + (colNo - j);
					printf((j <= space) ? "  " : "%d ", (j <= space) ? '  ': prntDig>=10?(prntDig%10): prntDig);
				}
				puts("");
			}
		}*/

//=========================================================================
	/*		 1
		   2 3 2 
		  4 5 6 5 4 
		 7 8 9 0 9 8 7 
		1 2 3 4 5 4 3 2 1	*/	

		/*void printPattern(int size) {
			int prntNum = 1;
			for (int i = 1; i <= size; i++) {
				int space = size - i;
				int colLimit = size+i-1;
				for (int j = 1; j <= colLimit; j++) {
					int tempPrntNum = (j <= size)?prntNum + (j - space - 1): prntNum + colLimit - j;
			printf((j <= space) ? " " : "%d ", (j <= space) ? ' ' : tempPrntNum >= 10 ? tempPrntNum % 10 : tempPrntNum) ;
				}
				prntNum += i;
				puts("");
			}
			printf("\n Value of prntNum : %d", prntNum);
		}*/

//==========================================================================
	/*		A
			BF
			CGJ
			DHKM
			EILNO	 */	

		/*void printPattern(int size) {
			for (int i = 1; i <= size; i++) {
				char prntVar = 'A' + i - 1;
				for (int j = 1; j <= i; j++) {
					printf("%c", prntVar);
					prntVar += (size - j);
				}
				puts("");
			}
		}*/

//=================================================================
		/*		1
				2 2
				3 3 3
				4 4 4 4
				5 5 5 5 5
				6 6 6 6 6 6
				7 7 7 7 7 7 7	*/
		/*void printPattern(int size) {
			for (int i = 1; i <= size; i++) {
				for (int j = 1; j <= i;j++) {
					printf("%d ", i);
				}
				puts("");
			}
		}*/

//===========================================================================
		/*	A
			BD
			CFI
			DHLP
			EJOTY
			FLRX
			GNU
			HP
			I	  */

//void printPattern(int size) {
//	int rows = size * 2 - 1;
//	for (int i = 1; i <= rows; i++) {
//		char prntVar = 'A' + i - 1;
//		int prntLimit = (i <= size) ? i : size * 2 - i;
//		for (int j = 1; j <= prntLimit;j++) {
//			printf("%c ", prntVar);
//			prntVar += i;
//		}
//		puts("");
//	}
//}

//================================================================================
		/*	1
			2 3
			4 5 6
			7 8 9 10
			11 12 13 14 15	*/
		/*void printPattern(int size) {
			int prntDigit = 1; 
			for (int i = 1; i <= size; i++) {
				for (int j = 1; j <= i; j++) {
					printf("%d ", prntDigit++);
				}
				puts("");
			}
		}*/
//===============================================================================
		/*	E E E E E
			E D D D D
			E D C C C
			E D C B B
			E D C B A	*/

		/*void printLetterPattern(char letter) {
			if (letter >= 'a') 
				letter -= 32;
			int size = letter - 'A' + 1;
			for (int i = 1; i <= size; i++) {
				char prntVar = letter;
				for (int j = 1; j <= size; j++) {
					printf("%c ", (j <= i) ? prntVar-- : prntVar + 1);
				}
				puts("");
			}
		}*/

//===============================================================================
	/*	1 2 3 4 5 6 7
		2 3 4 5 6 7 1
		3 4 5 6 7 1 2
		4 5 6 7 1 2 3
		5 6 7 1 2 3 4
		6 7 1 2 3 4 5
		7 1 2 3 4 5 6	*/
		/*void printPattern(int size) {
			for (int i = 1; i <= size; i++){
				int space = size - i + 1;
				for (int j = 1; j <= size; j++) {
					printf("%d ", (j <= space) ? j + i - 1 : j - space);
				}
				puts("");
			}
		}*/

//===============================================================================
	/*	J
		I H
		G F E
		D C B A	 */

		/*void printPattern(int size) {
			char prntVar = 'A' + (size * (size + 1) / 2) - 1;
			for (int i = 1; i <= size; i++) {
				for (int j = 1; j <= i; j++) {
					printf("%c ", prntVar--);
				}
				puts("");
			}
		}*/

//=============================================================================
	/*	1
		2 6
		3 7 10
		4 8 11 13
		5 9 12 14 15 */	
		/*void printPattern(int size) {
			for (int i = 1; i <= size; i++) {
				int prntDigit = i;
				for (int j = 1; j <= i; j++) {
					printf("%d ", prntDigit);
					prntDigit += (size - j);
				}
				puts("");
			}
		}*/


//==============================================================================
		/*	   ABCDEF
			   ABCDE
			   ABCD
			   ABC
			   AB
			   A
			   AB
			   ABC
			   ABCD
			   ABCDE
			   ABCDEF	*/	
		/*void printLetterPattern(char letter) {
			if (letter >= 'a')
				letter -= 32;
			int size = letter - 'A' + 1;
			int rows = size * 2 - 1;
			for (int i = 1; i <= rows; i++) {
				char prntVar = 'A';
				int prntLimit = (i <= size) ? size - i + 1 : i - size + 1;
				for (int j = 1; j <= prntLimit ; j++) {
					printf("%c", prntVar++);
				}
				puts("");
			}
		}*/
//======================================================================
		/*	1 0 1 0 1 0 1
			0 1 0 1 0 1 0
			1 0 1 0 1 0 1
			0 1 0 1 0 1 0
			1 0 1 0 1 0 1
			0 1 0 1 0 1 0
			1 0 1 0 1 0 1	*/

		/*void printPattern(int size) {
			for (int i = 1; i <= size; i++) {
				for (int j = 1; j <= size; j++) {
					printf("%d ", ((i + j) % 2 == 0) ? 1 : 0);
				}
				puts("");
			}
		}*/
//=============================================================================
			/*	   A 
				  B C    
				 D E F 
				G H I J 
			   K L M N O 
			  P Q R S T U	*/

	/*void printPattern(int size) {
		char prntVar = 'A';
		for (int i = 1; i <= size; i++) {
			int space = size - i;
			for (int j = 1; j <= size; j++) {
				printf((j <= space) ? " " : "%c ", (j <= space) ? ' ' : prntVar++);
			}
			puts("");
		}
	}*/

//===================================================================================
		/*	1 1 1 1 1 1 1 
			1 1 1 1 1 2 2 
			1 1 1 1 3 3 3 
			1 1 1 4 4 4 4 
			1 1 5 5 5 5 5 
			1 6 6 6 6 6 6 
			7 7 7 7 7 7 7		*/

		/*void printPattern(int size) {
			for (int i = 1; i <= size; i++) {
				int space = size - i;
				for (int j = size; j >= 1; j--) {
					printf("%d ", (j <= i) ? i : 1);
				}
				puts("");
			}
		}*/

//===============================================================================
	/*	   A 
		  B G    
		 C H M 
		D I N S 
	   E J O T Y 
	  F K P U Z _	*/

		/*void printLetterPattern(char letter) {
			if (letter >= 'a') 
				letter -= 32;
			int size = letter - 'A' + 1;
			int prntvar = 'A';
			puts("Inside function inside I.");
			for (int i = 1; i <= size; i++) {
				int space = size - i;
				for (int j = 0; j < size; j++) {
					printf((j < space) ? " " : "%c ", (j < space) ? ' ' : prntvar + (j - space) * (size - 1));
				}
				prntvar++;
				puts("");
			}	
		}*/

//================================================================================
	/*	 1 2 3 4 5 6 7 
		  2 3 4 5 6 7 
		   3 4 5 6 7 
			4 5 6 7 
			 5 6 7 
			  6 7 
			   7 
			  6 7 
			 5 6 7 
			4 5 6 7 
		   3 4 5 6 7 
		  2 3 4 5 6 7 
		 1 2 3 4 5 6 7		*/
		/*void printPattern(int size) {
			int rows = size * 2 - 1;
			for (int i = 1;i <= rows; i++) {
				int space = (i<=size)?i - 1: rows - i;
				for (int j = 1; j <= size; j++) {
					printf((j <= space) ? " " : "%d ", j <= space ? ' ' : j);
				}
				puts("");
			}
		}*/


//====================================================================================
		/*	  F 
			 E F 
			D E F 
		   C D E F 
		  B C D E F 
		 A B C D E F	*/

		/*void printLetterPattern(char letter) {
			if (letter >= 'a')
				letter -= 32;
			int size = letter - 'A' + 1;
			for (int i = 1; i <= size; i++) {
				char prntVar = 'A';
				int space = size - i;
				for (int j = 1; j <= size; j++) {
					if (j <= space)
						printf(" ");
					else {
						printf("%c ", prntVar+j-1);
					}
				}
				puts("");
			}
		}*/

//======================================================================================
			/*	1
				1 0
				1 0 1
				1 0 1 0
				1 0 1 0 1	*/

	/*void printPattern(int size) {
		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= i; j++) {
				printf("%d ", (j & 1 != 0) ? 1 : 0);
			}
			puts("");
		}
	}*/

//=====================================================================================
	/*	ABCDEDCBA          
		 ABCDCBA        
		  ABCBA        
		   ABA     
		    A		*/

		/*void printLetterPattern(char letter) {
			if (letter >= 'a')
				letter -= 32;
			int size = letter - 'A' + 1;
			for (int i = 1; i <= size; i++) {
				int space = i - 1;
				int prntLimit = size * 2 - i;
				char prntVar = 'A';
				for (int j = 1; j <= prntLimit;j++) {
					printf("%c", (j <= size) ? (j <= space) ? ' ' : prntVar + j - i : prntVar + prntLimit - j);
				}
				puts("");
			}
		}*/

//=====================================================================================
		/*	1 
			2 1 
			3 2 1 
			4 3 2 1 
			5 4 3 2 1	*/

		/*void printPattern(int size) {
			for (int i = 1; i <= size; i++) {
				for (int j = i;j >= 1;j--) {
					printf("%d ", j);
				}
				printf("\n");
			}
		}*/

//=====================================================================================
	/*	ABCDE          
		BCDEF        
		CDEFG        
		DEFGH     
		EFGHI	*/
	/*void printLetterPattern(char letter) {
		if (letter >= 'a')
			letter -= 32;
		int size = letter - 'A' + 1;
		for (int i = 0; i < size; i++) {
			char prntVar = 'A' + i;
			for (int j = 0; j < size; j++) {
				printf("%c", prntVar + j);
			}
			puts("");
		}
	}*/
//====================================================================================
		/*	  1 2 3 4 5 
				2 3 4 5 
				  3 4 5 
					4 5 
					  5 
					4 5 
				  3 4 5 
				2 3 4 5 
			  1 2 3 4 5		*/
	
	/*void printPattern(int size) {
		int rows = size * 2 - 1;
		for (int i = 1; i <= rows; i++) {
			int prntLimit = (i <= size) ? i : (size * 2 - i);
			for (int j = 1; j <= size; j++) {
				printf("%c ", (j >= prntLimit) ? j+48 : '  ');
			}
			puts("");
		}
	}*/


//=================================================================================
	/*		A          
			BC         
			FED        
			GHIJ     
			ONMLK	*/

	/*void printPattern(int size) {
		char printVar = 'A';
		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= i; j++) {
				printf("%c",(i%2==0)? printVar + j - 1: printVar + i - j);					
			}
			printVar += i;
			puts("");
		}
	}*/
//=================================================================================
		/*		1 2 3 4 5
				1 2 3 4
				1 2 3
				1 2
				1
				1 2
				1 2 3
				1 2 3 4
				1 2 3 4 5		*/

	/*void printPattern(int size) {
		int rows = size * 2 - 1;
		for (int i = 1; i <= rows; i++) {
			int prntLimit = (i <= size) ? (size - i + 1) : (i - size + 1);
			for (int j = 1; j <= prntLimit; j++) {
				printf("%d ", j);
			}
			puts("");
		}
	}*/

//=====================================================================================
		/*		A      
				CB     
				DEF    
				JIHG   
				KLMNO		*/

	/*void printPattern(int size) {
		printf("\nPrinting the parttern having %d number of lines.... \n", size);
		char prntVar = 'A';
		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= i; j++) {
				if (i % 2 != 0) {
					printf("%c", prntVar+j-1);
				}
				else {
					printf("%c", prntVar +i-j);
				}			
			}
			prntVar += i;
			puts("");
		}
	}*/



//================================================================================
		/*	1
			1 2 1
			1 2 3 2 1
			1 2 3 4 3 2 1	*/

	/*void printPattern(int size) {
		for (int i = 1; i <= size; i++) {
			int prntLimit = i * 2 - 1;
			int prntVar = 1;
			for (int j = 1; j <= prntLimit;j++ ) {
				if (j <= i) {
					printf("%d ",prntVar++);
				}
				else {
					printf("%d ", --prntVar - 1);
				}
			}
			puts("");
		}
	
	}*/

//====================================================================================
	/*	 J
   		AAA
  	   VVVVV
      AAAAAAA	*/

	/*void printLetterStringPattern(int size, char string[]) {
		for (int i = 0; i < size; i++) {
			char letter = string[i];
			if (letter >= 'a')
				letter -= 32;
			int space = size - (i+1);
			int prntLimit = size + i;
			for (int j = 1;j <= prntLimit;j++) {
				if (j <= space) {
					printf(" ");
				}else{
					printf("%c", letter);
				}
			}
			puts("");
		}
	}*/
//====================================================================================
		/*	5
			5 4
			5 4 3
			5 4 3 2
			5 4 3 2 1	*/

	/*void printPattern(int size) {
		for (int i = size;i >= 1;i--) {
			for (int j = size; j >= i; j--) {
				printf("%d ", j);
			}
			puts("");
		}
	}*/
//============================================================================
		/*	  A 
			 B B 
			C C C 
		   D D D D 
		  E E E E E 
		 F F F F F F	*/
	/*void printLetterPattern(char letter) {
		if (letter >= 'a')
			letter -= 32;
		int size = letter - 'A' + 1;
		for (int i = 1; i <= size; i++) {
			int space = size - i;
			char prntVar = letter-space;
			for (int j = 1; j <= size; j++) {
				if (j <= space) {
					printf(" ");
				}else {
					printf("%c ", prntVar);
				}
			}
			puts("");
		}
	}*/


//==============================================================================
		/*	5 4 3 2 1 
			4 3 2 1 
			3 2 1 
			2 1 
			1		*/

	/*void printPattern(int size) {
		for (int i = 5; i >= 1; i--) {
			for (int j = i; j >= 1; j--) {
				printf("%d ",j);
			}
			puts("");
		}
	}*/
//===================================================================================
		/*	ABCDEFEDCBA
			 BCDEFEDCB
			  CDEFEDC
			   DEFED
				EFE
				 F		*/

	/*void printLetterPattern(char letter) {
		if (letter >= 'a')
			letter -= 32;
		int size = letter - 'A' + 1;
		for (int i = 1; i <= size; i++) {
			int space = i - 1;
			int prntLimit = size * 2 - i;
			char prntVar = 'A'+i-1;
			for (int j = 1; j <= prntLimit; j++) {
				if (j <= space) {
					printf(" ");
				}
				else if (j <= size) {
					printf("%c", prntVar++);
				}
				else {
					printf("%c", --prntVar - 1);
				}
			}
			puts("");
		}
	}*/


//================================================================================?
	/*	1 2 3 4 5
		1 2 3 4
		1 2 3
		1 2
		1		*/

	/*void printPattern(int size) {
		for (int i = 5; i >= 1; i--) {
			for (int j = 1; j <= i; j++) {
				printf("%d ", j);
			}
			puts("");
		}
	}*/
//==============================================================================
/*		* * * *
		  * * *
			* *
			  *		*/

	/*void printPattern(int size) {
		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= size; j++) {
				if (j >= i) {
					printf("* ");
				}else {
					printf("  ");
				}
			}
			puts("");
		}
	}*/

//=====================================================================================
	/*		AAAAAA
			AAAAAB
			AAAACC
			AAADDD
			AAEEEE
			AFFFFF
			GGGGGG		*/

	/*void printLetterPattern(char letter) {
		if (letter >= 'a')
			letter -= 32;
		int size = letter - 'A' + 1;
		for (int i = 1; i <= size + 1; i++) {
			int space = size - i + 1; 
			char prntVar = 'A' + i - 1;
			printf("\t\t\t");
			for (int j = 1; j <= size; j++) {
				if (j <= space) {
					printf("A");
				}else {
					printf("%c", prntVar);
				}
			}
			puts("");
		}
	}*/


//===========================================================================================
	/*	5 4 3 2 1 
		5 4 3 2 
		5 4 3 
		5 4 
		5		*/

	/*void printPattern(int size) {
		for (int i = 1; i <= size; i++) {
			for (int j = size; j >= i;j--) {
				printf("%d ", j);
			}
			puts("");
		}
	}*/
//==========================================================================================
				/*	* * * *  
					* * *   
					* *    
					*	*/

	/*void printPattern(int size) {
		for (int i = size; i >= 1; i--) {
			for (int j = 1; j <= i; j++) {
				printf("* ");
			}
			puts("");
		}
	}*/

//=========================================================================================
	/*	A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
   ABCDEFEDCBA	*/

	/*void printLetterPattern(char letter) {
		if (letter >= 'a')
			letter -= 32;
		int size = letter - 'A' + 1;
		for (int i = 1; i <= size; i++) {
			int space = (size - i);
			int prntLimit = size + i - 1;
			char prntVar = 'A';

			for (int j = 1; j <= prntLimit; j++) {
				if (j <= space) {
					printf(" ");
				}
				else if (j <= size) {
					printf("%c", prntVar++);
				}
				else {
					prntVar--;
					printf("%c", prntVar - 1);
				}
			}
			puts("");
		}
	}*/

//==========================================================================================
	/*	1 
		2 2 
		3 3 3 
		4 4 4 4	*/

	/*void printPattern(int size) {
		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= i; j++) {
				printf("%d ", i);
			}
			puts("");
		}
	}*/



//==========================================================================================
	/*	      * 
			* * 
		  * * * 
		* * * *		*/

	/*void printPattern(int size) {

		for (int i = 1; i <= size; i++) {
			int space = size - i;
			int stars = size - space;
			for (int i = 1; i <= space; i++) {
				printf("  ");
			}
			for (int i = 1; i <= stars; i++) {
				printf("* ");
			}
			puts("");		
		}
	}*/



//===========================================================================================

/*		 A
        A B
       A B C
      A B C D
     A B C D E
    A B C D E F 
     A B C D E 
      A B C D 
       A B C 
        A B 
         A		*/

	/*void printLetterPattern(char letter) {

		if (letter >= 'a')
			letter -= 32;

		int size = letter - 'A' + 1;
	
		for (int i = 1; i < size*2 ; i++) {
			int space = (i <= size) ? (size - i) : (i - size);
			int prntLimit = size - space;
			char prntVar = 'A';

			for (int i = 1; i <= space; i++) {
				printf(" ");
			}

			for (int i = 1; i <= prntLimit; i++) {
				printf("%c ", prntVar++);
			}
			puts("");
		}

	}*/


//==========================================================================================
/*	1 
	1 2 
	1 2 3 
	1 2 3 4 
	1 2 3 
	1 2 
	1		*/

	/*void printPattern(int size) {

		for (int i = 1; i <= (size * 2 - 1);i++) {
			int prntLimit = (i <= size) ? i : size*2 - i;
			for (int j = 1; j <= prntLimit; j++) {
				printf("%d ", j);
			}
			puts("");
		}
	}*/

//====================================================================================================
/*	* 
	* * 
	* * * 
	* * * *		*/

	/*void printPattern(int size) {

		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= i; j++) {
				printf("* ");
			}
			puts("");
		}
	}*/



//=====================================================================================================

/*	  ABCDEF
       BCDEF
        CDEF
         DEF
          EF
           F
           F
          EF
         DEF
        CDEF
       BCDEF
      ABCDEF	*/

	/*void printLetterPattern(char letter) {
		if (letter >= 'a')
			letter -= 32;

		int size = (letter - 'A' + 1);

		for (char i = 1; i <= ( size*2 ); i++) {
			int space = (i <= size) ? i - 1 : size*2 - i;
		
			for (int k = 1; k <= space; k++) {
				printf(" ");
			}
			for (char l = 'A' + space; l <= 'F'; l++) {
				printf("%c", l);
			}
			puts("");
		}
	}*/




//======================================================================================================

/*		1 2 3 4 
          1 2 3 
            1 2 
              1		*/

	/*void printPattern(int size) {

		for (int i = 1; i <= size; i++) {
			int space = (i - 1);
			int printN = size - space;

			for (int k = 1;k <= space; k++) {
				printf("  ");
			}
			for (int l = 1; l <= printN; l++) {
				printf("%d ", l);
			}
			puts("");
		}
	}*/


//=======================================================================================================

/*  * 
   * * 
  * * * 
 * * * * 
  * * * 
   * * 
    *	*/ 

		//optimized solution
	/*void printPattern(int size) {

		for (int i = 1; i <= size * 2 - 1; i++) {
			int spaces = (i <= size) ? (size - 4) : (i - size);
			int stars = size - spaces;

			for (int s = 1; s <= spaces; s++) {
				printf(" ");
			}
			for (int p = 1; p <= stars; p++) {
				printf("* ");
			}
			puts("");
		}
	}*/
//______________________________________________________________________
	/*void printPattern(int size) {
		int flag = 1;
		for (int i = size; i >= 1; i--) {
			for (int j = 1; j <= size; j++) {
				if (j >= i) {
					printf("* ");
				}
				else {
					printf(" ");
				}
			}
			puts("");
			if (i == 1 || flag == 0) {
				i += 2;
				flag = 0;
				if (i == size + 2)
					break;
			}
		}
	}*/

//=============================================================================================================

/*	A B C D E F
     A B C D E 
      A B C D 
       A B C 
        A B 
         A		*/

	/*void printLetterPattern(char letter) {

		if (letter >= 'a')
			letter -= 32;

		char chO = letter;
		while (chO >= 'A') {
			char chI = letter;
			char printVar = 'A';
			while (chI >= 'A') {
				if (chI <= chO) {
					printf("%c ", printVar++);
				}else{
					printf(" ");
				}
				chI--;
			}
			puts("");
			chO--;
		}
	}*/

//===========================================================================================================

	/*	1 2 3 4
		1 2 3
		1 2
		1		*/

	/*void printPattern(int size) {

		int i = size;
		while (i >= 1) {
			int j = 1;
			while (j <= i) {
				printf("%d ", j);
				j++;
			}
			puts("");
			i--;
		}
	}*/



//=========================================================================================================

	/*		* * * *
			 * * *
			  * *
			   *	*/

	/*void printPattern(int size) {

		int i = size;
		while (i >= 1) {
			int j = size;
			while (j >= 1) {
				if (j > i) {
					printf(" ");
				}
				else {
					printf("* ");
				} j--;
			}
			puts("");
			i--;
		}
	}*/


//===========================================================================
/*	a
	ab
	abc*/

	/*void printLetterPattern(char letter) {
	
		char chO = 'a';
		while (chO <= letter) {
			char chI = 'a';
			while (chI <= chO ) {
				printf("%c", chI);
				chI++;
			}
			puts("");
			chO++;
		}

	}*/


//==========================================================================
/*	1
	1 2
	1 2 3
	1 2 3 4*/

	/*void printPattern(int size) {
	
		int i = 1;
		while (i <= size) {
			int j = 1;
			while (j <= size) {
				if (j <= i) {
					printf("%d ", j);
				}else {
					break;
				}
				j++;
			}
			puts("");
			i++;
		}
		
	}*/




//========================================================================
//	  * 
//   * * 
//  * * * 
// * * * * 
//* * * * * 

	/*void printPattern(int size) {
		int i = 1;
		while (i < size)
		{	
			int j = 1;
			while (j <= size) {
				if (j <= size-i) {
					printf(" ");
				}
				else{
					printf("* ");
				}	
				j++;
			}
			puts("\n");
			i++;
		}
	}*/

//====================================================================================================================
						// Function Assignment
//================================================================================
	/*8) write 3 functions
	add(), modify() and delete() with simple statements like "in add", "in modify" etc.
	in main() function accept a character from user .
	if the character is 'a' or 'A' call add()
	if it is 'm' or 'M' call modify()
	if it is 'd' or 'D' call delete()*/

	/*int main() {

		void add(char);
		void modify(char);
		void delete(char);
		puts("Enter your Choice as : \n\n1.For Addition\t\t => 'a' or 'A'\n1.For Modification\t => 'm' or 'M'\n1.For Delete\t\t => 'd' or 'D'");
		char ch;
		ch = getchar();

		switch (ch)
		{

		case 'a':
		case 'A':
			add(ch);
			break;

		case 'm':
		case 'M':
			modify(ch);
			break;

		case 'd':
		case 'D':
			delete(ch);
			break;

		default:
			puts("Not a valid choice.");
			break;
		}

	}

	void add(char ch) {
		puts("Inside add Function.");
	}
	void modify(char ch) {
		puts("Inside modify Function.");
	}
	void delete(char ch) {
		puts("Inside delete Function.");
	}*/




//==================================================================================
//7) function which returns some number.

	/*int main() {

		int returnNum();
		printf("Function returned number is %d", returnNum());
	}

	int returnNum() {
		return 21;
	}*/




//================================================================================
	/*6) write following call stack
	main->disp1->disp2
	(i.e.call disp2 from disp1 and call disp1 from main function)
	observe how it works.*/

	/*int main() {
		void disp1();
		disp1();
		puts("Inside Main function.");
		}

	void disp1() {
		void disp2();
		disp2();
		puts("Inside disp1 function.");
	}

	void disp2() {
		puts("Inside disp2 function.");
	}*/

//==============================================================================
//5) function to accept int array elements and display them.

	/*int main() {
	
		int arr[] = { 10,20,30,50,90 };
		void displayNum(int);
		puts("Calling function to take printing of array .....");
		for (int i = 0; i < 5; i++) {
			displayNum(arr[i]);
		}

	}

	void displayNum(int num) {

		printf("%d\n", num);
	}*/




//=============================================================================
	//4)function to accept a character and return toggle of it.

	/*int main() {
		puts("Enter the character to make toggle of it : ");
		char ch;
		ch = getchar();
		char makeToggle(char);
		printf("Toggle character is : %c", makeToggle(ch));
	}

	char makeToggle(char ch)
	{
		if (ch < 97) {
			return ch + 32;
		}
		else
		{
			return ch - 32;
		}
	}*/



//=============================================================================
//3)function to accept character, float and int and display them.


	/*int main() {
		char ch; int num; float fnum;
		puts("Enter the Character : ");
		ch = getchar();
		puts("Enter the Float Value : ");
		scanf_s("%f", &fnum);
		puts("Enter the Int Value : ");
		scanf_s("%d", &num);

		void display(char, int, float);
		display(ch, num, fnum);

	}

	void display(char ch, int num, float fnum) {

		printf("Charecter Value : %c\nInteger Value : %d\nFloat Value : %f\n", ch, num, fnum);

	}*/

//============================================================================
	/*2) write a function, which will take a number and 
	print whether it is negative, positive or zero.*/

	/*int num;
	puts("Enter the number : ");
	scanf_s("%d", &num);
	stateOfNumber(num);

	void stateOfNumber(int num) {
		if (num < 0) {
			puts("Number is -Ve.");
		}
		else if (num > 0) {
			puts("Number is +Ve.");
		}
		else
			puts("Number is 0.");
	}*/



//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
		
		/*1) write a function, which will take 2 numbers and
		return their sum.*/

			/*puts("Enter two numbers : ");
			int num1, num2;
			scanf_s("%d", &num1);
			scanf_s("%d", &num2);

			int sum(int, int);
			printf("Sum of Numbers is : %d", sum(num1, num2));

			int sum(int num1, int num2) {

			return num1 + num2;
		}*/