#include "QRImage.h"
#define ENABLE_ENCODER_GENERIC true
#include "QZXing.h"
#include <QZXingImageProvider.h>
#include <QZXingFilter.h>
#include <QZXing_global.h>

QRImage::QRImage()
{

}

void QRImage::CreateQr(QString inputData)
{


    QString filePath = "D:/new image/qr_code.png";

        generateQRCode(inputData, filePath);

//    // Convert the input data to QByteArray
//    QByteArray data = encryptString(inputData).toUtf8();

//    // Create a QZXing object
//    QZXing qzxing;

//    // Generate a QR code without specifying the encoding format
//    QImage qrCode = qzxing.encodeData(data);

//    // Save the QR code as an image file (optional)
//    qrCode.save("qrcode.png");
}

QString QRImage::encryptString(QString  input)
{
        QByteArray ba =input.toUtf8();
        QByteArray aba =ba.toBase64();
        QString data = aba.data();
        QString data1 = ReverseString(data);
        QByteArray text = data1.toUtf8();
        QByteArray textt = text.toBase64();
        QString data2 = textt.data();
        QString data3 = ReverseString(data2);
        QByteArray texttt = data3.toUtf8();
        QByteArray textttt = texttt.toBase64();
        QString temp3 = textttt.data();
        QString finalString = ReverseString(temp3);

        return finalString;
}

void QRImage::generateQRCode(const QString &data, const QString &filePath)
{
    QZXing qrCode;
        QImage qrImage = qrCode.encodeData(encryptString(data));

        if (!qrImage.isNull()) {
            // Save the QR code image to a file
            qrImage.save(filePath);
        } else {
            qDebug() << "Failed to generate QR code.";
        }
}

QString QRImage::ReverseString(QString input)
{
        QString outputstring = "";

        for(int i=input.length();i>=1;i--)
        {
            outputstring += input.at(i-1);
        }
        return outputstring;
}



