#pragma once
#include "QuadrangleFigureBase.h"
class Rectangle : public QuadrangleFigureBase
{
  public:
    Rectangle(std::string nameFigure, SideAndAngle* sideAndAngle) : QuadrangleFigureBase(nameFigure, sideAndAngle)
    {
        if (!Rectangle::getCorrect())
        {
            throw CustomException("The parameters do not match the name of the geometric figure");
        }
    }
    bool getCorrect() override;
};
