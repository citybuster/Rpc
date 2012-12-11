#pragma once

class XChannel
{
public:
	XChannel(void);
	virtual ~XChannel(void);

public:
	void AttchDesc(int desc);

public:
	virtual int Send(void * dat, int size) = 0;
	virtual int Recv(void * buf, int &size) = 0;

};


