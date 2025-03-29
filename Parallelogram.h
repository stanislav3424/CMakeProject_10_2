#pragma once
#include "QuadrangleFigureBase.h"
class Parallelogram : public QuadrangleFigureBase
{
  public:
    Parallelogram(std::string nameFigure, SideAndAngle* sideAndAngle) : QuadrangleFigureBase(nameFigure, sideAndAngle)
    {
        if (!Parallelogram::getCorrect())
        {
            throw CustomException("The parameters do not match the name of the geometric figure");
        }
    }
    bool getCorrect() override;
};
