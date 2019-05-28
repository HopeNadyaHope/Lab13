#include <jni.h>
#ifndef _Included_LZFunctions
#define _Included_LZFunctions
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     LZFunctions
 * Method:    lzOpenSourceFile
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_LZFunctions_lzOpenSourceFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     LZFunctions
 * Method:    lzOpenDestinationFile
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_LZFunctions_lzOpenDestinationFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     LZFunctions
 * Method:    lzCopyData
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_LZFunctions_lzCopyData
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     LZFunctions
 * Method:    lzCloseFile
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_LZFunctions_lzCloseFile
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
