#include "graphics.h"

const int width = 1000;
const int height = 1000;

//Welcome to lesson 4
//Let's learn about the polygan




int main(void)
{
    setWindowSize(width,height);
    background();
    setColour(black);
    fillRect(0,0,width,height);//fill the background with black



    foreground();//Comes to the foreground
    setColour(gray);
    int x[] = {300,800,550};
    int y[] = {300,300,800};


    fillPolygon(3,x,y);
    //drawPolygon takes a int value and two int arrays
    //"3" stands for there would be 3 corner, which means, a triangle
    //x[0] and y[0] is the position of first point, say, (300,300)
    //x[1] and y[1] is the position of second point, say, (800,300)
    //Compile and run the program you will see the triangle


    //Now let us do some animation
    while (x[0] <= 1000 && y[0] <= 1000)
    {
        clear();//Clear the old shape

        for(int i = 0; i < 3; i++)
        {
            x[i] = x[i] + 20;//update the new position
            y[i] = y[i] + 20;
        }
        fillPolygon(3,x,y);//Draw the new shape
        sleep(50);//Wait for 50ms

    }  
}