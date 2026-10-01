#include <QChildEvent>
#include <QEvent>
#include <QFileSystemWatcher>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qfilesystemwatcher.h>
#include "libqfilesystemwatcher.h"
#include "libqfilesystemwatcher.hxx"

QFileSystemWatcher* QFileSystemWatcher_new() {
    return new VirtualQFileSystemWatcher();
}

QFileSystemWatcher* QFileSystemWatcher_new2(const libqt_list /* of libqt_string */ paths) {
    QList<QString> paths_QList;
    paths_QList.reserve(paths.len);
    libqt_string* paths_arr = static_cast<libqt_string*>(paths.data);
    for (size_t i = 0; i < paths.len; ++i) {
        QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
        paths_QList.push_back(paths_arr_i_QString);
    }
    return new VirtualQFileSystemWatcher(paths_QList);
}

QFileSystemWatcher* QFileSystemWatcher_new3(QObject* parent) {
    return new VirtualQFileSystemWatcher(parent);
}

QFileSystemWatcher* QFileSystemWatcher_new4(const libqt_list /* of libqt_string */ paths, QObject* parent) {
    QList<QString> paths_QList;
    paths_QList.reserve(paths.len);
    libqt_string* paths_arr = static_cast<libqt_string*>(paths.data);
    for (size_t i = 0; i < paths.len; ++i) {
        QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
        paths_QList.push_back(paths_arr_i_QString);
    }
    return new VirtualQFileSystemWatcher(paths_QList, parent);
}

