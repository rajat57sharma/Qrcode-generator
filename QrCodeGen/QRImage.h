#ifndef QRIMAGE_H
#define QRIMAGE_H
#include <QString>



class QRImage
{
public:
    QRImage();

    void CreateQr(QString);

private:
    QString encryptString(QString);
    void generateQRCode(const QString &data, const QString &filePath);

    QString ReverseString( QString);
};

#endif // QRIMAGE_H
