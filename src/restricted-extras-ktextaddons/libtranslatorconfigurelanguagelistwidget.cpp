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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorConfigureLanguageListWidget
#include <translatorconfigurelanguagelistwidget.h>
#include "libtranslatorconfigurelanguagelistwidget.h"
#include "libtranslatorconfigurelanguagelistwidget.hxx"

TextTranslator__TranslatorConfigureLanguageListWidget* TextTranslator__TranslatorConfigureLanguageListWidget_new(const libqt_string labelText) {
    QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
    return new VirtualTextTranslatorTranslatorConfigureLanguageListWidget(labelText_QString);
}

TextTranslator__TranslatorConfigureLanguageListWidget* TextTranslator__TranslatorConfigureLanguageListWidget_new2(const libqt_string labelText, QWidget* parent) {
    QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
    return new VirtualTextTranslatorTranslatorConfigureLanguageListWidget(labelText_QString, parent);
}

QMetaObject* TextTranslator__TranslatorConfigureLanguageListWidget_MetaObject(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextTranslator__TranslatorConfigureLanguageListWidget_Metacast(TextTranslator__TranslatorConfigureLanguageListWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextTranslator__TranslatorConfigureLanguageListWidget_Metacall(TextTranslator__TranslatorConfigureLanguageListWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextTranslator__TranslatorConfigureLanguageListWidget_Tr(const char* s) {
    auto _ret = TextTranslator::TranslatorConfigureLanguageListWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextTranslator__TranslatorConfigureLanguageListWidget_Clear(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    self->clear();
}

void TextTranslator__TranslatorConfigureLanguageListWidget_AddItem(TextTranslator__TranslatorConfigureLanguageListWidget* self, const libqt_string translatedStr, const libqt_string languageCode) {
    QString translatedStr_QString = QString::fromUtf8(translatedStr.data, translatedStr.len);
    QString languageCode_QString = QString::fromUtf8(languageCode.data, languageCode.len);
    self->addItem(translatedStr_QString, languageCode_QString);
}

libqt_list /* of libqt_string */ TextTranslator__TranslatorConfigureLanguageListWidget_SelectedLanguages(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    QList<QString> _ret = self->selectedLanguages();
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

void TextTranslator__TranslatorConfigureLanguageListWidget_SetSelectedLanguages(TextTranslator__TranslatorConfigureLanguageListWidget* self, const libqt_list /* of libqt_string */ list) {
    QList<QString> list_QList;
    list_QList.reserve(list.len);
    libqt_string* list_arr = static_cast<libqt_string*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
        list_QList.push_back(list_arr_i_QString);
    }
    self->setSelectedLanguages(list_QList);
}

libqt_string TextTranslator__TranslatorConfigureLanguageListWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextTranslator::TranslatorConfigureLanguageListWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorConfigureLanguageListWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextTranslator::TranslatorConfigureLanguageListWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextTranslator__TranslatorConfigureLanguageListWidget_SuperMetaObject(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    return (QMetaObject*)self->TextTranslator::TranslatorConfigureLanguageListWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMetaObject(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_metaobject_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextTranslator__TranslatorConfigureLanguageListWidget_SuperMetacast(TextTranslator__TranslatorConfigureLanguageListWidget* self, const char* param1) {
    return self->TextTranslator::TranslatorConfigureLanguageListWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMetacast(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_metacast_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_SuperMetacall(TextTranslator__TranslatorConfigureLanguageListWidget* self, int param1, int param2, void** param3) {
    return self->TextTranslator::TranslatorConfigureLanguageListWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMetacall(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_metacall_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_DevType(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_SuperDevType(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    return self->TextTranslator::TranslatorConfigureLanguageListWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnDevType(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_devtype_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SetVisible(TextTranslator__TranslatorConfigureLanguageListWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperSetVisible(TextTranslator__TranslatorConfigureLanguageListWidget* self, bool visible) {
    self->TextTranslator::TranslatorConfigureLanguageListWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnSetVisible(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_setvisible_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorConfigureLanguageListWidget_SizeHint(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextTranslator__TranslatorConfigureLanguageListWidget_SuperSizeHint(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    return new QSize(self->TextTranslator::TranslatorConfigureLanguageListWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnSizeHint(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_sizehint_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorConfigureLanguageListWidget_MinimumSizeHint(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextTranslator__TranslatorConfigureLanguageListWidget_SuperMinimumSizeHint(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    return new QSize(self->TextTranslator::TranslatorConfigureLanguageListWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMinimumSizeHint(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_minimumsizehint_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_HeightForWidth(const TextTranslator__TranslatorConfigureLanguageListWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_SuperHeightForWidth(const TextTranslator__TranslatorConfigureLanguageListWidget* self, int param1) {
    return self->TextTranslator::TranslatorConfigureLanguageListWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnHeightForWidth(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_heightforwidth_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_HasHeightForWidth(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperHasHeightForWidth(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    return self->TextTranslator::TranslatorConfigureLanguageListWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnHasHeightForWidth(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextTranslator__TranslatorConfigureLanguageListWidget_PaintEngine(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextTranslator__TranslatorConfigureLanguageListWidget_SuperPaintEngine(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    return self->TextTranslator::TranslatorConfigureLanguageListWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnPaintEngine(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_paintengine_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_Event(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::event(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_event_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_MousePressEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperMousePressEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMousePressEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_mousepressevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_MouseReleaseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperMouseReleaseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMouseReleaseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_MouseDoubleClickEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperMouseDoubleClickEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMouseDoubleClickEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_MouseMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperMouseMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMouseMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_mousemoveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_WheelEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QWheelEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperWheelEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QWheelEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnWheelEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_wheelevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_KeyPressEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperKeyPressEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QKeyEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnKeyPressEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_keypressevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_KeyReleaseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperKeyReleaseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QKeyEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnKeyReleaseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_FocusInEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusInEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QFocusEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnFocusInEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_focusinevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_FocusOutEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusOutEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QFocusEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnFocusOutEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_focusoutevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_EnterEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEnterEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperEnterEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEnterEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnEnterEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_enterevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_LeaveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperLeaveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnLeaveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_leaveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_PaintEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QPaintEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperPaintEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QPaintEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnPaintEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_paintevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_MoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMoveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMoveEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_moveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_ResizeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QResizeEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperResizeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QResizeEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnResizeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_resizeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_CloseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QCloseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperCloseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QCloseEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnCloseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_closeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_ContextMenuEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QContextMenuEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperContextMenuEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QContextMenuEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnContextMenuEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_contextmenuevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_TabletEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QTabletEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperTabletEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QTabletEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnTabletEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_tabletevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_ActionEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QActionEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperActionEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QActionEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnActionEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_actionevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_DragEnterEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDragEnterEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDragEnterEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDragEnterEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnDragEnterEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_dragenterevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_DragMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDragMoveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDragMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDragMoveEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnDragMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_dragmoveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_DragLeaveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDragLeaveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDragLeaveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDragLeaveEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnDragLeaveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_dragleaveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_DropEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDropEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDropEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDropEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnDropEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_dropevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_ShowEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QShowEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperShowEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QShowEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnShowEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_showevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_HideEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QHideEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperHideEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QHideEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnHideEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_hideevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_NativeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperNativeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnNativeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_nativeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_ChangeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* param1) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperChangeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* param1) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnChangeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_changeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_Metric(const TextTranslator__TranslatorConfigureLanguageListWidget* self, int param1) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_SuperMetric(const TextTranslator__TranslatorConfigureLanguageListWidget* self, int param1) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMetric(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_metric_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_InitPainter(const TextTranslator__TranslatorConfigureLanguageListWidget* self, QPainter* painter) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperInitPainter(const TextTranslator__TranslatorConfigureLanguageListWidget* self, QPainter* painter) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnInitPainter(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_initpainter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextTranslator__TranslatorConfigureLanguageListWidget_Redirected(const TextTranslator__TranslatorConfigureLanguageListWidget* self, QPoint* offset) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextTranslator__TranslatorConfigureLanguageListWidget_SuperRedirected(const TextTranslator__TranslatorConfigureLanguageListWidget* self, QPoint* offset) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnRedirected(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_redirected_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextTranslator__TranslatorConfigureLanguageListWidget_SharedPainter(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextTranslator__TranslatorConfigureLanguageListWidget_SuperSharedPainter(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnSharedPainter(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_sharedpainter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_InputMethodEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QInputMethodEvent* param1) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperInputMethodEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QInputMethodEvent* param1) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnInputMethodEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_inputmethodevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextTranslator__TranslatorConfigureLanguageListWidget_InputMethodQuery(const TextTranslator__TranslatorConfigureLanguageListWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextTranslator__TranslatorConfigureLanguageListWidget_SuperInputMethodQuery(const TextTranslator__TranslatorConfigureLanguageListWidget* self, int param1) {
    return new QVariant(self->TextTranslator::TranslatorConfigureLanguageListWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnInputMethodQuery(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_inputmethodquery_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_FocusNextPrevChild(TextTranslator__TranslatorConfigureLanguageListWidget* self, bool next) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusNextPrevChild(TextTranslator__TranslatorConfigureLanguageListWidget* self, bool next) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnFocusNextPrevChild(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_EventFilter(TextTranslator__TranslatorConfigureLanguageListWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperEventFilter(TextTranslator__TranslatorConfigureLanguageListWidget* self, QObject* watched, QEvent* event) {
    return self->TextTranslator::TranslatorConfigureLanguageListWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnEventFilter(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_eventfilter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_TimerEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperTimerEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QTimerEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnTimerEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_timerevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_ChildEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperChildEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QChildEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnChildEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_childevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_CustomEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperCustomEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnCustomEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_customevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_ConnectNotify(TextTranslator__TranslatorConfigureLanguageListWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperConnectNotify(TextTranslator__TranslatorConfigureLanguageListWidget* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnConnectNotify(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_connectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_DisconnectNotify(TextTranslator__TranslatorConfigureLanguageListWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDisconnectNotify(TextTranslator__TranslatorConfigureLanguageListWidget* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->TextTranslator::TranslatorConfigureLanguageListWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureLanguageListWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnDisconnectNotify(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))
        vtexttranslatortranslatorconfigurelanguagelistwidget->texttranslator__translatorconfigurelanguagelistwidget_disconnectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_UpdateMicroFocus(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->VirtualTextTranslatorTranslatorConfigureLanguageListWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureLanguageListWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_Create(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->VirtualTextTranslatorTranslatorConfigureLanguageListWidget::create();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureLanguageListWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_Destroy(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->VirtualTextTranslatorTranslatorConfigureLanguageListWidget::destroy();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureLanguageListWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_FocusNextChild(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->VirtualTextTranslatorTranslatorConfigureLanguageListWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureLanguageListWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_FocusPreviousChild(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self)) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->VirtualTextTranslatorTranslatorConfigureLanguageListWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureLanguageListWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextTranslator__TranslatorConfigureLanguageListWidget_Sender(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->VirtualTextTranslatorTranslatorConfigureLanguageListWidget::sender();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureLanguageListWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_SenderSignalIndex(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->VirtualTextTranslatorTranslatorConfigureLanguageListWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureLanguageListWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_Receivers(const TextTranslator__TranslatorConfigureLanguageListWidget* self, const char* signal) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->VirtualTextTranslatorTranslatorConfigureLanguageListWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureLanguageListWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_IsSignalConnected(const TextTranslator__TranslatorConfigureLanguageListWidget* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->VirtualTextTranslatorTranslatorConfigureLanguageListWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureLanguageListWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextTranslator__TranslatorConfigureLanguageListWidget_GetDecodedMetricF(const TextTranslator__TranslatorConfigureLanguageListWidget* self, int metricA, int metricB) {
    if (auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->VirtualTextTranslatorTranslatorConfigureLanguageListWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureLanguageListWidget::getDecodedMetricF called without a directly constructed type");
}

void TextTranslator__TranslatorConfigureLanguageListWidget_Delete(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    delete self;
}
