/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<BackEnd.h>)
#  include <BackEnd.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_GenerateRandomNumber()
{
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<BackEnd>("GenerateRandomNumber", 1);
    QT_WARNING_POP
    qmlRegisterModule("GenerateRandomNumber", 1, 0);
}

static const QQmlModuleRegistration generateRandomNumberRegistration("GenerateRandomNumber", qml_register_types_GenerateRandomNumber);
