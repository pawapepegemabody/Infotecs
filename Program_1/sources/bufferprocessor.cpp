#include "bufferprocessor.h"

#include <numeric>
#include <string>

#include "safebuffer.h"
#include "server.h"
#include "lib.h"


BufferProcessor::BufferProcessor(SafeBuffer<std::string> &buffer) :
    buffer(buffer) {}


void BufferProcessor::processAndTransfer(Server &server)
{
    while (true) {
        std::string data = buffer.readOnNotified();
        std::cout <<"ModifiedData:"<< data << std::endl;
        int sum = digitSum(std::move(data));
        server.send(std::move(std::to_string(sum)));
    }
}

