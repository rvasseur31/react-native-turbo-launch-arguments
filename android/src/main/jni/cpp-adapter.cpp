#include <jni.h>
#include "react-native-turbo-launch-arguments.h"
#include "log.h"

extern "C" JNIEXPORT jdouble JNICALL
Java_com_reactnativeturbolauncharguments_TurboLaunchArgumentsModule_nativeMultiply(JNIEnv *env, jclass type, jdouble num1, jdouble num2)
{
    LOGI("Calling nativeMultiply");
    return turbolauncharguments::multiply(num1, num2);
}
