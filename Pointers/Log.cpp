#include "Log.hpp"


void Log::set_level(level level)
{
	m_log_level = level;
}

void Log::error(const char* message)
{
	if (m_log_level >= level_error)
		std::cout << "[Error]: " << message << std::endl;
}
void Log::warn(const char* message)
{
	if (m_log_level >= level_warning)
		std::cout << "[Warning]: " << message << std::endl;
}//qlqr em algum canto
void Log::info(const char* message)
{
	if (m_log_level >= level_info)
		std::cout << "[Info]: " << message << std::endl;
}
