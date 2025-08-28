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
#include <QByteArray>
#include <cstring>
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
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMimeData*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QMimeData_OnMetacall(QMimeData* self, intptr_t slot) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_Metacall_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QMimeData_QBaseMetacall(QMimeData* self, int param1, int param2, void** param3) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_Metacall_IsBase(true);
        return vqmimedata->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMimeData*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QMimeData_Tr(const char* s) {
    QString _ret = QMimeData::tr(s);
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
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size() + 1)));
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
    QString _ret = self->text();
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
    QString _ret = self->html();
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
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    auto* vqmimedata = dynamic_cast<const VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        return self->hasFormat(mimetype_QString);
    } else {
        return ((VirtualQMimeData*)self)->hasFormat(mimetype_QString);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QMimeData_OnHasFormat(const QMimeData* self, intptr_t slot) {
    auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self));
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_HasFormat_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_HasFormat_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QMimeData_QBaseHasFormat(const QMimeData* self, const libqt_string mimetype) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    auto* vqmimedata = dynamic_cast<const VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_HasFormat_IsBase(true);
        return vqmimedata->hasFormat(mimetype_QString);
    } else {
        return ((VirtualQMimeData*)self)->hasFormat(mimetype_QString);
    }
}

libqt_list /* of libqt_string */ QMimeData_Formats(const QMimeData* self) {
    auto* vqmimedata = dynamic_cast<const VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        QList<QString> _ret = self->formats();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = ((VirtualQMimeData*)self)->formats();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Subclass method to allow providing a virtual method re-implementation
void QMimeData_OnFormats(const QMimeData* self, intptr_t slot) {
    auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self));
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_Formats_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_Formats_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_list /* of libqt_string */ QMimeData_QBaseFormats(const QMimeData* self) {
    auto* vqmimedata = dynamic_cast<const VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_Formats_IsBase(true);
        QList<QString> _ret = vqmimedata->formats();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = ((VirtualQMimeData*)self)->formats();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

void QMimeData_Clear(QMimeData* self) {
    self->clear();
}

QVariant* QMimeData_RetrieveData(const QMimeData* self, const libqt_string mimetype, QMetaType* preferredType) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    auto* vqmimedata = dynamic_cast<const VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        return new QVariant(vqmimedata->retrieveData(mimetype_QString, *preferredType));
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QMimeData_OnRetrieveData(const QMimeData* self, intptr_t slot) {
    auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self));
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_RetrieveData_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_RetrieveData_Callback>(slot));
    }
}

// Virtual base class handler implementation
QVariant* QMimeData_QBaseRetrieveData(const QMimeData* self, const libqt_string mimetype, QMetaType* preferredType) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    auto* vqmimedata = dynamic_cast<const VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_RetrieveData_IsBase(true);
        return new QVariant(vqmimedata->retrieveData(mimetype_QString, *preferredType));
    }
    return {};
}

libqt_string QMimeData_Tr2(const char* s, const char* c) {
    QString _ret = QMimeData::tr(s, c);
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
    QString _ret = QMimeData::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QMimeData_Event(QMimeData* self, QEvent* event) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        return vqmimedata->event(event);
    } else {
        return self->QMimeData::event(event);
    }
}

