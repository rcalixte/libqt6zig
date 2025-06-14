#include <QAbstractItemModel>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QComboBox>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFontComboBox>
#include <QHideEvent>
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
#include <QStyleOptionComboBox>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qfontcombobox.h>
#include "libqfontcombobox.h"
#include "libqfontcombobox.hxx"

QFontComboBox* QFontComboBox_new(QWidget* parent) {
    return new VirtualQFontComboBox(parent);
}

QFontComboBox* QFontComboBox_new2() {
    return new VirtualQFontComboBox();
}

QMetaObject* QFontComboBox_MetaObject(const QFontComboBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFontComboBox_Metacast(QFontComboBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFontComboBox_Metacall(QFontComboBox* self, int param1, int param2, void** param3) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQFontComboBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFontComboBox_OnMetacall(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Metacall_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFontComboBox_QBaseMetacall(QFontComboBox* self, int param1, int param2, void** param3) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Metacall_IsBase(true);
        return vqfontcombobox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQFontComboBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QFontComboBox_Tr(const char* s) {
    QString _ret = QFontComboBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFontComboBox_SetWritingSystem(QFontComboBox* self, int writingSystem) {
    self->setWritingSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
}

int QFontComboBox_WritingSystem(const QFontComboBox* self) {
    return static_cast<int>(self->writingSystem());
}

void QFontComboBox_SetFontFilters(QFontComboBox* self, int filters) {
    self->setFontFilters(static_cast<QFontComboBox::FontFilters>(filters));
}

int QFontComboBox_FontFilters(const QFontComboBox* self) {
    return static_cast<int>(self->fontFilters());
}

QFont* QFontComboBox_CurrentFont(const QFontComboBox* self) {
    return new QFont(self->currentFont());
}

void QFontComboBox_SetSampleTextForSystem(QFontComboBox* self, int writingSystem, const libqt_string sampleText) {
    QString sampleText_QString = QString::fromUtf8(sampleText.data, sampleText.len);
    self->setSampleTextForSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem), sampleText_QString);
}

libqt_string QFontComboBox_SampleTextForSystem(const QFontComboBox* self, int writingSystem) {
    QString _ret = self->sampleTextForSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFontComboBox_SetSampleTextForFont(QFontComboBox* self, const libqt_string fontFamily, const libqt_string sampleText) {
    QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
    QString sampleText_QString = QString::fromUtf8(sampleText.data, sampleText.len);
    self->setSampleTextForFont(fontFamily_QString, sampleText_QString);
}

libqt_string QFontComboBox_SampleTextForFont(const QFontComboBox* self, const libqt_string fontFamily) {
    QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
    QString _ret = self->sampleTextForFont(fontFamily_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFontComboBox_SetDisplayFont(QFontComboBox* self, const libqt_string fontFamily, const QFont* font) {
    QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
    self->setDisplayFont(fontFamily_QString, *font);
}

void QFontComboBox_SetCurrentFont(QFontComboBox* self, const QFont* f) {
    self->setCurrentFont(*f);
}

void QFontComboBox_CurrentFontChanged(QFontComboBox* self, const QFont* f) {
    self->currentFontChanged(*f);
}

void QFontComboBox_Connect_CurrentFontChanged(QFontComboBox* self, intptr_t slot) {
    void (*slotFunc)(QFontComboBox*, QFont*) = reinterpret_cast<void (*)(QFontComboBox*, QFont*)>(slot);
    QFontComboBox::connect(self, &QFontComboBox::currentFontChanged, [self, slotFunc](const QFont& f) {
        const QFont& f_ret = f;
        // Cast returned reference into pointer
        QFont* sigval1 = const_cast<QFont*>(&f_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QFontComboBox_Tr2(const char* s, const char* c) {
    QString _ret = QFontComboBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFontComboBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = QFontComboBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QSize* QFontComboBox_SizeHint(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return new QSize(vqfontcombobox->sizeHint());
    } else {
        return new QSize(((VirtualQFontComboBox*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QFontComboBox_QBaseSizeHint(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_SizeHint_IsBase(true);
        return new QSize(vqfontcombobox->sizeHint());
    } else {
        return new QSize(((VirtualQFontComboBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSizeHint(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_SizeHint_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_Event(QFontComboBox* self, QEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->event(e);
    } else {
        return ((VirtualQFontComboBox*)self)->event(e);
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseEvent(QFontComboBox* self, QEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Event_IsBase(true);
        return vqfontcombobox->event(e);
    } else {
        return ((VirtualQFontComboBox*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Event_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_SetModel(QFontComboBox* self, QAbstractItemModel* model) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setModel(model);
    } else {
        self->QFontComboBox::setModel(model);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseSetModel(QFontComboBox* self, QAbstractItemModel* model) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_SetModel_IsBase(true);
        vqfontcombobox->setModel(model);
    } else {
        self->QFontComboBox::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSetModel(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_SetModel_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFontComboBox_MinimumSizeHint(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return new QSize(vqfontcombobox->minimumSizeHint());
    } else {
        return new QSize(((VirtualQFontComboBox*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QFontComboBox_QBaseMinimumSizeHint(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_MinimumSizeHint_IsBase(true);
        return new QSize(vqfontcombobox->minimumSizeHint());
    } else {
        return new QSize(((VirtualQFontComboBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMinimumSizeHint(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ShowPopup(QFontComboBox* self) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->showPopup();
    } else {
        self->QFontComboBox::showPopup();
    }
}

// Base class handler implementation
void QFontComboBox_QBaseShowPopup(QFontComboBox* self) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ShowPopup_IsBase(true);
        vqfontcombobox->showPopup();
    } else {
        self->QFontComboBox::showPopup();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnShowPopup(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ShowPopup_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ShowPopup_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_HidePopup(QFontComboBox* self) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->hidePopup();
    } else {
        self->QFontComboBox::hidePopup();
    }
}

// Base class handler implementation
void QFontComboBox_QBaseHidePopup(QFontComboBox* self) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_HidePopup_IsBase(true);
        vqfontcombobox->hidePopup();
    } else {
        self->QFontComboBox::hidePopup();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnHidePopup(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_HidePopup_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_HidePopup_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QFontComboBox_InputMethodQuery(const QFontComboBox* self, int param1) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return new QVariant(vqfontcombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQFontComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QFontComboBox_QBaseInputMethodQuery(const QFontComboBox* self, int param1) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_InputMethodQuery_IsBase(true);
        return new QVariant(vqfontcombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQFontComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnInputMethodQuery(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_FocusInEvent(QFontComboBox* self, QFocusEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->focusInEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseFocusInEvent(QFontComboBox* self, QFocusEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_FocusInEvent_IsBase(true);
        vqfontcombobox->focusInEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnFocusInEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_FocusInEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_FocusOutEvent(QFontComboBox* self, QFocusEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->focusOutEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseFocusOutEvent(QFontComboBox* self, QFocusEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_FocusOutEvent_IsBase(true);
        vqfontcombobox->focusOutEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnFocusOutEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ChangeEvent(QFontComboBox* self, QEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->changeEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseChangeEvent(QFontComboBox* self, QEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ChangeEvent_IsBase(true);
        vqfontcombobox->changeEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnChangeEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ChangeEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ResizeEvent(QFontComboBox* self, QResizeEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->resizeEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseResizeEvent(QFontComboBox* self, QResizeEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ResizeEvent_IsBase(true);
        vqfontcombobox->resizeEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnResizeEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ResizeEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_PaintEvent(QFontComboBox* self, QPaintEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->paintEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBasePaintEvent(QFontComboBox* self, QPaintEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_PaintEvent_IsBase(true);
        vqfontcombobox->paintEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnPaintEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_PaintEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ShowEvent(QFontComboBox* self, QShowEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->showEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->showEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseShowEvent(QFontComboBox* self, QShowEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ShowEvent_IsBase(true);
        vqfontcombobox->showEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnShowEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ShowEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_HideEvent(QFontComboBox* self, QHideEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->hideEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->hideEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseHideEvent(QFontComboBox* self, QHideEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_HideEvent_IsBase(true);
        vqfontcombobox->hideEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->hideEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnHideEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_HideEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_MousePressEvent(QFontComboBox* self, QMouseEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->mousePressEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseMousePressEvent(QFontComboBox* self, QMouseEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_MousePressEvent_IsBase(true);
        vqfontcombobox->mousePressEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMousePressEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_MousePressEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_MouseReleaseEvent(QFontComboBox* self, QMouseEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseMouseReleaseEvent(QFontComboBox* self, QMouseEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_MouseReleaseEvent_IsBase(true);
        vqfontcombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMouseReleaseEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_KeyPressEvent(QFontComboBox* self, QKeyEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->keyPressEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseKeyPressEvent(QFontComboBox* self, QKeyEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_KeyPressEvent_IsBase(true);
        vqfontcombobox->keyPressEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnKeyPressEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_KeyReleaseEvent(QFontComboBox* self, QKeyEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->keyReleaseEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseKeyReleaseEvent(QFontComboBox* self, QKeyEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_KeyReleaseEvent_IsBase(true);
        vqfontcombobox->keyReleaseEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnKeyReleaseEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_WheelEvent(QFontComboBox* self, QWheelEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->wheelEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseWheelEvent(QFontComboBox* self, QWheelEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_WheelEvent_IsBase(true);
        vqfontcombobox->wheelEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnWheelEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_WheelEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ContextMenuEvent(QFontComboBox* self, QContextMenuEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->contextMenuEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseContextMenuEvent(QFontComboBox* self, QContextMenuEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ContextMenuEvent_IsBase(true);
        vqfontcombobox->contextMenuEvent(e);
    } else {
        ((VirtualQFontComboBox*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnContextMenuEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_InputMethodEvent(QFontComboBox* self, QInputMethodEvent* param1) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->inputMethodEvent(param1);
    } else {
        ((VirtualQFontComboBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseInputMethodEvent(QFontComboBox* self, QInputMethodEvent* param1) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_InputMethodEvent_IsBase(true);
        vqfontcombobox->inputMethodEvent(param1);
    } else {
        ((VirtualQFontComboBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnInputMethodEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_InputMethodEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_InitStyleOption(const QFontComboBox* self, QStyleOptionComboBox* option) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->initStyleOption(option);
    } else {
        ((VirtualQFontComboBox*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseInitStyleOption(const QFontComboBox* self, QStyleOptionComboBox* option) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_InitStyleOption_IsBase(true);
        vqfontcombobox->initStyleOption(option);
    } else {
        ((VirtualQFontComboBox*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnInitStyleOption(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_InitStyleOption_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontComboBox_DevType(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->devType();
    } else {
        return self->QFontComboBox::devType();
    }
}

// Base class handler implementation
int QFontComboBox_QBaseDevType(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_DevType_IsBase(true);
        return vqfontcombobox->devType();
    } else {
        return self->QFontComboBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDevType(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_DevType_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_SetVisible(QFontComboBox* self, bool visible) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setVisible(visible);
    } else {
        self->QFontComboBox::setVisible(visible);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseSetVisible(QFontComboBox* self, bool visible) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_SetVisible_IsBase(true);
        vqfontcombobox->setVisible(visible);
    } else {
        self->QFontComboBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSetVisible(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_SetVisible_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontComboBox_HeightForWidth(const QFontComboBox* self, int param1) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QFontComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QFontComboBox_QBaseHeightForWidth(const QFontComboBox* self, int param1) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_HeightForWidth_IsBase(true);
        return vqfontcombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QFontComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnHeightForWidth(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_HeightForWidth_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_HasHeightForWidth(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->hasHeightForWidth();
    } else {
        return self->QFontComboBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseHasHeightForWidth(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_HasHeightForWidth_IsBase(true);
        return vqfontcombobox->hasHeightForWidth();
    } else {
        return self->QFontComboBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnHasHeightForWidth(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QFontComboBox_PaintEngine(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->paintEngine();
    } else {
        return self->QFontComboBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QFontComboBox_QBasePaintEngine(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_PaintEngine_IsBase(true);
        return vqfontcombobox->paintEngine();
    } else {
        return self->QFontComboBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnPaintEngine(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_PaintEngine_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_MouseDoubleClickEvent(QFontComboBox* self, QMouseEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseMouseDoubleClickEvent(QFontComboBox* self, QMouseEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_MouseDoubleClickEvent_IsBase(true);
        vqfontcombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMouseDoubleClickEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_MouseMoveEvent(QFontComboBox* self, QMouseEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->mouseMoveEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseMouseMoveEvent(QFontComboBox* self, QMouseEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_MouseMoveEvent_IsBase(true);
        vqfontcombobox->mouseMoveEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMouseMoveEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_EnterEvent(QFontComboBox* self, QEnterEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->enterEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseEnterEvent(QFontComboBox* self, QEnterEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_EnterEvent_IsBase(true);
        vqfontcombobox->enterEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnEnterEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_EnterEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_LeaveEvent(QFontComboBox* self, QEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->leaveEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseLeaveEvent(QFontComboBox* self, QEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_LeaveEvent_IsBase(true);
        vqfontcombobox->leaveEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnLeaveEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_LeaveEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_MoveEvent(QFontComboBox* self, QMoveEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->moveEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseMoveEvent(QFontComboBox* self, QMoveEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_MoveEvent_IsBase(true);
        vqfontcombobox->moveEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMoveEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_MoveEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_CloseEvent(QFontComboBox* self, QCloseEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->closeEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseCloseEvent(QFontComboBox* self, QCloseEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_CloseEvent_IsBase(true);
        vqfontcombobox->closeEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnCloseEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_CloseEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_TabletEvent(QFontComboBox* self, QTabletEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->tabletEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseTabletEvent(QFontComboBox* self, QTabletEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_TabletEvent_IsBase(true);
        vqfontcombobox->tabletEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnTabletEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_TabletEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ActionEvent(QFontComboBox* self, QActionEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->actionEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseActionEvent(QFontComboBox* self, QActionEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ActionEvent_IsBase(true);
        vqfontcombobox->actionEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnActionEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ActionEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_DragEnterEvent(QFontComboBox* self, QDragEnterEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->dragEnterEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseDragEnterEvent(QFontComboBox* self, QDragEnterEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_DragEnterEvent_IsBase(true);
        vqfontcombobox->dragEnterEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDragEnterEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_DragEnterEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_DragMoveEvent(QFontComboBox* self, QDragMoveEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->dragMoveEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseDragMoveEvent(QFontComboBox* self, QDragMoveEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_DragMoveEvent_IsBase(true);
        vqfontcombobox->dragMoveEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDragMoveEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_DragMoveEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_DragLeaveEvent(QFontComboBox* self, QDragLeaveEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->dragLeaveEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseDragLeaveEvent(QFontComboBox* self, QDragLeaveEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_DragLeaveEvent_IsBase(true);
        vqfontcombobox->dragLeaveEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDragLeaveEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_DropEvent(QFontComboBox* self, QDropEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->dropEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseDropEvent(QFontComboBox* self, QDropEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_DropEvent_IsBase(true);
        vqfontcombobox->dropEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDropEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_DropEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_NativeEvent(QFontComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQFontComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseNativeEvent(QFontComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_NativeEvent_IsBase(true);
        return vqfontcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQFontComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnNativeEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_NativeEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontComboBox_Metric(const QFontComboBox* self, int param1) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQFontComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QFontComboBox_QBaseMetric(const QFontComboBox* self, int param1) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Metric_IsBase(true);
        return vqfontcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQFontComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMetric(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Metric_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_InitPainter(const QFontComboBox* self, QPainter* painter) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->initPainter(painter);
    } else {
        ((VirtualQFontComboBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseInitPainter(const QFontComboBox* self, QPainter* painter) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_InitPainter_IsBase(true);
        vqfontcombobox->initPainter(painter);
    } else {
        ((VirtualQFontComboBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnInitPainter(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_InitPainter_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QFontComboBox_Redirected(const QFontComboBox* self, QPoint* offset) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->redirected(offset);
    } else {
        return ((VirtualQFontComboBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QFontComboBox_QBaseRedirected(const QFontComboBox* self, QPoint* offset) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Redirected_IsBase(true);
        return vqfontcombobox->redirected(offset);
    } else {
        return ((VirtualQFontComboBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnRedirected(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Redirected_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QFontComboBox_SharedPainter(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->sharedPainter();
    } else {
        return ((VirtualQFontComboBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QFontComboBox_QBaseSharedPainter(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_SharedPainter_IsBase(true);
        return vqfontcombobox->sharedPainter();
    } else {
        return ((VirtualQFontComboBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSharedPainter(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_SharedPainter_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_FocusNextPrevChild(QFontComboBox* self, bool next) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualQFontComboBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseFocusNextPrevChild(QFontComboBox* self, bool next) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_FocusNextPrevChild_IsBase(true);
        return vqfontcombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualQFontComboBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnFocusNextPrevChild(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_EventFilter(QFontComboBox* self, QObject* watched, QEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->eventFilter(watched, event);
    } else {
        return self->QFontComboBox::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseEventFilter(QFontComboBox* self, QObject* watched, QEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_EventFilter_IsBase(true);
        return vqfontcombobox->eventFilter(watched, event);
    } else {
        return self->QFontComboBox::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnEventFilter(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_EventFilter_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_TimerEvent(QFontComboBox* self, QTimerEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->timerEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseTimerEvent(QFontComboBox* self, QTimerEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_TimerEvent_IsBase(true);
        vqfontcombobox->timerEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnTimerEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_TimerEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ChildEvent(QFontComboBox* self, QChildEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->childEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseChildEvent(QFontComboBox* self, QChildEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ChildEvent_IsBase(true);
        vqfontcombobox->childEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnChildEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ChildEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_CustomEvent(QFontComboBox* self, QEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->customEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseCustomEvent(QFontComboBox* self, QEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_CustomEvent_IsBase(true);
        vqfontcombobox->customEvent(event);
    } else {
        ((VirtualQFontComboBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnCustomEvent(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_CustomEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ConnectNotify(QFontComboBox* self, const QMetaMethod* signal) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->connectNotify(*signal);
    } else {
        ((VirtualQFontComboBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseConnectNotify(QFontComboBox* self, const QMetaMethod* signal) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ConnectNotify_IsBase(true);
        vqfontcombobox->connectNotify(*signal);
    } else {
        ((VirtualQFontComboBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnConnectNotify(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_ConnectNotify_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_DisconnectNotify(QFontComboBox* self, const QMetaMethod* signal) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->disconnectNotify(*signal);
    } else {
        ((VirtualQFontComboBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseDisconnectNotify(QFontComboBox* self, const QMetaMethod* signal) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_DisconnectNotify_IsBase(true);
        vqfontcombobox->disconnectNotify(*signal);
    } else {
        ((VirtualQFontComboBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDisconnectNotify(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_DisconnectNotify_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_UpdateMicroFocus(QFontComboBox* self) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->updateMicroFocus();
    } else {
        ((VirtualQFontComboBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QFontComboBox_QBaseUpdateMicroFocus(QFontComboBox* self) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_UpdateMicroFocus_IsBase(true);
        vqfontcombobox->updateMicroFocus();
    } else {
        ((VirtualQFontComboBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnUpdateMicroFocus(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_Create(QFontComboBox* self) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->create();
    } else {
        ((VirtualQFontComboBox*)self)->create();
    }
}

// Base class handler implementation
void QFontComboBox_QBaseCreate(QFontComboBox* self) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Create_IsBase(true);
        vqfontcombobox->create();
    } else {
        ((VirtualQFontComboBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnCreate(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Create_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_Destroy(QFontComboBox* self) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->destroy();
    } else {
        ((VirtualQFontComboBox*)self)->destroy();
    }
}

// Base class handler implementation
void QFontComboBox_QBaseDestroy(QFontComboBox* self) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Destroy_IsBase(true);
        vqfontcombobox->destroy();
    } else {
        ((VirtualQFontComboBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDestroy(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Destroy_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_FocusNextChild(QFontComboBox* self) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->focusNextChild();
    } else {
        return ((VirtualQFontComboBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseFocusNextChild(QFontComboBox* self) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_FocusNextChild_IsBase(true);
        return vqfontcombobox->focusNextChild();
    } else {
        return ((VirtualQFontComboBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnFocusNextChild(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_FocusNextChild_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_FocusPreviousChild(QFontComboBox* self) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->focusPreviousChild();
    } else {
        return ((VirtualQFontComboBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseFocusPreviousChild(QFontComboBox* self) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_FocusPreviousChild_IsBase(true);
        return vqfontcombobox->focusPreviousChild();
    } else {
        return ((VirtualQFontComboBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnFocusPreviousChild(QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QFontComboBox_Sender(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->sender();
    } else {
        return ((VirtualQFontComboBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* QFontComboBox_QBaseSender(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Sender_IsBase(true);
        return vqfontcombobox->sender();
    } else {
        return ((VirtualQFontComboBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSender(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Sender_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontComboBox_SenderSignalIndex(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->senderSignalIndex();
    } else {
        return ((VirtualQFontComboBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QFontComboBox_QBaseSenderSignalIndex(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_SenderSignalIndex_IsBase(true);
        return vqfontcombobox->senderSignalIndex();
    } else {
        return ((VirtualQFontComboBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSenderSignalIndex(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontComboBox_Receivers(const QFontComboBox* self, const char* signal) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->receivers(signal);
    } else {
        return ((VirtualQFontComboBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QFontComboBox_QBaseReceivers(const QFontComboBox* self, const char* signal) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Receivers_IsBase(true);
        return vqfontcombobox->receivers(signal);
    } else {
        return ((VirtualQFontComboBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnReceivers(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_Receivers_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_IsSignalConnected(const QFontComboBox* self, const QMetaMethod* signal) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        return vqfontcombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualQFontComboBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseIsSignalConnected(const QFontComboBox* self, const QMetaMethod* signal) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_IsSignalConnected_IsBase(true);
        return vqfontcombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualQFontComboBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnIsSignalConnected(const QFontComboBox* self, intptr_t slot) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
        vqfontcombobox->setQFontComboBox_IsSignalConnected_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_IsSignalConnected_Callback>(slot));
    }
}

void QFontComboBox_Delete(QFontComboBox* self) {
    delete self;
}
