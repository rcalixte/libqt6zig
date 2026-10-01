#include <KSyntaxHighlighting/Definition>
#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__Repository
#include <KSyntaxHighlighting/Theme>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPalette>
#include <QString>
#include <QTimerEvent>
#include <repository.h>
#include "librepository.h"
#include "librepository.hxx"

KSyntaxHighlighting__Repository* KSyntaxHighlighting__Repository_new() {
    return new VirtualKSyntaxHighlightingRepository();
}

QMetaObject* KSyntaxHighlighting__Repository_MetaObject(const KSyntaxHighlighting__Repository* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSyntaxHighlighting__Repository_Metacast(KSyntaxHighlighting__Repository* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSyntaxHighlighting__Repository_Metacall(KSyntaxHighlighting__Repository* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSyntaxHighlighting__Repository_Tr(const char* s) {
    auto _ret = KSyntaxHighlighting::Repository::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KSyntaxHighlighting__Definition* KSyntaxHighlighting__Repository_DefinitionForName(const KSyntaxHighlighting__Repository* self, const libqt_string defName) {
    QString defName_QString = QString::fromUtf8(defName.data, defName.len);
    return new KSyntaxHighlighting::Definition(self->definitionForName(defName_QString));
}

KSyntaxHighlighting__Definition* KSyntaxHighlighting__Repository_DefinitionForFileName(const KSyntaxHighlighting__Repository* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new KSyntaxHighlighting::Definition(self->definitionForFileName(fileName_QString));
}

libqt_list /* of KSyntaxHighlighting__Definition* */ KSyntaxHighlighting__Repository_DefinitionsForFileName(const KSyntaxHighlighting__Repository* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QList<KSyntaxHighlighting::Definition> _ret = self->definitionsForFileName(fileName_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    KSyntaxHighlighting__Definition** _arr = static_cast<KSyntaxHighlighting__Definition**>(malloc(sizeof(KSyntaxHighlighting__Definition*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KSyntaxHighlighting::Definition(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KSyntaxHighlighting__Definition* KSyntaxHighlighting__Repository_DefinitionForMimeType(const KSyntaxHighlighting__Repository* self, const libqt_string mimeType) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    return new KSyntaxHighlighting::Definition(self->definitionForMimeType(mimeType_QString));
}

libqt_list /* of KSyntaxHighlighting__Definition* */ KSyntaxHighlighting__Repository_DefinitionsForMimeType(const KSyntaxHighlighting__Repository* self, const libqt_string mimeType) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    QList<KSyntaxHighlighting::Definition> _ret = self->definitionsForMimeType(mimeType_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    KSyntaxHighlighting__Definition** _arr = static_cast<KSyntaxHighlighting__Definition**>(malloc(sizeof(KSyntaxHighlighting__Definition*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KSyntaxHighlighting::Definition(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of KSyntaxHighlighting__Definition* */ KSyntaxHighlighting__Repository_Definitions(const KSyntaxHighlighting__Repository* self) {
    QList<KSyntaxHighlighting::Definition> _ret = self->definitions();
    // Convert QList<> from C++ memory to manually-managed C memory
    KSyntaxHighlighting__Definition** _arr = static_cast<KSyntaxHighlighting__Definition**>(malloc(sizeof(KSyntaxHighlighting__Definition*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KSyntaxHighlighting::Definition(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of KSyntaxHighlighting__Theme* */ KSyntaxHighlighting__Repository_Themes(const KSyntaxHighlighting__Repository* self) {
    QList<KSyntaxHighlighting::Theme> _ret = self->themes();
    // Convert QList<> from C++ memory to manually-managed C memory
    KSyntaxHighlighting__Theme** _arr = static_cast<KSyntaxHighlighting__Theme**>(malloc(sizeof(KSyntaxHighlighting__Theme*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KSyntaxHighlighting::Theme(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KSyntaxHighlighting__Theme* KSyntaxHighlighting__Repository_Theme(const KSyntaxHighlighting__Repository* self, const libqt_string themeName) {
    QString themeName_QString = QString::fromUtf8(themeName.data, themeName.len);
    return new KSyntaxHighlighting::Theme(self->theme(themeName_QString));
}

KSyntaxHighlighting__Theme* KSyntaxHighlighting__Repository_DefaultTheme(const KSyntaxHighlighting__Repository* self) {
    return new KSyntaxHighlighting::Theme(self->defaultTheme());
}

KSyntaxHighlighting__Theme* KSyntaxHighlighting__Repository_ThemeForPalette(const KSyntaxHighlighting__Repository* self, const QPalette* palette) {
    return new KSyntaxHighlighting::Theme(self->themeForPalette(*palette));
}

void KSyntaxHighlighting__Repository_Reload(KSyntaxHighlighting__Repository* self) {
    self->reload();
}

void KSyntaxHighlighting__Repository_AddCustomSearchPath(KSyntaxHighlighting__Repository* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->addCustomSearchPath(path_QString);
}

libqt_list /* of libqt_string */ KSyntaxHighlighting__Repository_CustomSearchPaths(const KSyntaxHighlighting__Repository* self) {
    QList<QString> _ret = self->customSearchPaths();
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

void KSyntaxHighlighting__Repository_AboutToReload(KSyntaxHighlighting__Repository* self) {
    self->aboutToReload();
}

void KSyntaxHighlighting__Repository_Connect_AboutToReload(KSyntaxHighlighting__Repository* self, intptr_t slot) {
    void (*slotFunc)(KSyntaxHighlighting__Repository*) = reinterpret_cast<void (*)(KSyntaxHighlighting__Repository*)>(slot);
    KSyntaxHighlighting::Repository::connect(self,
                                             static_cast<void (KSyntaxHighlighting::Repository::*)()>(&KSyntaxHighlighting::Repository::aboutToReload),
                                             [self, slotFunc]() {
                                                 slotFunc(self);
                                             });
}

void KSyntaxHighlighting__Repository_Reloaded(KSyntaxHighlighting__Repository* self) {
    self->reloaded();
}

void KSyntaxHighlighting__Repository_Connect_Reloaded(KSyntaxHighlighting__Repository* self, intptr_t slot) {
    void (*slotFunc)(KSyntaxHighlighting__Repository*) = reinterpret_cast<void (*)(KSyntaxHighlighting__Repository*)>(slot);
    KSyntaxHighlighting::Repository::connect(self,
                                             static_cast<void (KSyntaxHighlighting::Repository::*)()>(&KSyntaxHighlighting::Repository::reloaded),
                                             [self, slotFunc]() {
                                                 slotFunc(self);
                                             });
}

libqt_string KSyntaxHighlighting__Repository_Tr2(const char* s, const char* c) {
    auto _ret = KSyntaxHighlighting::Repository::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSyntaxHighlighting__Repository_Tr3(const char* s, const char* c, int n) {
    auto _ret = KSyntaxHighlighting::Repository::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KSyntaxHighlighting__Theme* KSyntaxHighlighting__Repository_DefaultTheme1(const KSyntaxHighlighting__Repository* self, int t) {
    return new KSyntaxHighlighting::Theme(self->defaultTheme(static_cast<KSyntaxHighlighting::Repository::DefaultTheme>(t)));
}

// Base class handler implementation
QMetaObject* KSyntaxHighlighting__Repository_SuperMetaObject(const KSyntaxHighlighting__Repository* self) {
    return (QMetaObject*)self->KSyntaxHighlighting::Repository::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__Repository_OnMetaObject(KSyntaxHighlighting__Repository* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingrepository = const_cast<VirtualKSyntaxHighlightingRepository*>(dynamic_cast<const VirtualKSyntaxHighlightingRepository*>(self)))
        vksyntaxhighlightingrepository->ksyntaxhighlighting__repository_metaobject_callback = reinterpret_cast<VirtualKSyntaxHighlightingRepository::KSyntaxHighlighting__Repository_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KSyntaxHighlighting__Repository_SuperMetacast(KSyntaxHighlighting__Repository* self, const char* param1) {
    return self->KSyntaxHighlighting::Repository::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__Repository_OnMetacast(KSyntaxHighlighting__Repository* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self))
        vksyntaxhighlightingrepository->ksyntaxhighlighting__repository_metacast_callback = reinterpret_cast<VirtualKSyntaxHighlightingRepository::KSyntaxHighlighting__Repository_Metacast_Callback>(slot);
}

// Base class handler implementation
int KSyntaxHighlighting__Repository_SuperMetacall(KSyntaxHighlighting__Repository* self, int param1, int param2, void** param3) {
    return self->KSyntaxHighlighting::Repository::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__Repository_OnMetacall(KSyntaxHighlighting__Repository* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self))
        vksyntaxhighlightingrepository->ksyntaxhighlighting__repository_metacall_callback = reinterpret_cast<VirtualKSyntaxHighlightingRepository::KSyntaxHighlighting__Repository_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KSyntaxHighlighting__Repository_Event(KSyntaxHighlighting__Repository* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KSyntaxHighlighting__Repository_SuperEvent(KSyntaxHighlighting__Repository* self, QEvent* event) {
    return self->KSyntaxHighlighting::Repository::event(event);
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__Repository_OnEvent(KSyntaxHighlighting__Repository* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self))
        vksyntaxhighlightingrepository->ksyntaxhighlighting__repository_event_callback = reinterpret_cast<VirtualKSyntaxHighlightingRepository::KSyntaxHighlighting__Repository_Event_Callback>(slot);
}

// Derived class handler implementation
bool KSyntaxHighlighting__Repository_EventFilter(KSyntaxHighlighting__Repository* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KSyntaxHighlighting__Repository_SuperEventFilter(KSyntaxHighlighting__Repository* self, QObject* watched, QEvent* event) {
    return self->KSyntaxHighlighting::Repository::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__Repository_OnEventFilter(KSyntaxHighlighting__Repository* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self))
        vksyntaxhighlightingrepository->ksyntaxhighlighting__repository_eventfilter_callback = reinterpret_cast<VirtualKSyntaxHighlightingRepository::KSyntaxHighlighting__Repository_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KSyntaxHighlighting__Repository_TimerEvent(KSyntaxHighlighting__Repository* self, QTimerEvent* event) {
    auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self);
    if (vksyntaxhighlightingrepository) {
        vksyntaxhighlightingrepository->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSyntaxHighlighting::Repository::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSyntaxHighlighting__Repository_SuperTimerEvent(KSyntaxHighlighting__Repository* self, QTimerEvent* event) {
    if (auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self)) {
        vksyntaxhighlightingrepository->KSyntaxHighlighting::Repository::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::Repository::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__Repository_OnTimerEvent(KSyntaxHighlighting__Repository* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self))
        vksyntaxhighlightingrepository->ksyntaxhighlighting__repository_timerevent_callback = reinterpret_cast<VirtualKSyntaxHighlightingRepository::KSyntaxHighlighting__Repository_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KSyntaxHighlighting__Repository_ChildEvent(KSyntaxHighlighting__Repository* self, QChildEvent* event) {
    auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self);
    if (vksyntaxhighlightingrepository) {
        vksyntaxhighlightingrepository->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSyntaxHighlighting::Repository::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSyntaxHighlighting__Repository_SuperChildEvent(KSyntaxHighlighting__Repository* self, QChildEvent* event) {
    if (auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self)) {
        vksyntaxhighlightingrepository->KSyntaxHighlighting::Repository::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::Repository::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__Repository_OnChildEvent(KSyntaxHighlighting__Repository* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self))
        vksyntaxhighlightingrepository->ksyntaxhighlighting__repository_childevent_callback = reinterpret_cast<VirtualKSyntaxHighlightingRepository::KSyntaxHighlighting__Repository_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KSyntaxHighlighting__Repository_CustomEvent(KSyntaxHighlighting__Repository* self, QEvent* event) {
    auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self);
    if (vksyntaxhighlightingrepository) {
        vksyntaxhighlightingrepository->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSyntaxHighlighting::Repository::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSyntaxHighlighting__Repository_SuperCustomEvent(KSyntaxHighlighting__Repository* self, QEvent* event) {
    if (auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self)) {
        vksyntaxhighlightingrepository->KSyntaxHighlighting::Repository::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::Repository::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__Repository_OnCustomEvent(KSyntaxHighlighting__Repository* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self))
        vksyntaxhighlightingrepository->ksyntaxhighlighting__repository_customevent_callback = reinterpret_cast<VirtualKSyntaxHighlightingRepository::KSyntaxHighlighting__Repository_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KSyntaxHighlighting__Repository_ConnectNotify(KSyntaxHighlighting__Repository* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self);
    if (vksyntaxhighlightingrepository) {
        vksyntaxhighlightingrepository->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSyntaxHighlighting::Repository::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSyntaxHighlighting__Repository_SuperConnectNotify(KSyntaxHighlighting__Repository* self, const QMetaMethod* signal) {
    if (auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self)) {
        vksyntaxhighlightingrepository->KSyntaxHighlighting::Repository::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::Repository::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__Repository_OnConnectNotify(KSyntaxHighlighting__Repository* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self))
        vksyntaxhighlightingrepository->ksyntaxhighlighting__repository_connectnotify_callback = reinterpret_cast<VirtualKSyntaxHighlightingRepository::KSyntaxHighlighting__Repository_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KSyntaxHighlighting__Repository_DisconnectNotify(KSyntaxHighlighting__Repository* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self);
    if (vksyntaxhighlightingrepository) {
        vksyntaxhighlightingrepository->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSyntaxHighlighting::Repository::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSyntaxHighlighting__Repository_SuperDisconnectNotify(KSyntaxHighlighting__Repository* self, const QMetaMethod* signal) {
    if (auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self)) {
        vksyntaxhighlightingrepository->KSyntaxHighlighting::Repository::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::Repository::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__Repository_OnDisconnectNotify(KSyntaxHighlighting__Repository* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingrepository = dynamic_cast<VirtualKSyntaxHighlightingRepository*>(self))
        vksyntaxhighlightingrepository->ksyntaxhighlighting__repository_disconnectnotify_callback = reinterpret_cast<VirtualKSyntaxHighlightingRepository::KSyntaxHighlighting__Repository_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KSyntaxHighlighting__Repository_Sender(const KSyntaxHighlighting__Repository* self) {
    if (auto* vksyntaxhighlightingrepository = const_cast<VirtualKSyntaxHighlightingRepository*>(dynamic_cast<const VirtualKSyntaxHighlightingRepository*>(self))) {
        return vksyntaxhighlightingrepository->VirtualKSyntaxHighlightingRepository::sender();
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::Repository::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KSyntaxHighlighting__Repository_SenderSignalIndex(const KSyntaxHighlighting__Repository* self) {
    if (auto* vksyntaxhighlightingrepository = const_cast<VirtualKSyntaxHighlightingRepository*>(dynamic_cast<const VirtualKSyntaxHighlightingRepository*>(self))) {
        return vksyntaxhighlightingrepository->VirtualKSyntaxHighlightingRepository::senderSignalIndex();
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::Repository::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KSyntaxHighlighting__Repository_Receivers(const KSyntaxHighlighting__Repository* self, const char* signal) {
    if (auto* vksyntaxhighlightingrepository = const_cast<VirtualKSyntaxHighlightingRepository*>(dynamic_cast<const VirtualKSyntaxHighlightingRepository*>(self))) {
        return vksyntaxhighlightingrepository->VirtualKSyntaxHighlightingRepository::receivers(signal);
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::Repository::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSyntaxHighlighting__Repository_IsSignalConnected(const KSyntaxHighlighting__Repository* self, const QMetaMethod* signal) {
    if (auto* vksyntaxhighlightingrepository = const_cast<VirtualKSyntaxHighlightingRepository*>(dynamic_cast<const VirtualKSyntaxHighlightingRepository*>(self))) {
        return vksyntaxhighlightingrepository->VirtualKSyntaxHighlightingRepository::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::Repository::isSignalConnected called without a directly constructed type");
}

void KSyntaxHighlighting__Repository_Delete(KSyntaxHighlighting__Repository* self) {
    delete self;
}
