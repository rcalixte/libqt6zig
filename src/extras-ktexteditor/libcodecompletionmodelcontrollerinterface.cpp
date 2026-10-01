#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__CodeCompletionModelControllerInterface
#include <KTextEditor/Cursor>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Range
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View
#include <QChar>
#include <QModelIndex>
#include <QString>
#include <codecompletionmodelcontrollerinterface.h>
#include "libcodecompletionmodelcontrollerinterface.h"
#include "libcodecompletionmodelcontrollerinterface.hxx"

KTextEditor__CodeCompletionModelControllerInterface* KTextEditor__CodeCompletionModelControllerInterface_new() {
    return new VirtualKTextEditorCodeCompletionModelControllerInterface();
}

bool KTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const libqt_string insertedText, bool userInsertion, const KTextEditor__Cursor* position) {
    QString insertedText_QString = QString::fromUtf8(insertedText.data, insertedText.len);
    return self->shouldStartCompletion(view, insertedText_QString, userInsertion, *position);
}

KTextEditor__Range* KTextEditor__CodeCompletionModelControllerInterface_CompletionRange(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Cursor* position) {
    return new KTextEditor::Range(self->completionRange(view, *position));
}

KTextEditor__Range* KTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Range* range) {
    return new KTextEditor::Range(self->updateCompletionRange(view, *range));
}

libqt_string KTextEditor__CodeCompletionModelControllerInterface_FilterString(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Range* range, const KTextEditor__Cursor* position) {
    auto _ret = self->filterString(view, *range, *position);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Range* range, const libqt_string currentCompletion) {
    QString currentCompletion_QString = QString::fromUtf8(currentCompletion.data, currentCompletion.len);
    return self->shouldAbortCompletion(view, *range, currentCompletion_QString);
}

bool KTextEditor__CodeCompletionModelControllerInterface_ShouldExecute(KTextEditor__CodeCompletionModelControllerInterface* self, const QModelIndex* selected, QChar* inserted) {
    return self->shouldExecute(*selected, *inserted);
}

void KTextEditor__CodeCompletionModelControllerInterface_Aborted(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view) {
    self->aborted(view);
}

int KTextEditor__CodeCompletionModelControllerInterface_MatchingItem(KTextEditor__CodeCompletionModelControllerInterface* self, const QModelIndex* matched) {
    return static_cast<int>(self->matchingItem(*matched));
}

bool KTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames(const KTextEditor__CodeCompletionModelControllerInterface* self) {
    return self->shouldHideItemsWithEqualNames();
}

void KTextEditor__CodeCompletionModelControllerInterface_OperatorAssign(KTextEditor__CodeCompletionModelControllerInterface* self, const KTextEditor__CodeCompletionModelControllerInterface* param1) {
    self->operator=(*param1);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModelControllerInterface_SuperShouldStartCompletion(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const libqt_string insertedText, bool userInsertion, const KTextEditor__Cursor* position) {
    QString insertedText_QString = QString::fromUtf8(insertedText.data, insertedText.len);
    return self->KTextEditor::CodeCompletionModelControllerInterface::shouldStartCompletion(view, insertedText_QString, userInsertion, *position);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnShouldStartCompletion(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self))
        vktexteditorcodecompletionmodelcontrollerinterface->ktexteditor__codecompletionmodelcontrollerinterface_shouldstartcompletion_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion_Callback>(slot);
}

// Base class handler implementation
KTextEditor__Range* KTextEditor__CodeCompletionModelControllerInterface_SuperCompletionRange(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Cursor* position) {
    return new KTextEditor::Range(self->KTextEditor::CodeCompletionModelControllerInterface::completionRange(view, *position));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnCompletionRange(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self))
        vktexteditorcodecompletionmodelcontrollerinterface->ktexteditor__codecompletionmodelcontrollerinterface_completionrange_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_CompletionRange_Callback>(slot);
}

