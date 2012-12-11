#include "XChannelFactory.h"

#include "XBase.h"
#include "XTcpChannel.h"
#include "XUdpChannel.h"
#include "XPipeChannel.h"

XChannelFactory::XChannelFactory(void)
{
}

XChannelFactory::~XChannelFactory(void)
{
}

XChannelFactory* XChannelFactory::Instance()
{

	return NULL;
}

XChannel * XChannelFactory::CreateTcpChannel()
{
	return new XTcpChannel();
}


XChannel * XChannelFactory::CreateUdpChannel()
{


	return new XUdpChannel();
}

XChannel * XChannelFactory::CreatePipeChannel()
{


	return new XPipeChannel();
}