#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMetaType>
#include <QMimeData>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <qmimedata.h>
#include "libqmimedata.h"
#include "libqmimedata.hxx"

QMimeData* QMimeData_new() {
    return new VirtualQMimeData();
}

QMetaObject* QMimeData_MetaObject(const QMimeData* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMimeData_Metacast(QMimeData* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMimeData_Metacall(QMimeData* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QMimeData_Tr(const char* s) {
    auto _ret = QMimeData::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QUrl* */ QMimeData_Urls(const QMimeData* self) {
    QList<QUrl> _ret = self->urls();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QMimeData_SetUrls(QMimeData* self, const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->setUrls(urls_QList);
}

bool QMimeData_HasUrls(const QMimeData* self) {
    return self->hasUrls();
}

libqt_string QMimeData_Text(const QMimeData* self) {
    auto _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMimeData_SetText(QMimeData* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

bool QMimeData_HasText(const QMimeData* self) {
    return self->hasText();
}

libqt_string QMimeData_Html(const QMimeData* self) {
    auto _ret = self->html();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMimeData_SetHtml(QMimeData* self, const libqt_string html) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    self->setHtml(html_QString);
}

bool QMimeData_HasHtml(const QMimeData* self) {
    return self->hasHtml();
}

QVariant* QMimeData_ImageData(const QMimeData* self) {
    return new QVariant(self->imageData());
}

void QMimeData_SetImageData(QMimeData* self, const QVariant* image) {
    self->setImageData(*image);
}

bool QMimeData_HasImage(const QMimeData* self) {
    return self->hasImage();
}

QVariant* QMimeData_ColorData(const QMimeData* self) {
    return new QVariant(self->colorData());
}

void QMimeData_SetColorData(QMimeData* self, const QVariant* color) {
    self->setColorData(*color);
}

bool QMimeData_HasColor(const QMimeData* self) {
    return self->hasColor();
}

libqt_string QMimeData_Data(const QMimeData* self, const libqt_string mimetype) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    QByteArray _qb = self->data(mimetype_QString);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QMimeData_SetData(QMimeData* self, const libqt_string mimetype, const libqt_string data) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    QByteArray data_QByteArray(data.data, data.len);
    self->setData(mimetype_QString, data_QByteArray);
}

void QMimeData_RemoveFormat(QMimeData* self, const libqt_string mimetype) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    self->removeFormat(mimetype_QString);
}

bool QMimeData_HasFormat(const QMimeData* self, const libqt_string mimetype) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    return self->hasFormat(mimetype_QString);
}

libqt_list /* of libqt_string */ QMimeData_Formats(const QMimeData* self) {
    QList<QString> _ret = self->formats();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QMimeData_Clear(QMimeData* self) {
    self->clear();
}

QVariant* QMimeData_RetrieveData(const QMimeData* self, const libqt_string mimetype, QMetaType* preferredType) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    auto* vqmimedata = dynamic_cast<const VirtualQMimeData*>(self);
    if (vqmimedata) {
        return new QVariant(vqmimedata->retrieveData(mimetype_QString, *preferredType));
    }
    qFatal("Error: Protected method QMimeData::retrieveData called without a directly constructed type");
}

libqt_string QMimeData_Tr2(const char* s, const char* c) {
    auto _ret = QMimeData::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMimeData_Tr3(const char* s, const char* c, int n) {
    auto _ret = QMimeData::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QMimeData_SuperMetaObject(const QMimeData* self) {
    return (QMetaObject*)self->QMimeData::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnMetaObject(QMimeData* self, intptr_t slot) {
    if (auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self)))
        vqmimedata->qmimedata_metaobject_callback = reinterpret_cast<VirtualQMimeData::QMimeData_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QMimeData_SuperMetacast(QMimeData* self, const char* param1) {
    return self->QMimeData::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnMetacast(QMimeData* self, intptr_t slot) {
    if (auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self))
        vqmimedata->qmimedata_metacast_callback = reinterpret_cast<VirtualQMimeData::QMimeData_Metacast_Callback>(slot);
}

// Base class handler implementation
int QMimeData_SuperMetacall(QMimeData* self, int param1, int param2, void** param3) {
    return self->QMimeData::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnMetacall(QMimeData* self, intptr_t slot) {
    if (auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self))
        vqmimedata->qmimedata_metacall_callback = reinterpret_cast<VirtualQMimeData::QMimeData_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QMimeData_SuperHasFormat(const QMimeData* self, const libqt_string mimetype) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    return self->QMimeData::hasFormat(mimetype_QString);
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnHasFormat(QMimeData* self, intptr_t slot) {
    if (auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self)))
        vqmimedata->qmimedata_hasformat_callback = reinterpret_cast<VirtualQMimeData::QMimeData_HasFormat_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QMimeData_SuperFormats(const QMimeData* self) {
    QList<QString> _ret = self->QMimeData::formats();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnFormats(QMimeData* self, intptr_t slot) {
    if (auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self)))
        vqmimedata->qmimedata_formats_callback = reinterpret_cast<VirtualQMimeData::QMimeData_Formats_Callback>(slot);
}

// Base class handler implementation
QVariant* QMimeData_SuperRetrieveData(const QMimeData* self, const libqt_string mimetype, QMetaType* preferredType) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    if (auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self)))
        return new QVariant(vqmimedata->QMimeData::retrieveData(mimetype_QString, *preferredType));
    qFatal("Error: Protected virtual method QMimeData::retrieveData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnRetrieveData(QMimeData* self, intptr_t slot) {
    if (auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self)))
        vqmimedata->qmimedata_retrievedata_callback = reinterpret_cast<VirtualQMimeData::QMimeData_RetrieveData_Callback>(slot);
}

// Derived class handler implementation
bool QMimeData_Event(QMimeData* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QMimeData_SuperEvent(QMimeData* self, QEvent* event) {
    return self->QMimeData::event(event);
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnEvent(QMimeData* self, intptr_t slot) {
    if (auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self))
        vqmimedata->qmimedata_event_callback = reinterpret_cast<VirtualQMimeData::QMimeData_Event_Callback>(slot);
}

// Derived class handler implementation
bool QMimeData_EventFilter(QMimeData* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QMimeData_SuperEventFilter(QMimeData* self, QObject* watched, QEvent* event) {
    return self->QMimeData::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnEventFilter(QMimeData* self, intptr_t slot) {
    if (auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self))
        vqmimedata->qmimedata_eventfilter_callback = reinterpret_cast<VirtualQMimeData::QMimeData_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QMimeData_TimerEvent(QMimeData* self, QTimerEvent* event) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata) {
        vqmimedata->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMimeData::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMimeData_SuperTimerEvent(QMimeData* self, QTimerEvent* event) {
    if (auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self)) {
        vqmimedata->QMimeData::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QMimeData::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnTimerEvent(QMimeData* self, intptr_t slot) {
    if (auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self))
        vqmimedata->qmimedata_timerevent_callback = reinterpret_cast<VirtualQMimeData::QMimeData_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QMimeData_ChildEvent(QMimeData* self, QChildEvent* event) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata) {
        vqmimedata->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMimeData::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMimeData_SuperChildEvent(QMimeData* self, QChildEvent* event) {
    if (auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self)) {
        vqmimedata->QMimeData::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QMimeData::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnChildEvent(QMimeData* self, intptr_t slot) {
    if (auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self))
        vqmimedata->qmimedata_childevent_callback = reinterpret_cast<VirtualQMimeData::QMimeData_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QMimeData_CustomEvent(QMimeData* self, QEvent* event) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata) {
        vqmimedata->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMimeData::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMimeData_SuperCustomEvent(QMimeData* self, QEvent* event) {
    if (auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self)) {
        vqmimedata->QMimeData::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QMimeData::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnCustomEvent(QMimeData* self, intptr_t slot) {
    if (auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self))
        vqmimedata->qmimedata_customevent_callback = reinterpret_cast<VirtualQMimeData::QMimeData_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QMimeData_ConnectNotify(QMimeData* self, const QMetaMethod* signal) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata) {
        vqmimedata->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMimeData::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMimeData_SuperConnectNotify(QMimeData* self, const QMetaMethod* signal) {
    if (auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self)) {
        vqmimedata->QMimeData::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMimeData::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnConnectNotify(QMimeData* self, intptr_t slot) {
    if (auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self))
        vqmimedata->qmimedata_connectnotify_callback = reinterpret_cast<VirtualQMimeData::QMimeData_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QMimeData_DisconnectNotify(QMimeData* self, const QMetaMethod* signal) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata) {
        vqmimedata->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMimeData::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMimeData_SuperDisconnectNotify(QMimeData* self, const QMetaMethod* signal) {
    if (auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self)) {
        vqmimedata->QMimeData::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMimeData::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnDisconnectNotify(QMimeData* self, intptr_t slot) {
    if (auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self))
        vqmimedata->qmimedata_disconnectnotify_callback = reinterpret_cast<VirtualQMimeData::QMimeData_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QMimeData_Sender(const QMimeData* self) {
    if (auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self))) {
        return vqmimedata->VirtualQMimeData::sender();
    } else
        qFatal("Error: Protected method QMimeData::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QMimeData_SenderSignalIndex(const QMimeData* self) {
    if (auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self))) {
        return vqmimedata->VirtualQMimeData::senderSignalIndex();
    } else
        qFatal("Error: Protected method QMimeData::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QMimeData_Receivers(const QMimeData* self, const char* signal) {
    if (auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self))) {
        return vqmimedata->VirtualQMimeData::receivers(signal);
    } else
        qFatal("Error: Protected method QMimeData::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMimeData_IsSignalConnected(const QMimeData* self, const QMetaMethod* signal) {
    if (auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self))) {
        return vqmimedata->VirtualQMimeData::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QMimeData::isSignalConnected called without a directly constructed type");
}

void QMimeData_Delete(QMimeData* self) {
    delete self;
}
