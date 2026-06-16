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

// Base class handler implementation
QMetaObject* TextTranslator__TranslatorConfigureLanguageListWidget_SuperMetaObject(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtexttranslatortranslatorconfigurelanguagelistwidget->metaObject();
    } else {
        return (QMetaObject*)self->TextTranslator::TranslatorConfigureLanguageListWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMetaObject(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_MetaObject_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextTranslator__TranslatorConfigureLanguageListWidget_SuperMetacast(TextTranslator__TranslatorConfigureLanguageListWidget* self, const char* param1) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Metacast_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->qt_metacast(param1);
    } else {
        return self->TextTranslator::TranslatorConfigureLanguageListWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMetacast(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Metacast_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_SuperMetacall(TextTranslator__TranslatorConfigureLanguageListWidget* self, int param1, int param2, void** param3) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Metacall_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextTranslator::TranslatorConfigureLanguageListWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMetacall(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Metacall_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_DevType(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->devType();
    } else {
        return self->TextTranslator::TranslatorConfigureLanguageListWidget::devType();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_SuperDevType(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_DevType_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->devType();
    } else {
        return self->TextTranslator::TranslatorConfigureLanguageListWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnDevType(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_DevType_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SetVisible(TextTranslator__TranslatorConfigureLanguageListWidget* self, bool visible) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setVisible(visible);
    } else {
        self->TextTranslator::TranslatorConfigureLanguageListWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperSetVisible(TextTranslator__TranslatorConfigureLanguageListWidget* self, bool visible) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_SetVisible_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->setVisible(visible);
    } else {
        self->TextTranslator::TranslatorConfigureLanguageListWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnSetVisible(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_SetVisible_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorConfigureLanguageListWidget_SizeHint(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return new QSize(vtexttranslatortranslatorconfigurelanguagelistwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextTranslator__TranslatorConfigureLanguageListWidget_SuperSizeHint(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_SizeHint_IsBase(true);
        return new QSize(vtexttranslatortranslatorconfigurelanguagelistwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnSizeHint(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_SizeHint_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorConfigureLanguageListWidget_MinimumSizeHint(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return new QSize(vtexttranslatortranslatorconfigurelanguagelistwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextTranslator__TranslatorConfigureLanguageListWidget_SuperMinimumSizeHint(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtexttranslatortranslatorconfigurelanguagelistwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMinimumSizeHint(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_HeightForWidth(const TextTranslator__TranslatorConfigureLanguageListWidget* self, int param1) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextTranslator::TranslatorConfigureLanguageListWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_SuperHeightForWidth(const TextTranslator__TranslatorConfigureLanguageListWidget* self, int param1) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_HeightForWidth_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextTranslator::TranslatorConfigureLanguageListWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnHeightForWidth(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_HasHeightForWidth(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->hasHeightForWidth();
    } else {
        return self->TextTranslator::TranslatorConfigureLanguageListWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperHasHeightForWidth(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_HasHeightForWidth_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->hasHeightForWidth();
    } else {
        return self->TextTranslator::TranslatorConfigureLanguageListWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnHasHeightForWidth(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextTranslator__TranslatorConfigureLanguageListWidget_PaintEngine(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->paintEngine();
    } else {
        return self->TextTranslator::TranslatorConfigureLanguageListWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextTranslator__TranslatorConfigureLanguageListWidget_SuperPaintEngine(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_PaintEngine_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->paintEngine();
    } else {
        return self->TextTranslator::TranslatorConfigureLanguageListWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnPaintEngine(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_Event(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->event(event);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Event_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->event(event);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Event_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_MousePressEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->mousePressEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperMousePressEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_MousePressEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->mousePressEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMousePressEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_MouseReleaseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperMouseReleaseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_MouseReleaseEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMouseReleaseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_MouseDoubleClickEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperMouseDoubleClickEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_MouseDoubleClickEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMouseDoubleClickEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_MouseMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperMouseMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_MouseMoveEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMouseMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_WheelEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QWheelEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->wheelEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperWheelEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QWheelEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_WheelEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->wheelEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnWheelEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_KeyPressEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->keyPressEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperKeyPressEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_KeyPressEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->keyPressEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnKeyPressEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_KeyReleaseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperKeyReleaseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_KeyReleaseEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnKeyReleaseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_FocusInEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->focusInEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusInEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_FocusInEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->focusInEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnFocusInEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_FocusOutEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->focusOutEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusOutEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_FocusOutEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->focusOutEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnFocusOutEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_EnterEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEnterEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->enterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperEnterEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEnterEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_EnterEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->enterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnEnterEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_LeaveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->leaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperLeaveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_LeaveEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->leaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnLeaveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_PaintEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QPaintEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->paintEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperPaintEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QPaintEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_PaintEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->paintEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnPaintEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_MoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMoveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->moveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QMoveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_MoveEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->moveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_ResizeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QResizeEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->resizeEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperResizeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QResizeEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_ResizeEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->resizeEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnResizeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_CloseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QCloseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->closeEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperCloseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QCloseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_CloseEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->closeEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnCloseEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_ContextMenuEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QContextMenuEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperContextMenuEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QContextMenuEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_ContextMenuEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnContextMenuEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_TabletEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QTabletEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->tabletEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperTabletEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QTabletEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_TabletEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->tabletEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnTabletEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_ActionEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QActionEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->actionEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperActionEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QActionEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_ActionEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->actionEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnActionEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_DragEnterEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDragEnterEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDragEnterEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDragEnterEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_DragEnterEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnDragEnterEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_DragMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDragMoveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDragMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDragMoveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_DragMoveEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnDragMoveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_DragLeaveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDragLeaveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDragLeaveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDragLeaveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_DragLeaveEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnDragLeaveEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_DropEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDropEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->dropEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDropEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QDropEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_DropEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->dropEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnDropEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_DropEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_ShowEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QShowEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->showEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperShowEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QShowEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_ShowEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->showEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnShowEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_HideEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QHideEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->hideEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperHideEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QHideEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_HideEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->hideEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnHideEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_HideEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_NativeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperNativeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_NativeEvent_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnNativeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_ChangeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* param1) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->changeEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperChangeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* param1) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_ChangeEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->changeEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnChangeEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_Metric(const TextTranslator__TranslatorConfigureLanguageListWidget* self, int param1) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_SuperMetric(const TextTranslator__TranslatorConfigureLanguageListWidget* self, int param1) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Metric_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnMetric(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Metric_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_InitPainter(const TextTranslator__TranslatorConfigureLanguageListWidget* self, QPainter* painter) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->initPainter(painter);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperInitPainter(const TextTranslator__TranslatorConfigureLanguageListWidget* self, QPainter* painter) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_InitPainter_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->initPainter(painter);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnInitPainter(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_InitPainter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextTranslator__TranslatorConfigureLanguageListWidget_Redirected(const TextTranslator__TranslatorConfigureLanguageListWidget* self, QPoint* offset) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->redirected(offset);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextTranslator__TranslatorConfigureLanguageListWidget_SuperRedirected(const TextTranslator__TranslatorConfigureLanguageListWidget* self, QPoint* offset) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Redirected_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->redirected(offset);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnRedirected(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Redirected_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextTranslator__TranslatorConfigureLanguageListWidget_SharedPainter(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->sharedPainter();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextTranslator__TranslatorConfigureLanguageListWidget_SuperSharedPainter(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_SharedPainter_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->sharedPainter();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnSharedPainter(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_InputMethodEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QInputMethodEvent* param1) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperInputMethodEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QInputMethodEvent* param1) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_InputMethodEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnInputMethodEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextTranslator__TranslatorConfigureLanguageListWidget_InputMethodQuery(const TextTranslator__TranslatorConfigureLanguageListWidget* self, int param1) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return new QVariant(vtexttranslatortranslatorconfigurelanguagelistwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextTranslator__TranslatorConfigureLanguageListWidget_SuperInputMethodQuery(const TextTranslator__TranslatorConfigureLanguageListWidget* self, int param1) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtexttranslatortranslatorconfigurelanguagelistwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnInputMethodQuery(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_FocusNextPrevChild(TextTranslator__TranslatorConfigureLanguageListWidget* self, bool next) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusNextPrevChild(TextTranslator__TranslatorConfigureLanguageListWidget* self, bool next) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_FocusNextPrevChild_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnFocusNextPrevChild(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_EventFilter(TextTranslator__TranslatorConfigureLanguageListWidget* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorConfigureLanguageListWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperEventFilter(TextTranslator__TranslatorConfigureLanguageListWidget* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_EventFilter_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorConfigureLanguageListWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnEventFilter(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_EventFilter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_TimerEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperTimerEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_TimerEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnTimerEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_ChildEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperChildEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_ChildEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnChildEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_CustomEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperCustomEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_CustomEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnCustomEvent(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_ConnectNotify(TextTranslator__TranslatorConfigureLanguageListWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperConnectNotify(TextTranslator__TranslatorConfigureLanguageListWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_ConnectNotify_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnConnectNotify(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_DisconnectNotify(TextTranslator__TranslatorConfigureLanguageListWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDisconnectNotify(TextTranslator__TranslatorConfigureLanguageListWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_DisconnectNotify_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnDisconnectNotify(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_UpdateMicroFocus(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->updateMicroFocus();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperUpdateMicroFocus(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_UpdateMicroFocus_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->updateMicroFocus();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnUpdateMicroFocus(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_Create(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->create();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->create();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperCreate(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Create_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->create();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnCreate(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Create_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_Destroy(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->destroy();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDestroy(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Destroy_IsBase(true);
        vtexttranslatortranslatorconfigurelanguagelistwidget->destroy();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnDestroy(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Destroy_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_FocusNextChild(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->focusNextChild();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusNextChild(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_FocusNextChild_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->focusNextChild();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnFocusNextChild(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_FocusPreviousChild(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->focusPreviousChild();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusPreviousChild(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_FocusPreviousChild_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->focusPreviousChild();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnFocusPreviousChild(TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self);
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextTranslator__TranslatorConfigureLanguageListWidget_Sender(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextTranslator__TranslatorConfigureLanguageListWidget_SuperSender(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Sender_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnSender(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Sender_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_SenderSignalIndex(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_SuperSenderSignalIndex(const TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_SenderSignalIndex_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnSenderSignalIndex(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_Receivers(const TextTranslator__TranslatorConfigureLanguageListWidget* self, const char* signal) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureLanguageListWidget_SuperReceivers(const TextTranslator__TranslatorConfigureLanguageListWidget* self, const char* signal) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Receivers_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnReceivers(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_Receivers_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_IsSignalConnected(const TextTranslator__TranslatorConfigureLanguageListWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperIsSignalConnected(const TextTranslator__TranslatorConfigureLanguageListWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_IsSignalConnected_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnIsSignalConnected(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextTranslator__TranslatorConfigureLanguageListWidget_GetDecodedMetricF(const TextTranslator__TranslatorConfigureLanguageListWidget* self, int metricA, int metricB) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        return vtexttranslatortranslatorconfigurelanguagelistwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextTranslator__TranslatorConfigureLanguageListWidget_SuperGetDecodedMetricF(const TextTranslator__TranslatorConfigureLanguageListWidget* self, int metricA, int metricB) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_GetDecodedMetricF_IsBase(true);
        return vtexttranslatortranslatorconfigurelanguagelistwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureLanguageListWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureLanguageListWidget_OnGetDecodedMetricF(const TextTranslator__TranslatorConfigureLanguageListWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelanguagelistwidget = const_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureLanguageListWidget*>(self));
    if (vtexttranslatortranslatorconfigurelanguagelistwidget && vtexttranslatortranslatorconfigurelanguagelistwidget->isVirtualTextTranslatorTranslatorConfigureLanguageListWidget) {
        vtexttranslatortranslatorconfigurelanguagelistwidget->setTextTranslator__TranslatorConfigureLanguageListWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureLanguageListWidget::TextTranslator__TranslatorConfigureLanguageListWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextTranslator__TranslatorConfigureLanguageListWidget_Delete(TextTranslator__TranslatorConfigureLanguageListWidget* self) {
    delete self;
}
