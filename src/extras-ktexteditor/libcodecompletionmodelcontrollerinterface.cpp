#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__CodeCompletionModelControllerInterface
#include <KTextEditor/Cursor>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Range
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View
#include <QChar>
#include <QModelIndex>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <codecompletionmodelcontrollerinterface.h>
#include "libcodecompletionmodelcontrollerinterface.h"
#include "libcodecompletionmodelcontrollerinterface.hxx"

KTextEditor__CodeCompletionModelControllerInterface* KTextEditor__CodeCompletionModelControllerInterface_new() {
    return new VirtualKTextEditorCodeCompletionModelControllerInterface();
}

bool KTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const libqt_string insertedText, bool userInsertion, const KTextEditor__Cursor* position) {
    QString insertedText_QString = QString::fromUtf8(insertedText.data, insertedText.len);
    auto* vktexteditor__codecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditor__codecompletionmodelcontrollerinterface && vktexteditor__codecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        return self->shouldStartCompletion(view, insertedText_QString, userInsertion, *position);
    } else {
        return ((VirtualKTextEditorCodeCompletionModelControllerInterface*)self)->shouldStartCompletion(view, insertedText_QString, userInsertion, *position);
    }
}

KTextEditor__Range* KTextEditor__CodeCompletionModelControllerInterface_CompletionRange(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Cursor* position) {
    auto* vktexteditor__codecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditor__codecompletionmodelcontrollerinterface && vktexteditor__codecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        return new KTextEditor::Range(self->completionRange(view, *position));
    } else {
        return new KTextEditor::Range(((VirtualKTextEditorCodeCompletionModelControllerInterface*)self)->completionRange(view, *position));
    }
}

KTextEditor__Range* KTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Range* range) {
    auto* vktexteditor__codecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditor__codecompletionmodelcontrollerinterface && vktexteditor__codecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        return new KTextEditor::Range(self->updateCompletionRange(view, *range));
    } else {
        return new KTextEditor::Range(((VirtualKTextEditorCodeCompletionModelControllerInterface*)self)->updateCompletionRange(view, *range));
    }
}

libqt_string KTextEditor__CodeCompletionModelControllerInterface_FilterString(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Range* range, const KTextEditor__Cursor* position) {
    auto* vktexteditor__codecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditor__codecompletionmodelcontrollerinterface && vktexteditor__codecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        QString _ret = self->filterString(view, *range, *position);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKTextEditorCodeCompletionModelControllerInterface*)self)->filterString(view, *range, *position);
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

bool KTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Range* range, const libqt_string currentCompletion) {
    QString currentCompletion_QString = QString::fromUtf8(currentCompletion.data, currentCompletion.len);
    auto* vktexteditor__codecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditor__codecompletionmodelcontrollerinterface && vktexteditor__codecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        return self->shouldAbortCompletion(view, *range, currentCompletion_QString);
    } else {
        return ((VirtualKTextEditorCodeCompletionModelControllerInterface*)self)->shouldAbortCompletion(view, *range, currentCompletion_QString);
    }
}

bool KTextEditor__CodeCompletionModelControllerInterface_ShouldExecute(KTextEditor__CodeCompletionModelControllerInterface* self, const QModelIndex* selected, QChar* inserted) {
    auto* vktexteditor__codecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditor__codecompletionmodelcontrollerinterface && vktexteditor__codecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        return self->shouldExecute(*selected, *inserted);
    } else {
        return ((VirtualKTextEditorCodeCompletionModelControllerInterface*)self)->shouldExecute(*selected, *inserted);
    }
}

void KTextEditor__CodeCompletionModelControllerInterface_Aborted(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view) {
    auto* vktexteditor__codecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditor__codecompletionmodelcontrollerinterface && vktexteditor__codecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        self->aborted(view);
    } else {
        ((VirtualKTextEditorCodeCompletionModelControllerInterface*)self)->aborted(view);
    }
}

int KTextEditor__CodeCompletionModelControllerInterface_MatchingItem(KTextEditor__CodeCompletionModelControllerInterface* self, const QModelIndex* matched) {
    auto* vktexteditor__codecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditor__codecompletionmodelcontrollerinterface && vktexteditor__codecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        return static_cast<int>(self->matchingItem(*matched));
    } else {
        return static_cast<int>(((VirtualKTextEditorCodeCompletionModelControllerInterface*)self)->matchingItem(*matched));
    }
}

bool KTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames(const KTextEditor__CodeCompletionModelControllerInterface* self) {
    auto* vktexteditor__codecompletionmodelcontrollerinterface = dynamic_cast<const VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditor__codecompletionmodelcontrollerinterface && vktexteditor__codecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        return self->shouldHideItemsWithEqualNames();
    } else {
        return ((VirtualKTextEditorCodeCompletionModelControllerInterface*)self)->shouldHideItemsWithEqualNames();
    }
}

