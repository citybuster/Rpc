#pragma once
#include "XChannel.h"


class XPipeChannel :
	public XChannel
{
public:
	XPipeChannel(void);
	virtual ~XPipeChannel(void);

public:
	virtual int Send(void * dat, int size);
	virtual int Recv(void * buf, int &size);

};

