#include "CCTalon.h"

/**
@param speed is the PercentOutput of the motorcontroller
@return nothing, it is a void method 
*/
void CCTalon::set(double speed)
{
    if(reverse)
    {
        //super(-speed);
    }
    else 
    {
        //super(speed);
    }
    //super(reverse * speed);
}