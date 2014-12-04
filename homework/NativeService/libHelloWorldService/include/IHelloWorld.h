#ifndef _HELLOWORLD_H_
#define _HELLOWORLD_H_

#include <binder/IInterface.h>

#define HELLOWORLD_NAME "org.IHelloWorld"

namespace android{

class IHelloWorld : public IInterface {
protected:
        enum {
                HW_HELLOTHERE = IBinder::FIRST_CALL_TRANSACTION
        };
public:
        DECLARE_META_INTERFACE(HelloWorld); 
        virtual void hellothere(const char *str) = 0;
};

}

#endif