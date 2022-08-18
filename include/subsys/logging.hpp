#ifndef LOGGING_H
#define LOGGING_H

#include "main.h"
#include <string>
#include <experimental/source_location>
#include <cstdio>
#include <filesystem>

using namespace std;
using namespace std::experimental;
namespace fs = filesystem;

namespace Log
{
class Logger 
{
    public:
        Logger();
        void log(string message, source_location);
    
    private:
        string _filename;
}logger;

} // namespace Log

#endif