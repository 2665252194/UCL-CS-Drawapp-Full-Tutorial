#include"graphics.h"

//Welcome to 2nd file
//Here I will guide you through some other function

const int width = 1000;
const int height = 1000;


int main(void)
{
    setWindowSize(width,height);
    //In this lesson I will guide you through the background and foreground

    background();//Meaning that you are going to draw shapes in background
    //The shapes in background will always be covered by the shapes in foreground


    displayImage("cat.jpg",100,100);//Function used to display a picture from point(100,100)
    //The width and height is determined on the picture itself
    //So try to adjust the picture in PS before you call this function...

    foreground();//Turn to the foreground
    //The shapes in foregound will always cover the shapes in background

    setColour(pink);

    drawString("Hello World!", 300,350);//Print the string from the point(300,350)
    

    //Now you should have understood how to draw shapes either in background or in foreground!
    //Try to Compile the file in the same way with different file name!

    //If you run the program successfully, go next lesson!

}