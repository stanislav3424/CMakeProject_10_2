#include "QuadrangleFigureBase.h"

bool QuadrangleFigureBase::getCorrect()
{
    int sumAngle =
        sideAndAngle[0].angle_deg + sideAndAngle[1].angle_deg + sideAndAngle[2].angle_deg + sideAndAngle[3].angle_deg;
    return sumAngle == 360;
}
