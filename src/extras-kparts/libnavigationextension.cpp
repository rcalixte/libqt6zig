#include <KFileItem>
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__NavigationExtension
#include <KParts/OpenUrlArguments>
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart
#include <QAction>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <navigationextension.h>
#include "libnavigationextension.h"
#include "libnavigationextension.hxx"

KParts__NavigationExtension* KParts__NavigationExtension_new(KParts__ReadOnlyPart* parent) {
    return new VirtualKPartsNavigationExtension(parent);
}

QMetaObject* KParts__NavigationExtension_MetaObject(const KParts__NavigationExtension* self) {
    return (QMetaObject*)self->metaObject();
}

void* KParts__NavigationExtension_Metacast(KParts__NavigationExtension* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KParts__NavigationExtension_Metacall(KParts__NavigationExtension* self, int param1, int param2, void** param3) {
    auto* vkparts__navigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkparts__navigationextension && vkparts__navigationextension->isVirtualKPartsNavigationExtension) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KParts__NavigationExtension_Tr(const char* s) {
    QString _ret = KParts::NavigationExtension::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KParts__NavigationExtension_XOffset(KParts__NavigationExtension* self) {
    auto* vkparts__navigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkparts__navigationextension && vkparts__navigationextension->isVirtualKPartsNavigationExtension) {
        return self->xOffset();
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->xOffset();
    }
}

int KParts__NavigationExtension_YOffset(KParts__NavigationExtension* self) {
    auto* vkparts__navigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkparts__navigationextension && vkparts__navigationextension->isVirtualKPartsNavigationExtension) {
        return self->yOffset();
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->yOffset();
    }
}

void KParts__NavigationExtension_SaveState(KParts__NavigationExtension* self, QDataStream* stream) {
    auto* vkparts__navigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkparts__navigationextension && vkparts__navigationextension->isVirtualKPartsNavigationExtension) {
        self->saveState(*stream);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->saveState(*stream);
    }
}

void KParts__NavigationExtension_RestoreState(KParts__NavigationExtension* self, QDataStream* stream) {
    auto* vkparts__navigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkparts__navigationextension && vkparts__navigationextension->isVirtualKPartsNavigationExtension) {
        self->restoreState(*stream);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->restoreState(*stream);
    }
}

bool KParts__NavigationExtension_IsURLDropHandlingEnabled(const KParts__NavigationExtension* self) {
    return self->isURLDropHandlingEnabled();
}

void KParts__NavigationExtension_SetURLDropHandlingEnabled(KParts__NavigationExtension* self, bool enable) {
    self->setURLDropHandlingEnabled(enable);
}

bool KParts__NavigationExtension_IsActionEnabled(const KParts__NavigationExtension* self, const char* name) {
    return self->isActionEnabled(name);
}

