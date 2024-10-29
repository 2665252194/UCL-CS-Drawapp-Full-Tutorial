#ifndef ABSTRACTION_H
#define ABSTRACTION_H
//Use ifndef and define to initiliaze the header file
//Notice it is "_H" not ".h"

//define the functions
double radian(double angle);

void drawPolyLine(int length, double angle);

void heptagon(int size);

void Advanced_PolyLine(int length, double angle, int offset);

void Advanced_heptagon(int size, int offset);

void Advanced_Poly(int size, double corner, int offset);


//Remember typing this "endif"
#endif

//Now get back to 5.abstaction.c and include this hearder file

//And then the header file can be used in any other file

//For example, you can use drawPolyLine in another C program under the same folder

//Now, go to main_function.c
