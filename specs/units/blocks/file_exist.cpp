#include <Unit.hpp>
#include <Fs.hpp>

using namespace Yubel;
using namespace Tux;

bool check_directory_not_exist()
{
    return Fs::exists("/usr/bin/gcc",fs::DIRS);
}    
bool check_directory_exist()
{
   return Fs::exists(".",fs::DIRS);
}
bool check_file_not_exist()
{
    return Fs::exists("aa",fs::FICS);
}

bool check_file_exist()
{
    return Fs::exists("/usr/bin/git",fs::FICS);	
}
int main()
{
    return (new Unit("Test the file block"))
	    ->theory("The directory must be exist",true,check_directory_exist)
	    ->theory("The file check file fail on not exist",false,check_file_not_exist)
	    ->theory("The file must be exist",true,check_file_exist)->theory("The diretory must be not exist",false,check_directory_not_exist)
	    ->end();	
}

