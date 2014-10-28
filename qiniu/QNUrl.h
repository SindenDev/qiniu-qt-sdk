#ifndef QNURL_H
#define QNURL_H

#include <QtGlobal>

class QString;
class QDateTime;
class QNMac;

class QNUrl
{
private:
    QString &styleDelimiter;

public:
    QNUrl();
    QNUrl(QString &styleDelimiter);
    ~QNUrl();
    QString makePublicSimpleUrl(const QString &domain, const QString &key,
                                const QString *fop=NULL, const bool isAlias=false);

    QString makePrivateSimpleUrl(const QString &domain, const QString &key,
                                 const QString *fop=NULL, const bool isAlias=false,
                                 const QDateTime *deadline=NULL, const QNMac *mac=NULL);
};

#endif // QNURL_H
