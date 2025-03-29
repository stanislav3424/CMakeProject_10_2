#include "RightAngledTriangle.h"

bool RightAngledTriangle::getCorrect()
{
    //прямоугольный треугольник (угол C всегда равен 90);
    bool equalAngles = sideAndAngle[2].angle_deg == 90;
    return TriangleFigureBase::getCorrect() && equalAngles;
}
