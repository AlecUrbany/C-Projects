#include "stdio.h"

typedef void (*)(const char*) loggerFunc;

void compute(double, loggerFunc);

void logStdout(const char* msg) {printf("%s", msg);}

void logFile( const char* msg)
{
	FILE* fptr = fopen("log", "a");

	fprintf(fptr, "%s", msg);

	fclose(fptr);
}

int main()
{
	compute(52.0, logFile);


	printf("\n");

}

void compute(double data, void (*logger)(const char*))
{
	//do some cool computer stuff
	logger("did some cool computer stuff");
}
