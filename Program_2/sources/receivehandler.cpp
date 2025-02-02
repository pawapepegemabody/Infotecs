#include "receivehandler.h"
#include <string>
#include <iostream>
#include "lib.h"


void ReceiveHandler::_handle(std::string data)
{
    handle(data);
}