QMetaObject* QFileSystemWatcher_MetaObject(const QFileSystemWatcher* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFileSystemWatcher_Metacast(QFileSystemWatcher* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFileSystemWatcher_Metacall(QFileSystemWatcher* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QFileSystemWatcher_Tr(const char* s) {
    auto _ret = QFileSystemWatcher::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QFileSystemWatcher_AddPath(QFileSystemWatcher* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return self->addPath(file_QString);
}

libqt_list /* of libqt_string */ QFileSystemWatcher_AddPaths(QFileSystemWatcher* self, const libqt_list /* of libqt_string */ files) {
    QList<QString> files_QList;
    files_QList.reserve(files.len);
    libqt_string* files_arr = static_cast<libqt_string*>(files.data);
    for (size_t i = 0; i < files.len; ++i) {
        QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
        files_QList.push_back(files_arr_i_QString);
    }
    QList<QString> _ret = self->addPaths(files_QList);
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

bool QFileSystemWatcher_RemovePath(QFileSystemWatcher* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return self->removePath(file_QString);
}

libqt_list /* of libqt_string */ QFileSystemWatcher_RemovePaths(QFileSystemWatcher* self, const libqt_list /* of libqt_string */ files) {
    QList<QString> files_QList;
    files_QList.reserve(files.len);
    libqt_string* files_arr = static_cast<libqt_string*>(files.data);
    for (size_t i = 0; i < files.len; ++i) {
        QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
        files_QList.push_back(files_arr_i_QString);
    }
    QList<QString> _ret = self->removePaths(files_QList);
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

libqt_list /* of libqt_string */ QFileSystemWatcher_Files(const QFileSystemWatcher* self) {
    QList<QString> _ret = self->files();
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

libqt_list /* of libqt_string */ QFileSystemWatcher_Directories(const QFileSystemWatcher* self) {
    QList<QString> _ret = self->directories();
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

libqt_string QFileSystemWatcher_Tr2(const char* s, const char* c) {
    auto _ret = QFileSystemWatcher::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileSystemWatcher_Tr3(const char* s, const char* c, int n) {
    auto _ret = QFileSystemWatcher::tr(s, c, static_cast<int>(n));
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
QMetaObject* QFileSystemWatcher_SuperMetaObject(const QFileSystemWatcher* self) {
    return (QMetaObject*)self->QFileSystemWatcher::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QFileSystemWatcher_OnMetaObject(QFileSystemWatcher* self, intptr_t slot) {
    if (auto* vqfilesystemwatcher = const_cast<VirtualQFileSystemWatcher*>(dynamic_cast<const VirtualQFileSystemWatcher*>(self)))
        vqfilesystemwatcher->qfilesystemwatcher_metaobject_callback = reinterpret_cast<VirtualQFileSystemWatcher::QFileSystemWatcher_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QFileSystemWatcher_SuperMetacast(QFileSystemWatcher* self, const char* param1) {
    return self->QFileSystemWatcher::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemWatcher_OnMetacast(QFileSystemWatcher* self, intptr_t slot) {
    if (auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self))
        vqfilesystemwatcher->qfilesystemwatcher_metacast_callback = reinterpret_cast<VirtualQFileSystemWatcher::QFileSystemWatcher_Metacast_Callback>(slot);
}

// Base class handler implementation
int QFileSystemWatcher_SuperMetacall(QFileSystemWatcher* self, int param1, int param2, void** param3) {
    return self->QFileSystemWatcher::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemWatcher_OnMetacall(QFileSystemWatcher* self, intptr_t slot) {
    if (auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self))
        vqfilesystemwatcher->qfilesystemwatcher_metacall_callback = reinterpret_cast<VirtualQFileSystemWatcher::QFileSystemWatcher_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QFileSystemWatcher_Event(QFileSystemWatcher* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QFileSystemWatcher_SuperEvent(QFileSystemWatcher* self, QEvent* event) {
    return self->QFileSystemWatcher::event(event);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemWatcher_OnEvent(QFileSystemWatcher* self, intptr_t slot) {
    if (auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self))
        vqfilesystemwatcher->qfilesystemwatcher_event_callback = reinterpret_cast<VirtualQFileSystemWatcher::QFileSystemWatcher_Event_Callback>(slot);
}

// Derived class handler implementation
bool QFileSystemWatcher_EventFilter(QFileSystemWatcher* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QFileSystemWatcher_SuperEventFilter(QFileSystemWatcher* self, QObject* watched, QEvent* event) {
    return self->QFileSystemWatcher::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemWatcher_OnEventFilter(QFileSystemWatcher* self, intptr_t slot) {
    if (auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self))
        vqfilesystemwatcher->qfilesystemwatcher_eventfilter_callback = reinterpret_cast<VirtualQFileSystemWatcher::QFileSystemWatcher_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QFileSystemWatcher_TimerEvent(QFileSystemWatcher* self, QTimerEvent* event) {
    auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self);
    if (vqfilesystemwatcher) {
        vqfilesystemwatcher->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileSystemWatcher::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileSystemWatcher_SuperTimerEvent(QFileSystemWatcher* self, QTimerEvent* event) {
    if (auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self)) {
        vqfilesystemwatcher->QFileSystemWatcher::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileSystemWatcher::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSystemWatcher_OnTimerEvent(QFileSystemWatcher* self, intptr_t slot) {
    if (auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self))
        vqfilesystemwatcher->qfilesystemwatcher_timerevent_callback = reinterpret_cast<VirtualQFileSystemWatcher::QFileSystemWatcher_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileSystemWatcher_ChildEvent(QFileSystemWatcher* self, QChildEvent* event) {
    auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self);
    if (vqfilesystemwatcher) {
        vqfilesystemwatcher->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileSystemWatcher::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileSystemWatcher_SuperChildEvent(QFileSystemWatcher* self, QChildEvent* event) {
    if (auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self)) {
        vqfilesystemwatcher->QFileSystemWatcher::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileSystemWatcher::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSystemWatcher_OnChildEvent(QFileSystemWatcher* self, intptr_t slot) {
    if (auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self))
        vqfilesystemwatcher->qfilesystemwatcher_childevent_callback = reinterpret_cast<VirtualQFileSystemWatcher::QFileSystemWatcher_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileSystemWatcher_CustomEvent(QFileSystemWatcher* self, QEvent* event) {
    auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self);
    if (vqfilesystemwatcher) {
        vqfilesystemwatcher->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileSystemWatcher::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileSystemWatcher_SuperCustomEvent(QFileSystemWatcher* self, QEvent* event) {
    if (auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self)) {
        vqfilesystemwatcher->QFileSystemWatcher::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileSystemWatcher::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSystemWatcher_OnCustomEvent(QFileSystemWatcher* self, intptr_t slot) {
    if (auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self))
        vqfilesystemwatcher->qfilesystemwatcher_customevent_callback = reinterpret_cast<VirtualQFileSystemWatcher::QFileSystemWatcher_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileSystemWatcher_ConnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal) {
    auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self);
    if (vqfilesystemwatcher) {
        vqfilesystemwatcher->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFileSystemWatcher::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileSystemWatcher_SuperConnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal) {
    if (auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self)) {
        vqfilesystemwatcher->QFileSystemWatcher::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFileSystemWatcher::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSystemWatcher_OnConnectNotify(QFileSystemWatcher* self, intptr_t slot) {
    if (auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self))
        vqfilesystemwatcher->qfilesystemwatcher_connectnotify_callback = reinterpret_cast<VirtualQFileSystemWatcher::QFileSystemWatcher_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QFileSystemWatcher_DisconnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal) {
    auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self);
    if (vqfilesystemwatcher) {
        vqfilesystemwatcher->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFileSystemWatcher::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileSystemWatcher_SuperDisconnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal) {
    if (auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self)) {
        vqfilesystemwatcher->QFileSystemWatcher::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFileSystemWatcher::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSystemWatcher_OnDisconnectNotify(QFileSystemWatcher* self, intptr_t slot) {
    if (auto* vqfilesystemwatcher = dynamic_cast<VirtualQFileSystemWatcher*>(self))
        vqfilesystemwatcher->qfilesystemwatcher_disconnectnotify_callback = reinterpret_cast<VirtualQFileSystemWatcher::QFileSystemWatcher_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QFileSystemWatcher_Sender(const QFileSystemWatcher* self) {
    if (auto* vqfilesystemwatcher = const_cast<VirtualQFileSystemWatcher*>(dynamic_cast<const VirtualQFileSystemWatcher*>(self))) {
        return vqfilesystemwatcher->VirtualQFileSystemWatcher::sender();
    } else
        qFatal("Error: Protected method QFileSystemWatcher::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QFileSystemWatcher_SenderSignalIndex(const QFileSystemWatcher* self) {
    if (auto* vqfilesystemwatcher = const_cast<VirtualQFileSystemWatcher*>(dynamic_cast<const VirtualQFileSystemWatcher*>(self))) {
        return vqfilesystemwatcher->VirtualQFileSystemWatcher::senderSignalIndex();
    } else
        qFatal("Error: Protected method QFileSystemWatcher::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QFileSystemWatcher_Receivers(const QFileSystemWatcher* self, const char* signal) {
    if (auto* vqfilesystemwatcher = const_cast<VirtualQFileSystemWatcher*>(dynamic_cast<const VirtualQFileSystemWatcher*>(self))) {
        return vqfilesystemwatcher->VirtualQFileSystemWatcher::receivers(signal);
    } else
        qFatal("Error: Protected method QFileSystemWatcher::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFileSystemWatcher_IsSignalConnected(const QFileSystemWatcher* self, const QMetaMethod* signal) {
    if (auto* vqfilesystemwatcher = const_cast<VirtualQFileSystemWatcher*>(dynamic_cast<const VirtualQFileSystemWatcher*>(self))) {
        return vqfilesystemwatcher->VirtualQFileSystemWatcher::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QFileSystemWatcher::isSignalConnected called without a directly constructed type");
}

void QFileSystemWatcher_Connect_FileChanged(QFileSystemWatcher* self, intptr_t slot) {
    void (*slotFunc)(QFileSystemWatcher*, const char*) = reinterpret_cast<void (*)(QFileSystemWatcher*, const char*)>(slot);
    QFileSystemWatcher::connect(self, &QFileSystemWatcher::fileChanged, [self, slotFunc](const QString& path) {
        const auto path_ret = path;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray path_b = path_ret.toUtf8();
        auto path_str_len = path_b.length();
        const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
        memcpy((void*)path_str, path_b.data(), path_str_len);
        ((char*)path_str)[path_str_len] = '\0';
        const char* sigval1 = path_str;
        slotFunc(self, sigval1);
        libqt_free(path_str);
    });
}

void QFileSystemWatcher_Connect_DirectoryChanged(QFileSystemWatcher* self, intptr_t slot) {
    void (*slotFunc)(QFileSystemWatcher*, const char*) = reinterpret_cast<void (*)(QFileSystemWatcher*, const char*)>(slot);
    QFileSystemWatcher::connect(self, &QFileSystemWatcher::directoryChanged, [self, slotFunc](const QString& path) {
        const auto path_ret = path;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray path_b = path_ret.toUtf8();
        auto path_str_len = path_b.length();
        const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
        memcpy((void*)path_str, path_b.data(), path_str_len);
        ((char*)path_str)[path_str_len] = '\0';
        const char* sigval1 = path_str;
        slotFunc(self, sigval1);
        libqt_free(path_str);
    });
}

void QFileSystemWatcher_Delete(QFileSystemWatcher* self) {
    delete self;
}
