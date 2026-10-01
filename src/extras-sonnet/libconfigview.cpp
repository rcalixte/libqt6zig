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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Sonnet__ConfigView_Tr(const char* s) {
    auto _ret = Sonnet::ConfigView::tr(s);
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

libqt_string Sonnet__ConfigView_Language(const Sonnet__ConfigView* self) {
    auto _ret = self->language();
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
    Sonnet::ConfigView::connect(self,
                                static_cast<void (Sonnet::ConfigView::*)()>(&Sonnet::ConfigView::configChanged),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

libqt_string Sonnet__ConfigView_Tr2(const char* s, const char* c) {
    auto _ret = Sonnet::ConfigView::tr(s, c);
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
    auto _ret = Sonnet::ConfigView::tr(s, c, static_cast<int>(n));
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
QMetaObject* Sonnet__ConfigView_SuperMetaObject(const Sonnet__ConfigView* self) {
    return (QMetaObject*)self->Sonnet::ConfigView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMetaObject(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self)))
        vsonnetconfigview->sonnet__configview_metaobject_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Sonnet__ConfigView_SuperMetacast(Sonnet__ConfigView* self, const char* param1) {
    return self->Sonnet::ConfigView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMetacast(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_metacast_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_Metacast_Callback>(slot);
}

// Base class handler implementation
int Sonnet__ConfigView_SuperMetacall(Sonnet__ConfigView* self, int param1, int param2, void** param3) {
    return self->Sonnet::ConfigView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMetacall(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_metacall_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_Metacall_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__ConfigView_DevType(const Sonnet__ConfigView* self) {
    return self->devType();
}

// Base class handler implementation
int Sonnet__ConfigView_SuperDevType(const Sonnet__ConfigView* self) {
    return self->Sonnet::ConfigView::devType();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnDevType(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self)))
        vsonnetconfigview->sonnet__configview_devtype_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_DevType_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_SetVisible(Sonnet__ConfigView* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void Sonnet__ConfigView_SuperSetVisible(Sonnet__ConfigView* self, bool visible) {
    self->Sonnet::ConfigView::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnSetVisible(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_setvisible_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* Sonnet__ConfigView_SizeHint(const Sonnet__ConfigView* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* Sonnet__ConfigView_SuperSizeHint(const Sonnet__ConfigView* self) {
    return new QSize(self->Sonnet::ConfigView::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnSizeHint(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self)))
        vsonnetconfigview->sonnet__configview_sizehint_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* Sonnet__ConfigView_MinimumSizeHint(const Sonnet__ConfigView* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* Sonnet__ConfigView_SuperMinimumSizeHint(const Sonnet__ConfigView* self) {
    return new QSize(self->Sonnet::ConfigView::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMinimumSizeHint(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self)))
        vsonnetconfigview->sonnet__configview_minimumsizehint_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__ConfigView_HeightForWidth(const Sonnet__ConfigView* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int Sonnet__ConfigView_SuperHeightForWidth(const Sonnet__ConfigView* self, int param1) {
    return self->Sonnet::ConfigView::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnHeightForWidth(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self)))
        vsonnetconfigview->sonnet__configview_heightforwidth_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__ConfigView_HasHeightForWidth(const Sonnet__ConfigView* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool Sonnet__ConfigView_SuperHasHeightForWidth(const Sonnet__ConfigView* self) {
    return self->Sonnet::ConfigView::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnHasHeightForWidth(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self)))
        vsonnetconfigview->sonnet__configview_hasheightforwidth_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* Sonnet__ConfigView_PaintEngine(const Sonnet__ConfigView* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* Sonnet__ConfigView_SuperPaintEngine(const Sonnet__ConfigView* self) {
    return self->Sonnet::ConfigView::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnPaintEngine(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self)))
        vsonnetconfigview->sonnet__configview_paintengine_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__ConfigView_Event(Sonnet__ConfigView* self, QEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        return vsonnetconfigview->event(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__ConfigView_SuperEvent(Sonnet__ConfigView* self, QEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        return vsonnetconfigview->Sonnet::ConfigView::event(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_event_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_Event_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_MousePressEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperMousePressEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMousePressEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_mousepressevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_MouseReleaseEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperMouseReleaseEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMouseReleaseEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_mousereleaseevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_MouseDoubleClickEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperMouseDoubleClickEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMouseDoubleClickEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_mousedoubleclickevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_MouseMoveEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperMouseMoveEvent(Sonnet__ConfigView* self, QMouseEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMouseMoveEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_mousemoveevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_WheelEvent(Sonnet__ConfigView* self, QWheelEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperWheelEvent(Sonnet__ConfigView* self, QWheelEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnWheelEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_wheelevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_KeyPressEvent(Sonnet__ConfigView* self, QKeyEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperKeyPressEvent(Sonnet__ConfigView* self, QKeyEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnKeyPressEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_keypressevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_KeyReleaseEvent(Sonnet__ConfigView* self, QKeyEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperKeyReleaseEvent(Sonnet__ConfigView* self, QKeyEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnKeyReleaseEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_keyreleaseevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_FocusInEvent(Sonnet__ConfigView* self, QFocusEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperFocusInEvent(Sonnet__ConfigView* self, QFocusEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnFocusInEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_focusinevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_FocusOutEvent(Sonnet__ConfigView* self, QFocusEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperFocusOutEvent(Sonnet__ConfigView* self, QFocusEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnFocusOutEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_focusoutevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_EnterEvent(Sonnet__ConfigView* self, QEnterEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperEnterEvent(Sonnet__ConfigView* self, QEnterEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnEnterEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_enterevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_LeaveEvent(Sonnet__ConfigView* self, QEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperLeaveEvent(Sonnet__ConfigView* self, QEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnLeaveEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_leaveevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_PaintEvent(Sonnet__ConfigView* self, QPaintEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperPaintEvent(Sonnet__ConfigView* self, QPaintEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnPaintEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_paintevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_MoveEvent(Sonnet__ConfigView* self, QMoveEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperMoveEvent(Sonnet__ConfigView* self, QMoveEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMoveEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_moveevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_ResizeEvent(Sonnet__ConfigView* self, QResizeEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperResizeEvent(Sonnet__ConfigView* self, QResizeEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnResizeEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_resizeevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_CloseEvent(Sonnet__ConfigView* self, QCloseEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperCloseEvent(Sonnet__ConfigView* self, QCloseEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnCloseEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_closeevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_ContextMenuEvent(Sonnet__ConfigView* self, QContextMenuEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperContextMenuEvent(Sonnet__ConfigView* self, QContextMenuEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnContextMenuEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_contextmenuevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_TabletEvent(Sonnet__ConfigView* self, QTabletEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperTabletEvent(Sonnet__ConfigView* self, QTabletEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnTabletEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_tabletevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_ActionEvent(Sonnet__ConfigView* self, QActionEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperActionEvent(Sonnet__ConfigView* self, QActionEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnActionEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_actionevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_DragEnterEvent(Sonnet__ConfigView* self, QDragEnterEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperDragEnterEvent(Sonnet__ConfigView* self, QDragEnterEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnDragEnterEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_dragenterevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_DragMoveEvent(Sonnet__ConfigView* self, QDragMoveEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperDragMoveEvent(Sonnet__ConfigView* self, QDragMoveEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnDragMoveEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_dragmoveevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_DragLeaveEvent(Sonnet__ConfigView* self, QDragLeaveEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperDragLeaveEvent(Sonnet__ConfigView* self, QDragLeaveEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnDragLeaveEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_dragleaveevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_DropEvent(Sonnet__ConfigView* self, QDropEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperDropEvent(Sonnet__ConfigView* self, QDropEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnDropEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_dropevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_ShowEvent(Sonnet__ConfigView* self, QShowEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperShowEvent(Sonnet__ConfigView* self, QShowEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::showEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnShowEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_showevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_HideEvent(Sonnet__ConfigView* self, QHideEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperHideEvent(Sonnet__ConfigView* self, QHideEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnHideEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_hideevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__ConfigView_NativeEvent(Sonnet__ConfigView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        return vsonnetconfigview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__ConfigView_SuperNativeEvent(Sonnet__ConfigView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        return vsonnetconfigview->Sonnet::ConfigView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnNativeEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_nativeevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_ChangeEvent(Sonnet__ConfigView* self, QEvent* param1) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperChangeEvent(Sonnet__ConfigView* self, QEvent* param1) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnChangeEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_changeevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__ConfigView_Metric(const Sonnet__ConfigView* self, int param1) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview) {
        return vsonnetconfigview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int Sonnet__ConfigView_SuperMetric(const Sonnet__ConfigView* self, int param1) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self))) {
        return vsonnetconfigview->Sonnet::ConfigView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnMetric(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self)))
        vsonnetconfigview->sonnet__configview_metric_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_Metric_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_InitPainter(const Sonnet__ConfigView* self, QPainter* painter) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview) {
        vsonnetconfigview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperInitPainter(const Sonnet__ConfigView* self, QPainter* painter) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self))) {
        vsonnetconfigview->Sonnet::ConfigView::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnInitPainter(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self)))
        vsonnetconfigview->sonnet__configview_initpainter_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* Sonnet__ConfigView_Redirected(const Sonnet__ConfigView* self, QPoint* offset) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview) {
        return vsonnetconfigview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* Sonnet__ConfigView_SuperRedirected(const Sonnet__ConfigView* self, QPoint* offset) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self))) {
        return vsonnetconfigview->Sonnet::ConfigView::redirected(offset);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnRedirected(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self)))
        vsonnetconfigview->sonnet__configview_redirected_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* Sonnet__ConfigView_SharedPainter(const Sonnet__ConfigView* self) {
    auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self));
    if (vsonnetconfigview) {
        return vsonnetconfigview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* Sonnet__ConfigView_SuperSharedPainter(const Sonnet__ConfigView* self) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self))) {
        return vsonnetconfigview->Sonnet::ConfigView::sharedPainter();
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnSharedPainter(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self)))
        vsonnetconfigview->sonnet__configview_sharedpainter_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_InputMethodEvent(Sonnet__ConfigView* self, QInputMethodEvent* param1) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperInputMethodEvent(Sonnet__ConfigView* self, QInputMethodEvent* param1) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnInputMethodEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_inputmethodevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* Sonnet__ConfigView_InputMethodQuery(const Sonnet__ConfigView* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* Sonnet__ConfigView_SuperInputMethodQuery(const Sonnet__ConfigView* self, int param1) {
    return new QVariant(self->Sonnet::ConfigView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnInputMethodQuery(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self)))
        vsonnetconfigview->sonnet__configview_inputmethodquery_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__ConfigView_FocusNextPrevChild(Sonnet__ConfigView* self, bool next) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        return vsonnetconfigview->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__ConfigView_SuperFocusNextPrevChild(Sonnet__ConfigView* self, bool next) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        return vsonnetconfigview->Sonnet::ConfigView::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnFocusNextPrevChild(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_focusnextprevchild_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__ConfigView_EventFilter(Sonnet__ConfigView* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Sonnet__ConfigView_SuperEventFilter(Sonnet__ConfigView* self, QObject* watched, QEvent* event) {
    return self->Sonnet::ConfigView::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnEventFilter(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_eventfilter_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_TimerEvent(Sonnet__ConfigView* self, QTimerEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperTimerEvent(Sonnet__ConfigView* self, QTimerEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnTimerEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_timerevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_ChildEvent(Sonnet__ConfigView* self, QChildEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperChildEvent(Sonnet__ConfigView* self, QChildEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnChildEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_childevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_CustomEvent(Sonnet__ConfigView* self, QEvent* event) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperCustomEvent(Sonnet__ConfigView* self, QEvent* event) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnCustomEvent(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_customevent_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_ConnectNotify(Sonnet__ConfigView* self, const QMetaMethod* signal) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperConnectNotify(Sonnet__ConfigView* self, const QMetaMethod* signal) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnConnectNotify(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_connectnotify_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigView_DisconnectNotify(Sonnet__ConfigView* self, const QMetaMethod* signal) {
    auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self);
    if (vsonnetconfigview) {
        vsonnetconfigview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigView_SuperDisconnectNotify(Sonnet__ConfigView* self, const QMetaMethod* signal) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->Sonnet::ConfigView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigView_OnDisconnectNotify(Sonnet__ConfigView* self, intptr_t slot) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self))
        vsonnetconfigview->sonnet__configview_disconnectnotify_callback = reinterpret_cast<VirtualSonnetConfigView::Sonnet__ConfigView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void Sonnet__ConfigView_UpdateMicroFocus(Sonnet__ConfigView* self) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->VirtualSonnetConfigView::updateMicroFocus();
    } else
        qFatal("Error: Protected method Sonnet::ConfigView::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__ConfigView_Create(Sonnet__ConfigView* self) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->VirtualSonnetConfigView::create();
    } else
        qFatal("Error: Protected method Sonnet::ConfigView::create called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__ConfigView_Destroy(Sonnet__ConfigView* self) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        vsonnetconfigview->VirtualSonnetConfigView::destroy();
    } else
        qFatal("Error: Protected method Sonnet::ConfigView::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__ConfigView_FocusNextChild(Sonnet__ConfigView* self) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        return vsonnetconfigview->VirtualSonnetConfigView::focusNextChild();
    } else
        qFatal("Error: Protected method Sonnet::ConfigView::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__ConfigView_FocusPreviousChild(Sonnet__ConfigView* self) {
    if (auto* vsonnetconfigview = dynamic_cast<VirtualSonnetConfigView*>(self)) {
        return vsonnetconfigview->VirtualSonnetConfigView::focusPreviousChild();
    } else
        qFatal("Error: Protected method Sonnet::ConfigView::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Sonnet__ConfigView_Sender(const Sonnet__ConfigView* self) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self))) {
        return vsonnetconfigview->VirtualSonnetConfigView::sender();
    } else
        qFatal("Error: Protected method Sonnet::ConfigView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__ConfigView_SenderSignalIndex(const Sonnet__ConfigView* self) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self))) {
        return vsonnetconfigview->VirtualSonnetConfigView::senderSignalIndex();
    } else
        qFatal("Error: Protected method Sonnet::ConfigView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__ConfigView_Receivers(const Sonnet__ConfigView* self, const char* signal) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self))) {
        return vsonnetconfigview->VirtualSonnetConfigView::receivers(signal);
    } else
        qFatal("Error: Protected method Sonnet::ConfigView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__ConfigView_IsSignalConnected(const Sonnet__ConfigView* self, const QMetaMethod* signal) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self))) {
        return vsonnetconfigview->VirtualSonnetConfigView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Sonnet::ConfigView::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double Sonnet__ConfigView_GetDecodedMetricF(const Sonnet__ConfigView* self, int metricA, int metricB) {
    if (auto* vsonnetconfigview = const_cast<VirtualSonnetConfigView*>(dynamic_cast<const VirtualSonnetConfigView*>(self))) {
        return vsonnetconfigview->VirtualSonnetConfigView::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method Sonnet::ConfigView::getDecodedMetricF called without a directly constructed type");
}

void Sonnet__ConfigView_Delete(Sonnet__ConfigView* self) {
    delete self;
}
