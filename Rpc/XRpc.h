#pragma once

class XChannel;

class XRpc
{
public:
	XRpc(void);
	virtual ~XRpc(void);

public:
	void SetChannel(XChannel * channel);

protected:
	XChannel *m_pChannel;
};
