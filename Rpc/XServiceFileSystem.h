#pragma once
#include "xservice.h"


class XServiceFileSystem :
	public XService
{
public:
	XServiceFileSystem(void);
	~XServiceFileSystem(void);

protected:
	virtual void InitService();

#ifdef SERVER
protected:
	void List();
#else
public:


#endif

};
