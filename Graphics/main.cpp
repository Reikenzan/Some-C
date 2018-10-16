#include "ccc_win.h"
int ccc_win_main()
{
    Point p1(0,0);
    Point p2(-2,2);
    Point p3(2,2);
   
    Line l1(Point(0,0),Point(-1,-1));
    Line l2(Point(0,0), Point(1,-1));
    
    Line l3(Point(-2,-2),Point(2,-2));
    Line l4(Point(-2,-3), Point(2,-3));
    Line l5(Point(-2,-2),Point(-2,-3));
    Line l6(Point(2,-2), Point(2,-3));

    //draw the face and the eyes  
    cwin << p1 << Circle(p1, 5); 
    cwin << p2 << Circle(p2, 2);
    cwin << p3 << Circle(p3, 2);
    // draw the nose;
    cwin << l1 << l2;
    //draw the mouth;
    cwin << l3 << l4 << l5 << l6; 
    //send a message
    cwin << Message(Point(-2,-2), "            Hello");
    return 0;
}
