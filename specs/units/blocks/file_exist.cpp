#include <tux.hpp>
#include <Unit.hpp>

using namespace Yubel;

bool check_directory_not_exist()
{
    return directory_exists("/usr/bin/gcc");       	
}
bool check_directory_exist()
{
   return directory_exists(".");
}
bool check_file_not_exist()
{
    return file_exists("aa");
}

bool check_file_exist()
{
    return file_exists("/usr/bin/git");	
}
int main()
{
    return (new Unit("Test the file block"))
	    ->theory("The directory must be exist",true,check_directory_exist)
	    ->theory("The file check file fail on not exist",false,check_file_not_exist)
	    ->theory("The file must be exist",true,check_file_exist)->theory("The diretory must be not exist",false,check_directory_not_exist)
	    ->end();	
}

