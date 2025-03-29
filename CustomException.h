#pragma once
#include <exception>
#include <string>
class CustomException : public std::exception
{
  private:
    std::string message;

  public:
    CustomException(const std::string& message) : message(message)
    {
    }
    const char* what() const noexcept override
    {
        return message.c_str();
    }
};