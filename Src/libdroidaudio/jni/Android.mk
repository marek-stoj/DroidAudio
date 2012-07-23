LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)
 
LOCAL_MODULE    := droidaudio
 
LOCAL_CFLAGS := $(LOCAL_C_INCLUDES:%=-I%) -O2 -Wall -D__ANDROID__ -DFIXED_POINT -D_ARM_ASSEM_ -D__ANDROID__ -DMPG123_NO_CONFIGURE -DOPT_GENERIC -DHAVE_STRERROR -DMPG123_NO_LARGENAME
LOCAL_CPPFLAGS := $(LOCAL_C_INCLUDES:%=-I%) -O2 -Wall -D__ANDROID__ -DFIXED_POINT -D_ARM_ASSEM_ -D__ANDROID__ -DMPG123_NO_CONFIGURE -DOPT_GENERIC -DHAVE_STRERROR -DMPG123_NO_LARGENAME
LOCAL_LDLIBS := -lm
LOCAL_ARM_MODE  := arm
 
LOCAL_SRC_FILES := com.marekstoj.droidaudio.Mpg123Decoder.cpp\
	libmpg123/compat.c\
	libmpg123/dct64.c\
	libmpg123/equalizer.c\
	libmpg123/format.c\
	libmpg123/frame.c\
	libmpg123/icy.c\
	libmpg123/icy2utf8.c\
	libmpg123/id3.c\
	libmpg123/index.c\
	libmpg123/layer1.c\
	libmpg123/layer2.c\
	libmpg123/layer3.c\
	libmpg123/libmpg123.c\
	libmpg123/ntom.c\
	libmpg123/optimize.c\
	libmpg123/parse.c\
	libmpg123/readers.c\
	libmpg123/stringbuf.c\
	libmpg123/synth.c\
	libmpg123/synth_8bit.c\
	libmpg123/synth_arm.S\
	libmpg123/synth_real.c\
	libmpg123/synth_s32.c\
	libmpg123/tabinit.c\
 
include $(BUILD_SHARED_LIBRARY)
