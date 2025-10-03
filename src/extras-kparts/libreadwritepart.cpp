#include <KActionCollection>
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__GUIActivateEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartActivateEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartBase
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartManager
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadWritePart
#include <KPluginMetaData>
#include <KXMLGUIClient>
#include <QAction>
#include <QChildEvent>
#include <QDomDocument>
#include <QDomElement>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QWidget>
#include <readwritepart.h>
#include "libreadwritepart.h"
#include "libreadwritepart.hxx"

KParts__ReadWritePart* KParts__ReadWritePart_new() {
    return new VirtualKPartsReadWritePart();
}

KParts__ReadWritePart* KParts__ReadWritePart_new2(QObject* parent) {
    return new VirtualKPartsReadWritePart(parent);
}

KParts__ReadWritePart* KParts__ReadWritePart_new3(QObject* parent, const KPluginMetaData* data) {
    return new VirtualKPartsReadWritePart(parent, *data);
}

QMetaObject* KParts__ReadWritePart_MetaObject(const KParts__ReadWritePart* self) {
    return (QMetaObject*)self->metaObject();
}

void* KParts__ReadWritePart_Metacast(KParts__ReadWritePart* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KParts__ReadWritePart_Metacall(KParts__ReadWritePart* self, int param1, int param2, void** param3) {
    auto* vkparts__readwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkparts__readwritepart && vkparts__readwritepart->isVirtualKPartsReadWritePart) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPartsReadWritePart*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KParts__ReadWritePart_Tr(const char* s) {
    QString _ret = KParts::ReadWritePart::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KParts__ReadWritePart_IsReadWrite(const KParts__ReadWritePart* self) {
    return self->isReadWrite();
}

void KParts__ReadWritePart_SetReadWrite(KParts__ReadWritePart* self, bool readwrite) {
    auto* vkparts__readwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkparts__readwritepart && vkparts__readwritepart->isVirtualKPartsReadWritePart) {
        self->setReadWrite(readwrite);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setReadWrite(readwrite);
    }
}

bool KParts__ReadWritePart_IsModified(const KParts__ReadWritePart* self) {
    return self->isModified();
}

bool KParts__ReadWritePart_QueryClose(KParts__ReadWritePart* self) {
    auto* vkparts__readwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkparts__readwritepart && vkparts__readwritepart->isVirtualKPartsReadWritePart) {
        return self->queryClose();
    } else {
        return ((VirtualKPartsReadWritePart*)self)->queryClose();
    }
}

bool KParts__ReadWritePart_CloseUrl(KParts__ReadWritePart* self) {
    auto* vkparts__readwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkparts__readwritepart && vkparts__readwritepart->isVirtualKPartsReadWritePart) {
        return self->closeUrl();
    } else {
        return ((VirtualKPartsReadWritePart*)self)->closeUrl();
    }
}

bool KParts__ReadWritePart_CloseUrl2(KParts__ReadWritePart* self, bool promptToSave) {
    auto* vkparts__readwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkparts__readwritepart && vkparts__readwritepart->isVirtualKPartsReadWritePart) {
        return self->closeUrl(promptToSave);
    } else {
        return ((VirtualKPartsReadWritePart*)self)->closeUrl(promptToSave);
    }
}

bool KParts__ReadWritePart_SaveAs(KParts__ReadWritePart* self, const QUrl* url) {
    auto* vkparts__readwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkparts__readwritepart && vkparts__readwritepart->isVirtualKPartsReadWritePart) {
        return self->saveAs(*url);
    } else {
        return ((VirtualKPartsReadWritePart*)self)->saveAs(*url);
    }
}

void KParts__ReadWritePart_SetModified(KParts__ReadWritePart* self, bool modified) {
    auto* vkparts__readwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkparts__readwritepart && vkparts__readwritepart->isVirtualKPartsReadWritePart) {
        self->setModified(modified);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setModified(modified);
    }
}

void KParts__ReadWritePart_SigQueryClose(KParts__ReadWritePart* self, bool* handled, bool* abortClosing) {
    self->sigQueryClose(handled, abortClosing);
}

