#pragma once
#include "TriangleFigureBase.h"
class IsoscelesTriangle : public TriangleFigureBase
{
  public:
    IsoscelesTriangle(std::string nameFigure, SideAndAngle* sideAndAngle)
        : TriangleFigureBase(nameFigure, sideAndAngle)
    {
        if (!IsoscelesTriangle::getCorrect())
        {
            throw CustomException("The parameters do not match the name of the geometric figure");
        }
    }
    bool getCorrect() override;
};
