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
#include <QVector>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarAction
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarError
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarResultWidget
#include <grammarresultwidget.h>
#include "libgrammarresultwidget.h"
#include "libgrammarresultwidget.hxx"

TextGrammarCheck__GrammarResultWidget* TextGrammarCheck__GrammarResultWidget_new(QWidget* parent) {
    return new VirtualTextGrammarCheckGrammarResultWidget(parent);
}

TextGrammarCheck__GrammarResultWidget* TextGrammarCheck__GrammarResultWidget_new2() {
    return new VirtualTextGrammarCheckGrammarResultWidget();
}

QMetaObject* TextGrammarCheck__GrammarResultWidget_MetaObject(const TextGrammarCheck__GrammarResultWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextGrammarCheck__GrammarResultWidget_Metacast(TextGrammarCheck__GrammarResultWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextGrammarCheck__GrammarResultWidget_Metacall(TextGrammarCheck__GrammarResultWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextGrammarCheck__GrammarResultWidget_Tr(const char* s) {
    auto _ret = TextGrammarCheck::GrammarResultWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__GrammarResultWidget_SetText(TextGrammarCheck__GrammarResultWidget* self, const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    self->setText(str_QString);
}

void TextGrammarCheck__GrammarResultWidget_CheckGrammar(TextGrammarCheck__GrammarResultWidget* self) {
    self->checkGrammar();
}

void TextGrammarCheck__GrammarResultWidget_ApplyGrammarResult(TextGrammarCheck__GrammarResultWidget* self, const libqt_list /* of TextGrammarCheck__GrammarError* */ infos) {
    QVector<TextGrammarCheck::GrammarError> infos_QVector;
    infos_QVector.reserve(infos.len);
    TextGrammarCheck__GrammarError** infos_arr = static_cast<TextGrammarCheck__GrammarError**>(infos.data);
    for (size_t i = 0; i < infos.len; ++i) {
        infos_QVector.push_back(*(infos_arr[i]));
    }
    self->applyGrammarResult(infos_QVector);
}

void TextGrammarCheck__GrammarResultWidget_ReplaceText(TextGrammarCheck__GrammarResultWidget* self, const TextGrammarCheck__GrammarAction* act) {
    self->replaceText(*act);
}

void TextGrammarCheck__GrammarResultWidget_Connect_ReplaceText(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammarResultWidget*, TextGrammarCheck__GrammarAction*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammarResultWidget*, TextGrammarCheck__GrammarAction*)>(slot);
    TextGrammarCheck::GrammarResultWidget::connect(self,
                                                   static_cast<void (TextGrammarCheck::GrammarResultWidget::*)(const TextGrammarCheck::GrammarAction&)>(&TextGrammarCheck::GrammarResultWidget::replaceText),
                                                   [self, slotFunc](const TextGrammarCheck::GrammarAction& act) {
                                                       const TextGrammarCheck::GrammarAction& act_ret = act;
                                                       // Cast returned reference into pointer
                                                       TextGrammarCheck__GrammarAction* sigval1 = const_cast<TextGrammarCheck::GrammarAction*>(&act_ret);
                                                       slotFunc(self, sigval1);
                                                   });
}

void TextGrammarCheck__GrammarResultWidget_CheckAgain(TextGrammarCheck__GrammarResultWidget* self) {
    self->checkAgain();
}

void TextGrammarCheck__GrammarResultWidget_Connect_CheckAgain(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammarResultWidget*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammarResultWidget*)>(slot);
    TextGrammarCheck::GrammarResultWidget::connect(self,
                                                   static_cast<void (TextGrammarCheck::GrammarResultWidget::*)()>(&TextGrammarCheck::GrammarResultWidget::checkAgain),
                                                   [self, slotFunc]() {
                                                       slotFunc(self);
                                                   });
}

void TextGrammarCheck__GrammarResultWidget_CloseChecker(TextGrammarCheck__GrammarResultWidget* self) {
    self->closeChecker();
}

void TextGrammarCheck__GrammarResultWidget_Connect_CloseChecker(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammarResultWidget*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammarResultWidget*)>(slot);
    TextGrammarCheck::GrammarResultWidget::connect(self,
                                                   static_cast<void (TextGrammarCheck::GrammarResultWidget::*)()>(&TextGrammarCheck::GrammarResultWidget::closeChecker),
                                                   [self, slotFunc]() {
                                                       slotFunc(self);
                                                   });
}

void TextGrammarCheck__GrammarResultWidget_Configure(TextGrammarCheck__GrammarResultWidget* self) {
    self->configure();
}

void TextGrammarCheck__GrammarResultWidget_Connect_Configure(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammarResultWidget*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammarResultWidget*)>(slot);
    TextGrammarCheck::GrammarResultWidget::connect(self,
                                                   static_cast<void (TextGrammarCheck::GrammarResultWidget::*)()>(&TextGrammarCheck::GrammarResultWidget::configure),
                                                   [self, slotFunc]() {
                                                       slotFunc(self);
                                                   });
}

