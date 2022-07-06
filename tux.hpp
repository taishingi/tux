#ifndef TUX
#define TUX

#include <iostream>
#include <string>
#include <filesystem>

using namespace std;

namespace fs = std::filesystem;

/**
 *
 * @brief Check if a filename exist
 *
 * @param filename The filename to check
 *
 * @return bool
 *
 **/
bool file_exists(const string &filename);

/**
 * 
 * @brief Check if a directory exist
 *
 * @param directory The directory exist
 *
 * @return bool
 *
 **/
bool directory_exists(const string &directory);

#endif

