#include "graphics.h"

const int width = 1000;
const int height = 1000;

int main(void)
{
    setWindowSize(width, height);
    //In this lesson we are going to learn some simple animation
    //The principle of animaton is to
    //draw the shape, then erase the shape, draw the shape in new position, then erase the shape......
    //You will find this is actually a loop

    //First we can draw a background, the animation would take place in foregound
    background();
    setColour(black);
    fillRect(0,0,1000,1000);//The same as drawRect but now the rect is filled with colour, rather than just frame
    //Awesome! We now have background

    //Start making animation
    int x = 0;
    int y = 0;
    foreground();
    setColour(green);
    while(x <= 800 && y <= 800)
    {
        clear();//erase the shape
        fillRect(x,y,200,200);//draw the new shape
        x = x + 10;//calculate the position of new shape
        y = y + 10;
        //The rectangle should move like a diagonal line
        sleep(50);//!!!Remeber calling sleep(), this is the time of one frame, the unit is ms!!!!!
        //If you don't use sleep, the program will be completed in less than 0.1s
    }

    //Compile and run the program in the same way
    //Now you should have understood how to make simple animation
    //And you can start doing your first coursework of COMP0001 if you already learned about pointers

    //Move on to next lesson!
}