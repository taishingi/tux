#include "Fs.hpp"


using namespace Tux;

/**
 *
 * @brief Check if a filename exist
 *
 * @param filename The filename to check
 *
 * @return bool
 *
 **/
bool Fs::exists(const string &filename,fs t)
{
    switch(t)
    {
	    case DIRS:
		return f::is_directory(filename.c_str()) ? f::exists(filename.c_str()) : false;
	case FICS:
		return f::is_directory(filename.c_str()) ? false: f::exists(filename.c_str());
	default:
		return false;
    }
}