void KTextEditor__CodeCompletionModelControllerInterface_OperatorAssign(KTextEditor__CodeCompletionModelControllerInterface* self, const KTextEditor__CodeCompletionModelControllerInterface* param1) {
    self->operator=(*param1);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModelControllerInterface_QBaseShouldStartCompletion(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const libqt_string insertedText, bool userInsertion, const KTextEditor__Cursor* position) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    QString insertedText_QString = QString::fromUtf8(insertedText.data, insertedText.len);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion_IsBase(true);
        return vktexteditorcodecompletionmodelcontrollerinterface->shouldStartCompletion(view, insertedText_QString, userInsertion, *position);
    } else {
        return self->KTextEditor::CodeCompletionModelControllerInterface::shouldStartCompletion(view, insertedText_QString, userInsertion, *position);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnShouldStartCompletion(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion_Callback>(slot));
    }
}

// Base class handler implementation
KTextEditor__Range* KTextEditor__CodeCompletionModelControllerInterface_QBaseCompletionRange(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Cursor* position) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_CompletionRange_IsBase(true);
        return new KTextEditor::Range(vktexteditorcodecompletionmodelcontrollerinterface->completionRange(view, *position));
    } else {
        return new KTextEditor::Range(((VirtualKTextEditorCodeCompletionModelControllerInterface*)self)->completionRange(view, *position));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnCompletionRange(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_CompletionRange_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_CompletionRange_Callback>(slot));
    }
}

// Base class handler implementation
KTextEditor__Range* KTextEditor__CodeCompletionModelControllerInterface_QBaseUpdateCompletionRange(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Range* range) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange_IsBase(true);
        return new KTextEditor::Range(vktexteditorcodecompletionmodelcontrollerinterface->updateCompletionRange(view, *range));
    } else {
        return new KTextEditor::Range(((VirtualKTextEditorCodeCompletionModelControllerInterface*)self)->updateCompletionRange(view, *range));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnUpdateCompletionRange(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KTextEditor__CodeCompletionModelControllerInterface_QBaseFilterString(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Range* range, const KTextEditor__Cursor* position) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_FilterString_IsBase(true);
        QString _ret = vktexteditorcodecompletionmodelcontrollerinterface->filterString(view, *range, *position);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KTextEditor::CodeCompletionModelControllerInterface::filterString(view, *range, *position);
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
void KTextEditor__CodeCompletionModelControllerInterface_OnFilterString(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_FilterString_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_FilterString_Callback>(slot));
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModelControllerInterface_QBaseShouldAbortCompletion(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Range* range, const libqt_string currentCompletion) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    QString currentCompletion_QString = QString::fromUtf8(currentCompletion.data, currentCompletion.len);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion_IsBase(true);
        return vktexteditorcodecompletionmodelcontrollerinterface->shouldAbortCompletion(view, *range, currentCompletion_QString);
    } else {
        return self->KTextEditor::CodeCompletionModelControllerInterface::shouldAbortCompletion(view, *range, currentCompletion_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnShouldAbortCompletion(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion_Callback>(slot));
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModelControllerInterface_QBaseShouldExecute(KTextEditor__CodeCompletionModelControllerInterface* self, const QModelIndex* selected, QChar* inserted) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_ShouldExecute_IsBase(true);
        return vktexteditorcodecompletionmodelcontrollerinterface->shouldExecute(*selected, *inserted);
    } else {
        return self->KTextEditor::CodeCompletionModelControllerInterface::shouldExecute(*selected, *inserted);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnShouldExecute(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_ShouldExecute_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_ShouldExecute_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModelControllerInterface_QBaseAborted(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_Aborted_IsBase(true);
        vktexteditorcodecompletionmodelcontrollerinterface->aborted(view);
    } else {
        self->KTextEditor::CodeCompletionModelControllerInterface::aborted(view);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnAborted(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_Aborted_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_Aborted_Callback>(slot));
    }
}

// Base class handler implementation
int KTextEditor__CodeCompletionModelControllerInterface_QBaseMatchingItem(KTextEditor__CodeCompletionModelControllerInterface* self, const QModelIndex* matched) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_MatchingItem_IsBase(true);
        return static_cast<int>(vktexteditorcodecompletionmodelcontrollerinterface->matchingItem(*matched));
    } else {
        return static_cast<int>(self->KTextEditor::CodeCompletionModelControllerInterface::matchingItem(*matched));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnMatchingItem(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self);
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_MatchingItem_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_MatchingItem_Callback>(slot));
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModelControllerInterface_QBaseShouldHideItemsWithEqualNames(const KTextEditor__CodeCompletionModelControllerInterface* self) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = const_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModelControllerInterface*>(self));
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames_IsBase(true);
        return vktexteditorcodecompletionmodelcontrollerinterface->shouldHideItemsWithEqualNames();
    } else {
        return self->KTextEditor::CodeCompletionModelControllerInterface::shouldHideItemsWithEqualNames();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnShouldHideItemsWithEqualNames(const KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodelcontrollerinterface = const_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModelControllerInterface*>(self));
    if (vktexteditorcodecompletionmodelcontrollerinterface && vktexteditorcodecompletionmodelcontrollerinterface->isVirtualKTextEditorCodeCompletionModelControllerInterface) {
        vktexteditorcodecompletionmodelcontrollerinterface->setKTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames_Callback>(slot));
    }
}

void KTextEditor__CodeCompletionModelControllerInterface_Delete(KTextEditor__CodeCompletionModelControllerInterface* self) {
    delete self;
}
