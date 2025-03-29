#include "FigureBase.h"

int FigureBase::getNumberOfSide()
{
    return numberOfSides;
}

int FigureBase::getSide(int index)
{
    return sideAndAngle[index].side_length;
}

int FigureBase::getAngle(int index)
{
    return sideAndAngle[index].angle_deg;
}

std::string FigureBase::getName()
{
    return nameFigure;
}
bool FigureBase::getCorrect()
{
    return false;
}
void FigureBase::setNumberOfSides(int setNumberOfSides)
{
    numberOfSides = setNumberOfSides;
}
