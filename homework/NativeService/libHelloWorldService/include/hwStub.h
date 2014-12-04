#ifndef _HWSTUB_H_
#define _HWSTUB_H_

#include <binder/IInterface.h>
#include <binder/Parcel.h>
#include <utils/String16.h>
#include <utils/threads.h>
#include <string.h>
#include "IHelloWorld.h"

namespace android{

class HelloWorldService : public BnInterface<IHelloWorld>
{
public:
        virtual ~HelloWorldService(){};
        static void instantiate();
        virtual void hellothere(const char *str);
        status_t onTransact(uint32_t code,
                                const Parcel &data,
                                Parcel *reply,
                                uint32_t flags);
                                
private:
        HelloWorldService(){};
};

}

#endif