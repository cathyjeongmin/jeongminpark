#include <jni.h>
#include "helloworld.h"
#include <stdio.h>
JNIEXPORT void JNICALL Java_helloworld_print(JNIEnv *env,jobject obi){
	printf("Hello World\n");
	return;
}
