#include <KFontChooser>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
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
#include <kfontchooser.h>
#include "libkfontchooser.h"
#include "libkfontchooser.hxx"

KFontChooser* KFontChooser_new(QWidget* parent) {
    return new VirtualKFontChooser(parent);
}

KFontChooser* KFontChooser_new2() {
    return new VirtualKFontChooser();
}

KFontChooser* KFontChooser_new3(int flags) {
    return new VirtualKFontChooser(static_cast<KFontChooser::DisplayFlags>(flags));
}

KFontChooser* KFontChooser_new4(int flags, QWidget* parent) {
    return new VirtualKFontChooser(static_cast<KFontChooser::DisplayFlags>(flags), parent);
}

QMetaObject* KFontChooser_MetaObject(const KFontChooser* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFontChooser_Metacast(KFontChooser* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFontChooser_Metacall(KFontChooser* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFontChooser_Tr(const char* s) {
    auto _ret = KFontChooser::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFontChooser_EnableColumn(KFontChooser* self, int column, bool state) {
    self->enableColumn(static_cast<int>(column), state);
}

void KFontChooser_SetFont(KFontChooser* self, const QFont* font) {
    self->setFont(*font);
}

int KFontChooser_FontDiffFlags(const KFontChooser* self) {
    return static_cast<int>(self->fontDiffFlags());
}

QFont* KFontChooser_Font(const KFontChooser* self) {
    return new QFont(self->font());
}

void KFontChooser_SetColor(KFontChooser* self, const QColor* col) {
    self->setColor(*col);
}

QColor* KFontChooser_Color(const KFontChooser* self) {
    return new QColor(self->color());
}

void KFontChooser_SetBackgroundColor(KFontChooser* self, const QColor* col) {
    self->setBackgroundColor(*col);
}

QColor* KFontChooser_BackgroundColor(const KFontChooser* self) {
    return new QColor(self->backgroundColor());
}

libqt_string KFontChooser_SampleText(const KFontChooser* self) {
    auto _ret = self->sampleText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFontChooser_SetSampleText(KFontChooser* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setSampleText(text_QString);
}

void KFontChooser_SetSampleBoxVisible(KFontChooser* self, bool visible) {
    self->setSampleBoxVisible(visible);
}

libqt_list /* of libqt_string */ KFontChooser_CreateFontList(unsigned int fontListCriteria) {
    QList<QString> _ret = KFontChooser::createFontList(static_cast<uint>(fontListCriteria));
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

void KFontChooser_SetFontListItems(KFontChooser* self, const libqt_list /* of libqt_string */ fontList) {
    QList<QString> fontList_QList;
    fontList_QList.reserve(fontList.len);
    libqt_string* fontList_arr = static_cast<libqt_string*>(fontList.data);
    for (size_t i = 0; i < fontList.len; ++i) {
        QString fontList_arr_i_QString = QString::fromUtf8(fontList_arr[i].data, fontList_arr[i].len);
        fontList_QList.push_back(fontList_arr_i_QString);
    }
    self->setFontListItems(fontList_QList);
}

void KFontChooser_SetMinVisibleItems(KFontChooser* self, int visibleItems) {
    self->setMinVisibleItems(static_cast<int>(visibleItems));
}

QSize* KFontChooser_SizeHint(const KFontChooser* self) {
    return new QSize(self->sizeHint());
}

void KFontChooser_FontSelected(KFontChooser* self, const QFont* font) {
    self->fontSelected(*font);
}

void KFontChooser_Connect_FontSelected(KFontChooser* self, intptr_t slot) {
    void (*slotFunc)(KFontChooser*, QFont*) = reinterpret_cast<void (*)(KFontChooser*, QFont*)>(slot);
    KFontChooser::connect(self,
                          static_cast<void (KFontChooser::*)(const QFont&)>(&KFontChooser::fontSelected),
                          [self, slotFunc](const QFont& font) {
                              const QFont& font_ret = font;
                              // Cast returned reference into pointer
                              QFont* sigval1 = const_cast<QFont*>(&font_ret);
                              slotFunc(self, sigval1);
                          });
}

libqt_string KFontChooser_Tr2(const char* s, const char* c) {
    auto _ret = KFontChooser::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFontChooser_Tr3(const char* s, const char* c, int n) {
    auto _ret = KFontChooser::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFontChooser_SetFont2(KFontChooser* self, const QFont* font, bool onlyFixed) {
    self->setFont(*font, onlyFixed);
}

// Base class handler implementation
QMetaObject* KFontChooser_SuperMetaObject(const KFontChooser* self) {
    return (QMetaObject*)self->KFontChooser::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMetaObject(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self)))
        vkfontchooser->kfontchooser_metaobject_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFontChooser_SuperMetacast(KFontChooser* self, const char* param1) {
    return self->KFontChooser::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMetacast(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_metacast_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFontChooser_SuperMetacall(KFontChooser* self, int param1, int param2, void** param3) {
    return self->KFontChooser::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMetacall(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_metacall_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KFontChooser_SuperSizeHint(const KFontChooser* self) {
    return new QSize(self->KFontChooser::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnSizeHint(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self)))
        vkfontchooser->kfontchooser_sizehint_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_SizeHint_Callback>(slot);
}

// Derived class handler implementation
int KFontChooser_DevType(const KFontChooser* self) {
    return self->devType();
}

// Base class handler implementation
int KFontChooser_SuperDevType(const KFontChooser* self) {
    return self->KFontChooser::devType();
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnDevType(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self)))
        vkfontchooser->kfontchooser_devtype_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_DevType_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_SetVisible(KFontChooser* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KFontChooser_SuperSetVisible(KFontChooser* self, bool visible) {
    self->KFontChooser::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnSetVisible(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_setvisible_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KFontChooser_MinimumSizeHint(const KFontChooser* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KFontChooser_SuperMinimumSizeHint(const KFontChooser* self) {
    return new QSize(self->KFontChooser::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMinimumSizeHint(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self)))
        vkfontchooser->kfontchooser_minimumsizehint_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KFontChooser_HeightForWidth(const KFontChooser* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KFontChooser_SuperHeightForWidth(const KFontChooser* self, int param1) {
    return self->KFontChooser::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnHeightForWidth(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self)))
        vkfontchooser->kfontchooser_heightforwidth_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KFontChooser_HasHeightForWidth(const KFontChooser* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KFontChooser_SuperHasHeightForWidth(const KFontChooser* self) {
    return self->KFontChooser::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnHasHeightForWidth(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self)))
        vkfontchooser->kfontchooser_hasheightforwidth_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KFontChooser_PaintEngine(const KFontChooser* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KFontChooser_SuperPaintEngine(const KFontChooser* self) {
    return self->KFontChooser::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnPaintEngine(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self)))
        vkfontchooser->kfontchooser_paintengine_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KFontChooser_Event(KFontChooser* self, QEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        return vkfontchooser->event(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFontChooser_SuperEvent(KFontChooser* self, QEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        return vkfontchooser->KFontChooser::event(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_event_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_Event_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_MousePressEvent(KFontChooser* self, QMouseEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperMousePressEvent(KFontChooser* self, QMouseEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMousePressEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_mousepressevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_MouseReleaseEvent(KFontChooser* self, QMouseEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperMouseReleaseEvent(KFontChooser* self, QMouseEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMouseReleaseEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_mousereleaseevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_MouseDoubleClickEvent(KFontChooser* self, QMouseEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperMouseDoubleClickEvent(KFontChooser* self, QMouseEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMouseDoubleClickEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_mousedoubleclickevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_MouseMoveEvent(KFontChooser* self, QMouseEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperMouseMoveEvent(KFontChooser* self, QMouseEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMouseMoveEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_mousemoveevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_WheelEvent(KFontChooser* self, QWheelEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperWheelEvent(KFontChooser* self, QWheelEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnWheelEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_wheelevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_KeyPressEvent(KFontChooser* self, QKeyEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperKeyPressEvent(KFontChooser* self, QKeyEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnKeyPressEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_keypressevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_KeyReleaseEvent(KFontChooser* self, QKeyEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperKeyReleaseEvent(KFontChooser* self, QKeyEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnKeyReleaseEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_keyreleaseevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_FocusInEvent(KFontChooser* self, QFocusEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperFocusInEvent(KFontChooser* self, QFocusEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnFocusInEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_focusinevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_FocusOutEvent(KFontChooser* self, QFocusEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperFocusOutEvent(KFontChooser* self, QFocusEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnFocusOutEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_focusoutevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_EnterEvent(KFontChooser* self, QEnterEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperEnterEvent(KFontChooser* self, QEnterEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnEnterEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_enterevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_LeaveEvent(KFontChooser* self, QEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperLeaveEvent(KFontChooser* self, QEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnLeaveEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_leaveevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_PaintEvent(KFontChooser* self, QPaintEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperPaintEvent(KFontChooser* self, QPaintEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnPaintEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_paintevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_MoveEvent(KFontChooser* self, QMoveEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperMoveEvent(KFontChooser* self, QMoveEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMoveEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_moveevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_ResizeEvent(KFontChooser* self, QResizeEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperResizeEvent(KFontChooser* self, QResizeEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnResizeEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_resizeevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_CloseEvent(KFontChooser* self, QCloseEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperCloseEvent(KFontChooser* self, QCloseEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnCloseEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_closeevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_ContextMenuEvent(KFontChooser* self, QContextMenuEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperContextMenuEvent(KFontChooser* self, QContextMenuEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnContextMenuEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_contextmenuevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_TabletEvent(KFontChooser* self, QTabletEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperTabletEvent(KFontChooser* self, QTabletEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnTabletEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_tabletevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_ActionEvent(KFontChooser* self, QActionEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperActionEvent(KFontChooser* self, QActionEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnActionEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_actionevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_DragEnterEvent(KFontChooser* self, QDragEnterEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperDragEnterEvent(KFontChooser* self, QDragEnterEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnDragEnterEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_dragenterevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_DragMoveEvent(KFontChooser* self, QDragMoveEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperDragMoveEvent(KFontChooser* self, QDragMoveEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnDragMoveEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_dragmoveevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_DragLeaveEvent(KFontChooser* self, QDragLeaveEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperDragLeaveEvent(KFontChooser* self, QDragLeaveEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnDragLeaveEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_dragleaveevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_DropEvent(KFontChooser* self, QDropEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperDropEvent(KFontChooser* self, QDropEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnDropEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_dropevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_ShowEvent(KFontChooser* self, QShowEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperShowEvent(KFontChooser* self, QShowEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnShowEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_showevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_HideEvent(KFontChooser* self, QHideEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperHideEvent(KFontChooser* self, QHideEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnHideEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_hideevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KFontChooser_NativeEvent(KFontChooser* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        return vkfontchooser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KFontChooser::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFontChooser_SuperNativeEvent(KFontChooser* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        return vkfontchooser->KFontChooser::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KFontChooser::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnNativeEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_nativeevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_ChangeEvent(KFontChooser* self, QEvent* param1) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperChangeEvent(KFontChooser* self, QEvent* param1) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFontChooser::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnChangeEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_changeevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KFontChooser_Metric(const KFontChooser* self, int param1) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser) {
        return vkfontchooser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KFontChooser::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KFontChooser_SuperMetric(const KFontChooser* self, int param1) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self))) {
        return vkfontchooser->KFontChooser::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KFontChooser::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMetric(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self)))
        vkfontchooser->kfontchooser_metric_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_Metric_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_InitPainter(const KFontChooser* self, QPainter* painter) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser) {
        vkfontchooser->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperInitPainter(const KFontChooser* self, QPainter* painter) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self))) {
        vkfontchooser->KFontChooser::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KFontChooser::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnInitPainter(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self)))
        vkfontchooser->kfontchooser_initpainter_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KFontChooser_Redirected(const KFontChooser* self, QPoint* offset) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser) {
        return vkfontchooser->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KFontChooser_SuperRedirected(const KFontChooser* self, QPoint* offset) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self))) {
        return vkfontchooser->KFontChooser::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KFontChooser::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnRedirected(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self)))
        vkfontchooser->kfontchooser_redirected_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KFontChooser_SharedPainter(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser) {
        return vkfontchooser->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KFontChooser::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KFontChooser_SuperSharedPainter(const KFontChooser* self) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self))) {
        return vkfontchooser->KFontChooser::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KFontChooser::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnSharedPainter(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self)))
        vkfontchooser->kfontchooser_sharedpainter_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_InputMethodEvent(KFontChooser* self, QInputMethodEvent* param1) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperInputMethodEvent(KFontChooser* self, QInputMethodEvent* param1) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFontChooser::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnInputMethodEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_inputmethodevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KFontChooser_InputMethodQuery(const KFontChooser* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KFontChooser_SuperInputMethodQuery(const KFontChooser* self, int param1) {
    return new QVariant(self->KFontChooser::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnInputMethodQuery(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self)))
        vkfontchooser->kfontchooser_inputmethodquery_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KFontChooser_FocusNextPrevChild(KFontChooser* self, bool next) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        return vkfontchooser->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFontChooser_SuperFocusNextPrevChild(KFontChooser* self, bool next) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        return vkfontchooser->KFontChooser::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KFontChooser::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnFocusNextPrevChild(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_focusnextprevchild_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KFontChooser_EventFilter(KFontChooser* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KFontChooser_SuperEventFilter(KFontChooser* self, QObject* watched, QEvent* event) {
    return self->KFontChooser::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnEventFilter(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_eventfilter_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_TimerEvent(KFontChooser* self, QTimerEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperTimerEvent(KFontChooser* self, QTimerEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnTimerEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_timerevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_ChildEvent(KFontChooser* self, QChildEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperChildEvent(KFontChooser* self, QChildEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnChildEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_childevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_CustomEvent(KFontChooser* self, QEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperCustomEvent(KFontChooser* self, QEvent* event) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooser::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnCustomEvent(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_customevent_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_ConnectNotify(KFontChooser* self, const QMetaMethod* signal) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperConnectNotify(KFontChooser* self, const QMetaMethod* signal) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFontChooser::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnConnectNotify(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_connectnotify_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFontChooser_DisconnectNotify(KFontChooser* self, const QMetaMethod* signal) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser) {
        vkfontchooser->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFontChooser::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooser_SuperDisconnectNotify(KFontChooser* self, const QMetaMethod* signal) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->KFontChooser::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFontChooser::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnDisconnectNotify(KFontChooser* self, intptr_t slot) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self))
        vkfontchooser->kfontchooser_disconnectnotify_callback = reinterpret_cast<VirtualKFontChooser::KFontChooser_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KFontChooser_UpdateMicroFocus(KFontChooser* self) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->VirtualKFontChooser::updateMicroFocus();
    } else
        qFatal("Error: Protected method KFontChooser::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KFontChooser_Create(KFontChooser* self) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->VirtualKFontChooser::create();
    } else
        qFatal("Error: Protected method KFontChooser::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KFontChooser_Destroy(KFontChooser* self) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        vkfontchooser->VirtualKFontChooser::destroy();
    } else
        qFatal("Error: Protected method KFontChooser::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFontChooser_FocusNextChild(KFontChooser* self) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        return vkfontchooser->VirtualKFontChooser::focusNextChild();
    } else
        qFatal("Error: Protected method KFontChooser::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFontChooser_FocusPreviousChild(KFontChooser* self) {
    if (auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self)) {
        return vkfontchooser->VirtualKFontChooser::focusPreviousChild();
    } else
        qFatal("Error: Protected method KFontChooser::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KFontChooser_Sender(const KFontChooser* self) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self))) {
        return vkfontchooser->VirtualKFontChooser::sender();
    } else
        qFatal("Error: Protected method KFontChooser::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFontChooser_SenderSignalIndex(const KFontChooser* self) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self))) {
        return vkfontchooser->VirtualKFontChooser::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFontChooser::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFontChooser_Receivers(const KFontChooser* self, const char* signal) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self))) {
        return vkfontchooser->VirtualKFontChooser::receivers(signal);
    } else
        qFatal("Error: Protected method KFontChooser::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFontChooser_IsSignalConnected(const KFontChooser* self, const QMetaMethod* signal) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self))) {
        return vkfontchooser->VirtualKFontChooser::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFontChooser::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KFontChooser_GetDecodedMetricF(const KFontChooser* self, int metricA, int metricB) {
    if (auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self))) {
        return vkfontchooser->VirtualKFontChooser::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KFontChooser::getDecodedMetricF called without a directly constructed type");
}

void KFontChooser_Delete(KFontChooser* self) {
    delete self;
}