// Base class handler implementation
bool QMimeData_QBaseEvent(QMimeData* self, QEvent* event) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_Event_IsBase(true);
        return vqmimedata->event(event);
    } else {
        return self->QMimeData::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnEvent(QMimeData* self, intptr_t slot) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_Event_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMimeData_EventFilter(QMimeData* self, QObject* watched, QEvent* event) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        return vqmimedata->eventFilter(watched, event);
    } else {
        return self->QMimeData::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QMimeData_QBaseEventFilter(QMimeData* self, QObject* watched, QEvent* event) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_EventFilter_IsBase(true);
        return vqmimedata->eventFilter(watched, event);
    } else {
        return self->QMimeData::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnEventFilter(QMimeData* self, intptr_t slot) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_EventFilter_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMimeData_TimerEvent(QMimeData* self, QTimerEvent* event) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->timerEvent(event);
    } else {
        ((VirtualQMimeData*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QMimeData_QBaseTimerEvent(QMimeData* self, QTimerEvent* event) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_TimerEvent_IsBase(true);
        vqmimedata->timerEvent(event);
    } else {
        ((VirtualQMimeData*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnTimerEvent(QMimeData* self, intptr_t slot) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_TimerEvent_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMimeData_ChildEvent(QMimeData* self, QChildEvent* event) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->childEvent(event);
    } else {
        ((VirtualQMimeData*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QMimeData_QBaseChildEvent(QMimeData* self, QChildEvent* event) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_ChildEvent_IsBase(true);
        vqmimedata->childEvent(event);
    } else {
        ((VirtualQMimeData*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnChildEvent(QMimeData* self, intptr_t slot) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_ChildEvent_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMimeData_CustomEvent(QMimeData* self, QEvent* event) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->customEvent(event);
    } else {
        ((VirtualQMimeData*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QMimeData_QBaseCustomEvent(QMimeData* self, QEvent* event) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_CustomEvent_IsBase(true);
        vqmimedata->customEvent(event);
    } else {
        ((VirtualQMimeData*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnCustomEvent(QMimeData* self, intptr_t slot) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_CustomEvent_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMimeData_ConnectNotify(QMimeData* self, const QMetaMethod* signal) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->connectNotify(*signal);
    } else {
        ((VirtualQMimeData*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMimeData_QBaseConnectNotify(QMimeData* self, const QMetaMethod* signal) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_ConnectNotify_IsBase(true);
        vqmimedata->connectNotify(*signal);
    } else {
        ((VirtualQMimeData*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnConnectNotify(QMimeData* self, intptr_t slot) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_ConnectNotify_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMimeData_DisconnectNotify(QMimeData* self, const QMetaMethod* signal) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->disconnectNotify(*signal);
    } else {
        ((VirtualQMimeData*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMimeData_QBaseDisconnectNotify(QMimeData* self, const QMetaMethod* signal) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_DisconnectNotify_IsBase(true);
        vqmimedata->disconnectNotify(*signal);
    } else {
        ((VirtualQMimeData*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnDisconnectNotify(QMimeData* self, intptr_t slot) {
    auto* vqmimedata = dynamic_cast<VirtualQMimeData*>(self);
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_DisconnectNotify_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMimeData_Sender(const QMimeData* self) {
    auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self));
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        return vqmimedata->sender();
    } else {
        return ((VirtualQMimeData*)self)->sender();
    }
}

// Base class handler implementation
QObject* QMimeData_QBaseSender(const QMimeData* self) {
    auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self));
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_Sender_IsBase(true);
        return vqmimedata->sender();
    } else {
        return ((VirtualQMimeData*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnSender(const QMimeData* self, intptr_t slot) {
    auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self));
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_Sender_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMimeData_SenderSignalIndex(const QMimeData* self) {
    auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self));
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        return vqmimedata->senderSignalIndex();
    } else {
        return ((VirtualQMimeData*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QMimeData_QBaseSenderSignalIndex(const QMimeData* self) {
    auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self));
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_SenderSignalIndex_IsBase(true);
        return vqmimedata->senderSignalIndex();
    } else {
        return ((VirtualQMimeData*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnSenderSignalIndex(const QMimeData* self, intptr_t slot) {
    auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self));
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMimeData_Receivers(const QMimeData* self, const char* signal) {
    auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self));
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        return vqmimedata->receivers(signal);
    } else {
        return ((VirtualQMimeData*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QMimeData_QBaseReceivers(const QMimeData* self, const char* signal) {
    auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self));
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_Receivers_IsBase(true);
        return vqmimedata->receivers(signal);
    } else {
        return ((VirtualQMimeData*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnReceivers(const QMimeData* self, intptr_t slot) {
    auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self));
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_Receivers_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMimeData_IsSignalConnected(const QMimeData* self, const QMetaMethod* signal) {
    auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self));
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        return vqmimedata->isSignalConnected(*signal);
    } else {
        return ((VirtualQMimeData*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMimeData_QBaseIsSignalConnected(const QMimeData* self, const QMetaMethod* signal) {
    auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self));
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_IsSignalConnected_IsBase(true);
        return vqmimedata->isSignalConnected(*signal);
    } else {
        return ((VirtualQMimeData*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMimeData_OnIsSignalConnected(const QMimeData* self, intptr_t slot) {
    auto* vqmimedata = const_cast<VirtualQMimeData*>(dynamic_cast<const VirtualQMimeData*>(self));
    if (vqmimedata && vqmimedata->isVirtualQMimeData) {
        vqmimedata->setQMimeData_IsSignalConnected_Callback(reinterpret_cast<VirtualQMimeData::QMimeData_IsSignalConnected_Callback>(slot));
    }
}

void QMimeData_Delete(QMimeData* self) {
    delete self;
}
