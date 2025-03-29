#include "Rhombus.h"

bool Rhombus::getCorrect()
{
    bool equalAngles = (sideAndAngle[0].angle_deg == sideAndAngle[2].angle_deg) &&
                       (sideAndAngle[1].angle_deg == sideAndAngle[3].angle_deg);
    return QuadrangleFigureBase::getCorrect() && equalAngles;
}
