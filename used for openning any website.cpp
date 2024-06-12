#include <iostream>
#include <cstdlib>

#ifdef _WIN32
const char* OPEN_COMMAND = "start ";
#elif defined(__APPLE__)
const char* OPEN_COMMAND = "open ";
#else
const char* OPEN_COMMAND = "xdg-open ";
#endif

int main(int argc, char* argv[]) {
    std::string url = "https://www.youtube.com/watch?v=QYlzoplheEU";  // Default URL

    if (argc > 1) {
        url = argv[1];
    }

    std::string command = std::string(OPEN_COMMAND) + url;

    if (std::system(command.c_str()) != 0) {
        std::cerr << "Error opening URL." << std::endl;
        return 1;
    }

    return 0;
}
