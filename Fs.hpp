#ifndef TUX_FILE
#define TUX_FILE 

#include <iostream>
#include <string>
#include <filesystem>
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
	static bool exists(const string &filename,fs t);

    };
}
#endif
