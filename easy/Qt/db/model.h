#ifndef MODEL_H
#define MODEL_H

#include <QSqlDatabase>
#include <QVariant>
#include <QMap>



class Model
{
public:
    Model();

    QVariant value(const QString &key) const;
    Model& value(const QString &key, const QVariant&value);

    QString toString() const;

private:
    QMap<QString, QVariant> _records;

};

#endif // MODEL_H