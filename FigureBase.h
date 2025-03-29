#pragma once
#include "SideAndAngle.h"
#include "CustomException.h"
#include <string>

class FigureBase
{
  protected:
    std::string nameFigure{"figure"};
    SideAndAngle* sideAndAngle = nullptr;
    int numberOfSides{0};

  public:
    FigureBase(std::string nameFigure, SideAndAngle* sideAndAngle)
        : sideAndAngle{sideAndAngle}, nameFigure{nameFigure}
    {
    }

    FigureBase() = default;

    virtual ~FigureBase()
    {
        delete[] sideAndAngle;
    }

    int getNumberOfSide();
    int getSide(int index);
    int getAngle(int index);
    std::string getName();
    virtual bool getCorrect();

  protected:
    void setNumberOfSides(int setNumberOfSides);
};
