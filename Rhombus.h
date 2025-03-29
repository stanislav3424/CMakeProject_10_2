#pragma once
#include "QuadrangleFigureBase.h"
class Rhombus : public QuadrangleFigureBase
{
  public:
    Rhombus(std::string nameFigure, SideAndAngle* sideAndAngle) : QuadrangleFigureBase(nameFigure, sideAndAngle)
    {
        if (!Rhombus::getCorrect())
        {
            throw CustomException("The parameters do not match the name of the geometric figure");
        }
    }
    bool getCorrect() override;
};
