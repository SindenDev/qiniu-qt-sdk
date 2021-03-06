#ifndef QNMAC_H
#define QNMAC_H

#include <QtGlobal>

class QString;
class QByteArray;
class QNetworkRequest;
class QUrl;

class QNMac
{
private:
    QString &accessKey;
    QByteArray &secretKey;

public:
    QNMac(QString &accessKey, QByteArray &secretKey);
    ~QNMac();
    QString sign(const QByteArray &data) const;
    QString signWithData(const QByteArray &data) const;
    QString signRequest(const QUrl &reqestUrl, const QByteArray *bodyData=0) const;
    QString signRequest(const QNetworkRequest &request, const QByteArray *bodyData=0) const;
};

#endif // QNMAC_H
