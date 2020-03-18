//Question #1 finding mistakes 
#include <stdio.h>
#include <ctype.h>

void count() {
 printf("Enter lines of text here: ...\n");
 int c, nc = 0, nl = 0, nt = 0, nbackslash = 0;
 while ((c = getchar()) != EOF) {
 	if (c == '\n') { ++nl;
 	} else if (c == '\t') { ++nt;
 	} else if (c == '\\') { ++nbackslash;
 	} else if (isalnum(c)) { ++nc; }
 }
 printf("lines: %d\n", nl);
 printf("tabs: %d\n", nt);
 printf("backslashes: %d\n", nbackslash);
 printf("alphanumeric: %d\n", nc);
}

int main(int argc, const char* argv[]) {
 count();
 return 0;
} 

//Questions #2-6 c library Questions

// #2 
char *strchr(char c, const char* s)

// #3 
size_t strspn(const char* s, char t)

// #4 
void abort(void)

// #5 
File *fopen(const char* "midterm.txt", const char* "r")

// #6 
size_t _strcpy(char *s, const char *t){
	char *p = s;
	while((*s ++ = *t ++)!= '\0') {}
	return p;
}		

// #7
char * _strncat(char *s, const char *t, size_t n){
	char *p = s;
	while (*s++ != '\0'){}
	_strncpy(s, t, n);
	return p;
}

// #8
int _strcmp(const char *s, const char *t){
	while(*s != '\0' && *t != '\0' && *s == *t){
		++s;
		++t;
	}
	return *s - *t;
}

//Question #9 Short Program 

//------ POINT ----------------------------------------------------------------
typedef struct point point;
struct point { double x, y; };
//------ SQUARE -----------------------------------------------------------------
typedef struct square square;
struct square { point ul; size_t side; };

square* square_init(double ulx, double uly, double side){

}

void square_delete(square* sq){
	sq = 0;
}

void square_move(square* sq, double x, double y){

}

void square_expandby(square* sq, double expandby){

}

double square_area(square* sq){

}

double square_perimeter(square* r){

}

// print location, side, area and perimeter
void square_print(const char* msg, square* sq){
	
}


void test_square(double ulx, double uly, double side) {
 square* sq = square_init(ulx, uly, side);
 square_print("sq is: ", sq);
 square_move(2, 2);
 square_print("sq is now: ", sq);
 square_expandby(sq, 10);
 square_print("sq has expanded to: ", sq);
 square_delete(sq);
 printf("\n\n");
}

void tests_square() {
 test_square(0, 0, 10);
 test_square(1, 1, 5);
 // add other tests if you wish // TODO (optional)
}

int main(int argc, const char* argv[]) {
 tests_square();
 return 0;
}