libqt_string KParts__NavigationExtension_ActionText(const KParts__NavigationExtension* self, const char* name) {
    QString _ret = self->actionText(name);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KParts__NavigationExtension* KParts__NavigationExtension_ChildObject(QObject* obj) {
    return KParts::NavigationExtension::childObject(obj);
}

void KParts__NavigationExtension_PasteRequest(KParts__NavigationExtension* self) {
    self->pasteRequest();
}

void KParts__NavigationExtension_EnableAction(KParts__NavigationExtension* self, const char* name, bool enabled) {
    self->enableAction(name, enabled);
}

void KParts__NavigationExtension_SetActionText(KParts__NavigationExtension* self, const char* name, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setActionText(name, text_QString);
}

void KParts__NavigationExtension_OpenUrlRequest(KParts__NavigationExtension* self, const QUrl* url) {
    self->openUrlRequest(*url);
}

void KParts__NavigationExtension_OpenUrlRequestDelayed(KParts__NavigationExtension* self, const QUrl* url, const KParts__OpenUrlArguments* arguments) {
    self->openUrlRequestDelayed(*url, *arguments);
}

void KParts__NavigationExtension_OpenUrlNotify(KParts__NavigationExtension* self) {
    self->openUrlNotify();
}

void KParts__NavigationExtension_SetLocationBarUrl(KParts__NavigationExtension* self, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    self->setLocationBarUrl(url_QString);
}

void KParts__NavigationExtension_SetIconUrl(KParts__NavigationExtension* self, const QUrl* url) {
    self->setIconUrl(*url);
}

void KParts__NavigationExtension_CreateNewWindow(KParts__NavigationExtension* self, const QUrl* url) {
    self->createNewWindow(*url);
}

void KParts__NavigationExtension_LoadingProgress(KParts__NavigationExtension* self, int percent) {
    self->loadingProgress(static_cast<int>(percent));
}

void KParts__NavigationExtension_SpeedProgress(KParts__NavigationExtension* self, int bytesPerSecond) {
    self->speedProgress(static_cast<int>(bytesPerSecond));
}

void KParts__NavigationExtension_InfoMessage(KParts__NavigationExtension* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->infoMessage(param1_QString);
}

void KParts__NavigationExtension_PopupMenu(KParts__NavigationExtension* self, const QPoint* global, const KFileItemList* items) {
    self->popupMenu(*global, *items);
}

void KParts__NavigationExtension_PopupMenu2(KParts__NavigationExtension* self, const QPoint* global, const QUrl* url) {
    self->popupMenu(*global, *url);
}

void KParts__NavigationExtension_SelectionInfo(KParts__NavigationExtension* self, const KFileItemList* items) {
    self->selectionInfo(*items);
}

void KParts__NavigationExtension_MouseOverInfo(KParts__NavigationExtension* self, const KFileItem* item) {
    self->mouseOverInfo(*item);
}

void KParts__NavigationExtension_AddWebSideBar(KParts__NavigationExtension* self, const QUrl* url, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->addWebSideBar(*url, name_QString);
}

void KParts__NavigationExtension_MoveTopLevelWidget(KParts__NavigationExtension* self, int x, int y) {
    self->moveTopLevelWidget(static_cast<int>(x), static_cast<int>(y));
}

void KParts__NavigationExtension_ResizeTopLevelWidget(KParts__NavigationExtension* self, int w, int h) {
    self->resizeTopLevelWidget(static_cast<int>(w), static_cast<int>(h));
}

void KParts__NavigationExtension_RequestFocus(KParts__NavigationExtension* self, KParts__ReadOnlyPart* part) {
    self->requestFocus(part);
}

void KParts__NavigationExtension_SetPageSecurity(KParts__NavigationExtension* self, int pageSecurity) {
    self->setPageSecurity(static_cast<int>(pageSecurity));
}

void KParts__NavigationExtension_ItemsRemoved(KParts__NavigationExtension* self, const KFileItemList* items) {
    self->itemsRemoved(*items);
}

libqt_string KParts__NavigationExtension_Tr2(const char* s, const char* c) {
    QString _ret = KParts::NavigationExtension::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KParts__NavigationExtension_Tr3(const char* s, const char* c, int n) {
    QString _ret = KParts::NavigationExtension::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KParts__NavigationExtension_OpenUrlRequest2(KParts__NavigationExtension* self, const QUrl* url, const KParts__OpenUrlArguments* arguments) {
    self->openUrlRequest(*url, *arguments);
}

void KParts__NavigationExtension_PopupMenu3(KParts__NavigationExtension* self, const QPoint* global, const KFileItemList* items, const KParts__OpenUrlArguments* arguments) {
    self->popupMenu(*global, *items, *arguments);
}

void KParts__NavigationExtension_PopupMenu4(KParts__NavigationExtension* self, const QPoint* global, const KFileItemList* items, const KParts__OpenUrlArguments* arguments, int flags) {
    self->popupMenu(*global, *items, *arguments, static_cast<KParts::NavigationExtension::PopupFlags>(flags));
}

void KParts__NavigationExtension_PopupMenu5(KParts__NavigationExtension* self, const QPoint* global, const KFileItemList* items, const KParts__OpenUrlArguments* arguments, int flags, const libqt_map /* of libqt_string to libqt_list  of QAction*  */ actionGroups) {
    QMap<QString, QList<QAction*>> actionGroups_QMap;
    libqt_string* actionGroups_karr = static_cast<libqt_string*>(actionGroups.keys);
    libqt_list /* of QAction* */* actionGroups_varr = static_cast<libqt_list /* of QAction* */*>(actionGroups.values);
    for (size_t i = 0; i < actionGroups.len; ++i) {
        QString actionGroups_karr_i_QString = QString::fromUtf8(actionGroups_karr[i].data, actionGroups_karr[i].len);
        QList<QAction*> actionGroups_varr_i_QList;
        actionGroups_varr_i_QList.reserve(actionGroups_varr[i].len);
        QAction** actionGroups_varr_i_arr = static_cast<QAction**>(actionGroups_varr[i].data);
        for (size_t i = 0; i < actionGroups_varr[i].len; ++i) {
            actionGroups_varr_i_QList.push_back(actionGroups_varr_i_arr[i]);
        }
        actionGroups_QMap[actionGroups_karr_i_QString] = actionGroups_varr_i_QList;
    }
    self->popupMenu(*global, *items, *arguments, static_cast<KParts::NavigationExtension::PopupFlags>(flags), actionGroups_QMap);
}

void KParts__NavigationExtension_PopupMenu32(KParts__NavigationExtension* self, const QPoint* global, const QUrl* url, mode_t mode) {
    self->popupMenu(*global, *url, mode);
}

void KParts__NavigationExtension_PopupMenu42(KParts__NavigationExtension* self, const QPoint* global, const QUrl* url, mode_t mode, const KParts__OpenUrlArguments* arguments) {
    self->popupMenu(*global, *url, mode, *arguments);
}

void KParts__NavigationExtension_PopupMenu52(KParts__NavigationExtension* self, const QPoint* global, const QUrl* url, mode_t mode, const KParts__OpenUrlArguments* arguments, int flags) {
    self->popupMenu(*global, *url, mode, *arguments, static_cast<KParts::NavigationExtension::PopupFlags>(flags));
}

void KParts__NavigationExtension_PopupMenu6(KParts__NavigationExtension* self, const QPoint* global, const QUrl* url, mode_t mode, const KParts__OpenUrlArguments* arguments, int flags, const libqt_map /* of libqt_string to libqt_list  of QAction*  */ actionGroups) {
    QMap<QString, QList<QAction*>> actionGroups_QMap;
    libqt_string* actionGroups_karr = static_cast<libqt_string*>(actionGroups.keys);
    libqt_list /* of QAction* */* actionGroups_varr = static_cast<libqt_list /* of QAction* */*>(actionGroups.values);
    for (size_t i = 0; i < actionGroups.len; ++i) {
        QString actionGroups_karr_i_QString = QString::fromUtf8(actionGroups_karr[i].data, actionGroups_karr[i].len);
        QList<QAction*> actionGroups_varr_i_QList;
        actionGroups_varr_i_QList.reserve(actionGroups_varr[i].len);
        QAction** actionGroups_varr_i_arr = static_cast<QAction**>(actionGroups_varr[i].data);
        for (size_t i = 0; i < actionGroups_varr[i].len; ++i) {
            actionGroups_varr_i_QList.push_back(actionGroups_varr_i_arr[i]);
        }
        actionGroups_QMap[actionGroups_karr_i_QString] = actionGroups_varr_i_QList;
    }
    self->popupMenu(*global, *url, mode, *arguments, static_cast<KParts::NavigationExtension::PopupFlags>(flags), actionGroups_QMap);
}

// Base class handler implementation
int KParts__NavigationExtension_QBaseMetacall(KParts__NavigationExtension* self, int param1, int param2, void** param3) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_Metacall_IsBase(true);
        return vkpartsnavigationextension->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KParts::NavigationExtension::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnMetacall(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_Metacall_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int KParts__NavigationExtension_QBaseXOffset(KParts__NavigationExtension* self) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_XOffset_IsBase(true);
        return vkpartsnavigationextension->xOffset();
    } else {
        return self->KParts::NavigationExtension::xOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnXOffset(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_XOffset_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_XOffset_Callback>(slot));
    }
}

// Base class handler implementation
int KParts__NavigationExtension_QBaseYOffset(KParts__NavigationExtension* self) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_YOffset_IsBase(true);
        return vkpartsnavigationextension->yOffset();
    } else {
        return self->KParts::NavigationExtension::yOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnYOffset(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_YOffset_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_YOffset_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__NavigationExtension_QBaseSaveState(KParts__NavigationExtension* self, QDataStream* stream) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_SaveState_IsBase(true);
        vkpartsnavigationextension->saveState(*stream);
    } else {
        self->KParts::NavigationExtension::saveState(*stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnSaveState(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_SaveState_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_SaveState_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__NavigationExtension_QBaseRestoreState(KParts__NavigationExtension* self, QDataStream* stream) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_RestoreState_IsBase(true);
        vkpartsnavigationextension->restoreState(*stream);
    } else {
        self->KParts::NavigationExtension::restoreState(*stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnRestoreState(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_RestoreState_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_RestoreState_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__NavigationExtension_Event(KParts__NavigationExtension* self, QEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        return vkpartsnavigationextension->event(event);
    } else {
        return self->KParts::NavigationExtension::event(event);
    }
}

// Base class handler implementation
bool KParts__NavigationExtension_QBaseEvent(KParts__NavigationExtension* self, QEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_Event_IsBase(true);
        return vkpartsnavigationextension->event(event);
    } else {
        return self->KParts::NavigationExtension::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnEvent(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_Event_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__NavigationExtension_EventFilter(KParts__NavigationExtension* self, QObject* watched, QEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        return vkpartsnavigationextension->eventFilter(watched, event);
    } else {
        return self->KParts::NavigationExtension::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KParts__NavigationExtension_QBaseEventFilter(KParts__NavigationExtension* self, QObject* watched, QEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_EventFilter_IsBase(true);
        return vkpartsnavigationextension->eventFilter(watched, event);
    } else {
        return self->KParts::NavigationExtension::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnEventFilter(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_EventFilter_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__NavigationExtension_TimerEvent(KParts__NavigationExtension* self, QTimerEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->timerEvent(event);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KParts__NavigationExtension_QBaseTimerEvent(KParts__NavigationExtension* self, QTimerEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_TimerEvent_IsBase(true);
        vkpartsnavigationextension->timerEvent(event);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnTimerEvent(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_TimerEvent_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__NavigationExtension_ChildEvent(KParts__NavigationExtension* self, QChildEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->childEvent(event);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KParts__NavigationExtension_QBaseChildEvent(KParts__NavigationExtension* self, QChildEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_ChildEvent_IsBase(true);
        vkpartsnavigationextension->childEvent(event);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnChildEvent(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_ChildEvent_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__NavigationExtension_CustomEvent(KParts__NavigationExtension* self, QEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->customEvent(event);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KParts__NavigationExtension_QBaseCustomEvent(KParts__NavigationExtension* self, QEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_CustomEvent_IsBase(true);
        vkpartsnavigationextension->customEvent(event);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnCustomEvent(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_CustomEvent_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__NavigationExtension_ConnectNotify(KParts__NavigationExtension* self, const QMetaMethod* signal) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->connectNotify(*signal);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__NavigationExtension_QBaseConnectNotify(KParts__NavigationExtension* self, const QMetaMethod* signal) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_ConnectNotify_IsBase(true);
        vkpartsnavigationextension->connectNotify(*signal);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnConnectNotify(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_ConnectNotify_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__NavigationExtension_DisconnectNotify(KParts__NavigationExtension* self, const QMetaMethod* signal) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__NavigationExtension_QBaseDisconnectNotify(KParts__NavigationExtension* self, const QMetaMethod* signal) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_DisconnectNotify_IsBase(true);
        vkpartsnavigationextension->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnDisconnectNotify(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_DisconnectNotify_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KParts__NavigationExtension_Sender(const KParts__NavigationExtension* self) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        return vkpartsnavigationextension->sender();
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->sender();
    }
}

// Base class handler implementation
QObject* KParts__NavigationExtension_QBaseSender(const KParts__NavigationExtension* self) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_Sender_IsBase(true);
        return vkpartsnavigationextension->sender();
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnSender(const KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_Sender_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__NavigationExtension_SenderSignalIndex(const KParts__NavigationExtension* self) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        return vkpartsnavigationextension->senderSignalIndex();
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KParts__NavigationExtension_QBaseSenderSignalIndex(const KParts__NavigationExtension* self) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_SenderSignalIndex_IsBase(true);
        return vkpartsnavigationextension->senderSignalIndex();
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnSenderSignalIndex(const KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__NavigationExtension_Receivers(const KParts__NavigationExtension* self, const char* signal) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        return vkpartsnavigationextension->receivers(signal);
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KParts__NavigationExtension_QBaseReceivers(const KParts__NavigationExtension* self, const char* signal) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_Receivers_IsBase(true);
        return vkpartsnavigationextension->receivers(signal);
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnReceivers(const KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_Receivers_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__NavigationExtension_IsSignalConnected(const KParts__NavigationExtension* self, const QMetaMethod* signal) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        return vkpartsnavigationextension->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KParts__NavigationExtension_QBaseIsSignalConnected(const KParts__NavigationExtension* self, const QMetaMethod* signal) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_IsSignalConnected_IsBase(true);
        return vkpartsnavigationextension->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnIsSignalConnected(const KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_IsSignalConnected_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_IsSignalConnected_Callback>(slot));
    }
}

void KParts__NavigationExtension_Delete(KParts__NavigationExtension* self) {
    delete self;
}
