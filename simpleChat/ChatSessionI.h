// **********************************************************************
//
// Copyright (c) 2003-2017 ZeroC, Inc. All rights reserved.
//
// **********************************************************************

#ifndef CHAT_SESSION_I_H
#define CHAT_SESSION_I_H

#include <Chat.h>

class ChatSessionI : public Demo::ChatSession, public IceUtil::Mutex
{
public:

    static std::string IceProgramName;

    ChatSessionI(const std::string&);

    virtual void ice_ping(const Ice::Current&) const;
    virtual void setCallback(const Demo::ChatCallbackPrx&, const Ice::Current&);
    virtual void say(const std::string&, const Ice::Current&);
    virtual void destroy(const Ice::Current&);

private:

    const std::string _userId;
    Demo::ChatCallbackPrx _callback;
};

#endif
