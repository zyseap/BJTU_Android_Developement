LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := src/hwProxy.cpp
LOCAL_SRC_FILES += src/hwStub.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/include

LOCAL_MODULE := libHelloWorldService
LOCAL_MODULE_TAGS := optional

LOCAL_PRELINK_MODULE := false

LOCAL_MODULE_PATH := $(TARGET_OUT_SHARED_LIBRARIES)
LOCAL_LDLIBS := -llog
LOCAL_SHARED_LIBRARIES += \
liblog \
libcutils \
libutils \
libbinder

include $(BUILD_SHARED_LIBRARY)
