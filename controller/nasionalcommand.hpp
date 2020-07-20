#ifndef NASIONALCOMMAND_HPP
#define NASIONALCOMMAND_HPP

#include "command.h"
#include "../handler/messagehandler.h"


class NasionalCommand: public Command
{
public:
    NasionalCommand(MessageHandler& hanlder);

    virtual void execute(Type) override {}
private:
    MessageHandler& m_hanlder;
};

#endif // NASIONALCOMMAND_HPP
