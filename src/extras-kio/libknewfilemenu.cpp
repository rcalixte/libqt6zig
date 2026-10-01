#include <KActionMenu>
#include <KJob>
#include <KNewFileMenu>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <QWidget>
#include <QWidgetAction>
#include <knewfilemenu.h>
#include "libknewfilemenu.h"
#include "libknewfilemenu.hxx"

KNewFileMenu* KNewFileMenu_new(QObject* parent) {
    return new VirtualKNewFileMenu(parent);
}

QMetaObject* KNewFileMenu_MetaObject(const KNewFileMenu* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNewFileMenu_Metacast(KNewFileMenu* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNewFileMenu_Metacall(KNewFileMenu* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNewFileMenu_Tr(const char* s) {
    auto _ret = KNewFileMenu::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KNewFileMenu_IsModal(const KNewFileMenu* self) {
    return self->isModal();
}

void KNewFileMenu_SetModal(KNewFileMenu* self, bool modality) {
    self->setModal(modality);
}

void KNewFileMenu_SetParentWidget(KNewFileMenu* self, QWidget* parentWidget) {
    self->setParentWidget(parentWidget);
}

void KNewFileMenu_SetWorkingDirectory(KNewFileMenu* self, const QUrl* directory) {
    self->setWorkingDirectory(*directory);
}

QUrl* KNewFileMenu_WorkingDirectory(const KNewFileMenu* self) {
    return new QUrl(self->workingDirectory());
}

void KNewFileMenu_SetSupportedMimeTypes(KNewFileMenu* self, const libqt_list /* of libqt_string */ mime) {
    QList<QString> mime_QList;
    mime_QList.reserve(mime.len);
    libqt_string* mime_arr = static_cast<libqt_string*>(mime.data);
    for (size_t i = 0; i < mime.len; ++i) {
        QString mime_arr_i_QString = QString::fromUtf8(mime_arr[i].data, mime_arr[i].len);
        mime_QList.push_back(mime_arr_i_QString);
    }
    self->setSupportedMimeTypes(mime_QList);
}

libqt_list /* of libqt_string */ KNewFileMenu_SupportedMimeTypes(const KNewFileMenu* self) {
    QList<QString> _ret = self->supportedMimeTypes();
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

void KNewFileMenu_SetSelectDirWhenAlreadyExist(KNewFileMenu* self, bool b) {
    self->setSelectDirWhenAlreadyExist(b);
}

void KNewFileMenu_SetNewFolderShortcutAction(KNewFileMenu* self, QAction* action) {
    self->setNewFolderShortcutAction(action);
}

void KNewFileMenu_SetNewFileShortcutAction(KNewFileMenu* self, QAction* action) {
    self->setNewFileShortcutAction(action);
}

bool KNewFileMenu_IsCreateDirectoryRunning(KNewFileMenu* self) {
    return self->isCreateDirectoryRunning();
}

bool KNewFileMenu_IsCreateFileRunning(KNewFileMenu* self) {
    return self->isCreateFileRunning();
}

void KNewFileMenu_SetWindowTitle(KNewFileMenu* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setWindowTitle(title_QString);
}

void KNewFileMenu_CheckUpToDate(KNewFileMenu* self) {
    self->checkUpToDate();
}

void KNewFileMenu_CreateDirectory(KNewFileMenu* self) {
    self->createDirectory();
}

void KNewFileMenu_CreateFile(KNewFileMenu* self) {
    self->createFile();
}

void KNewFileMenu_FileCreationStarted(KNewFileMenu* self, const QUrl* url) {
    self->fileCreationStarted(*url);
}

void KNewFileMenu_Connect_FileCreationStarted(KNewFileMenu* self, intptr_t slot) {
    void (*slotFunc)(KNewFileMenu*, QUrl*) = reinterpret_cast<void (*)(KNewFileMenu*, QUrl*)>(slot);
    KNewFileMenu::connect(self,
                          static_cast<void (KNewFileMenu::*)(const QUrl&)>(&KNewFileMenu::fileCreationStarted),
                          [self, slotFunc](const QUrl& url) {
                              const QUrl& url_ret = url;
                              // Cast returned reference into pointer
                              QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                              slotFunc(self, sigval1);
                          });
}

void KNewFileMenu_FileCreated(KNewFileMenu* self, const QUrl* url) {
    self->fileCreated(*url);
}

void KNewFileMenu_Connect_FileCreated(KNewFileMenu* self, intptr_t slot) {
    void (*slotFunc)(KNewFileMenu*, QUrl*) = reinterpret_cast<void (*)(KNewFileMenu*, QUrl*)>(slot);
    KNewFileMenu::connect(self,
                          static_cast<void (KNewFileMenu::*)(const QUrl&)>(&KNewFileMenu::fileCreated),
                          [self, slotFunc](const QUrl& url) {
                              const QUrl& url_ret = url;
                              // Cast returned reference into pointer
                              QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                              slotFunc(self, sigval1);
                          });
}

void KNewFileMenu_FileCreationRejected(KNewFileMenu* self, const QUrl* url) {
    self->fileCreationRejected(*url);
}

void KNewFileMenu_Connect_FileCreationRejected(KNewFileMenu* self, intptr_t slot) {
    void (*slotFunc)(KNewFileMenu*, QUrl*) = reinterpret_cast<void (*)(KNewFileMenu*, QUrl*)>(slot);
    KNewFileMenu::connect(self,
                          static_cast<void (KNewFileMenu::*)(const QUrl&)>(&KNewFileMenu::fileCreationRejected),
                          [self, slotFunc](const QUrl& url) {
                              const QUrl& url_ret = url;
                              // Cast returned reference into pointer
                              QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                              slotFunc(self, sigval1);
                          });
}

void KNewFileMenu_DirectoryCreationStarted(KNewFileMenu* self, const QUrl* url) {
    self->directoryCreationStarted(*url);
}

void KNewFileMenu_Connect_DirectoryCreationStarted(KNewFileMenu* self, intptr_t slot) {
    void (*slotFunc)(KNewFileMenu*, QUrl*) = reinterpret_cast<void (*)(KNewFileMenu*, QUrl*)>(slot);
    KNewFileMenu::connect(self,
                          static_cast<void (KNewFileMenu::*)(const QUrl&)>(&KNewFileMenu::directoryCreationStarted),
                          [self, slotFunc](const QUrl& url) {
                              const QUrl& url_ret = url;
                              // Cast returned reference into pointer
                              QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                              slotFunc(self, sigval1);
                          });
}

void KNewFileMenu_DirectoryCreated(KNewFileMenu* self, const QUrl* url) {
    self->directoryCreated(*url);
}

void KNewFileMenu_Connect_DirectoryCreated(KNewFileMenu* self, intptr_t slot) {
    void (*slotFunc)(KNewFileMenu*, QUrl*) = reinterpret_cast<void (*)(KNewFileMenu*, QUrl*)>(slot);
    KNewFileMenu::connect(self,
                          static_cast<void (KNewFileMenu::*)(const QUrl&)>(&KNewFileMenu::directoryCreated),
                          [self, slotFunc](const QUrl& url) {
                              const QUrl& url_ret = url;
                              // Cast returned reference into pointer
                              QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                              slotFunc(self, sigval1);
                          });
}

void KNewFileMenu_DirectoryCreationRejected(KNewFileMenu* self, const QUrl* url) {
    self->directoryCreationRejected(*url);
}

void KNewFileMenu_Connect_DirectoryCreationRejected(KNewFileMenu* self, intptr_t slot) {
    void (*slotFunc)(KNewFileMenu*, QUrl*) = reinterpret_cast<void (*)(KNewFileMenu*, QUrl*)>(slot);
    KNewFileMenu::connect(self,
                          static_cast<void (KNewFileMenu::*)(const QUrl&)>(&KNewFileMenu::directoryCreationRejected),
                          [self, slotFunc](const QUrl& url) {
                              const QUrl& url_ret = url;
                              // Cast returned reference into pointer
                              QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                              slotFunc(self, sigval1);
                          });
}

void KNewFileMenu_SelectExistingDir(KNewFileMenu* self, const QUrl* url) {
    self->selectExistingDir(*url);
}

void KNewFileMenu_Connect_SelectExistingDir(KNewFileMenu* self, intptr_t slot) {
    void (*slotFunc)(KNewFileMenu*, QUrl*) = reinterpret_cast<void (*)(KNewFileMenu*, QUrl*)>(slot);
    KNewFileMenu::connect(self,
                          static_cast<void (KNewFileMenu::*)(const QUrl&)>(&KNewFileMenu::selectExistingDir),
                          [self, slotFunc](const QUrl& url) {
                              const QUrl& url_ret = url;
                              // Cast returned reference into pointer
                              QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                              slotFunc(self, sigval1);
                          });
}

void KNewFileMenu_SlotResult(KNewFileMenu* self, KJob* job) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu) {
        vknewfilemenu->slotResult(job);
    }
}

libqt_string KNewFileMenu_Tr2(const char* s, const char* c) {
    auto _ret = KNewFileMenu::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNewFileMenu_Tr3(const char* s, const char* c, int n) {
    auto _ret = KNewFileMenu::tr(s, c, static_cast<int>(n));
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
QMetaObject* KNewFileMenu_SuperMetaObject(const KNewFileMenu* self) {
    return (QMetaObject*)self->KNewFileMenu::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnMetaObject(KNewFileMenu* self, intptr_t slot) {
    if (auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self)))
        vknewfilemenu->knewfilemenu_metaobject_callback = reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KNewFileMenu_SuperMetacast(KNewFileMenu* self, const char* param1) {
    return self->KNewFileMenu::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnMetacast(KNewFileMenu* self, intptr_t slot) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self))
        vknewfilemenu->knewfilemenu_metacast_callback = reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_Metacast_Callback>(slot);
}

// Base class handler implementation
int KNewFileMenu_SuperMetacall(KNewFileMenu* self, int param1, int param2, void** param3) {
    return self->KNewFileMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnMetacall(KNewFileMenu* self, intptr_t slot) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self))
        vknewfilemenu->knewfilemenu_metacall_callback = reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_Metacall_Callback>(slot);
}

// Base class handler implementation
void KNewFileMenu_SuperSlotResult(KNewFileMenu* self, KJob* job) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self)) {
        vknewfilemenu->KNewFileMenu::slotResult(job);
    } else
        qFatal("Error: Protected virtual method KNewFileMenu::slotResult called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnSlotResult(KNewFileMenu* self, intptr_t slot) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self))
        vknewfilemenu->knewfilemenu_slotresult_callback = reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_SlotResult_Callback>(slot);
}

