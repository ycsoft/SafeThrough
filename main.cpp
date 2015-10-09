#include "maindialog.h"
#include <QApplication>
#include <QTextCodec>
#include <QMessageBox>
#include <QSystemSemaphore>
#include <QSharedMemory>

#define RUN_SUCCESS  -1
#define RUN_FAIL     1


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //后方软件
    QApplication::setApplicationName("Safe");
    QApplication::setOrganizationName("hf");
    QApplication::setQuitOnLastWindowClosed(false);
    QSystemSemaphore  sema("Yang",1,QSystemSemaphore::Open);
    sema.acquire();
    QSharedMemory shared_memo("SafeThrough-single");
    if (!shared_memo.create(1)){
        QMessageBox::warning(NULL,"Warning",QString::fromLocal8Bit("程序正在运行"),0,0);
        sema.release();
        return RUN_FAIL;
    }
    sema.release();
    MainDialog w;
    w.show();


    return a.exec();
}