void KParts__ReadWritePart_Connect_SigQueryClose(KParts__ReadWritePart* self, intptr_t slot) {
    void (*slotFunc)(KParts__ReadWritePart*, bool*, bool*) = reinterpret_cast<void (*)(KParts__ReadWritePart*, bool*, bool*)>(slot);
    KParts::ReadWritePart::connect(self, &KParts::ReadWritePart::sigQueryClose, [self, slotFunc](bool* handled, bool* abortClosing) {
        bool* sigval1 = handled;
        bool* sigval2 = abortClosing;
        slotFunc(self, sigval1, sigval2);
    });
}

void KParts__ReadWritePart_SetModified2(KParts__ReadWritePart* self) {
    self->setModified();
}

bool KParts__ReadWritePart_Save(KParts__ReadWritePart* self) {
    auto* vkparts__readwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkparts__readwritepart && vkparts__readwritepart->isVirtualKPartsReadWritePart) {
        return self->save();
    } else {
        return ((VirtualKPartsReadWritePart*)self)->save();
    }
}

bool KParts__ReadWritePart_WaitSaveComplete(KParts__ReadWritePart* self) {
    return self->waitSaveComplete();
}

bool KParts__ReadWritePart_SaveFile(KParts__ReadWritePart* self) {
    auto* vkparts__readwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkparts__readwritepart && vkparts__readwritepart->isVirtualKPartsReadWritePart) {
        return vkparts__readwritepart->saveFile();
    }
    return {};
}

bool KParts__ReadWritePart_SaveToUrl(KParts__ReadWritePart* self) {
    auto* vkparts__readwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkparts__readwritepart && vkparts__readwritepart->isVirtualKPartsReadWritePart) {
        return vkparts__readwritepart->saveToUrl();
    }
    return {};
}

libqt_string KParts__ReadWritePart_Tr2(const char* s, const char* c) {
    QString _ret = KParts::ReadWritePart::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KParts__ReadWritePart_Tr3(const char* s, const char* c, int n) {
    QString _ret = KParts::ReadWritePart::tr(s, c, static_cast<int>(n));
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
int KParts__ReadWritePart_QBaseMetacall(KParts__ReadWritePart* self, int param1, int param2, void** param3) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_Metacall_IsBase(true);
        return vkpartsreadwritepart->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KParts::ReadWritePart::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnMetacall(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_Metacall_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseSetReadWrite(KParts__ReadWritePart* self, bool readwrite) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetReadWrite_IsBase(true);
        vkpartsreadwritepart->setReadWrite(readwrite);
    } else {
        self->KParts::ReadWritePart::setReadWrite(readwrite);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetReadWrite(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetReadWrite_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetReadWrite_Callback>(slot));
    }
}

// Base class handler implementation
bool KParts__ReadWritePart_QBaseQueryClose(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_QueryClose_IsBase(true);
        return vkpartsreadwritepart->queryClose();
    } else {
        return self->KParts::ReadWritePart::queryClose();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnQueryClose(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_QueryClose_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_QueryClose_Callback>(slot));
    }
}

// Base class handler implementation
bool KParts__ReadWritePart_QBaseCloseUrl(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_CloseUrl_IsBase(true);
        return vkpartsreadwritepart->closeUrl();
    } else {
        return self->KParts::ReadWritePart::closeUrl();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnCloseUrl(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_CloseUrl_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_CloseUrl_Callback>(slot));
    }
}

// Base class handler implementation
bool KParts__ReadWritePart_QBaseCloseUrl2(KParts__ReadWritePart* self, bool promptToSave) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_CloseUrl2_IsBase(true);
        return vkpartsreadwritepart->closeUrl(promptToSave);
    } else {
        return self->KParts::ReadWritePart::closeUrl(promptToSave);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnCloseUrl2(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_CloseUrl2_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_CloseUrl2_Callback>(slot));
    }
}

// Base class handler implementation
bool KParts__ReadWritePart_QBaseSaveAs(KParts__ReadWritePart* self, const QUrl* url) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SaveAs_IsBase(true);
        return vkpartsreadwritepart->saveAs(*url);
    } else {
        return self->KParts::ReadWritePart::saveAs(*url);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSaveAs(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SaveAs_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SaveAs_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseSetModified(KParts__ReadWritePart* self, bool modified) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetModified_IsBase(true);
        vkpartsreadwritepart->setModified(modified);
    } else {
        self->KParts::ReadWritePart::setModified(modified);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetModified(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetModified_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetModified_Callback>(slot));
    }
}

