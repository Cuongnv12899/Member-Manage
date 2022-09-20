#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "screenbuilding.h"
#include <QString>
#include <QQuickItem>
#include <QQuickView>

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    qmlRegisterType<ScreenBuilding>("myfpt.Backend",1,0,"ScreenBuilding");
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

//    QQuickView view(QUrl::fromLocalFile("Screen3.qml"));
//       QObject *item = view.rootObject();

//       ScreenBuilding myClass;
//       QObject::connect(item, SIGNAL(qmlSignal(QVariant)),
//                        &myClass, SLOT(cppSlot(QVariant)));
//       view.show();

    return app.exec();
}
