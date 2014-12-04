#include <utils/Log.h>

#include <string.h>
#include <cutils/atomic.h>
#include <utils/Errors.h>
#include <binder/IServiceManager.h>
#include <utils/String16.h>
#include <binder/Parcel.h>

#include "IHelloWorld.h"

namespace android {

class BpHelloWorld: public BpInterface<IHelloWorld>
{
public:
        BpHelloWorld(const sp<IBinder>& impl)
                : BpInterface<IHelloWorld>(impl) {}
        
        virtual void hellothere(const char *str) {
                Parcel data, reply;
                data.writeInterfaceToken(getInterfaceDescriptor());
                data.writeString16(String16(str));
                remote()->transact(HW_HELLOTHERE, data, &reply, IBinder::FLAG_ONEWAY);
        }
};

}