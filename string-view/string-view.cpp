// string-view.cpp : Defines the entry point for the application.
//

#include "string-view.h"

std::string_view get_filename(std::string_view str)
{
    auto const pos1{ str.find_last_of('\\') };
    auto const pos2{ str.find_last_of('.') };

    return str.substr(pos1 + 1, pos2 - pos1 - 1);
}

int main()
{
    char const file1[]{ R"(c:\test\example1.doc)" };
    auto name1 = get_filename(file1);

    std::string file2{ R"(c:\test\example2)" };
    auto name2 = get_filename(file2);

    auto name3 = get_filename(std::string_view{ file1, 16 });

    std::cout << name1 << '\n' << name2 << '\n' << name3 << std::endl;
}