// Base class handler implementation
KTextEditor__Range* KTextEditor__CodeCompletionModelControllerInterface_SuperUpdateCompletionRange(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Range* range) {
    return new KTextEditor::Range(self->KTextEditor::CodeCompletionModelControllerInterface::updateCompletionRange(view, *range));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnUpdateCompletionRange(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self))
        vktexteditorcodecompletionmodelcontrollerinterface->ktexteditor__codecompletionmodelcontrollerinterface_updatecompletionrange_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange_Callback>(slot);
}

// Base class handler implementation
libqt_string KTextEditor__CodeCompletionModelControllerInterface_SuperFilterString(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Range* range, const KTextEditor__Cursor* position) {
    auto _ret = self->KTextEditor::CodeCompletionModelControllerInterface::filterString(view, *range, *position);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnFilterString(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self))
        vktexteditorcodecompletionmodelcontrollerinterface->ktexteditor__codecompletionmodelcontrollerinterface_filterstring_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_FilterString_Callback>(slot);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModelControllerInterface_SuperShouldAbortCompletion(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const KTextEditor__Range* range, const libqt_string currentCompletion) {
    QString currentCompletion_QString = QString::fromUtf8(currentCompletion.data, currentCompletion.len);
    return self->KTextEditor::CodeCompletionModelControllerInterface::shouldAbortCompletion(view, *range, currentCompletion_QString);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnShouldAbortCompletion(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self))
        vktexteditorcodecompletionmodelcontrollerinterface->ktexteditor__codecompletionmodelcontrollerinterface_shouldabortcompletion_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion_Callback>(slot);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModelControllerInterface_SuperShouldExecute(KTextEditor__CodeCompletionModelControllerInterface* self, const QModelIndex* selected, QChar* inserted) {
    return self->KTextEditor::CodeCompletionModelControllerInterface::shouldExecute(*selected, *inserted);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnShouldExecute(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self))
        vktexteditorcodecompletionmodelcontrollerinterface->ktexteditor__codecompletionmodelcontrollerinterface_shouldexecute_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_ShouldExecute_Callback>(slot);
}

// Base class handler implementation
void KTextEditor__CodeCompletionModelControllerInterface_SuperAborted(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view) {
    self->KTextEditor::CodeCompletionModelControllerInterface::aborted(view);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnAborted(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self))
        vktexteditorcodecompletionmodelcontrollerinterface->ktexteditor__codecompletionmodelcontrollerinterface_aborted_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_Aborted_Callback>(slot);
}

// Base class handler implementation
int KTextEditor__CodeCompletionModelControllerInterface_SuperMatchingItem(KTextEditor__CodeCompletionModelControllerInterface* self, const QModelIndex* matched) {
    return static_cast<int>(self->KTextEditor::CodeCompletionModelControllerInterface::matchingItem(*matched));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnMatchingItem(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodelcontrollerinterface = dynamic_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(self))
        vktexteditorcodecompletionmodelcontrollerinterface->ktexteditor__codecompletionmodelcontrollerinterface_matchingitem_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_MatchingItem_Callback>(slot);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModelControllerInterface_SuperShouldHideItemsWithEqualNames(const KTextEditor__CodeCompletionModelControllerInterface* self) {
    return self->KTextEditor::CodeCompletionModelControllerInterface::shouldHideItemsWithEqualNames();
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModelControllerInterface_OnShouldHideItemsWithEqualNames(KTextEditor__CodeCompletionModelControllerInterface* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodelcontrollerinterface = const_cast<VirtualKTextEditorCodeCompletionModelControllerInterface*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModelControllerInterface*>(self)))
        vktexteditorcodecompletionmodelcontrollerinterface->ktexteditor__codecompletionmodelcontrollerinterface_shouldhideitemswithequalnames_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModelControllerInterface::KTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames_Callback>(slot);
}

void KTextEditor__CodeCompletionModelControllerInterface_Delete(KTextEditor__CodeCompletionModelControllerInterface* self) {
    delete self;
}
