#include "XRpc.h"

#include "XBase.h"
#include "XChannel.h"


XRpc::XRpc(void)
: m_pChannel(NULL)
{
}

XRpc::~XRpc(void)
{
	if ( m_pChannel )
		delete m_pChannel;
	m_pChannel = NULL;
}

void XRpc::SetChannel(XChannel * channel)
{
	if ( m_pChannel )
		delete m_pChannel;
	m_pChannel = channel;
}

