#ifndef TUX_FILE
#define TUX_FILE

#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>
#include <chrono>
#include <thread>
namespace Tux
{
	using namespace std;
	namespace f = std::filesystem;

	enum fs
	{
		FICS,
		DIRS
	};
	typedef enum fs fs;

	class Fs
	{
	public:
		/**
		 *
		 * @brief Check if a filename exist
		 *
		 * @param filename The filename to check
		 *
		 * @return bool
		 *
		 **/
		static bool exists(const string &filename, fs t);
		static string content(const string &filename);

		/**
		 *
		 * @brief check if the filename is a directory
		 *
		 * @param filename The filename
		 *
		 * @return true
		 * @return false
		 *
		 */
		static bool directory(const string &filename);

		/**
		 *
		 * @brief Check is the filename is a file
		 *
		 * @param filename The filename
		 *
		 * @return true
		 * @return false
		 */
		static bool file(const string &filename);

		/**
		 *
		 * @brief Check if a file is empty
		 *
		 * @param filename The filename
		 *
		 * @return true
		 * @return false
		 *
		 */
		static bool empty(const string &filename);

		/**
		 *
		 * @brief Create a file
		 *
		 * @param filename The name to file to create
		 * @param content The option file content
		 *
		 * @return true
		 * @return false
		 *
		 **/
		static bool create(const string &filename, const string &content = "");

		/**
		 *
		 * @brief Remove a file
		 *
		 * @param filename The filename to remove
		 *
		 * @return true
		 * @return false
		 *
		 */
		static bool remove(const string &filename);
	};
}

#endif
