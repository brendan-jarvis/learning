#include <iostream>

std::string secret_string(std::string passcode);
std::string order66(std::string passcode = "Execute Order 66");
std::string overload(int number);
std::string overload(std::string text);

template <typename T>
T template_function(T value)
{
  value *= value;
  return value;
}