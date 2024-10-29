#include "graphics.h"
#include "math.h"

//After reading over the code, see abstraction.h
#include "abstraction.h"


double x = 480;
double y = 200;

//Welcome to final lesson
//This lesson could be much harder!
//We will continue to draw the polygon
//but in a much more complex way...

//First, it is not possible for you to draw a complex shape using drawPolygon()
//For example, if you are going to draw a shape which has 10 corners
//You are gonna calculate all the points by hand!
//That's not intelligent at all\

//Now, try to use the vector!
//Before we using vectors. we should have radian
double radian(double angle)
{
    double PI = 3.1415926;//First define the Pi
    return angle * (PI / 180.0);//return the radian
}

void drawPolyLine(int length, double angle)
{
    //calculate the end position
    double endX = x + (length * cos(radian(angle))); //y_2 = y_1 + cos(Cita)*length according to the vector!
    double endY = y + (length * sin(radian(angle)));
    drawLine((int)round(x),(int)round(y),(int)round(endX),(int)round(endY)); //Use round() the return precise number!
    x = endX;//Update the start position
    y = endY;
    //By using this function, you can easily draw a line without calculating the postion of the new line!
}

void heptagon(int size)//Try to draw a heptagon with 7 corners
{
    int n;
    double angle = 0.0;
    for (n = 0; n < 7; n++)
    {
        drawPolyLine(size,angle);//Draw the first line with 0 degree
        angle = angle + 360.0/7.0;//Update the degree with 360/7 degree
        //Continue next loop!
    }
}

//And now, wait a second, I am not gonna start my main function here!
//Because, these functons are really useful
//So I better integrate them into a header file
//First, create a file abstraction.h, I have already created one for you
//Now go to that header file


//After you run the program you may find
//Why this heptagon is reverse?
//Let us flip it now!

void Advanced_PolyLine(int length, double angle, int offset)
{
    double endX = x + (length * cos(radian(angle))); 
    double endY = y + (length * sin(radian(angle)));
    drawLine((int)round(x),offset - (int)round(y),(int)round(endX),offset - (int)round(endY)); //Note I have an offset
    x = endX;
    y = endY;
}

void Advanced_heptagon(int size, int offset)
{
    int n;
    double angle = 0.0;
    for (n = 0; n < 7; n++)
    {
        Advanced_PolyLine(size,angle, offset);//Try to Set the offset to 300
        angle = angle + 360.0/7.0;
        //Actually the offset is the Y-coordinate of the reversed heptagon
        //whatever the offset is, the heptagon will be flipped
        //The value of offset only affects the Y-coordinate
    }
}

//Go to main_program and try

void Advanced_Poly(int size, double corner, int offset)
{
    int n;
    double angle = 0.0;
    for (n= 0; n < corner; n++)
    {
        Advanced_PolyLine(size, angle,offset);
        angle = angle + 360.0/corner;
    }
}