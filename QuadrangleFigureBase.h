#pragma once
#include "FigureBase.h"
#include "CustomException.h"

class QuadrangleFigureBase : public FigureBase
{
  private:
  public:
    QuadrangleFigureBase(std::string nameFigure, SideAndAngle* sideAndAngle)
        : FigureBase(nameFigure, sideAndAngle)
    {
        setNumberOfSides(4);
        if (!QuadrangleFigureBase::getCorrect())
        {
            throw CustomException("The angles are not equal to 360");
        }
    }
    bool getCorrect() override;
};
