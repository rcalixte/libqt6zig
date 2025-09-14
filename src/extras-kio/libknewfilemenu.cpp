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
#include <QByteArray>
#include <cstring>
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
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNewFileMenu*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNewFileMenu_Tr(const char* s) {
    QString _ret = KNewFileMenu::tr(s);
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
    KNewFileMenu::connect(self, &KNewFileMenu::fileCreationStarted, [self, slotFunc](const QUrl& url) {
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
    KNewFileMenu::connect(self, &KNewFileMenu::fileCreated, [self, slotFunc](const QUrl& url) {
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
    KNewFileMenu::connect(self, &KNewFileMenu::fileCreationRejected, [self, slotFunc](const QUrl& url) {
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
    KNewFileMenu::connect(self, &KNewFileMenu::directoryCreationStarted, [self, slotFunc](const QUrl& url) {
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
    KNewFileMenu::connect(self, &KNewFileMenu::directoryCreated, [self, slotFunc](const QUrl& url) {
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
    KNewFileMenu::connect(self, &KNewFileMenu::directoryCreationRejected, [self, slotFunc](const QUrl& url) {
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
    KNewFileMenu::connect(self, &KNewFileMenu::selectExistingDir, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void KNewFileMenu_SlotResult(KNewFileMenu* self, KJob* job) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->slotResult(job);
    }
}

libqt_string KNewFileMenu_Tr2(const char* s, const char* c) {
    QString _ret = KNewFileMenu::tr(s, c);
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
    QString _ret = KNewFileMenu::tr(s, c, static_cast<int>(n));
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
int KNewFileMenu_QBaseMetacall(KNewFileMenu* self, int param1, int param2, void** param3) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_Metacall_IsBase(true);
        return vknewfilemenu->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KNewFileMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnMetacall(KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_Metacall_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KNewFileMenu_QBaseSlotResult(KNewFileMenu* self, KJob* job) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_SlotResult_IsBase(true);
        vknewfilemenu->slotResult(job);
    } else {
        ((VirtualKNewFileMenu*)self)->slotResult(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnSlotResult(KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_SlotResult_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_SlotResult_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KNewFileMenu_CreateWidget(KNewFileMenu* self, QWidget* parent) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        return vknewfilemenu->createWidget(parent);
    } else {
        return self->KNewFileMenu::createWidget(parent);
    }
}

// Base class handler implementation
QWidget* KNewFileMenu_QBaseCreateWidget(KNewFileMenu* self, QWidget* parent) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_CreateWidget_IsBase(true);
        return vknewfilemenu->createWidget(parent);
    } else {
        return self->KNewFileMenu::createWidget(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnCreateWidget(KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_CreateWidget_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_CreateWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewFileMenu_Event(KNewFileMenu* self, QEvent* param1) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        return vknewfilemenu->event(param1);
    } else {
        return ((VirtualKNewFileMenu*)self)->event(param1);
    }
}

// Base class handler implementation
bool KNewFileMenu_QBaseEvent(KNewFileMenu* self, QEvent* param1) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_Event_IsBase(true);
        return vknewfilemenu->event(param1);
    } else {
        return ((VirtualKNewFileMenu*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnEvent(KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_Event_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewFileMenu_EventFilter(KNewFileMenu* self, QObject* param1, QEvent* param2) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        return vknewfilemenu->eventFilter(param1, param2);
    } else {
        return ((VirtualKNewFileMenu*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KNewFileMenu_QBaseEventFilter(KNewFileMenu* self, QObject* param1, QEvent* param2) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_EventFilter_IsBase(true);
        return vknewfilemenu->eventFilter(param1, param2);
    } else {
        return ((VirtualKNewFileMenu*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnEventFilter(KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_EventFilter_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewFileMenu_DeleteWidget(KNewFileMenu* self, QWidget* widget) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->deleteWidget(widget);
    } else {
        ((VirtualKNewFileMenu*)self)->deleteWidget(widget);
    }
}

// Base class handler implementation
void KNewFileMenu_QBaseDeleteWidget(KNewFileMenu* self, QWidget* widget) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_DeleteWidget_IsBase(true);
        vknewfilemenu->deleteWidget(widget);
    } else {
        ((VirtualKNewFileMenu*)self)->deleteWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnDeleteWidget(KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_DeleteWidget_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_DeleteWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewFileMenu_TimerEvent(KNewFileMenu* self, QTimerEvent* event) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->timerEvent(event);
    } else {
        ((VirtualKNewFileMenu*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KNewFileMenu_QBaseTimerEvent(KNewFileMenu* self, QTimerEvent* event) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_TimerEvent_IsBase(true);
        vknewfilemenu->timerEvent(event);
    } else {
        ((VirtualKNewFileMenu*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnTimerEvent(KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_TimerEvent_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewFileMenu_ChildEvent(KNewFileMenu* self, QChildEvent* event) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->childEvent(event);
    } else {
        ((VirtualKNewFileMenu*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNewFileMenu_QBaseChildEvent(KNewFileMenu* self, QChildEvent* event) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_ChildEvent_IsBase(true);
        vknewfilemenu->childEvent(event);
    } else {
        ((VirtualKNewFileMenu*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnChildEvent(KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_ChildEvent_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewFileMenu_CustomEvent(KNewFileMenu* self, QEvent* event) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->customEvent(event);
    } else {
        ((VirtualKNewFileMenu*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNewFileMenu_QBaseCustomEvent(KNewFileMenu* self, QEvent* event) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_CustomEvent_IsBase(true);
        vknewfilemenu->customEvent(event);
    } else {
        ((VirtualKNewFileMenu*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnCustomEvent(KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_CustomEvent_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewFileMenu_ConnectNotify(KNewFileMenu* self, const QMetaMethod* signal) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->connectNotify(*signal);
    } else {
        ((VirtualKNewFileMenu*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNewFileMenu_QBaseConnectNotify(KNewFileMenu* self, const QMetaMethod* signal) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_ConnectNotify_IsBase(true);
        vknewfilemenu->connectNotify(*signal);
    } else {
        ((VirtualKNewFileMenu*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnConnectNotify(KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_ConnectNotify_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewFileMenu_DisconnectNotify(KNewFileMenu* self, const QMetaMethod* signal) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->disconnectNotify(*signal);
    } else {
        ((VirtualKNewFileMenu*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNewFileMenu_QBaseDisconnectNotify(KNewFileMenu* self, const QMetaMethod* signal) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_DisconnectNotify_IsBase(true);
        vknewfilemenu->disconnectNotify(*signal);
    } else {
        ((VirtualKNewFileMenu*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnDisconnectNotify(KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = dynamic_cast<VirtualKNewFileMenu*>(self);
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_DisconnectNotify_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QWidget* */ KNewFileMenu_CreatedWidgets(const KNewFileMenu* self) {
    auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self));
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        QList<QWidget*> _ret = vknewfilemenu->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualKNewFileMenu*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QWidget* */ KNewFileMenu_QBaseCreatedWidgets(const KNewFileMenu* self) {
    auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self));
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_CreatedWidgets_IsBase(true);
        QList<QWidget*> _ret = vknewfilemenu->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualKNewFileMenu*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnCreatedWidgets(const KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self));
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_CreatedWidgets_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_CreatedWidgets_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNewFileMenu_Sender(const KNewFileMenu* self) {
    auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self));
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        return vknewfilemenu->sender();
    } else {
        return ((VirtualKNewFileMenu*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNewFileMenu_QBaseSender(const KNewFileMenu* self) {
    auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self));
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_Sender_IsBase(true);
        return vknewfilemenu->sender();
    } else {
        return ((VirtualKNewFileMenu*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnSender(const KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self));
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_Sender_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNewFileMenu_SenderSignalIndex(const KNewFileMenu* self) {
    auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self));
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        return vknewfilemenu->senderSignalIndex();
    } else {
        return ((VirtualKNewFileMenu*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNewFileMenu_QBaseSenderSignalIndex(const KNewFileMenu* self) {
    auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self));
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_SenderSignalIndex_IsBase(true);
        return vknewfilemenu->senderSignalIndex();
    } else {
        return ((VirtualKNewFileMenu*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnSenderSignalIndex(const KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self));
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNewFileMenu_Receivers(const KNewFileMenu* self, const char* signal) {
    auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self));
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        return vknewfilemenu->receivers(signal);
    } else {
        return ((VirtualKNewFileMenu*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNewFileMenu_QBaseReceivers(const KNewFileMenu* self, const char* signal) {
    auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self));
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_Receivers_IsBase(true);
        return vknewfilemenu->receivers(signal);
    } else {
        return ((VirtualKNewFileMenu*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnReceivers(const KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self));
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_Receivers_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewFileMenu_IsSignalConnected(const KNewFileMenu* self, const QMetaMethod* signal) {
    auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self));
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        return vknewfilemenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKNewFileMenu*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNewFileMenu_QBaseIsSignalConnected(const KNewFileMenu* self, const QMetaMethod* signal) {
    auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self));
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_IsSignalConnected_IsBase(true);
        return vknewfilemenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKNewFileMenu*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewFileMenu_OnIsSignalConnected(const KNewFileMenu* self, intptr_t slot) {
    auto* vknewfilemenu = const_cast<VirtualKNewFileMenu*>(dynamic_cast<const VirtualKNewFileMenu*>(self));
    if (vknewfilemenu && vknewfilemenu->isVirtualKNewFileMenu) {
        vknewfilemenu->setKNewFileMenu_IsSignalConnected_Callback(reinterpret_cast<VirtualKNewFileMenu::KNewFileMenu_IsSignalConnected_Callback>(slot));
    }
}

void KNewFileMenu_Delete(KNewFileMenu* self) {
    delete self;
}
