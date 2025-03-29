#include "Square.h"

bool Square::getCorrect()
{
    bool equalSides = (sideAndAngle[0].side_length == sideAndAngle[1].side_length) &&
                      (sideAndAngle[1].side_length == sideAndAngle[2].side_length) &&
                      (sideAndAngle[2].side_length == sideAndAngle[3].side_length);
    bool equalAngles = (sideAndAngle[0].angle_deg == sideAndAngle[1].angle_deg) &&
                       (sideAndAngle[1].angle_deg == sideAndAngle[2].angle_deg) &&
                       (sideAndAngle[2].angle_deg == sideAndAngle[3].angle_deg) && (sideAndAngle[0].angle_deg == 90);
    return QuadrangleFigureBase::getCorrect() && equalAngles && equalSides;
}
