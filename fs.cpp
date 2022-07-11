#include "fs.hpp"

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
string Fs::content(const string &filename)
{
	string data;
	fstream File(filename);
	if(File.is_open())
	{
		File >> data;
		File.close();
	}
	return data;
}
bool Fs::exists(const string &filename, fs t)
{
	switch (t)
	{
	case DIRS:
		return Fs::file(filename) ? false : f::exists(filename.c_str());
	case FICS:
		return Fs::directory(filename) ? false : f::exists(filename.c_str());
	default:
		return false;
	}
}
bool Fs::file(const string &filename)
{
	return !f::is_directory(filename.c_str());
}
bool Fs::directory(const string &filename)
{
	return f::is_directory(filename.c_str());
}

string content(const string &filename)
{
	string data;
	ofstream File(filename);
	File.close();
	return  data;
}

bool Fs::empty(const string &filename)
{
	return f::is_empty(filename.c_str());
}

bool Fs::remove(const string &filename)
{
	return f::remove(filename);
}
bool Fs::create(const string &filename, const string &content)
{
	if (f::exists(filename))
	{
		f::remove(filename);
	}
	ofstream File(filename);
	File << content.c_str();
	File.close();
	return f::exists(filename);
}
