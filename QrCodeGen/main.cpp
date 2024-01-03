#include <QCoreApplication>
#include <QRImage.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QRImage W;

    QString data = "192.168.0.192|12345678";
    W.CreateQr(data);
    return a.exec();
}

