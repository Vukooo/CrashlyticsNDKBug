#include <jni.h>
#include <string>

extern "C" JNIEXPORT jint JNICALL
Java_com_vukooo_nativelib_NativeLib_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    int* p = (int*) -1;
    int i = *p;
    return i;
}