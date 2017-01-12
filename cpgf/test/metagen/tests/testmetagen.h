#ifndef __TESTMETAGEN_H
#define __TESTMETAGEN_H

#include "../../testmetatraits.h"

#include "../../unittestbase.h"
#include "../../scriptbind/bind_common.h"

#include "cpgf/gmetaclass.h"

void metagenBindBasicData(cpgf::GScriptObject * script, cpgf::IMetaService * service);
void metagenBindBasicData(cpgf::IScriptObject * script, cpgf::IMetaService * service);



#endif
