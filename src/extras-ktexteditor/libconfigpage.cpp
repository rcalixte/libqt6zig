#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__ConfigPage
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <configpage.h>
#include "libconfigpage.h"
#include "libconfigpage.hxx"

KTextEditor__ConfigPage* KTextEditor__ConfigPage_new(QWidget* parent) {
    return new VirtualKTextEditorConfigPage(parent);
}

QMetaObject* KTextEditor__ConfigPage_MetaObject(const KTextEditor__ConfigPage* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEditor__ConfigPage_Metacast(KTextEditor__ConfigPage* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEditor__ConfigPage_Metacall(KTextEditor__ConfigPage* self, int param1, int param2, void** param3) {
    auto* vktexteditor__configpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditor__configpage && vktexteditor__configpage->isVirtualKTextEditorConfigPage) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTextEditor__ConfigPage_Tr(const char* s) {
    QString _ret = KTextEditor::ConfigPage::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__ConfigPage_Name(const KTextEditor__ConfigPage* self) {
    auto* vktexteditor__configpage = dynamic_cast<const VirtualKTextEditorConfigPage*>(self);
    if (vktexteditor__configpage && vktexteditor__configpage->isVirtualKTextEditorConfigPage) {
        QString _ret = vktexteditor__configpage->name();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKTextEditorConfigPage*)self)->name();
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

libqt_string KTextEditor__ConfigPage_FullName(const KTextEditor__ConfigPage* self) {
    auto* vktexteditor__configpage = dynamic_cast<const VirtualKTextEditorConfigPage*>(self);
    if (vktexteditor__configpage && vktexteditor__configpage->isVirtualKTextEditorConfigPage) {
        QString _ret = self->fullName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKTextEditorConfigPage*)self)->fullName();
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

QIcon* KTextEditor__ConfigPage_Icon(const KTextEditor__ConfigPage* self) {
    auto* vktexteditor__configpage = dynamic_cast<const VirtualKTextEditorConfigPage*>(self);
    if (vktexteditor__configpage && vktexteditor__configpage->isVirtualKTextEditorConfigPage) {
        return new QIcon(self->icon());
    } else {
        return new QIcon(((VirtualKTextEditorConfigPage*)self)->icon());
    }
}

void KTextEditor__ConfigPage_Apply(KTextEditor__ConfigPage* self) {
    auto* vktexteditor__configpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditor__configpage && vktexteditor__configpage->isVirtualKTextEditorConfigPage) {
        vktexteditor__configpage->apply();
    } else {
        ((VirtualKTextEditorConfigPage*)self)->apply();
    }
}

void KTextEditor__ConfigPage_Reset(KTextEditor__ConfigPage* self) {
    auto* vktexteditor__configpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditor__configpage && vktexteditor__configpage->isVirtualKTextEditorConfigPage) {
        vktexteditor__configpage->reset();
    } else {
        ((VirtualKTextEditorConfigPage*)self)->reset();
    }
}

void KTextEditor__ConfigPage_Defaults(KTextEditor__ConfigPage* self) {
    auto* vktexteditor__configpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditor__configpage && vktexteditor__configpage->isVirtualKTextEditorConfigPage) {
        vktexteditor__configpage->defaults();
    } else {
        ((VirtualKTextEditorConfigPage*)self)->defaults();
    }
}

void KTextEditor__ConfigPage_Changed(KTextEditor__ConfigPage* self) {
    self->changed();
}

