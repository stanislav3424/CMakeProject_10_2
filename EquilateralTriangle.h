#pragma once
#include "TriangleFigureBase.h"
class EquilateralTriangle : public TriangleFigureBase
{
  public:
    EquilateralTriangle(std::string nameFigure, SideAndAngle* sideAndAngle)
        : TriangleFigureBase(nameFigure, sideAndAngle)
    {
        if (!EquilateralTriangle::getCorrect())
        {
            throw CustomException("The parameters do not match the name of the geometric figure");
        }
    }
    bool getCorrect() override;
};
