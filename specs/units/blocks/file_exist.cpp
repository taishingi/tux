#include <tux.hpp>
#include <Unit.hpp>

using namespace Yubel;

bool check_file_exist()
{
    return exists(".");
}

int main()
{
    return (new Unit("Test the file block"))
	    ->theory("The file must be exist",true,check_file_exist)->end();	
}
