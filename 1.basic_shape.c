#include "graphics.h"
//Welcome to drawapp guidance
//First you should always include the hearder file above
//and make sure graphics.c, graphics.h and drawapp.jar is always in the folder!


//Before we start, you should move to the header file
//Use command code graphics.h if you are using vscode

const int width = 1000;
const int height = 1000;


//You have seen the functions include in the header file, now let's get start
int main(void)
{
    //The first thing is to set window size!
    //I recommend initialize the data globally(line 10 and line 11)
    setWindowSize(width, height);

    //Then choose the colour
    setColour(green);

    //setRGBColour(100,100,100); You can use this function as well with RGB value

    drawRect(100,100,400,400);//From point(100,100), draw a rectangle with 400 in width and 400 in height
    //The positive direction of Y-axis is downwards, of X-axis is right-hand-side.
    //This would generate a rectangle frame in green colour

    drawLine(100,100,500,500);//From point(100,100), draw a line to point(500,500)
    //This would generate a diagonal line within the rectangle

    drawOval(100,100,400,400);//From point(100,100), draw a cycle with 400 in diameter and 400 in another diamter
    //This would generate a cycle which fits in the rectangular


    //Understood these function? 
    //Now try to compile the file with command:
    //gcc -o 1.basic_shape.exe 1.basic_shape.c graphics.c
    //And run the program using command:
    //./1.basic_shape.exe | java -jar drawapp-4.0.jar


    //!!!!!!!!!!!!Remember to close the pop-up of the drawapp!!!!!!!!!!!!!!!!!
    //Otherwise you will not be able to use your terminal....

    //Now move to the next file


    
}