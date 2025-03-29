#include "EquilateralTriangle.h"

bool EquilateralTriangle::getCorrect()
{
    bool equalSides = (sideAndAngle[0].side_length == sideAndAngle[1].side_length) &&
                      (sideAndAngle[1].side_length == sideAndAngle[2].side_length);
    bool sumEqualAngles = (sideAndAngle[0].angle_deg == sideAndAngle[1].angle_deg) &&
                          (sideAndAngle[1].angle_deg == sideAndAngle[2].angle_deg) &&
                          ((sideAndAngle[2].angle_deg == 60));
    return TriangleFigureBase::getCorrect() && equalSides && sumEqualAngles;
}