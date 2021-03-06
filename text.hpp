#ifndef TEXT_HPP
#define TEXT_HPP

#include "canvas.hpp"
#include <string>
#include <vector>

std::string exec(const char* cmd);
void writeText(Canvas& canvas, std::string text);
std::vector<std::string> extractCidrIpAddresses(std::string output);
std::vector<std::string> getIpAddresses();
std::string getHostname();
std::string getInfoText(Canvas& canvas, uint16_t port);
void writeInfoText(Canvas& canvas, uint16_t port);

#endif