void TextGrammarCheck__GrammarResultWidget_AddExtraWidget(TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheck__grammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheck__grammarresultwidget) {
        vtextgrammarcheck__grammarresultwidget->addExtraWidget();
    }
}

libqt_string TextGrammarCheck__GrammarResultWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextGrammarCheck::GrammarResultWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__GrammarResultWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextGrammarCheck::GrammarResultWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextGrammarCheck__GrammarResultWidget_SuperMetaObject(const TextGrammarCheck__GrammarResultWidget* self) {
    return (QMetaObject*)self->TextGrammarCheck::GrammarResultWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMetaObject(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self)))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_metaobject_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextGrammarCheck__GrammarResultWidget_SuperMetacast(TextGrammarCheck__GrammarResultWidget* self, const char* param1) {
    return self->TextGrammarCheck::GrammarResultWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMetacast(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_metacast_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultWidget_SuperMetacall(TextGrammarCheck__GrammarResultWidget* self, int param1, int param2, void** param3) {
    return self->TextGrammarCheck::GrammarResultWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMetacall(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_metacall_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnCheckGrammar(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_checkgrammar_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_CheckGrammar_Callback>(slot);
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperAddExtraWidget(TextGrammarCheck__GrammarResultWidget* self) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::addExtraWidget();
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::addExtraWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnAddExtraWidget(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_addextrawidget_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_AddExtraWidget_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultWidget_DevType(const TextGrammarCheck__GrammarResultWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultWidget_SuperDevType(const TextGrammarCheck__GrammarResultWidget* self) {
    return self->TextGrammarCheck::GrammarResultWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnDevType(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self)))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_devtype_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_SetVisible(TextGrammarCheck__GrammarResultWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperSetVisible(TextGrammarCheck__GrammarResultWidget* self, bool visible) {
    self->TextGrammarCheck::GrammarResultWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnSetVisible(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_setvisible_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammarResultWidget_SizeHint(const TextGrammarCheck__GrammarResultWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammarResultWidget_SuperSizeHint(const TextGrammarCheck__GrammarResultWidget* self) {
    return new QSize(self->TextGrammarCheck::GrammarResultWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnSizeHint(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self)))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_sizehint_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammarResultWidget_MinimumSizeHint(const TextGrammarCheck__GrammarResultWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammarResultWidget_SuperMinimumSizeHint(const TextGrammarCheck__GrammarResultWidget* self) {
    return new QSize(self->TextGrammarCheck::GrammarResultWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMinimumSizeHint(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self)))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_minimumsizehint_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultWidget_HeightForWidth(const TextGrammarCheck__GrammarResultWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultWidget_SuperHeightForWidth(const TextGrammarCheck__GrammarResultWidget* self, int param1) {
    return self->TextGrammarCheck::GrammarResultWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnHeightForWidth(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self)))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_heightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultWidget_HasHeightForWidth(const TextGrammarCheck__GrammarResultWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultWidget_SuperHasHeightForWidth(const TextGrammarCheck__GrammarResultWidget* self) {
    return self->TextGrammarCheck::GrammarResultWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnHasHeightForWidth(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self)))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__GrammarResultWidget_PaintEngine(const TextGrammarCheck__GrammarResultWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__GrammarResultWidget_SuperPaintEngine(const TextGrammarCheck__GrammarResultWidget* self) {
    return self->TextGrammarCheck::GrammarResultWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnPaintEngine(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self)))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_paintengine_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultWidget_Event(TextGrammarCheck__GrammarResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        return vtextgrammarcheckgrammarresultwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultWidget_SuperEvent(TextGrammarCheck__GrammarResultWidget* self, QEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        return vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::event(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_event_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_MousePressEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperMousePressEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMousePressEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_mousepressevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_MouseReleaseEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperMouseReleaseEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMouseReleaseEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_MouseDoubleClickEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperMouseDoubleClickEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMouseDoubleClickEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_MouseMoveEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperMouseMoveEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMouseMoveEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_mousemoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_WheelEvent(TextGrammarCheck__GrammarResultWidget* self, QWheelEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperWheelEvent(TextGrammarCheck__GrammarResultWidget* self, QWheelEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnWheelEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_wheelevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_KeyPressEvent(TextGrammarCheck__GrammarResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperKeyPressEvent(TextGrammarCheck__GrammarResultWidget* self, QKeyEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnKeyPressEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_keypressevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_KeyReleaseEvent(TextGrammarCheck__GrammarResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperKeyReleaseEvent(TextGrammarCheck__GrammarResultWidget* self, QKeyEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnKeyReleaseEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_FocusInEvent(TextGrammarCheck__GrammarResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperFocusInEvent(TextGrammarCheck__GrammarResultWidget* self, QFocusEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnFocusInEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_focusinevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_FocusOutEvent(TextGrammarCheck__GrammarResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperFocusOutEvent(TextGrammarCheck__GrammarResultWidget* self, QFocusEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnFocusOutEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_focusoutevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_EnterEvent(TextGrammarCheck__GrammarResultWidget* self, QEnterEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperEnterEvent(TextGrammarCheck__GrammarResultWidget* self, QEnterEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnEnterEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_enterevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_LeaveEvent(TextGrammarCheck__GrammarResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperLeaveEvent(TextGrammarCheck__GrammarResultWidget* self, QEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnLeaveEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_leaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_PaintEvent(TextGrammarCheck__GrammarResultWidget* self, QPaintEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperPaintEvent(TextGrammarCheck__GrammarResultWidget* self, QPaintEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnPaintEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_paintevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_MoveEvent(TextGrammarCheck__GrammarResultWidget* self, QMoveEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperMoveEvent(TextGrammarCheck__GrammarResultWidget* self, QMoveEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMoveEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_moveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_ResizeEvent(TextGrammarCheck__GrammarResultWidget* self, QResizeEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperResizeEvent(TextGrammarCheck__GrammarResultWidget* self, QResizeEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnResizeEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_resizeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_CloseEvent(TextGrammarCheck__GrammarResultWidget* self, QCloseEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperCloseEvent(TextGrammarCheck__GrammarResultWidget* self, QCloseEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnCloseEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_closeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_ContextMenuEvent(TextGrammarCheck__GrammarResultWidget* self, QContextMenuEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperContextMenuEvent(TextGrammarCheck__GrammarResultWidget* self, QContextMenuEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnContextMenuEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_contextmenuevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_TabletEvent(TextGrammarCheck__GrammarResultWidget* self, QTabletEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperTabletEvent(TextGrammarCheck__GrammarResultWidget* self, QTabletEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnTabletEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_tabletevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_ActionEvent(TextGrammarCheck__GrammarResultWidget* self, QActionEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperActionEvent(TextGrammarCheck__GrammarResultWidget* self, QActionEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnActionEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_actionevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_DragEnterEvent(TextGrammarCheck__GrammarResultWidget* self, QDragEnterEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperDragEnterEvent(TextGrammarCheck__GrammarResultWidget* self, QDragEnterEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnDragEnterEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_dragenterevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_DragMoveEvent(TextGrammarCheck__GrammarResultWidget* self, QDragMoveEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperDragMoveEvent(TextGrammarCheck__GrammarResultWidget* self, QDragMoveEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnDragMoveEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_dragmoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_DragLeaveEvent(TextGrammarCheck__GrammarResultWidget* self, QDragLeaveEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperDragLeaveEvent(TextGrammarCheck__GrammarResultWidget* self, QDragLeaveEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnDragLeaveEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_dragleaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_DropEvent(TextGrammarCheck__GrammarResultWidget* self, QDropEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperDropEvent(TextGrammarCheck__GrammarResultWidget* self, QDropEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnDropEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_dropevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_ShowEvent(TextGrammarCheck__GrammarResultWidget* self, QShowEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperShowEvent(TextGrammarCheck__GrammarResultWidget* self, QShowEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnShowEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_showevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_HideEvent(TextGrammarCheck__GrammarResultWidget* self, QHideEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperHideEvent(TextGrammarCheck__GrammarResultWidget* self, QHideEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnHideEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_hideevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultWidget_NativeEvent(TextGrammarCheck__GrammarResultWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        return vtextgrammarcheckgrammarresultwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultWidget_SuperNativeEvent(TextGrammarCheck__GrammarResultWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        return vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnNativeEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_nativeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_ChangeEvent(TextGrammarCheck__GrammarResultWidget* self, QEvent* param1) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperChangeEvent(TextGrammarCheck__GrammarResultWidget* self, QEvent* param1) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnChangeEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_changeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultWidget_Metric(const TextGrammarCheck__GrammarResultWidget* self, int param1) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget) {
        return vtextgrammarcheckgrammarresultwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultWidget_SuperMetric(const TextGrammarCheck__GrammarResultWidget* self, int param1) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self))) {
        return vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMetric(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self)))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_metric_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_InitPainter(const TextGrammarCheck__GrammarResultWidget* self, QPainter* painter) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperInitPainter(const TextGrammarCheck__GrammarResultWidget* self, QPainter* painter) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self))) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnInitPainter(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self)))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_initpainter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__GrammarResultWidget_Redirected(const TextGrammarCheck__GrammarResultWidget* self, QPoint* offset) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget) {
        return vtextgrammarcheckgrammarresultwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__GrammarResultWidget_SuperRedirected(const TextGrammarCheck__GrammarResultWidget* self, QPoint* offset) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self))) {
        return vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnRedirected(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self)))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_redirected_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextGrammarCheck__GrammarResultWidget_SharedPainter(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget) {
        return vtextgrammarcheckgrammarresultwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__GrammarResultWidget_SuperSharedPainter(const TextGrammarCheck__GrammarResultWidget* self) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self))) {
        return vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnSharedPainter(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self)))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_sharedpainter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_InputMethodEvent(TextGrammarCheck__GrammarResultWidget* self, QInputMethodEvent* param1) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperInputMethodEvent(TextGrammarCheck__GrammarResultWidget* self, QInputMethodEvent* param1) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnInputMethodEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_inputmethodevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextGrammarCheck__GrammarResultWidget_InputMethodQuery(const TextGrammarCheck__GrammarResultWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextGrammarCheck__GrammarResultWidget_SuperInputMethodQuery(const TextGrammarCheck__GrammarResultWidget* self, int param1) {
    return new QVariant(self->TextGrammarCheck::GrammarResultWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnInputMethodQuery(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self)))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_inputmethodquery_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultWidget_FocusNextPrevChild(TextGrammarCheck__GrammarResultWidget* self, bool next) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        return vtextgrammarcheckgrammarresultwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultWidget_SuperFocusNextPrevChild(TextGrammarCheck__GrammarResultWidget* self, bool next) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        return vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnFocusNextPrevChild(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultWidget_EventFilter(TextGrammarCheck__GrammarResultWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultWidget_SuperEventFilter(TextGrammarCheck__GrammarResultWidget* self, QObject* watched, QEvent* event) {
    return self->TextGrammarCheck::GrammarResultWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnEventFilter(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_eventfilter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_TimerEvent(TextGrammarCheck__GrammarResultWidget* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperTimerEvent(TextGrammarCheck__GrammarResultWidget* self, QTimerEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnTimerEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_timerevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_ChildEvent(TextGrammarCheck__GrammarResultWidget* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperChildEvent(TextGrammarCheck__GrammarResultWidget* self, QChildEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnChildEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_childevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_CustomEvent(TextGrammarCheck__GrammarResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperCustomEvent(TextGrammarCheck__GrammarResultWidget* self, QEvent* event) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnCustomEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_customevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_ConnectNotify(TextGrammarCheck__GrammarResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperConnectNotify(TextGrammarCheck__GrammarResultWidget* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnConnectNotify(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_connectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_DisconnectNotify(TextGrammarCheck__GrammarResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget) {
        vtextgrammarcheckgrammarresultwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperDisconnectNotify(TextGrammarCheck__GrammarResultWidget* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->TextGrammarCheck::GrammarResultWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnDisconnectNotify(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self))
        vtextgrammarcheckgrammarresultwidget->textgrammarcheck__grammarresultwidget_disconnectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammarResultWidget_UpdateMicroFocus(TextGrammarCheck__GrammarResultWidget* self) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->VirtualTextGrammarCheckGrammarResultWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammarResultWidget_Create(TextGrammarCheck__GrammarResultWidget* self) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->VirtualTextGrammarCheckGrammarResultWidget::create();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammarResultWidget_Destroy(TextGrammarCheck__GrammarResultWidget* self) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        vtextgrammarcheckgrammarresultwidget->VirtualTextGrammarCheckGrammarResultWidget::destroy();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammarResultWidget_FocusNextChild(TextGrammarCheck__GrammarResultWidget* self) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        return vtextgrammarcheckgrammarresultwidget->VirtualTextGrammarCheckGrammarResultWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammarResultWidget_FocusPreviousChild(TextGrammarCheck__GrammarResultWidget* self) {
    if (auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self)) {
        return vtextgrammarcheckgrammarresultwidget->VirtualTextGrammarCheckGrammarResultWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextGrammarCheck__GrammarResultWidget_Sender(const TextGrammarCheck__GrammarResultWidget* self) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self))) {
        return vtextgrammarcheckgrammarresultwidget->VirtualTextGrammarCheckGrammarResultWidget::sender();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__GrammarResultWidget_SenderSignalIndex(const TextGrammarCheck__GrammarResultWidget* self) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self))) {
        return vtextgrammarcheckgrammarresultwidget->VirtualTextGrammarCheckGrammarResultWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__GrammarResultWidget_Receivers(const TextGrammarCheck__GrammarResultWidget* self, const char* signal) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self))) {
        return vtextgrammarcheckgrammarresultwidget->VirtualTextGrammarCheckGrammarResultWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammarResultWidget_IsSignalConnected(const TextGrammarCheck__GrammarResultWidget* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self))) {
        return vtextgrammarcheckgrammarresultwidget->VirtualTextGrammarCheckGrammarResultWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextGrammarCheck__GrammarResultWidget_GetDecodedMetricF(const TextGrammarCheck__GrammarResultWidget* self, int metricA, int metricB) {
    if (auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self))) {
        return vtextgrammarcheckgrammarresultwidget->VirtualTextGrammarCheckGrammarResultWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultWidget::getDecodedMetricF called without a directly constructed type");
}

void TextGrammarCheck__GrammarResultWidget_Delete(TextGrammarCheck__GrammarResultWidget* self) {
    delete self;
}
