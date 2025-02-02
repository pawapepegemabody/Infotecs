#include "inputhandler.h"
#include "safebuffer.h"
#include <string>
#include <algorithm>
#include "lib.h"

InputHandler::InputHandler(SafeBuffer<std::string> &buffer) :
    buffer(buffer){}

void InputHandler::startInputProcess()
{
    while (true) {
        std::string input;
        std::getline(std::cin, input);

        if(isValid(input))
        {
            std::string processedInput = sortAndReplace(std::move(input));
            buffer.writeAndNotify(std::move(processedInput));
        }
    }
}


bool InputHandler::isValid(const std::string &s)
{
    return !s.empty() && s.length() <= 64 && std::all_of(s.begin(), s.end(), ::isdigit);
}