void KTextEditor__ConfigPage_Connect_Changed(KTextEditor__ConfigPage* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__ConfigPage*) = reinterpret_cast<void (*)(KTextEditor__ConfigPage*)>(slot);
    KTextEditor::ConfigPage::connect(self, &KTextEditor::ConfigPage::changed, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KTextEditor__ConfigPage_Tr2(const char* s, const char* c) {
    QString _ret = KTextEditor::ConfigPage::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__ConfigPage_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTextEditor::ConfigPage::tr(s, c, static_cast<int>(n));
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
int KTextEditor__ConfigPage_QBaseMetacall(KTextEditor__ConfigPage* self, int param1, int param2, void** param3) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Metacall_IsBase(true);
        return vktexteditorconfigpage->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KTextEditor::ConfigPage::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMetacall(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Metacall_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KTextEditor__ConfigPage_QBaseName(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Name_IsBase(true);
        QString _ret = vktexteditorconfigpage->name();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKTextEditorConfigPage*)self)->name();
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
void KTextEditor__ConfigPage_OnName(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Name_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Name_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KTextEditor__ConfigPage_QBaseFullName(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_FullName_IsBase(true);
        QString _ret = vktexteditorconfigpage->fullName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KTextEditor::ConfigPage::fullName();
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
void KTextEditor__ConfigPage_OnFullName(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_FullName_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_FullName_Callback>(slot));
    }
}

// Base class handler implementation
QIcon* KTextEditor__ConfigPage_QBaseIcon(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Icon_IsBase(true);
        return new QIcon(vktexteditorconfigpage->icon());
    } else {
        return new QIcon(((VirtualKTextEditorConfigPage*)self)->icon());
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnIcon(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Icon_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Icon_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseApply(KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Apply_IsBase(true);
        vktexteditorconfigpage->apply();
    } else {
        ((VirtualKTextEditorConfigPage*)self)->apply();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnApply(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Apply_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Apply_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseReset(KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Reset_IsBase(true);
        vktexteditorconfigpage->reset();
    } else {
        ((VirtualKTextEditorConfigPage*)self)->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnReset(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Reset_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Reset_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseDefaults(KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Defaults_IsBase(true);
        vktexteditorconfigpage->defaults();
    } else {
        ((VirtualKTextEditorConfigPage*)self)->defaults();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnDefaults(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Defaults_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Defaults_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__ConfigPage_DevType(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->devType();
    } else {
        return self->KTextEditor::ConfigPage::devType();
    }
}

// Base class handler implementation
int KTextEditor__ConfigPage_QBaseDevType(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_DevType_IsBase(true);
        return vktexteditorconfigpage->devType();
    } else {
        return self->KTextEditor::ConfigPage::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnDevType(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_DevType_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_SetVisible(KTextEditor__ConfigPage* self, bool visible) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setVisible(visible);
    } else {
        self->KTextEditor::ConfigPage::setVisible(visible);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseSetVisible(KTextEditor__ConfigPage* self, bool visible) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_SetVisible_IsBase(true);
        vktexteditorconfigpage->setVisible(visible);
    } else {
        self->KTextEditor::ConfigPage::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnSetVisible(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_SetVisible_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KTextEditor__ConfigPage_SizeHint(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return new QSize(vktexteditorconfigpage->sizeHint());
    } else {
        return new QSize(((VirtualKTextEditorConfigPage*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KTextEditor__ConfigPage_QBaseSizeHint(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_SizeHint_IsBase(true);
        return new QSize(vktexteditorconfigpage->sizeHint());
    } else {
        return new QSize(((VirtualKTextEditorConfigPage*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnSizeHint(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_SizeHint_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KTextEditor__ConfigPage_MinimumSizeHint(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return new QSize(vktexteditorconfigpage->minimumSizeHint());
    } else {
        return new QSize(((VirtualKTextEditorConfigPage*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KTextEditor__ConfigPage_QBaseMinimumSizeHint(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_MinimumSizeHint_IsBase(true);
        return new QSize(vktexteditorconfigpage->minimumSizeHint());
    } else {
        return new QSize(((VirtualKTextEditorConfigPage*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMinimumSizeHint(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_MinimumSizeHint_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__ConfigPage_HeightForWidth(const KTextEditor__ConfigPage* self, int param1) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KTextEditor::ConfigPage::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KTextEditor__ConfigPage_QBaseHeightForWidth(const KTextEditor__ConfigPage* self, int param1) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_HeightForWidth_IsBase(true);
        return vktexteditorconfigpage->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KTextEditor::ConfigPage::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnHeightForWidth(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_HeightForWidth_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__ConfigPage_HasHeightForWidth(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->hasHeightForWidth();
    } else {
        return self->KTextEditor::ConfigPage::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KTextEditor__ConfigPage_QBaseHasHeightForWidth(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_HasHeightForWidth_IsBase(true);
        return vktexteditorconfigpage->hasHeightForWidth();
    } else {
        return self->KTextEditor::ConfigPage::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnHasHeightForWidth(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_HasHeightForWidth_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KTextEditor__ConfigPage_PaintEngine(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->paintEngine();
    } else {
        return self->KTextEditor::ConfigPage::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KTextEditor__ConfigPage_QBasePaintEngine(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_PaintEngine_IsBase(true);
        return vktexteditorconfigpage->paintEngine();
    } else {
        return self->KTextEditor::ConfigPage::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnPaintEngine(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_PaintEngine_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__ConfigPage_Event(KTextEditor__ConfigPage* self, QEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->event(event);
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->event(event);
    }
}

// Base class handler implementation
bool KTextEditor__ConfigPage_QBaseEvent(KTextEditor__ConfigPage* self, QEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Event_IsBase(true);
        return vktexteditorconfigpage->event(event);
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Event_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_MousePressEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->mousePressEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseMousePressEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_MousePressEvent_IsBase(true);
        vktexteditorconfigpage->mousePressEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMousePressEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_MousePressEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_MouseReleaseEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->mouseReleaseEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseMouseReleaseEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_MouseReleaseEvent_IsBase(true);
        vktexteditorconfigpage->mouseReleaseEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMouseReleaseEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_MouseDoubleClickEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseMouseDoubleClickEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_MouseDoubleClickEvent_IsBase(true);
        vktexteditorconfigpage->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMouseDoubleClickEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_MouseMoveEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->mouseMoveEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseMouseMoveEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_MouseMoveEvent_IsBase(true);
        vktexteditorconfigpage->mouseMoveEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMouseMoveEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_MouseMoveEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_WheelEvent(KTextEditor__ConfigPage* self, QWheelEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->wheelEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseWheelEvent(KTextEditor__ConfigPage* self, QWheelEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_WheelEvent_IsBase(true);
        vktexteditorconfigpage->wheelEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnWheelEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_WheelEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_KeyPressEvent(KTextEditor__ConfigPage* self, QKeyEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->keyPressEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseKeyPressEvent(KTextEditor__ConfigPage* self, QKeyEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_KeyPressEvent_IsBase(true);
        vktexteditorconfigpage->keyPressEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnKeyPressEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_KeyPressEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_KeyReleaseEvent(KTextEditor__ConfigPage* self, QKeyEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->keyReleaseEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseKeyReleaseEvent(KTextEditor__ConfigPage* self, QKeyEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_KeyReleaseEvent_IsBase(true);
        vktexteditorconfigpage->keyReleaseEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnKeyReleaseEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_FocusInEvent(KTextEditor__ConfigPage* self, QFocusEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->focusInEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseFocusInEvent(KTextEditor__ConfigPage* self, QFocusEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_FocusInEvent_IsBase(true);
        vktexteditorconfigpage->focusInEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnFocusInEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_FocusInEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_FocusOutEvent(KTextEditor__ConfigPage* self, QFocusEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->focusOutEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseFocusOutEvent(KTextEditor__ConfigPage* self, QFocusEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_FocusOutEvent_IsBase(true);
        vktexteditorconfigpage->focusOutEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnFocusOutEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_FocusOutEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_EnterEvent(KTextEditor__ConfigPage* self, QEnterEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->enterEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseEnterEvent(KTextEditor__ConfigPage* self, QEnterEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_EnterEvent_IsBase(true);
        vktexteditorconfigpage->enterEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnEnterEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_EnterEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_LeaveEvent(KTextEditor__ConfigPage* self, QEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->leaveEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseLeaveEvent(KTextEditor__ConfigPage* self, QEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_LeaveEvent_IsBase(true);
        vktexteditorconfigpage->leaveEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnLeaveEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_LeaveEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_PaintEvent(KTextEditor__ConfigPage* self, QPaintEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->paintEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBasePaintEvent(KTextEditor__ConfigPage* self, QPaintEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_PaintEvent_IsBase(true);
        vktexteditorconfigpage->paintEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnPaintEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_PaintEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_MoveEvent(KTextEditor__ConfigPage* self, QMoveEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->moveEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseMoveEvent(KTextEditor__ConfigPage* self, QMoveEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_MoveEvent_IsBase(true);
        vktexteditorconfigpage->moveEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMoveEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_MoveEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_ResizeEvent(KTextEditor__ConfigPage* self, QResizeEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->resizeEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseResizeEvent(KTextEditor__ConfigPage* self, QResizeEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_ResizeEvent_IsBase(true);
        vktexteditorconfigpage->resizeEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnResizeEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_ResizeEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_CloseEvent(KTextEditor__ConfigPage* self, QCloseEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->closeEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseCloseEvent(KTextEditor__ConfigPage* self, QCloseEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_CloseEvent_IsBase(true);
        vktexteditorconfigpage->closeEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnCloseEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_CloseEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_ContextMenuEvent(KTextEditor__ConfigPage* self, QContextMenuEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->contextMenuEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseContextMenuEvent(KTextEditor__ConfigPage* self, QContextMenuEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_ContextMenuEvent_IsBase(true);
        vktexteditorconfigpage->contextMenuEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnContextMenuEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_ContextMenuEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_TabletEvent(KTextEditor__ConfigPage* self, QTabletEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->tabletEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseTabletEvent(KTextEditor__ConfigPage* self, QTabletEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_TabletEvent_IsBase(true);
        vktexteditorconfigpage->tabletEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnTabletEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_TabletEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_ActionEvent(KTextEditor__ConfigPage* self, QActionEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->actionEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseActionEvent(KTextEditor__ConfigPage* self, QActionEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_ActionEvent_IsBase(true);
        vktexteditorconfigpage->actionEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnActionEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_ActionEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_DragEnterEvent(KTextEditor__ConfigPage* self, QDragEnterEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->dragEnterEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseDragEnterEvent(KTextEditor__ConfigPage* self, QDragEnterEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_DragEnterEvent_IsBase(true);
        vktexteditorconfigpage->dragEnterEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnDragEnterEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_DragEnterEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_DragMoveEvent(KTextEditor__ConfigPage* self, QDragMoveEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->dragMoveEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseDragMoveEvent(KTextEditor__ConfigPage* self, QDragMoveEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_DragMoveEvent_IsBase(true);
        vktexteditorconfigpage->dragMoveEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnDragMoveEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_DragMoveEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_DragLeaveEvent(KTextEditor__ConfigPage* self, QDragLeaveEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->dragLeaveEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseDragLeaveEvent(KTextEditor__ConfigPage* self, QDragLeaveEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_DragLeaveEvent_IsBase(true);
        vktexteditorconfigpage->dragLeaveEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnDragLeaveEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_DragLeaveEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_DropEvent(KTextEditor__ConfigPage* self, QDropEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->dropEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseDropEvent(KTextEditor__ConfigPage* self, QDropEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_DropEvent_IsBase(true);
        vktexteditorconfigpage->dropEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnDropEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_DropEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_ShowEvent(KTextEditor__ConfigPage* self, QShowEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->showEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseShowEvent(KTextEditor__ConfigPage* self, QShowEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_ShowEvent_IsBase(true);
        vktexteditorconfigpage->showEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnShowEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_ShowEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_HideEvent(KTextEditor__ConfigPage* self, QHideEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->hideEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseHideEvent(KTextEditor__ConfigPage* self, QHideEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_HideEvent_IsBase(true);
        vktexteditorconfigpage->hideEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnHideEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_HideEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__ConfigPage_NativeEvent(KTextEditor__ConfigPage* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KTextEditor__ConfigPage_QBaseNativeEvent(KTextEditor__ConfigPage* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_NativeEvent_IsBase(true);
        return vktexteditorconfigpage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnNativeEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_NativeEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_ChangeEvent(KTextEditor__ConfigPage* self, QEvent* param1) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->changeEvent(param1);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseChangeEvent(KTextEditor__ConfigPage* self, QEvent* param1) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_ChangeEvent_IsBase(true);
        vktexteditorconfigpage->changeEvent(param1);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnChangeEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_ChangeEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__ConfigPage_Metric(const KTextEditor__ConfigPage* self, int param1) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KTextEditor__ConfigPage_QBaseMetric(const KTextEditor__ConfigPage* self, int param1) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Metric_IsBase(true);
        return vktexteditorconfigpage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMetric(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Metric_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_InitPainter(const KTextEditor__ConfigPage* self, QPainter* painter) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->initPainter(painter);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseInitPainter(const KTextEditor__ConfigPage* self, QPainter* painter) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_InitPainter_IsBase(true);
        vktexteditorconfigpage->initPainter(painter);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnInitPainter(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_InitPainter_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KTextEditor__ConfigPage_Redirected(const KTextEditor__ConfigPage* self, QPoint* offset) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->redirected(offset);
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KTextEditor__ConfigPage_QBaseRedirected(const KTextEditor__ConfigPage* self, QPoint* offset) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Redirected_IsBase(true);
        return vktexteditorconfigpage->redirected(offset);
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnRedirected(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Redirected_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KTextEditor__ConfigPage_SharedPainter(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->sharedPainter();
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KTextEditor__ConfigPage_QBaseSharedPainter(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_SharedPainter_IsBase(true);
        return vktexteditorconfigpage->sharedPainter();
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnSharedPainter(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_SharedPainter_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_InputMethodEvent(KTextEditor__ConfigPage* self, QInputMethodEvent* param1) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->inputMethodEvent(param1);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseInputMethodEvent(KTextEditor__ConfigPage* self, QInputMethodEvent* param1) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_InputMethodEvent_IsBase(true);
        vktexteditorconfigpage->inputMethodEvent(param1);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnInputMethodEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_InputMethodEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KTextEditor__ConfigPage_InputMethodQuery(const KTextEditor__ConfigPage* self, int param1) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return new QVariant(vktexteditorconfigpage->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKTextEditorConfigPage*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KTextEditor__ConfigPage_QBaseInputMethodQuery(const KTextEditor__ConfigPage* self, int param1) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_InputMethodQuery_IsBase(true);
        return new QVariant(vktexteditorconfigpage->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKTextEditorConfigPage*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnInputMethodQuery(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_InputMethodQuery_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__ConfigPage_FocusNextPrevChild(KTextEditor__ConfigPage* self, bool next) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->focusNextPrevChild(next);
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KTextEditor__ConfigPage_QBaseFocusNextPrevChild(KTextEditor__ConfigPage* self, bool next) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_FocusNextPrevChild_IsBase(true);
        return vktexteditorconfigpage->focusNextPrevChild(next);
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnFocusNextPrevChild(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__ConfigPage_EventFilter(KTextEditor__ConfigPage* self, QObject* watched, QEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->eventFilter(watched, event);
    } else {
        return self->KTextEditor::ConfigPage::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KTextEditor__ConfigPage_QBaseEventFilter(KTextEditor__ConfigPage* self, QObject* watched, QEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_EventFilter_IsBase(true);
        return vktexteditorconfigpage->eventFilter(watched, event);
    } else {
        return self->KTextEditor::ConfigPage::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnEventFilter(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_EventFilter_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_TimerEvent(KTextEditor__ConfigPage* self, QTimerEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->timerEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseTimerEvent(KTextEditor__ConfigPage* self, QTimerEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_TimerEvent_IsBase(true);
        vktexteditorconfigpage->timerEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnTimerEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_TimerEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_ChildEvent(KTextEditor__ConfigPage* self, QChildEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->childEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseChildEvent(KTextEditor__ConfigPage* self, QChildEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_ChildEvent_IsBase(true);
        vktexteditorconfigpage->childEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnChildEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_ChildEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_CustomEvent(KTextEditor__ConfigPage* self, QEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->customEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseCustomEvent(KTextEditor__ConfigPage* self, QEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_CustomEvent_IsBase(true);
        vktexteditorconfigpage->customEvent(event);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnCustomEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_CustomEvent_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_ConnectNotify(KTextEditor__ConfigPage* self, const QMetaMethod* signal) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseConnectNotify(KTextEditor__ConfigPage* self, const QMetaMethod* signal) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_ConnectNotify_IsBase(true);
        vktexteditorconfigpage->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnConnectNotify(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_ConnectNotify_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_DisconnectNotify(KTextEditor__ConfigPage* self, const QMetaMethod* signal) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseDisconnectNotify(KTextEditor__ConfigPage* self, const QMetaMethod* signal) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_DisconnectNotify_IsBase(true);
        vktexteditorconfigpage->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorConfigPage*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnDisconnectNotify(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_DisconnectNotify_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_UpdateMicroFocus(KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->updateMicroFocus();
    } else {
        ((VirtualKTextEditorConfigPage*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseUpdateMicroFocus(KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_UpdateMicroFocus_IsBase(true);
        vktexteditorconfigpage->updateMicroFocus();
    } else {
        ((VirtualKTextEditorConfigPage*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnUpdateMicroFocus(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_Create(KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->create();
    } else {
        ((VirtualKTextEditorConfigPage*)self)->create();
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseCreate(KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Create_IsBase(true);
        vktexteditorconfigpage->create();
    } else {
        ((VirtualKTextEditorConfigPage*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnCreate(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Create_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__ConfigPage_Destroy(KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->destroy();
    } else {
        ((VirtualKTextEditorConfigPage*)self)->destroy();
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_QBaseDestroy(KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Destroy_IsBase(true);
        vktexteditorconfigpage->destroy();
    } else {
        ((VirtualKTextEditorConfigPage*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnDestroy(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Destroy_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__ConfigPage_FocusNextChild(KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->focusNextChild();
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KTextEditor__ConfigPage_QBaseFocusNextChild(KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_FocusNextChild_IsBase(true);
        return vktexteditorconfigpage->focusNextChild();
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnFocusNextChild(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_FocusNextChild_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__ConfigPage_FocusPreviousChild(KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->focusPreviousChild();
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KTextEditor__ConfigPage_QBaseFocusPreviousChild(KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_FocusPreviousChild_IsBase(true);
        return vktexteditorconfigpage->focusPreviousChild();
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnFocusPreviousChild(KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_FocusPreviousChild_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTextEditor__ConfigPage_Sender(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->sender();
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTextEditor__ConfigPage_QBaseSender(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Sender_IsBase(true);
        return vktexteditorconfigpage->sender();
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnSender(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Sender_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__ConfigPage_SenderSignalIndex(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTextEditor__ConfigPage_QBaseSenderSignalIndex(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_SenderSignalIndex_IsBase(true);
        return vktexteditorconfigpage->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnSenderSignalIndex(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__ConfigPage_Receivers(const KTextEditor__ConfigPage* self, const char* signal) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->receivers(signal);
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTextEditor__ConfigPage_QBaseReceivers(const KTextEditor__ConfigPage* self, const char* signal) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Receivers_IsBase(true);
        return vktexteditorconfigpage->receivers(signal);
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnReceivers(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_Receivers_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__ConfigPage_IsSignalConnected(const KTextEditor__ConfigPage* self, const QMetaMethod* signal) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTextEditor__ConfigPage_QBaseIsSignalConnected(const KTextEditor__ConfigPage* self, const QMetaMethod* signal) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_IsSignalConnected_IsBase(true);
        return vktexteditorconfigpage->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnIsSignalConnected(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_IsSignalConnected_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KTextEditor__ConfigPage_GetDecodedMetricF(const KTextEditor__ConfigPage* self, int metricA, int metricB) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        return vktexteditorconfigpage->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KTextEditor__ConfigPage_QBaseGetDecodedMetricF(const KTextEditor__ConfigPage* self, int metricA, int metricB) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_GetDecodedMetricF_IsBase(true);
        return vktexteditorconfigpage->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKTextEditorConfigPage*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnGetDecodedMetricF(const KTextEditor__ConfigPage* self, intptr_t slot) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage && vktexteditorconfigpage->isVirtualKTextEditorConfigPage) {
        vktexteditorconfigpage->setKTextEditor__ConfigPage_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_GetDecodedMetricF_Callback>(slot));
    }
}

void KTextEditor__ConfigPage_Delete(KTextEditor__ConfigPage* self) {
    delete self;
}
