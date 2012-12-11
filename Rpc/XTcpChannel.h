#pragma once
#include "XChannel.h"

class XTcpChannel :
	public XChannel
{
public:
	XTcpChannel(void);
	virtual ~XTcpChannel(void);

public:
	virtual int Send(void * dat, int size);
	virtual int Recv(void * buf, int &size);

};
