#pragma once

#include <iostream>


class Log{
public:
	enum level{level_error=0, level_warning, level_info};

	void set_level(level level);

	void error(const char* message);

	void warn(const char* message);

	void info(const char* message);

private:
	level m_log_level = level_info;
};