// Derived class handler implementation
QWidget* KNewFileMenu_CreateWidget(KNewFileMenu* self, QWidget* parent) {
    return self->createWidget(parent);
}

// Base class handler implementation
QWidget* KNewFileMenu_SuperCreateWidget(KNewFileMenu* self, QWidget* parent) {
    return self->KNewFileMenu::createWidget(parent);
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnCreateWidget(KNewFileMenu* self, intptr_t slot) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self))
        vknewfilemenu->knewfilemenu_createwidget_callback = reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_CreateWidget_Callback>(slot);
}

// Derived class handler implementation
bool KNewFileMenu_Event(KNewFileMenu* self, QEvent* param1) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu) {
        return vknewfilemenu->event(param1);
    } else {
        qFatal("Error: Protected virtual method KNewFileMenu::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNewFileMenu_SuperEvent(KNewFileMenu* self, QEvent* param1) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self)) {
        return vknewfilemenu->KNewFileMenu::event(param1);
    } else
        qFatal("Error: Protected virtual method KNewFileMenu::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnEvent(KNewFileMenu* self, intptr_t slot) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self))
        vknewfilemenu->knewfilemenu_event_callback = reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_Event_Callback>(slot);
}

// Derived class handler implementation
bool KNewFileMenu_EventFilter(KNewFileMenu* self, QObject* param1, QEvent* param2) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu) {
        return vknewfilemenu->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KNewFileMenu::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNewFileMenu_SuperEventFilter(KNewFileMenu* self, QObject* param1, QEvent* param2) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self)) {
        return vknewfilemenu->KNewFileMenu::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KNewFileMenu::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnEventFilter(KNewFileMenu* self, intptr_t slot) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self))
        vknewfilemenu->knewfilemenu_eventfilter_callback = reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KNewFileMenu_DeleteWidget(KNewFileMenu* self, QWidget* widget) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu) {
        vknewfilemenu->deleteWidget(widget);
    } else {
        qFatal("Error: Protected virtual method KNewFileMenu::deleteWidget called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewFileMenu_SuperDeleteWidget(KNewFileMenu* self, QWidget* widget) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self)) {
        vknewfilemenu->KNewFileMenu::deleteWidget(widget);
    } else
        qFatal("Error: Protected virtual method KNewFileMenu::deleteWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnDeleteWidget(KNewFileMenu* self, intptr_t slot) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self))
        vknewfilemenu->knewfilemenu_deletewidget_callback = reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_DeleteWidget_Callback>(slot);
}

// Derived class handler implementation
void KNewFileMenu_TimerEvent(KNewFileMenu* self, QTimerEvent* event) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu) {
        vknewfilemenu->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewFileMenu::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewFileMenu_SuperTimerEvent(KNewFileMenu* self, QTimerEvent* event) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self)) {
        vknewfilemenu->KNewFileMenu::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewFileMenu::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnTimerEvent(KNewFileMenu* self, intptr_t slot) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self))
        vknewfilemenu->knewfilemenu_timerevent_callback = reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewFileMenu_ChildEvent(KNewFileMenu* self, QChildEvent* event) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu) {
        vknewfilemenu->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewFileMenu::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewFileMenu_SuperChildEvent(KNewFileMenu* self, QChildEvent* event) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self)) {
        vknewfilemenu->KNewFileMenu::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewFileMenu::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnChildEvent(KNewFileMenu* self, intptr_t slot) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self))
        vknewfilemenu->knewfilemenu_childevent_callback = reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewFileMenu_CustomEvent(KNewFileMenu* self, QEvent* event) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu) {
        vknewfilemenu->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewFileMenu::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewFileMenu_SuperCustomEvent(KNewFileMenu* self, QEvent* event) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self)) {
        vknewfilemenu->KNewFileMenu::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewFileMenu::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnCustomEvent(KNewFileMenu* self, intptr_t slot) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self))
        vknewfilemenu->knewfilemenu_customevent_callback = reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewFileMenu_ConnectNotify(KNewFileMenu* self, const QMetaMethod* signal) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu) {
        vknewfilemenu->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNewFileMenu::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewFileMenu_SuperConnectNotify(KNewFileMenu* self, const QMetaMethod* signal) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self)) {
        vknewfilemenu->KNewFileMenu::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNewFileMenu::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnConnectNotify(KNewFileMenu* self, intptr_t slot) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self))
        vknewfilemenu->knewfilemenu_connectnotify_callback = reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KNewFileMenu_DisconnectNotify(KNewFileMenu* self, const QMetaMethod* signal) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu) {
        vknewfilemenu->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNewFileMenu::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewFileMenu_SuperDisconnectNotify(KNewFileMenu* self, const QMetaMethod* signal) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self)) {
        vknewfilemenu->KNewFileMenu::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNewFileMenu::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnDisconnectNotify(KNewFileMenu* self, intptr_t slot) {
    if (auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self))
        vknewfilemenu->knewfilemenu_disconnectnotify_callback = reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_list /* of QWidget* */ KNewFileMenu_CreatedWidgets(const KNewFileMenu* self) {
    if (auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self))) {
        QList<QWidget*> _ret = vknewfilemenu->VirtualKNewFileMenu::createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method KNewFileMenu::createdWidgets called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KNewFileMenu_Sender(const KNewFileMenu* self) {
    if (auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self))) {
        return vknewfilemenu->VirtualKNewFileMenu::sender();
    } else
        qFatal("Error: Protected method KNewFileMenu::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KNewFileMenu_SenderSignalIndex(const KNewFileMenu* self) {
    if (auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self))) {
        return vknewfilemenu->VirtualKNewFileMenu::senderSignalIndex();
    } else
        qFatal("Error: Protected method KNewFileMenu::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KNewFileMenu_Receivers(const KNewFileMenu* self, const char* signal) {
    if (auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self))) {
        return vknewfilemenu->VirtualKNewFileMenu::receivers(signal);
    } else
        qFatal("Error: Protected method KNewFileMenu::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNewFileMenu_IsSignalConnected(const KNewFileMenu* self, const QMetaMethod* signal) {
    if (auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self))) {
        return vknewfilemenu->VirtualKNewFileMenu::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KNewFileMenu::isSignalConnected called without a directly constructed type");
}

void KNewFileMenu_Delete(KNewFileMenu* self) {
    delete self;
}
