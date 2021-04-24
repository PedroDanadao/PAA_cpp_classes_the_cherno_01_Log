#include <iostream>

#include "Log.hpp"

enum example : unsigned char
{
	A = 0, B = 2, C = 6
};

int a = 0;
int b = 1;
int c = 2;

int main()
{
	Log log;
	log.set_level(Log::level_info);

	log.error("error");
	log.warn("warning");
	log.info("info");

	std::cin.get();
}
