#include <jni.h>
#include <string>
//#include <stdio.h>
#include <unistd.h>
#include <android/log.h>

#define LOG_TAG "binarytreedemo"
#define LOGD(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
extern "C"
JNIEXPORT jstring

JNICALL
Java_com_zm_binarytreedemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}


/**
 * 监听软件是否被卸载
 * 1.弹出浏览器;
 * 2.或者删除SD卡数据.  这个目录APP卸载系统不会自动删除/storage/sdcard/自定义名称文件夹/
 *

extern "C"
JNIEXPORT void

JNICALL
Java_com_zm_binarytreedemo_MainActivity_uninstallListenerJNI(
        JNIEnv *env,
        jobject instance) {
    int code = fork();
    if (code > 0) {
        //父进程
        LOGD("parent-->code=%d\n", code);
    } else if (code == 0) {
        //子进程
        LOGD("children-->code=%d\n", code);
        int stop = 1;

        while (stop) {
            //每隔1秒钟判断应用目录是否存在
            sleep(1);
            FILE *file = fopen("/data/data/com.zm.userpicasso", "r");
            if (file == NULL) {

                LOGD("uninstall-->code=%d\n", code);
                //TODO 通过Linux命令启动浏览器问卷调查...删除文件等等操作
                execlp("am", "am", "start", "-a", "android.intent.action.VIEW", "-d",
                  "http://wuhaoyou.com/wp/", NULL);
                stop = 0;
            }
        }
    } else {
        //其它
        LOGD("error-->code=%d\n", code);
    }
}
*/

extern "C"
JNIEXPORT jint JNICALL
Java_com_zm_binarytreedemo_MainActivity_intFromJNI(JNIEnv *env, jobject instance) {

    // TODO
    jint i = 2;
    return i;

}