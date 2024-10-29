#include "abstraction.h"
#include "graphics.h"
#include "math.h"

//Here we can use the function defind in the abstraction.c!!!

int main(void)
{
    setWindowSize(1000,1000);

    //delete the slash to choose which program should run
    //heptagon(100); //Lesson 5


    //Compile the program using:
    //gcc -o main_function.exe main_function.c graphics.c 5.abstraction.c
    //Notice that there is one more file you should type in
    //Run the program in a same way

    //Advanced_heptagon(100,500); //Lesson 5 advanced

    setColour(black);


    //Try something amazing...
    /*for(int i = 3; i < 100; i++)
    {
        Advanced_Poly(30,i,1120);
    }
    */
}