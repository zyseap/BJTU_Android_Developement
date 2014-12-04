#include <binder/IPCThreadState.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>

#include "hwStub.h"

int main()
{
        android::HelloWorldService::instantiate();
        android::ProcessState::self()->startThreadPool();
        printf("Hello Service is now ready.");
        android::IPCThreadState::self()->joinThreadPool();
        return 0;
}