#pragma once
#include "QuadrangleFigureBase.h"
class Square : public QuadrangleFigureBase
{
  public:
    Square(std::string nameFigure, SideAndAngle* sideAndAngle) : QuadrangleFigureBase(nameFigure, sideAndAngle)
    {
        if (!Square::getCorrect())
        {
            throw CustomException("The parameters do not match the name of the geometric figure");
        }
    }
    bool getCorrect() override;
};
