#include "str.hpp"

using namespace Tux;

bool Str::contains(const string &needle, const string &actual)
{
    return actual.find(needle) != string::npos;
}
bool Str::differents(const string &expected, const string &actual)
{
    return actual.compare(expected) != 0;
}
bool Str::equals(const string &expected, const string &actual)
{
    return actual.compare(expected) == 0;
}
