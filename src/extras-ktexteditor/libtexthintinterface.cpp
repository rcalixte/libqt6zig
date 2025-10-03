#include <KTextEditor/Cursor>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__TextHintProvider
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View
#include <QString>
#include <QByteArray>
#include <cstring>
#include <texthintinterface.h>
#include "libtexthintinterface.h"
#include "libtexthintinterface.hxx"

KTextEditor__TextHintProvider* KTextEditor__TextHintProvider_new() {
    return new VirtualKTextEditorTextHintProvider();
}

libqt_string KTextEditor__TextHintProvider_TextHint(KTextEditor__TextHintProvider* self, KTextEditor__View* view, const KTextEditor__Cursor* position) {
    auto* vktexteditor__texthintprovider = dynamic_cast<VirtualKTextEditorTextHintProvider*>(self);
    if (vktexteditor__texthintprovider && vktexteditor__texthintprovider->isVirtualKTextEditorTextHintProvider) {
        QString _ret = vktexteditor__texthintprovider->textHint(view, *position);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKTextEditorTextHintProvider*)self)->textHint(view, *position);
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
libqt_string KTextEditor__TextHintProvider_QBaseTextHint(KTextEditor__TextHintProvider* self, KTextEditor__View* view, const KTextEditor__Cursor* position) {
    auto* vktexteditortexthintprovider = dynamic_cast<VirtualKTextEditorTextHintProvider*>(self);
    if (vktexteditortexthintprovider && vktexteditortexthintprovider->isVirtualKTextEditorTextHintProvider) {
        vktexteditortexthintprovider->setKTextEditor__TextHintProvider_TextHint_IsBase(true);
        QString _ret = vktexteditortexthintprovider->textHint(view, *position);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKTextEditorTextHintProvider*)self)->textHint(view, *position);
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
void KTextEditor__TextHintProvider_OnTextHint(KTextEditor__TextHintProvider* self, intptr_t slot) {
    auto* vktexteditortexthintprovider = dynamic_cast<VirtualKTextEditorTextHintProvider*>(self);
    if (vktexteditortexthintprovider && vktexteditortexthintprovider->isVirtualKTextEditorTextHintProvider) {
        vktexteditortexthintprovider->setKTextEditor__TextHintProvider_TextHint_Callback(reinterpret_cast<VirtualKTextEditorTextHintProvider::KTextEditor__TextHintProvider_TextHint_Callback>(slot));
    }
}

void KTextEditor__TextHintProvider_Delete(KTextEditor__TextHintProvider* self) {
    delete self;
}
