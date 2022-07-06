#include "tux.hpp"

bool exists(const string &filename)
{
    return fs::exists(filename.c_str());
}
