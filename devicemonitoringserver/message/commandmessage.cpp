#include "commandmessage.h"

CommandMessage::CommandMessage(char adjustment) :
    Message(MessageType::Command),
    m_adjustment(adjustment)
{
}

std::string CommandMessage::messageToString() const
{
    std::stringstream stream;
    stream << "Command;" << (int)m_adjustment <<';';
    return stream.str();
}

char CommandMessage::getAdjustment() const
{
    return m_adjustment;
}

std::ostream& operator<<(std::ostream& out, const CommandMessage& other)
{
    out << other.messageToString();
    return out;
}

bool operator==(const CommandMessage& command1, const CommandMessage& command2)
{
    return command1.m_adjustment == command2.m_adjustment;
}

bool operator!=(const CommandMessage& command1, const CommandMessage& command2)
{
    return command1.m_adjustment != command2.m_adjustment;
}