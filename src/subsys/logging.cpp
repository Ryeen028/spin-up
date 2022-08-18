#include "subsys/logging.hpp"
#include <iostream>

using namespace Log; 

Logger::Logger()
{
    auto dirIter = fs::directory_iterator("directory_path");
    int file_count = 0;

    for (auto& entry : dirIter)
        file_count += entry.is_regular_file();
    _filename = "log_" + to_string(file_count);
}

void Logger::log(string message, 
                source_location origin = source_location::current())
{
    // Format:
    // {time}: In {file} > {function} > {line}: "{message}"
    //
    // Example:
    // 93588ms : In main.cpp > initialize > 11: "Initializing bot"
    

    cout    << pros::millis() << "ms : " 
            << "In " << origin.file_name() << " > "
            << origin.function_name() << " > "
            << origin.line() << ": "
            << " \"" << message << "\""
            << endl;
}
