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
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
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
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__ConfigView
#include <configview.h>
#include "libconfigview.h"
#include "libconfigview.hxx"

Sonnet__ConfigView* Sonnet__ConfigView_new(QWidget* parent) {
    return new VirtualSonnetConfigView(parent);
}

Sonnet__ConfigView* Sonnet__ConfigView_new2() {
    return new VirtualSonnetConfigView();
}

QMetaObject* Sonnet__ConfigView_MetaObject(const Sonnet__ConfigView* self) {
    return (QMetaObject*)self->metaObject();
}

void* Sonnet__ConfigView_Metacast(Sonnet__ConfigView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Sonnet__ConfigView_Metacall(Sonnet__ConfigView* self, int param1, int param2, void** param3) {
    auto* vsonnet__configview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnet__configview && vsonnet__configview->isVirtualSonnetConfigView) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualSonnetConfigView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string Sonnet__ConfigView_Tr(const char* s) {
    QString _ret = Sonnet::ConfigView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Sonnet__ConfigView_BackgroundCheckingButtonShown(const Sonnet__ConfigView* self) {
    return self->backgroundCheckingButtonShown();
}

bool Sonnet__ConfigView_NoBackendFoundVisible(const Sonnet__ConfigView* self) {
    return self->noBackendFoundVisible();
}

libqt_list /* of libqt_string */ Sonnet__ConfigView_PreferredLanguages(const Sonnet__ConfigView* self) {
    QList<QString> _ret = self->preferredLanguages();
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

libqt_string Sonnet__ConfigView_Language(const Sonnet__ConfigView* self) {
    QString _ret = self->language();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ Sonnet__ConfigView_IgnoreList(const Sonnet__ConfigView* self) {
    QList<QString> _ret = self->ignoreList();
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

void Sonnet__ConfigView_SetNoBackendFoundVisible(Sonnet__ConfigView* self, bool show) {
    self->setNoBackendFoundVisible(show);
}

void Sonnet__ConfigView_SetBackgroundCheckingButtonShown(Sonnet__ConfigView* self, bool backgroundCheckingButtonShown) {
    self->setBackgroundCheckingButtonShown(backgroundCheckingButtonShown);
}

void Sonnet__ConfigView_SetPreferredLanguages(Sonnet__ConfigView* self, const libqt_list /* of libqt_string */ ignoreList) {
    QList<QString> ignoreList_QList;
    ignoreList_QList.reserve(ignoreList.len);
    libqt_string* ignoreList_arr = static_cast<libqt_string*>(ignoreList.data);
    for (size_t i = 0; i < ignoreList.len; ++i) {
        QString ignoreList_arr_i_QString = QString::fromUtf8(ignoreList_arr[i].data, ignoreList_arr[i].len);
        ignoreList_QList.push_back(ignoreList_arr_i_QString);
    }
    self->setPreferredLanguages(ignoreList_QList);
}

void Sonnet__ConfigView_SetLanguage(Sonnet__ConfigView* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->setLanguage(language_QString);
}

void Sonnet__ConfigView_SetIgnoreList(Sonnet__ConfigView* self, const libqt_list /* of libqt_string */ ignoreList) {
    QList<QString> ignoreList_QList;
    ignoreList_QList.reserve(ignoreList.len);
    libqt_string* ignoreList_arr = static_cast<libqt_string*>(ignoreList.data);
    for (size_t i = 0; i < ignoreList.len; ++i) {
        QString ignoreList_arr_i_QString = QString::fromUtf8(ignoreList_arr[i].data, ignoreList_arr[i].len);
        ignoreList_QList.push_back(ignoreList_arr_i_QString);
    }
    self->setIgnoreList(ignoreList_QList);
}

void Sonnet__ConfigView_ConfigChanged(Sonnet__ConfigView* self) {
    self->configChanged();
}

void Sonnet__ConfigView_Connect_ConfigChanged(Sonnet__ConfigView* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__ConfigView*) = reinterpret_cast<void (*)(Sonnet__ConfigView*)>(slot);
    Sonnet::ConfigView::connect(self, &Sonnet::ConfigView::configChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string Sonnet__ConfigView_Tr2(const char* s, const char* c) {
    QString _ret = Sonnet::ConfigView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Sonnet__ConfigView_Tr3(const char* s, const char* c, int n) {
    QString _ret = Sonnet::ConfigView::tr(s, c, static_cast<int>(n));
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
int Sonnet__ConfigView_QBaseMetacall(Sonnet__ConfigView* self, int param1, int param2, void** param3) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Metacall_IsBase(true);
        return vsonnetconfigview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Sonnet::ConfigView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMetacall(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Metacall_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigView_DevType(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->devType();
    } else {
        return self->Sonnet::ConfigView::devType();
    }
}

// Base class handler implementation
int Sonnet__ConfigView_QBaseDevType(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_DevType_IsBase(true);
        return vsonnetconfigview->devType();
    } else {
        return self->Sonnet::ConfigView::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnDevType(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_DevType_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_SetVisible(Sonnet__ConfigView* self, bool visible) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setVisible(visible);
    } else {
        self->Sonnet::ConfigView::setVisible(visible);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseSetVisible(Sonnet__ConfigView* self, bool visible) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_SetVisible_IsBase(true);
        vsonnetconfigview->setVisible(visible);
    } else {
        self->Sonnet::ConfigView::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnSetVisible(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_SetVisible_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* Sonnet__ConfigView_SizeHint(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return new QSize(vsonnetconfigview->sizeHint());
    } else {
        return new QSize(((VirtualSonnetConfigView*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* Sonnet__ConfigView_QBaseSizeHint(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_SizeHint_IsBase(true);
        return new QSize(vsonnetconfigview->sizeHint());
    } else {
        return new QSize(((VirtualSonnetConfigView*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnSizeHint(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_SizeHint_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* Sonnet__ConfigView_MinimumSizeHint(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return new QSize(vsonnetconfigview->minimumSizeHint());
    } else {
        return new QSize(((VirtualSonnetConfigView*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* Sonnet__ConfigView_QBaseMinimumSizeHint(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_MinimumSizeHint_IsBase(true);
        return new QSize(vsonnetconfigview->minimumSizeHint());
    } else {
        return new QSize(((VirtualSonnetConfigView*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMinimumSizeHint(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_MinimumSizeHint_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigView_HeightForWidth(const Sonnet__ConfigView* self, int param1) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->Sonnet::ConfigView::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int Sonnet__ConfigView_QBaseHeightForWidth(const Sonnet__ConfigView* self, int param1) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_HeightForWidth_IsBase(true);
        return vsonnetconfigview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->Sonnet::ConfigView::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnHeightForWidth(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_HeightForWidth_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigView_HasHeightForWidth(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->hasHeightForWidth();
    } else {
        return self->Sonnet::ConfigView::hasHeightForWidth();
    }
}

// Base class handler implementation
bool Sonnet__ConfigView_QBaseHasHeightForWidth(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_HasHeightForWidth_IsBase(true);
        return vsonnetconfigview->hasHeightForWidth();
    } else {
        return self->Sonnet::ConfigView::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnHasHeightForWidth(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_HasHeightForWidth_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* Sonnet__ConfigView_PaintEngine(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->paintEngine();
    } else {
        return self->Sonnet::ConfigView::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* Sonnet__ConfigView_QBasePaintEngine(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_PaintEngine_IsBase(true);
        return vsonnetconfigview->paintEngine();
    } else {
        return self->Sonnet::ConfigView::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnPaintEngine(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_PaintEngine_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigView_Event(Sonnet__ConfigView* self, QEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->event(event);
    } else {
        return ((VirtualSonnetConfigView*)self)->event(event);
    }
}

// Base class handler implementation
bool Sonnet__ConfigView_QBaseEvent(Sonnet__ConfigView* self, QEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Event_IsBase(true);
        return vsonnetconfigview->event(event);
    } else {
        return ((VirtualSonnetConfigView*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Event_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_MousePressEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->mousePressEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseMousePressEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_MousePressEvent_IsBase(true);
        vsonnetconfigview->mousePressEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMousePressEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_MousePressEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_MouseReleaseEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->mouseReleaseEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseMouseReleaseEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_MouseReleaseEvent_IsBase(true);
        vsonnetconfigview->mouseReleaseEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMouseReleaseEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_MouseDoubleClickEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseMouseDoubleClickEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_MouseDoubleClickEvent_IsBase(true);
        vsonnetconfigview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMouseDoubleClickEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_MouseMoveEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->mouseMoveEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseMouseMoveEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_MouseMoveEvent_IsBase(true);
        vsonnetconfigview->mouseMoveEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMouseMoveEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_MouseMoveEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_WheelEvent(Sonnet__ConfigView* self, QWheelEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->wheelEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseWheelEvent(Sonnet__ConfigView* self, QWheelEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_WheelEvent_IsBase(true);
        vsonnetconfigview->wheelEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnWheelEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_WheelEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_KeyPressEvent(Sonnet__ConfigView* self, QKeyEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->keyPressEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseKeyPressEvent(Sonnet__ConfigView* self, QKeyEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_KeyPressEvent_IsBase(true);
        vsonnetconfigview->keyPressEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnKeyPressEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_KeyPressEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_KeyReleaseEvent(Sonnet__ConfigView* self, QKeyEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->keyReleaseEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseKeyReleaseEvent(Sonnet__ConfigView* self, QKeyEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_KeyReleaseEvent_IsBase(true);
        vsonnetconfigview->keyReleaseEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnKeyReleaseEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_FocusInEvent(Sonnet__ConfigView* self, QFocusEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->focusInEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseFocusInEvent(Sonnet__ConfigView* self, QFocusEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_FocusInEvent_IsBase(true);
        vsonnetconfigview->focusInEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnFocusInEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_FocusInEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_FocusOutEvent(Sonnet__ConfigView* self, QFocusEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->focusOutEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseFocusOutEvent(Sonnet__ConfigView* self, QFocusEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_FocusOutEvent_IsBase(true);
        vsonnetconfigview->focusOutEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnFocusOutEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_FocusOutEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_EnterEvent(Sonnet__ConfigView* self, QEnterEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->enterEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseEnterEvent(Sonnet__ConfigView* self, QEnterEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_EnterEvent_IsBase(true);
        vsonnetconfigview->enterEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnEnterEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_EnterEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_LeaveEvent(Sonnet__ConfigView* self, QEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->leaveEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseLeaveEvent(Sonnet__ConfigView* self, QEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_LeaveEvent_IsBase(true);
        vsonnetconfigview->leaveEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnLeaveEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_LeaveEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_PaintEvent(Sonnet__ConfigView* self, QPaintEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->paintEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBasePaintEvent(Sonnet__ConfigView* self, QPaintEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_PaintEvent_IsBase(true);
        vsonnetconfigview->paintEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnPaintEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_PaintEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_MoveEvent(Sonnet__ConfigView* self, QMoveEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->moveEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseMoveEvent(Sonnet__ConfigView* self, QMoveEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_MoveEvent_IsBase(true);
        vsonnetconfigview->moveEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMoveEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_MoveEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_ResizeEvent(Sonnet__ConfigView* self, QResizeEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->resizeEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseResizeEvent(Sonnet__ConfigView* self, QResizeEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_ResizeEvent_IsBase(true);
        vsonnetconfigview->resizeEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnResizeEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_ResizeEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_CloseEvent(Sonnet__ConfigView* self, QCloseEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->closeEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseCloseEvent(Sonnet__ConfigView* self, QCloseEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_CloseEvent_IsBase(true);
        vsonnetconfigview->closeEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnCloseEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_CloseEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_ContextMenuEvent(Sonnet__ConfigView* self, QContextMenuEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->contextMenuEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseContextMenuEvent(Sonnet__ConfigView* self, QContextMenuEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_ContextMenuEvent_IsBase(true);
        vsonnetconfigview->contextMenuEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnContextMenuEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_ContextMenuEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_TabletEvent(Sonnet__ConfigView* self, QTabletEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->tabletEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseTabletEvent(Sonnet__ConfigView* self, QTabletEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_TabletEvent_IsBase(true);
        vsonnetconfigview->tabletEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnTabletEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_TabletEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_ActionEvent(Sonnet__ConfigView* self, QActionEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->actionEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseActionEvent(Sonnet__ConfigView* self, QActionEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_ActionEvent_IsBase(true);
        vsonnetconfigview->actionEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnActionEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_ActionEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_DragEnterEvent(Sonnet__ConfigView* self, QDragEnterEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->dragEnterEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseDragEnterEvent(Sonnet__ConfigView* self, QDragEnterEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_DragEnterEvent_IsBase(true);
        vsonnetconfigview->dragEnterEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnDragEnterEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_DragEnterEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_DragMoveEvent(Sonnet__ConfigView* self, QDragMoveEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->dragMoveEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseDragMoveEvent(Sonnet__ConfigView* self, QDragMoveEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_DragMoveEvent_IsBase(true);
        vsonnetconfigview->dragMoveEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnDragMoveEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_DragMoveEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_DragLeaveEvent(Sonnet__ConfigView* self, QDragLeaveEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->dragLeaveEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseDragLeaveEvent(Sonnet__ConfigView* self, QDragLeaveEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_DragLeaveEvent_IsBase(true);
        vsonnetconfigview->dragLeaveEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnDragLeaveEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_DragLeaveEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_DropEvent(Sonnet__ConfigView* self, QDropEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->dropEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseDropEvent(Sonnet__ConfigView* self, QDropEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_DropEvent_IsBase(true);
        vsonnetconfigview->dropEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnDropEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_DropEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_ShowEvent(Sonnet__ConfigView* self, QShowEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->showEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->showEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseShowEvent(Sonnet__ConfigView* self, QShowEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_ShowEvent_IsBase(true);
        vsonnetconfigview->showEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnShowEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_ShowEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_HideEvent(Sonnet__ConfigView* self, QHideEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->hideEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseHideEvent(Sonnet__ConfigView* self, QHideEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_HideEvent_IsBase(true);
        vsonnetconfigview->hideEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnHideEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_HideEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigView_NativeEvent(Sonnet__ConfigView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualSonnetConfigView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool Sonnet__ConfigView_QBaseNativeEvent(Sonnet__ConfigView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_NativeEvent_IsBase(true);
        return vsonnetconfigview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualSonnetConfigView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnNativeEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_NativeEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_ChangeEvent(Sonnet__ConfigView* self, QEvent* param1) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->changeEvent(param1);
    } else {
        ((VirtualSonnetConfigView*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseChangeEvent(Sonnet__ConfigView* self, QEvent* param1) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_ChangeEvent_IsBase(true);
        vsonnetconfigview->changeEvent(param1);
    } else {
        ((VirtualSonnetConfigView*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnChangeEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_ChangeEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigView_Metric(const Sonnet__ConfigView* self, int param1) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualSonnetConfigView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int Sonnet__ConfigView_QBaseMetric(const Sonnet__ConfigView* self, int param1) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Metric_IsBase(true);
        return vsonnetconfigview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualSonnetConfigView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMetric(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Metric_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_InitPainter(const Sonnet__ConfigView* self, QPainter* painter) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->initPainter(painter);
    } else {
        ((VirtualSonnetConfigView*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseInitPainter(const Sonnet__ConfigView* self, QPainter* painter) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_InitPainter_IsBase(true);
        vsonnetconfigview->initPainter(painter);
    } else {
        ((VirtualSonnetConfigView*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnInitPainter(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_InitPainter_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* Sonnet__ConfigView_Redirected(const Sonnet__ConfigView* self, QPoint* offset) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->redirected(offset);
    } else {
        return ((VirtualSonnetConfigView*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* Sonnet__ConfigView_QBaseRedirected(const Sonnet__ConfigView* self, QPoint* offset) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Redirected_IsBase(true);
        return vsonnetconfigview->redirected(offset);
    } else {
        return ((VirtualSonnetConfigView*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnRedirected(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Redirected_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* Sonnet__ConfigView_SharedPainter(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->sharedPainter();
    } else {
        return ((VirtualSonnetConfigView*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* Sonnet__ConfigView_QBaseSharedPainter(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_SharedPainter_IsBase(true);
        return vsonnetconfigview->sharedPainter();
    } else {
        return ((VirtualSonnetConfigView*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnSharedPainter(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_SharedPainter_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_InputMethodEvent(Sonnet__ConfigView* self, QInputMethodEvent* param1) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->inputMethodEvent(param1);
    } else {
        ((VirtualSonnetConfigView*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseInputMethodEvent(Sonnet__ConfigView* self, QInputMethodEvent* param1) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_InputMethodEvent_IsBase(true);
        vsonnetconfigview->inputMethodEvent(param1);
    } else {
        ((VirtualSonnetConfigView*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnInputMethodEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_InputMethodEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* Sonnet__ConfigView_InputMethodQuery(const Sonnet__ConfigView* self, int param1) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return new QVariant(vsonnetconfigview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualSonnetConfigView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* Sonnet__ConfigView_QBaseInputMethodQuery(const Sonnet__ConfigView* self, int param1) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_InputMethodQuery_IsBase(true);
        return new QVariant(vsonnetconfigview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualSonnetConfigView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnInputMethodQuery(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_InputMethodQuery_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigView_FocusNextPrevChild(Sonnet__ConfigView* self, bool next) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->focusNextPrevChild(next);
    } else {
        return ((VirtualSonnetConfigView*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool Sonnet__ConfigView_QBaseFocusNextPrevChild(Sonnet__ConfigView* self, bool next) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_FocusNextPrevChild_IsBase(true);
        return vsonnetconfigview->focusNextPrevChild(next);
    } else {
        return ((VirtualSonnetConfigView*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnFocusNextPrevChild(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigView_EventFilter(Sonnet__ConfigView* self, QObject* watched, QEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->eventFilter(watched, event);
    } else {
        return self->Sonnet::ConfigView::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Sonnet__ConfigView_QBaseEventFilter(Sonnet__ConfigView* self, QObject* watched, QEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_EventFilter_IsBase(true);
        return vsonnetconfigview->eventFilter(watched, event);
    } else {
        return self->Sonnet::ConfigView::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnEventFilter(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_EventFilter_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_TimerEvent(Sonnet__ConfigView* self, QTimerEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->timerEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseTimerEvent(Sonnet__ConfigView* self, QTimerEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_TimerEvent_IsBase(true);
        vsonnetconfigview->timerEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnTimerEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_TimerEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_ChildEvent(Sonnet__ConfigView* self, QChildEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->childEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseChildEvent(Sonnet__ConfigView* self, QChildEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_ChildEvent_IsBase(true);
        vsonnetconfigview->childEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnChildEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_ChildEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_CustomEvent(Sonnet__ConfigView* self, QEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->customEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseCustomEvent(Sonnet__ConfigView* self, QEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_CustomEvent_IsBase(true);
        vsonnetconfigview->customEvent(event);
    } else {
        ((VirtualSonnetConfigView*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnCustomEvent(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_CustomEvent_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_ConnectNotify(Sonnet__ConfigView* self, const QMetaMethod* signal) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->connectNotify(*signal);
    } else {
        ((VirtualSonnetConfigView*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseConnectNotify(Sonnet__ConfigView* self, const QMetaMethod* signal) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_ConnectNotify_IsBase(true);
        vsonnetconfigview->connectNotify(*signal);
    } else {
        ((VirtualSonnetConfigView*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnConnectNotify(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_ConnectNotify_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_DisconnectNotify(Sonnet__ConfigView* self, const QMetaMethod* signal) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetConfigView*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseDisconnectNotify(Sonnet__ConfigView* self, const QMetaMethod* signal) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_DisconnectNotify_IsBase(true);
        vsonnetconfigview->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetConfigView*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnDisconnectNotify(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_DisconnectNotify_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_UpdateMicroFocus(Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->updateMicroFocus();
    } else {
        ((VirtualSonnetConfigView*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseUpdateMicroFocus(Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_UpdateMicroFocus_IsBase(true);
        vsonnetconfigview->updateMicroFocus();
    } else {
        ((VirtualSonnetConfigView*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnUpdateMicroFocus(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_Create(Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->create();
    } else {
        ((VirtualSonnetConfigView*)self)->create();
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseCreate(Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Create_IsBase(true);
        vsonnetconfigview->create();
    } else {
        ((VirtualSonnetConfigView*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnCreate(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Create_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigView_Destroy(Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->destroy();
    } else {
        ((VirtualSonnetConfigView*)self)->destroy();
    }
}

// Base class handler implementation
void Sonnet__ConfigView_QBaseDestroy(Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Destroy_IsBase(true);
        vsonnetconfigview->destroy();
    } else {
        ((VirtualSonnetConfigView*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnDestroy(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Destroy_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigView_FocusNextChild(Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->focusNextChild();
    } else {
        return ((VirtualSonnetConfigView*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool Sonnet__ConfigView_QBaseFocusNextChild(Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_FocusNextChild_IsBase(true);
        return vsonnetconfigview->focusNextChild();
    } else {
        return ((VirtualSonnetConfigView*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnFocusNextChild(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_FocusNextChild_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigView_FocusPreviousChild(Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->focusPreviousChild();
    } else {
        return ((VirtualSonnetConfigView*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool Sonnet__ConfigView_QBaseFocusPreviousChild(Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_FocusPreviousChild_IsBase(true);
        return vsonnetconfigview->focusPreviousChild();
    } else {
        return ((VirtualSonnetConfigView*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnFocusPreviousChild(Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_FocusPreviousChild_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Sonnet__ConfigView_Sender(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->sender();
    } else {
        return ((VirtualSonnetConfigView*)self)->sender();
    }
}

// Base class handler implementation
QObject* Sonnet__ConfigView_QBaseSender(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Sender_IsBase(true);
        return vsonnetconfigview->sender();
    } else {
        return ((VirtualSonnetConfigView*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnSender(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Sender_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigView_SenderSignalIndex(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->senderSignalIndex();
    } else {
        return ((VirtualSonnetConfigView*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Sonnet__ConfigView_QBaseSenderSignalIndex(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_SenderSignalIndex_IsBase(true);
        return vsonnetconfigview->senderSignalIndex();
    } else {
        return ((VirtualSonnetConfigView*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnSenderSignalIndex(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_SenderSignalIndex_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigView_Receivers(const Sonnet__ConfigView* self, const char* signal) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->receivers(signal);
    } else {
        return ((VirtualSonnetConfigView*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Sonnet__ConfigView_QBaseReceivers(const Sonnet__ConfigView* self, const char* signal) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Receivers_IsBase(true);
        return vsonnetconfigview->receivers(signal);
    } else {
        return ((VirtualSonnetConfigView*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnReceivers(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_Receivers_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigView_IsSignalConnected(const Sonnet__ConfigView* self, const QMetaMethod* signal) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetConfigView*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Sonnet__ConfigView_QBaseIsSignalConnected(const Sonnet__ConfigView* self, const QMetaMethod* signal) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_IsSignalConnected_IsBase(true);
        return vsonnetconfigview->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetConfigView*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnIsSignalConnected(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_IsSignalConnected_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double Sonnet__ConfigView_GetDecodedMetricF(const Sonnet__ConfigView* self, int metricA, int metricB) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        return vsonnetconfigview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualSonnetConfigView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double Sonnet__ConfigView_QBaseGetDecodedMetricF(const Sonnet__ConfigView* self, int metricA, int metricB) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_GetDecodedMetricF_IsBase(true);
        return vsonnetconfigview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualSonnetConfigView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnGetDecodedMetricF(const Sonnet__ConfigView* self, intptr_t slot) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview && vsonnetconfigview->isVirtualSonnetConfigView) {
        vsonnetconfigview->setSonnet__ConfigView_GetDecodedMetricF_Callback(reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_GetDecodedMetricF_Callback>(slot));
    }
}

void Sonnet__ConfigView_Delete(Sonnet__ConfigView* self) {
    delete self;
}