// Base class handler implementation
bool KParts__ReadWritePart_QBaseSave(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_Save_IsBase(true);
        return vkpartsreadwritepart->save();
    } else {
        return self->KParts::ReadWritePart::save();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSave(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_Save_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_Save_Callback>(slot));
    }
}

// Base class handler implementation
bool KParts__ReadWritePart_QBaseSaveFile(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SaveFile_IsBase(true);
        return vkpartsreadwritepart->saveFile();
    } else {
        return ((VirtualKPartsReadWritePart*)self)->saveFile();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSaveFile(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SaveFile_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SaveFile_Callback>(slot));
    }
}

// Base class handler implementation
bool KParts__ReadWritePart_QBaseSaveToUrl(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SaveToUrl_IsBase(true);
        return vkpartsreadwritepart->saveToUrl();
    } else {
        return ((VirtualKPartsReadWritePart*)self)->saveToUrl();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSaveToUrl(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SaveToUrl_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SaveToUrl_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__ReadWritePart_OpenUrl(KParts__ReadWritePart* self, const QUrl* url) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        return vkpartsreadwritepart->openUrl(*url);
    } else {
        return self->KParts::ReadWritePart::openUrl(*url);
    }
}

// Base class handler implementation
bool KParts__ReadWritePart_QBaseOpenUrl(KParts__ReadWritePart* self, const QUrl* url) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_OpenUrl_IsBase(true);
        return vkpartsreadwritepart->openUrl(*url);
    } else {
        return self->KParts::ReadWritePart::openUrl(*url);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnOpenUrl(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_OpenUrl_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_OpenUrl_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__ReadWritePart_OpenFile(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        return vkpartsreadwritepart->openFile();
    } else {
        return ((VirtualKPartsReadWritePart*)self)->openFile();
    }
}

// Base class handler implementation
bool KParts__ReadWritePart_QBaseOpenFile(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_OpenFile_IsBase(true);
        return vkpartsreadwritepart->openFile();
    } else {
        return ((VirtualKPartsReadWritePart*)self)->openFile();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnOpenFile(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_OpenFile_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_OpenFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_GuiActivateEvent(KParts__ReadWritePart* self, KParts__GUIActivateEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->guiActivateEvent(event);
    } else {
        ((VirtualKPartsReadWritePart*)self)->guiActivateEvent(event);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseGuiActivateEvent(KParts__ReadWritePart* self, KParts__GUIActivateEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_GuiActivateEvent_IsBase(true);
        vkpartsreadwritepart->guiActivateEvent(event);
    } else {
        ((VirtualKPartsReadWritePart*)self)->guiActivateEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnGuiActivateEvent(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_GuiActivateEvent_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_GuiActivateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KParts__ReadWritePart_Widget(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        return vkpartsreadwritepart->widget();
    } else {
        return self->KParts::ReadWritePart::widget();
    }
}

// Base class handler implementation
QWidget* KParts__ReadWritePart_QBaseWidget(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_Widget_IsBase(true);
        return vkpartsreadwritepart->widget();
    } else {
        return self->KParts::ReadWritePart::widget();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnWidget(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_Widget_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_Widget_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_SetManager(KParts__ReadWritePart* self, KParts__PartManager* manager) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setManager(manager);
    } else {
        self->KParts::ReadWritePart::setManager(manager);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseSetManager(KParts__ReadWritePart* self, KParts__PartManager* manager) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetManager_IsBase(true);
        vkpartsreadwritepart->setManager(manager);
    } else {
        self->KParts::ReadWritePart::setManager(manager);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetManager(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetManager_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetManager_Callback>(slot));
    }
}

// Derived class handler implementation
KParts__Part* KParts__ReadWritePart_HitTest(KParts__ReadWritePart* self, QWidget* widget, const QPoint* globalPos) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        return vkpartsreadwritepart->hitTest(widget, *globalPos);
    } else {
        return self->KParts::ReadWritePart::hitTest(widget, *globalPos);
    }
}

// Base class handler implementation
KParts__Part* KParts__ReadWritePart_QBaseHitTest(KParts__ReadWritePart* self, QWidget* widget, const QPoint* globalPos) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_HitTest_IsBase(true);
        return vkpartsreadwritepart->hitTest(widget, *globalPos);
    } else {
        return self->KParts::ReadWritePart::hitTest(widget, *globalPos);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnHitTest(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_HitTest_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_HitTest_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_SetWidget(KParts__ReadWritePart* self, QWidget* widget) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setWidget(widget);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setWidget(widget);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseSetWidget(KParts__ReadWritePart* self, QWidget* widget) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetWidget_IsBase(true);
        vkpartsreadwritepart->setWidget(widget);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetWidget(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetWidget_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_CustomEvent(KParts__ReadWritePart* self, QEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->customEvent(event);
    } else {
        ((VirtualKPartsReadWritePart*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseCustomEvent(KParts__ReadWritePart* self, QEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_CustomEvent_IsBase(true);
        vkpartsreadwritepart->customEvent(event);
    } else {
        ((VirtualKPartsReadWritePart*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnCustomEvent(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_CustomEvent_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_PartActivateEvent(KParts__ReadWritePart* self, KParts__PartActivateEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->partActivateEvent(event);
    } else {
        ((VirtualKPartsReadWritePart*)self)->partActivateEvent(event);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBasePartActivateEvent(KParts__ReadWritePart* self, KParts__PartActivateEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_PartActivateEvent_IsBase(true);
        vkpartsreadwritepart->partActivateEvent(event);
    } else {
        ((VirtualKPartsReadWritePart*)self)->partActivateEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnPartActivateEvent(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_PartActivateEvent_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_PartActivateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__ReadWritePart_Event(KParts__ReadWritePart* self, QEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        return vkpartsreadwritepart->event(event);
    } else {
        return self->KParts::ReadWritePart::event(event);
    }
}

// Base class handler implementation
bool KParts__ReadWritePart_QBaseEvent(KParts__ReadWritePart* self, QEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_Event_IsBase(true);
        return vkpartsreadwritepart->event(event);
    } else {
        return self->KParts::ReadWritePart::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnEvent(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_Event_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__ReadWritePart_EventFilter(KParts__ReadWritePart* self, QObject* watched, QEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        return vkpartsreadwritepart->eventFilter(watched, event);
    } else {
        return self->KParts::ReadWritePart::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KParts__ReadWritePart_QBaseEventFilter(KParts__ReadWritePart* self, QObject* watched, QEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_EventFilter_IsBase(true);
        return vkpartsreadwritepart->eventFilter(watched, event);
    } else {
        return self->KParts::ReadWritePart::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnEventFilter(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_EventFilter_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_TimerEvent(KParts__ReadWritePart* self, QTimerEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->timerEvent(event);
    } else {
        ((VirtualKPartsReadWritePart*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseTimerEvent(KParts__ReadWritePart* self, QTimerEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_TimerEvent_IsBase(true);
        vkpartsreadwritepart->timerEvent(event);
    } else {
        ((VirtualKPartsReadWritePart*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnTimerEvent(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_TimerEvent_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_ChildEvent(KParts__ReadWritePart* self, QChildEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->childEvent(event);
    } else {
        ((VirtualKPartsReadWritePart*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseChildEvent(KParts__ReadWritePart* self, QChildEvent* event) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_ChildEvent_IsBase(true);
        vkpartsreadwritepart->childEvent(event);
    } else {
        ((VirtualKPartsReadWritePart*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnChildEvent(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_ChildEvent_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_ConnectNotify(KParts__ReadWritePart* self, const QMetaMethod* signal) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->connectNotify(*signal);
    } else {
        ((VirtualKPartsReadWritePart*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseConnectNotify(KParts__ReadWritePart* self, const QMetaMethod* signal) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_ConnectNotify_IsBase(true);
        vkpartsreadwritepart->connectNotify(*signal);
    } else {
        ((VirtualKPartsReadWritePart*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnConnectNotify(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_ConnectNotify_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_DisconnectNotify(KParts__ReadWritePart* self, const QMetaMethod* signal) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsReadWritePart*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseDisconnectNotify(KParts__ReadWritePart* self, const QMetaMethod* signal) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_DisconnectNotify_IsBase(true);
        vkpartsreadwritepart->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsReadWritePart*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnDisconnectNotify(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_DisconnectNotify_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QAction* KParts__ReadWritePart_Action2(const KParts__ReadWritePart* self, const QDomElement* element) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        return vkpartsreadwritepart->action(*element);
    } else {
        return self->KParts::ReadWritePart::action(*element);
    }
}

// Base class handler implementation
QAction* KParts__ReadWritePart_QBaseAction2(const KParts__ReadWritePart* self, const QDomElement* element) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_Action2_IsBase(true);
        return vkpartsreadwritepart->action(*element);
    } else {
        return self->KParts::ReadWritePart::action(*element);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnAction2(const KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_Action2_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_Action2_Callback>(slot));
    }
}

// Derived class handler implementation
KActionCollection* KParts__ReadWritePart_ActionCollection(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        return vkpartsreadwritepart->actionCollection();
    } else {
        return self->KParts::ReadWritePart::actionCollection();
    }
}

// Base class handler implementation
KActionCollection* KParts__ReadWritePart_QBaseActionCollection(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_ActionCollection_IsBase(true);
        return vkpartsreadwritepart->actionCollection();
    } else {
        return self->KParts::ReadWritePart::actionCollection();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnActionCollection(const KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_ActionCollection_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_ActionCollection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__ReadWritePart_ComponentName(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        QString _ret = vkpartsreadwritepart->componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::ReadWritePart::componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KParts__ReadWritePart_QBaseComponentName(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_ComponentName_IsBase(true);
        QString _ret = vkpartsreadwritepart->componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::ReadWritePart::componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnComponentName(const KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_ComponentName_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_ComponentName_Callback>(slot));
    }
}

// Derived class handler implementation
QDomDocument* KParts__ReadWritePart_DomDocument(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        return new QDomDocument(vkpartsreadwritepart->domDocument());
    } else {
        return new QDomDocument(((VirtualKPartsReadWritePart*)self)->domDocument());
    }
}

// Base class handler implementation
QDomDocument* KParts__ReadWritePart_QBaseDomDocument(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_DomDocument_IsBase(true);
        return new QDomDocument(vkpartsreadwritepart->domDocument());
    } else {
        return new QDomDocument(((VirtualKPartsReadWritePart*)self)->domDocument());
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnDomDocument(const KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_DomDocument_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_DomDocument_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__ReadWritePart_XmlFile(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        QString _ret = vkpartsreadwritepart->xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::ReadWritePart::xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KParts__ReadWritePart_QBaseXmlFile(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_XmlFile_IsBase(true);
        QString _ret = vkpartsreadwritepart->xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::ReadWritePart::xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnXmlFile(const KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_XmlFile_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_XmlFile_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__ReadWritePart_LocalXMLFile(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        QString _ret = vkpartsreadwritepart->localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::ReadWritePart::localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KParts__ReadWritePart_QBaseLocalXMLFile(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_LocalXMLFile_IsBase(true);
        QString _ret = vkpartsreadwritepart->localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::ReadWritePart::localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnLocalXMLFile(const KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_LocalXMLFile_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_LocalXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_SetComponentName(KParts__ReadWritePart* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setComponentName(componentName_QString, componentDisplayName_QString);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseSetComponentName(KParts__ReadWritePart* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetComponentName_IsBase(true);
        vkpartsreadwritepart->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setComponentName(componentName_QString, componentDisplayName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetComponentName(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetComponentName_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetComponentName_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_SetXMLFile(KParts__ReadWritePart* self, const libqt_string file, bool merge, bool setXMLDoc) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setXMLFile(file_QString, merge, setXMLDoc);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseSetXMLFile(KParts__ReadWritePart* self, const libqt_string file, bool merge, bool setXMLDoc) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetXMLFile_IsBase(true);
        vkpartsreadwritepart->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setXMLFile(file_QString, merge, setXMLDoc);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetXMLFile(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetXMLFile_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_SetLocalXMLFile(KParts__ReadWritePart* self, const libqt_string file) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setLocalXMLFile(file_QString);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setLocalXMLFile(file_QString);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseSetLocalXMLFile(KParts__ReadWritePart* self, const libqt_string file) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetLocalXMLFile_IsBase(true);
        vkpartsreadwritepart->setLocalXMLFile(file_QString);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setLocalXMLFile(file_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetLocalXMLFile(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetLocalXMLFile_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetLocalXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_SetXML(KParts__ReadWritePart* self, const libqt_string document, bool merge) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setXML(document_QString, merge);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setXML(document_QString, merge);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseSetXML(KParts__ReadWritePart* self, const libqt_string document, bool merge) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetXML_IsBase(true);
        vkpartsreadwritepart->setXML(document_QString, merge);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setXML(document_QString, merge);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetXML(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetXML_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetXML_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_SetDOMDocument(KParts__ReadWritePart* self, const QDomDocument* document, bool merge) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setDOMDocument(*document, merge);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setDOMDocument(*document, merge);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseSetDOMDocument(KParts__ReadWritePart* self, const QDomDocument* document, bool merge) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetDOMDocument_IsBase(true);
        vkpartsreadwritepart->setDOMDocument(*document, merge);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setDOMDocument(*document, merge);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetDOMDocument(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetDOMDocument_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetDOMDocument_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_StateChanged(KParts__ReadWritePart* self, const libqt_string newstate, int reverse) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        ((VirtualKPartsReadWritePart*)self)->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseStateChanged(KParts__ReadWritePart* self, const libqt_string newstate, int reverse) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_StateChanged_IsBase(true);
        vkpartsreadwritepart->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        ((VirtualKPartsReadWritePart*)self)->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnStateChanged(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_StateChanged_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_StateChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_AbortLoad(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->abortLoad();
    } else {
        ((VirtualKPartsReadWritePart*)self)->abortLoad();
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseAbortLoad(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_AbortLoad_IsBase(true);
        vkpartsreadwritepart->abortLoad();
    } else {
        ((VirtualKPartsReadWritePart*)self)->abortLoad();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnAbortLoad(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_AbortLoad_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_AbortLoad_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_SetUrl(KParts__ReadWritePart* self, const QUrl* url) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setUrl(*url);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setUrl(*url);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseSetUrl(KParts__ReadWritePart* self, const QUrl* url) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetUrl_IsBase(true);
        vkpartsreadwritepart->setUrl(*url);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setUrl(*url);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetUrl(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetUrl_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetUrl_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__ReadWritePart_LocalFilePath(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        QString _ret = vkpartsreadwritepart->localFilePath();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPartsReadWritePart*)self)->localFilePath();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KParts__ReadWritePart_QBaseLocalFilePath(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_LocalFilePath_IsBase(true);
        QString _ret = vkpartsreadwritepart->localFilePath();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPartsReadWritePart*)self)->localFilePath();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnLocalFilePath(const KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_LocalFilePath_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_LocalFilePath_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_SetLocalFilePath(KParts__ReadWritePart* self, const libqt_string localFilePath) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    QString localFilePath_QString = QString::fromUtf8(localFilePath.data, localFilePath.len);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setLocalFilePath(localFilePath_QString);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setLocalFilePath(localFilePath_QString);
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseSetLocalFilePath(KParts__ReadWritePart* self, const libqt_string localFilePath) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    QString localFilePath_QString = QString::fromUtf8(localFilePath.data, localFilePath.len);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetLocalFilePath_IsBase(true);
        vkpartsreadwritepart->setLocalFilePath(localFilePath_QString);
    } else {
        ((VirtualKPartsReadWritePart*)self)->setLocalFilePath(localFilePath_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSetLocalFilePath(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SetLocalFilePath_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SetLocalFilePath_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KParts__ReadWritePart_HostContainer(KParts__ReadWritePart* self, const libqt_string containerName) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    QString containerName_QString = QString::fromUtf8(containerName.data, containerName.len);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        return vkpartsreadwritepart->hostContainer(containerName_QString);
    } else {
        return ((VirtualKPartsReadWritePart*)self)->hostContainer(containerName_QString);
    }
}

// Base class handler implementation
QWidget* KParts__ReadWritePart_QBaseHostContainer(KParts__ReadWritePart* self, const libqt_string containerName) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    QString containerName_QString = QString::fromUtf8(containerName.data, containerName.len);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_HostContainer_IsBase(true);
        return vkpartsreadwritepart->hostContainer(containerName_QString);
    } else {
        return ((VirtualKPartsReadWritePart*)self)->hostContainer(containerName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnHostContainer(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_HostContainer_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_HostContainer_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_SlotWidgetDestroyed(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->slotWidgetDestroyed();
    } else {
        ((VirtualKPartsReadWritePart*)self)->slotWidgetDestroyed();
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseSlotWidgetDestroyed(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SlotWidgetDestroyed_IsBase(true);
        vkpartsreadwritepart->slotWidgetDestroyed();
    } else {
        ((VirtualKPartsReadWritePart*)self)->slotWidgetDestroyed();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSlotWidgetDestroyed(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SlotWidgetDestroyed_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SlotWidgetDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KParts__ReadWritePart_Sender(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        return vkpartsreadwritepart->sender();
    } else {
        return ((VirtualKPartsReadWritePart*)self)->sender();
    }
}

// Base class handler implementation
QObject* KParts__ReadWritePart_QBaseSender(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_Sender_IsBase(true);
        return vkpartsreadwritepart->sender();
    } else {
        return ((VirtualKPartsReadWritePart*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSender(const KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_Sender_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__ReadWritePart_SenderSignalIndex(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        return vkpartsreadwritepart->senderSignalIndex();
    } else {
        return ((VirtualKPartsReadWritePart*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KParts__ReadWritePart_QBaseSenderSignalIndex(const KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SenderSignalIndex_IsBase(true);
        return vkpartsreadwritepart->senderSignalIndex();
    } else {
        return ((VirtualKPartsReadWritePart*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnSenderSignalIndex(const KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__ReadWritePart_Receivers(const KParts__ReadWritePart* self, const char* signal) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        return vkpartsreadwritepart->receivers(signal);
    } else {
        return ((VirtualKPartsReadWritePart*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KParts__ReadWritePart_QBaseReceivers(const KParts__ReadWritePart* self, const char* signal) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_Receivers_IsBase(true);
        return vkpartsreadwritepart->receivers(signal);
    } else {
        return ((VirtualKPartsReadWritePart*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnReceivers(const KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_Receivers_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__ReadWritePart_IsSignalConnected(const KParts__ReadWritePart* self, const QMetaMethod* signal) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        return vkpartsreadwritepart->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsReadWritePart*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KParts__ReadWritePart_QBaseIsSignalConnected(const KParts__ReadWritePart* self, const QMetaMethod* signal) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_IsSignalConnected_IsBase(true);
        return vkpartsreadwritepart->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsReadWritePart*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnIsSignalConnected(const KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = const_cast<VirtualKPartsReadWritePart*>(dynamic_cast<const VirtualKPartsReadWritePart*>(self));
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_IsSignalConnected_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__ReadWritePart_StandardsXmlFileLocation(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        QString _ret = vkpartsreadwritepart->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPartsReadWritePart*)self)->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KParts__ReadWritePart_QBaseStandardsXmlFileLocation(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_StandardsXmlFileLocation_IsBase(true);
        QString _ret = vkpartsreadwritepart->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPartsReadWritePart*)self)->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnStandardsXmlFileLocation(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_StandardsXmlFileLocation_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_StandardsXmlFileLocation_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadWritePart_LoadStandardsXmlFile(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->loadStandardsXmlFile();
    } else {
        ((VirtualKPartsReadWritePart*)self)->loadStandardsXmlFile();
    }
}

// Base class handler implementation
void KParts__ReadWritePart_QBaseLoadStandardsXmlFile(KParts__ReadWritePart* self) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_LoadStandardsXmlFile_IsBase(true);
        vkpartsreadwritepart->loadStandardsXmlFile();
    } else {
        ((VirtualKPartsReadWritePart*)self)->loadStandardsXmlFile();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadWritePart_OnLoadStandardsXmlFile(KParts__ReadWritePart* self, intptr_t slot) {
    auto* vkpartsreadwritepart = dynamic_cast<VirtualKPartsReadWritePart*>(self);
    if (vkpartsreadwritepart && vkpartsreadwritepart->isVirtualKPartsReadWritePart) {
        vkpartsreadwritepart->setKParts__ReadWritePart_LoadStandardsXmlFile_Callback(reinterpret_cast<VirtualKPartsReadWritePart::KParts__ReadWritePart_LoadStandardsXmlFile_Callback>(slot));
    }
}

void KParts__ReadWritePart_Delete(KParts__ReadWritePart* self) {
    delete self;
}
