#
# system.prop for v1awifi
#

# Memory Optimizations
PRODUCT_PROPERTY_OVERRIDES += \
    ro.vendor.qti.am.reschedule_service=true \
    ro.vendor.qti.sys.fw.use_trim_settings=true \
    ro.vendor.qti.sys.fw.trim_empty_percent=50 \
    ro.vendor.qti.sys.fw.trim_cache_percent=100 \
    ro.vendor.qti.sys.fw.empty_app_percent=25

# Dalvik/Art
PRODUCT_PROPERTY_OVERRIDES += \
    dalvik.vm.heapstartsize=8m \
    dalvik.vm.heapgrowthlimit=192m \
    dalvik.vm.heapsize=512m \
    dalvik.vm.heaptargetutilization=0.75 \
    dalvik.vm.heapminfree=512k \
    dalvik.vm.heapmaxfree=8m

# Dex2oat optimizations
PRODUCT_PROPERTY_OVERRIDES += \
    ro.sys.fw.dex2oat_thread_count=4

PRODUCT_PROPERTY_OVERRIDES += \
    dalvik.vm.dex2oat-filter=speed \
    dalvik.vm.dex2oat-swap=false

# Legacy stagefright media
PRODUCT_PROPERTY_OVERRIDES += \
    media.stagefright.legacyencoder=true \
    media.stagefright.less-secure=true

# Camera
PRODUCT_PROPERTY_OVERRIDES += \
    camera.disable_treble=true

# Media
PRODUCT_PROPERTY_OVERRIDES += \
    ro.sapa.jack.master=alsa \
    ro.hdcp2.rx=tz \
    persist.bluetooth.disableabsvol=true \
    persist.media.treble_omx=false

# GPU producer to CPU consumer not supported
PRODUCT_PROPERTY_OVERRIDES += \
    ro.bq.gpu_to_cpu_unsupported=1

# OpenGL
PRODUCT_PROPERTY_OVERRIDES += \
    debug.hwui.use_buffer_age=false

# Graphics
PRODUCT_PROPERTY_OVERRIDES += \
    ro.opengles.version=196609 \
    debug.hwc.skip_dma_types=0,2 \
    debug.hwc.force_gpu=1 \
    debug.sf.enable_hwc_vds=1 \
    debug.sf.latch_unsignaled=1

PRODUCT_PROPERTY_OVERRIDES += \
    ro.sf.lcd_density=320 \
    lockscreen.rot_override=true

# Disable more Codec2.0 components
PRODUCT_PROPERTY_OVERRIDES += \
    debug.stagefright.ccodec=0

# Randomly from stock
PRODUCT_PROPERTY_OVERRIDES += \
    ro.ril.gprsclass=10 \
    ro.ril.hsxpa=1 \
    ro.sec.fle.encryption=true \
    ro.secwvk=220

# Audio
PRODUCT_PROPERTY_OVERRIDES += \
    ro.config.media_vol_steps=30

# sdcardfs
PRODUCT_PROPERTY_OVERRIDES += \
    ro.sys.sdcardfs=true

# Radio
PRODUCT_PROPERTY_OVERRIDES += \
    ro.radio.noril=yes
