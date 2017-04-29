#ifndef TEXT_HPP
#define TEXT_HPP

#include "canvas.hpp"
#include <string>

std::string exec(const char* cmd);
void writeText(const Canvas& canvas, std::string text);

#endif
