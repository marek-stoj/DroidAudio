#include <jni.h>

#ifndef _Included_com_marekstoj_droidaudio_Mpg123Decoder

#define _Included_com_marekstoj_droidaudio_Mpg123Decoder
  
#ifdef __cplusplus
  extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_com_marekstoj_droidaudio_Mpg123Decoder_openFile
  (JNIEnv *, jobject, jstring);

JNIEXPORT jint JNICALL Java_com_marekstoj_droidaudio_Mpg123Decoder_readSamples
  (JNIEnv *, jobject, jlong, jshortArray, jint, jint);

JNIEXPORT jint JNICALL Java_com_marekstoj_droidaudio_Mpg123Decoder_skipSamples
  (JNIEnv *, jobject, jlong, jint);

JNIEXPORT jint JNICALL Java_com_marekstoj_droidaudio_Mpg123Decoder_getNumChannels
  (JNIEnv *, jobject, jlong);

JNIEXPORT jint JNICALL Java_com_marekstoj_droidaudio_Mpg123Decoder_getRate
  (JNIEnv *, jobject, jlong);

JNIEXPORT jfloat JNICALL Java_com_marekstoj_droidaudio_Mpg123Decoder_getLength
  (JNIEnv *, jobject, jlong);

JNIEXPORT void JNICALL Java_com_marekstoj_droidaudio_Mpg123Decoder_closeFile
  (JNIEnv *, jobject, jlong);

JNIEXPORT jlong JNICALL Java_com_marekstoj_droidaudio_Mpg123Decoder_length
  (JNIEnv* env, jobject object, jlong handle);

JNIEXPORT jlong JNICALL Java_com_marekstoj_droidaudio_Mpg123Decoder_tell
  (JNIEnv* env, jobject object, jlong handle);
  
JNIEXPORT jlong JNICALL Java_com_marekstoj_droidaudio_Mpg123Decoder_seek
  (JNIEnv* env, jobject object, jlong handle, jlong offset);

#ifdef __cplusplus
}
#endif

#endif
