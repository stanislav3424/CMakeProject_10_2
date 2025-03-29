#include "TriangleFigureBase.h"

bool TriangleFigureBase::getCorrect()
{
    int sumAngle = sideAndAngle[0].angle_deg + sideAndAngle[1].angle_deg + sideAndAngle[2].angle_deg;
    return sumAngle == 180;
}