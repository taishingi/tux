#ifndef STR
#define STR
#include <string>
namespace Tux
{
    using namespace std;

    class Str
    {
    private:
        /* data */
    public:
        /**
         *
         * @brief check if a string contains a string
         *
         * @param needle The data to search
         * @param actual The actual string
         *
         * @return true
         * @return false
         *
         */
        static bool contains(const string &needle, const string &actual);

        /**
         *
         * @brief Check if two string are identicals
         *
         * @param expected The expected value
         * @param actual The actual value
         *
         * @return true
         * @return false
         *
         */
        static bool equals(const string &expected, const string &actual);

        /**
         * 
         * @brief Check if the string is empty
         *
         * @param actual The string to check
         * 
         * @return true
         * @return false
         * 
         */
        static bool empty(const string &actual);

        /**
         *
         * @brief check if two string are differents
         *
         * @param expected The expected value
         * @param actual The actual value
         *
         * @return true
         * @return false
         *
         */
        static bool differents(const string &expected, const string &actual);
    };

}

#endif
