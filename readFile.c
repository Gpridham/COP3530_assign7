#include"my.h"

/*
	Reads the file and puts all the input into a char array
	Array is initialized with 200 elements max
*/

char* readFile(FILE* dataFile)
{
	char* inputChars = (char*) calloc(200, sizeof(char));
	
	/*
		Grabs all the contents of the file and stores in inputChars
	*/
	int index = 0; 
	while( fscanf(dataFile, " %c", &inputChars[index]) != EOF  )
	{
		index++;
	}
	int inputSize = index; // total number of characters read from file
	
	fclose( dataFile );
	
	return inputChars;
}