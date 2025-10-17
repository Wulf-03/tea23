#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

int main(int argc, char **argv) {

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);
    

    /* INSERT YOUR CODE HERE */
    void changeValueByParameter(int value);
    void changeValueByPointer(int* ptr);

    int y = 5;
    fmt::print("{}\n",y);
    changeValueByParameter(y);
    fmt::print("{}\n",y);

    return 0; /* exit gracefully*/
}
