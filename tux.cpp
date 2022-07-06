#include "tux.hpp"

bool file_exists(const string &filename)
{
    return fs::is_directory(filename.c_str()) ? false: fs::exists(filename.c_str());
}
bool directory_exists(const string &filename)
{
    return fs::is_directory(filename.c_str()) ? fs::exists(filename.c_str()) : false;		
}
