LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE            := fstab.universal5420
LOCAL_MODULE_CLASS      := BOOT
LOCAL_SRC_FILES         := fstab.universal5420
LOCAL_MODULE_PATH       := $(TARGET_OUT_VENDOR_ETC)
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE            := init.target.rc
LOCAL_MODULE_CLASS      := BOOT
LOCAL_SRC_FILES         := init.target.rc
LOCAL_MODULE_PATH       := $(TARGET_OUT_VENDOR_ETC)/init/hw
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE            := ueventd.universal5420.rc
LOCAL_MODULE_STEM       := ueventd.rc
LOCAL_MODULE_CLASS      := BOOT
LOCAL_SRC_FILES         := ueventd.universal5420.rc
LOCAL_MODULE_PATH       := $(TARGET_OUT_VENDOR)
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE            := init.samsung.rc
LOCAL_MODULE_CLASS      := BOOT
LOCAL_SRC_FILES         := init.samsung.rc
LOCAL_MODULE_PATH       := $(TARGET_OUT_VENDOR_ETC)/init/hw
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE            := init.universal5420.rc
LOCAL_MODULE_CLASS      := BOOT
LOCAL_SRC_FILES         := init.universal5420.rc
LOCAL_MODULE_PATH       := $(TARGET_OUT_VENDOR_ETC)/init/hw
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE            := init.universal5420.usb.rc
LOCAL_MODULE_CLASS      := BOOT
LOCAL_SRC_FILES         := init.universal5420.usb.rc
LOCAL_MODULE_PATH       := $(TARGET_OUT_VENDOR_ETC)/init/hw
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE            := init.universal5420.wifi.rc
LOCAL_MODULE_CLASS      := BOOT
LOCAL_SRC_FILES         := init.universal5420.wifi.rc
LOCAL_MODULE_PATH       := $(TARGET_OUT_VENDOR_ETC)/init/hw
include $(BUILD_PREBUILT)
