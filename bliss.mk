$(call inherit-product, device/samsung/v1awifi/full_v1awifi.mk)

# Inherit some common bliss stuff.
$(call inherit-product, vendor/bliss/config/common_full_tablet_wifionly.mk)

PRODUCT_NAME := bliss_v1awifi
PRODUCT_DEVICE := v1awifi

PRODUCT_BUILD_PROP_OVERRIDES += \
    PRODUCT_MODEL=SM-P900 \
    PRODUCT_NAME=v1awifi \
    PRODUCT_DEVICE=v1awifi \
    TARGET_DEVICE=v1awifi \
