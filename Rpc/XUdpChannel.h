#pragma once
#include "XChannel.h"


class XUdpChannel :
	public XChannel
{
public:
	XUdpChannel(void);
	virtual ~XUdpChannel(void);

public:
	virtual int Send(void * dat, int size);
	virtual int Recv(void * buf, int &size);

};

