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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsWidgets__EmoticonTextEditSelector
#include <emoticontexteditselector.h>
#include "libemoticontexteditselector.h"
#include "libemoticontexteditselector.hxx"

TextEmoticonsWidgets__EmoticonTextEditSelector* TextEmoticonsWidgets__EmoticonTextEditSelector_new(QWidget* parent) {
    return new VirtualTextEmoticonsWidgetsEmoticonTextEditSelector(parent);
}

TextEmoticonsWidgets__EmoticonTextEditSelector* TextEmoticonsWidgets__EmoticonTextEditSelector_new2() {
    return new VirtualTextEmoticonsWidgetsEmoticonTextEditSelector();
}

QMetaObject* TextEmoticonsWidgets__EmoticonTextEditSelector_MetaObject(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEmoticonsWidgets__EmoticonTextEditSelector_Metacast(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEmoticonsWidgets__EmoticonTextEditSelector_Metacall(TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextEmoticonsWidgets__EmoticonTextEditSelector_Tr(const char* s) {
    auto _ret = TextEmoticonsWidgets::EmoticonTextEditSelector::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_ForceLineEditFocus(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    self->forceLineEditFocus();
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_SetCustomEmojiSupport(TextEmoticonsWidgets__EmoticonTextEditSelector* self, bool b) {
    self->setCustomEmojiSupport(b);
}

bool TextEmoticonsWidgets__EmoticonTextEditSelector_CustomEmojiSupport(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    return self->customEmojiSupport();
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_LoadEmoticons(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    self->loadEmoticons();
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_InsertEmoji(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->insertEmoji(param1_QString);
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_Connect_InsertEmoji(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    void (*slotFunc)(TextEmoticonsWidgets__EmoticonTextEditSelector*, const char*) = reinterpret_cast<void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, const char*)>(slot);
    TextEmoticonsWidgets::EmoticonTextEditSelector::connect(self,
                                                            static_cast<void (TextEmoticonsWidgets::EmoticonTextEditSelector::*)(const QString&)>(&TextEmoticonsWidgets::EmoticonTextEditSelector::insertEmoji),
                                                            [self, slotFunc](const QString& param1) {
                                                                const auto param1_ret = param1;
                                                                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                                QByteArray param1_b = param1_ret.toUtf8();
                                                                auto param1_str_len = param1_b.length();
                                                                const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                                                                memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                                                                ((char*)param1_str)[param1_str_len] = '\0';
                                                                const char* sigval1 = param1_str;
                                                                slotFunc(self, sigval1);
                                                                libqt_free(param1_str);
                                                            });
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_InsertEmojiIdentifier(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->insertEmojiIdentifier(param1_QString);
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_Connect_InsertEmojiIdentifier(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    void (*slotFunc)(TextEmoticonsWidgets__EmoticonTextEditSelector*, const char*) = reinterpret_cast<void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, const char*)>(slot);
    TextEmoticonsWidgets::EmoticonTextEditSelector::connect(self,
                                                            static_cast<void (TextEmoticonsWidgets::EmoticonTextEditSelector::*)(const QString&)>(&TextEmoticonsWidgets::EmoticonTextEditSelector::insertEmojiIdentifier),
                                                            [self, slotFunc](const QString& param1) {
                                                                const auto param1_ret = param1;
                                                                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                                QByteArray param1_b = param1_ret.toUtf8();
                                                                auto param1_str_len = param1_b.length();
                                                                const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                                                                memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                                                                ((char*)param1_str)[param1_str_len] = '\0';
                                                                const char* sigval1 = param1_str;
                                                                slotFunc(self, sigval1);
                                                                libqt_free(param1_str);
                                                            });
}

libqt_string TextEmoticonsWidgets__EmoticonTextEditSelector_Tr2(const char* s, const char* c) {
    auto _ret = TextEmoticonsWidgets::EmoticonTextEditSelector::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextEmoticonsWidgets__EmoticonTextEditSelector_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextEmoticonsWidgets::EmoticonTextEditSelector::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMetaObject(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    return (QMetaObject*)self->TextEmoticonsWidgets::EmoticonTextEditSelector::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMetaObject(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_metaobject_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMetacast(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const char* param1) {
    return self->TextEmoticonsWidgets::EmoticonTextEditSelector::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMetacast(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_metacast_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMetacall(TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1, int param2, void** param3) {
    return self->TextEmoticonsWidgets::EmoticonTextEditSelector::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMetacall(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_metacall_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_Metacall_Callback>(slot);
}

// Derived class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_DevType(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    return self->devType();
}

// Base class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDevType(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    return self->TextEmoticonsWidgets::EmoticonTextEditSelector::devType();
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnDevType(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_devtype_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SetVisible(TextEmoticonsWidgets__EmoticonTextEditSelector* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperSetVisible(TextEmoticonsWidgets__EmoticonTextEditSelector* self, bool visible) {
    self->TextEmoticonsWidgets::EmoticonTextEditSelector::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnSetVisible(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_setvisible_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextEmoticonsWidgets__EmoticonTextEditSelector_SizeHint(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperSizeHint(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    return new QSize(self->TextEmoticonsWidgets::EmoticonTextEditSelector::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnSizeHint(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_sizehint_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextEmoticonsWidgets__EmoticonTextEditSelector_MinimumSizeHint(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMinimumSizeHint(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    return new QSize(self->TextEmoticonsWidgets::EmoticonTextEditSelector::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMinimumSizeHint(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_minimumsizehint_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_HeightForWidth(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_SuperHeightForWidth(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1) {
    return self->TextEmoticonsWidgets::EmoticonTextEditSelector::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnHeightForWidth(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_heightforwidth_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_HasHeightForWidth(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperHasHeightForWidth(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    return self->TextEmoticonsWidgets::EmoticonTextEditSelector::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnHasHeightForWidth(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_hasheightforwidth_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextEmoticonsWidgets__EmoticonTextEditSelector_PaintEngine(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperPaintEngine(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    return self->TextEmoticonsWidgets::EmoticonTextEditSelector::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnPaintEngine(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_paintengine_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_Event(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        return vtextemoticonswidgetsemoticontexteditselector->event(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        return vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::event(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_event_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_Event_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_MousePressEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMousePressEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMousePressEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_mousepressevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_MouseReleaseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMouseReleaseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMouseReleaseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_mousereleaseevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_MouseDoubleClickEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMouseDoubleClickEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMouseDoubleClickEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_MouseMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMouseMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMouseMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_mousemoveevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_WheelEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QWheelEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperWheelEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QWheelEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnWheelEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_wheelevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_KeyPressEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QKeyEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperKeyPressEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QKeyEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnKeyPressEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_keypressevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_KeyReleaseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QKeyEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperKeyReleaseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QKeyEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnKeyReleaseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_keyreleaseevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_FocusInEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QFocusEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusInEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QFocusEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnFocusInEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_focusinevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_FocusOutEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QFocusEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusOutEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QFocusEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnFocusOutEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_focusoutevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_EnterEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEnterEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperEnterEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEnterEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnEnterEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_enterevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_LeaveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperLeaveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnLeaveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_leaveevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_PaintEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QPaintEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperPaintEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QPaintEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnPaintEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_paintevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_MoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMoveEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMoveEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_moveevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_ResizeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QResizeEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperResizeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QResizeEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnResizeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_resizeevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_CloseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QCloseEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperCloseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QCloseEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnCloseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_closeevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_ContextMenuEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QContextMenuEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperContextMenuEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QContextMenuEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnContextMenuEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_contextmenuevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_TabletEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QTabletEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperTabletEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QTabletEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnTabletEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_tabletevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_ActionEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QActionEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperActionEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QActionEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnActionEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_actionevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_DragEnterEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDragEnterEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDragEnterEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDragEnterEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnDragEnterEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_dragenterevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_DragMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDragMoveEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDragMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDragMoveEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnDragMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_dragmoveevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_DragLeaveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDragLeaveEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDragLeaveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDragLeaveEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnDragLeaveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_dragleaveevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_DropEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDropEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDropEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDropEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnDropEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_dropevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_ShowEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QShowEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperShowEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QShowEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnShowEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_showevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_HideEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QHideEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperHideEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QHideEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnHideEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_hideevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_NativeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        return vtextemoticonswidgetsemoticontexteditselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperNativeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        return vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnNativeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_nativeevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_ChangeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* param1) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperChangeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* param1) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnChangeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_changeevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_Metric(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector) {
        return vtextemoticonswidgetsemoticontexteditselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMetric(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))) {
        return vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMetric(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_metric_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_InitPainter(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, QPainter* painter) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperInitPainter(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, QPainter* painter) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnInitPainter(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_initpainter_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextEmoticonsWidgets__EmoticonTextEditSelector_Redirected(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, QPoint* offset) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector) {
        return vtextemoticonswidgetsemoticontexteditselector->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperRedirected(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, QPoint* offset) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))) {
        return vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnRedirected(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_redirected_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextEmoticonsWidgets__EmoticonTextEditSelector_SharedPainter(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector) {
        return vtextemoticonswidgetsemoticontexteditselector->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperSharedPainter(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))) {
        return vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnSharedPainter(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_sharedpainter_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QInputMethodEvent* param1) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperInputMethodEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QInputMethodEvent* param1) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnInputMethodEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_inputmethodevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodQuery(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperInputMethodQuery(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1) {
    return new QVariant(self->TextEmoticonsWidgets::EmoticonTextEditSelector::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnInputMethodQuery(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_inputmethodquery_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_FocusNextPrevChild(TextEmoticonsWidgets__EmoticonTextEditSelector* self, bool next) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        return vtextemoticonswidgetsemoticontexteditselector->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusNextPrevChild(TextEmoticonsWidgets__EmoticonTextEditSelector* self, bool next) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        return vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnFocusNextPrevChild(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_focusnextprevchild_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_EventFilter(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperEventFilter(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QObject* watched, QEvent* event) {
    return self->TextEmoticonsWidgets::EmoticonTextEditSelector::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnEventFilter(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_eventfilter_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_TimerEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QTimerEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperTimerEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QTimerEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnTimerEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_timerevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_ChildEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QChildEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperChildEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QChildEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnChildEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_childevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_CustomEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperCustomEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnCustomEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_customevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_ConnectNotify(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperConnectNotify(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnConnectNotify(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_connectnotify_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_DisconnectNotify(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector) {
        vtextemoticonswidgetsemoticontexteditselector->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDisconnectNotify(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->TextEmoticonsWidgets::EmoticonTextEditSelector::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditSelector::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnDisconnectNotify(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))
        vtextemoticonswidgetsemoticontexteditselector->textemoticonswidgets__emoticontexteditselector_disconnectnotify_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_UpdateMicroFocus(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextEmoticonsWidgets::EmoticonTextEditSelector::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_Create(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::create();
    } else
        qFatal("Error: Protected method TextEmoticonsWidgets::EmoticonTextEditSelector::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_Destroy(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        vtextemoticonswidgetsemoticontexteditselector->VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::destroy();
    } else
        qFatal("Error: Protected method TextEmoticonsWidgets::EmoticonTextEditSelector::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_FocusNextChild(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        return vtextemoticonswidgetsemoticontexteditselector->VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::focusNextChild();
    } else
        qFatal("Error: Protected method TextEmoticonsWidgets::EmoticonTextEditSelector::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_FocusPreviousChild(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self)) {
        return vtextemoticonswidgetsemoticontexteditselector->VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextEmoticonsWidgets::EmoticonTextEditSelector::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextEmoticonsWidgets__EmoticonTextEditSelector_Sender(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))) {
        return vtextemoticonswidgetsemoticontexteditselector->VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::sender();
    } else
        qFatal("Error: Protected method TextEmoticonsWidgets::EmoticonTextEditSelector::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_SenderSignalIndex(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))) {
        return vtextemoticonswidgetsemoticontexteditselector->VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextEmoticonsWidgets::EmoticonTextEditSelector::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_Receivers(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, const char* signal) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))) {
        return vtextemoticonswidgetsemoticontexteditselector->VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::receivers(signal);
    } else
        qFatal("Error: Protected method TextEmoticonsWidgets::EmoticonTextEditSelector::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_IsSignalConnected(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))) {
        return vtextemoticonswidgetsemoticontexteditselector->VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextEmoticonsWidgets::EmoticonTextEditSelector::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextEmoticonsWidgets__EmoticonTextEditSelector_GetDecodedMetricF(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, int metricA, int metricB) {
    if (auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self))) {
        return vtextemoticonswidgetsemoticontexteditselector->VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextEmoticonsWidgets::EmoticonTextEditSelector::getDecodedMetricF called without a directly constructed type");
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_Delete(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    delete self;
}
