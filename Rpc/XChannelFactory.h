#pragma once

class XChannel;

class XChannelFactory
{
protected:
	XChannelFactory(void);
	~XChannelFactory(void);

public:
    static XChannelFactory* Instance();


public:
	XChannel * CreateTcpChannel();
	XChannel * CreateUdpChannel();
	XChannel * CreatePipeChannel();


};
