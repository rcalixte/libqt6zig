#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__CodeCompletionModel
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Range
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View
#include <QAbstractItemModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QModelRoleDataSpan>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <codecompletionmodel.h>
#include "libcodecompletionmodel.h"
#include "libcodecompletionmodel.hxx"

KTextEditor__CodeCompletionModel* KTextEditor__CodeCompletionModel_new(QObject* parent) {
    return new VirtualKTextEditorCodeCompletionModel(parent);
}

QMetaObject* KTextEditor__CodeCompletionModel_MetaObject(const KTextEditor__CodeCompletionModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEditor__CodeCompletionModel_Metacast(KTextEditor__CodeCompletionModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEditor__CodeCompletionModel_Metacall(KTextEditor__CodeCompletionModel* self, int param1, int param2, void** param3) {
    auto* vktexteditor__codecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditor__codecompletionmodel && vktexteditor__codecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTextEditor__CodeCompletionModel_Tr(const char* s) {
    QString _ret = KTextEditor::CodeCompletionModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTextEditor__CodeCompletionModel_SetRowCount(KTextEditor__CodeCompletionModel* self, int rowCount) {
    self->setRowCount(static_cast<int>(rowCount));
}

void KTextEditor__CodeCompletionModel_CompletionInvoked(KTextEditor__CodeCompletionModel* self, KTextEditor__View* view, const KTextEditor__Range* range, int invocationType) {
    auto* vktexteditor__codecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditor__codecompletionmodel && vktexteditor__codecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        self->completionInvoked(view, *range, static_cast<KTextEditor::CodeCompletionModel::InvocationType>(invocationType));
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->completionInvoked(view, *range, static_cast<KTextEditor::CodeCompletionModel::InvocationType>(invocationType));
    }
}

void KTextEditor__CodeCompletionModel_ExecuteCompletionItem(const KTextEditor__CodeCompletionModel* self, KTextEditor__View* view, const KTextEditor__Range* word, const QModelIndex* index) {
    auto* vktexteditor__codecompletionmodel = dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditor__codecompletionmodel && vktexteditor__codecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        self->executeCompletionItem(view, *word, *index);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->executeCompletionItem(view, *word, *index);
    }
}

int KTextEditor__CodeCompletionModel_ColumnCount(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    auto* vktexteditor__codecompletionmodel = dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditor__codecompletionmodel && vktexteditor__codecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return self->columnCount(*parent);
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->columnCount(*parent);
    }
}

QModelIndex* KTextEditor__CodeCompletionModel_Index(const KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* parent) {
    auto* vktexteditor__codecompletionmodel = dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditor__codecompletionmodel && vktexteditor__codecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKTextEditorCodeCompletionModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

libqt_map /* of int to QVariant* */ KTextEditor__CodeCompletionModel_ItemData(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    auto* vktexteditor__codecompletionmodel = dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditor__codecompletionmodel && vktexteditor__codecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        QMap<int, QVariant> _ret = self->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<int, QVariant> _ret = ((VirtualKTextEditorCodeCompletionModel*)self)->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

QModelIndex* KTextEditor__CodeCompletionModel_Parent(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    auto* vktexteditor__codecompletionmodel = dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditor__codecompletionmodel && vktexteditor__codecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return new QModelIndex(self->parent(*index));
    } else {
        return new QModelIndex(((VirtualKTextEditorCodeCompletionModel*)self)->parent(*index));
    }
}

int KTextEditor__CodeCompletionModel_RowCount(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    auto* vktexteditor__codecompletionmodel = dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditor__codecompletionmodel && vktexteditor__codecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->rowCount(*parent);
    }
}

bool KTextEditor__CodeCompletionModel_HasGroups(const KTextEditor__CodeCompletionModel* self) {
    return self->hasGroups();
}

void KTextEditor__CodeCompletionModel_WaitForReset(KTextEditor__CodeCompletionModel* self) {
    self->waitForReset();
}

void KTextEditor__CodeCompletionModel_Connect_WaitForReset(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__CodeCompletionModel*) = reinterpret_cast<void (*)(KTextEditor__CodeCompletionModel*)>(slot);
    KTextEditor::CodeCompletionModel::connect(self, &KTextEditor::CodeCompletionModel::waitForReset, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KTextEditor__CodeCompletionModel_HasGroupsChanged(KTextEditor__CodeCompletionModel* self, KTextEditor__CodeCompletionModel* model, bool hasGroups) {
    self->hasGroupsChanged(model, hasGroups);
}

void KTextEditor__CodeCompletionModel_Connect_HasGroupsChanged(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__CodeCompletionModel*, KTextEditor__CodeCompletionModel*, bool) = reinterpret_cast<void (*)(KTextEditor__CodeCompletionModel*, KTextEditor__CodeCompletionModel*, bool)>(slot);
    KTextEditor::CodeCompletionModel::connect(self, &KTextEditor::CodeCompletionModel::hasGroupsChanged, [self, slotFunc](KTextEditor::CodeCompletionModel* model, bool hasGroups) {
        KTextEditor__CodeCompletionModel* sigval1 = model;
        bool sigval2 = hasGroups;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string KTextEditor__CodeCompletionModel_Tr2(const char* s, const char* c) {
    QString _ret = KTextEditor::CodeCompletionModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__CodeCompletionModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTextEditor::CodeCompletionModel::tr(s, c, static_cast<int>(n));
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
int KTextEditor__CodeCompletionModel_QBaseMetacall(KTextEditor__CodeCompletionModel* self, int param1, int param2, void** param3) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Metacall_IsBase(true);
        return vktexteditorcodecompletionmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KTextEditor::CodeCompletionModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMetacall(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Metacall_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseCompletionInvoked(KTextEditor__CodeCompletionModel* self, KTextEditor__View* view, const KTextEditor__Range* range, int invocationType) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_CompletionInvoked_IsBase(true);
        vktexteditorcodecompletionmodel->completionInvoked(view, *range, static_cast<KTextEditor::CodeCompletionModel::InvocationType>(invocationType));
    } else {
        self->KTextEditor::CodeCompletionModel::completionInvoked(view, *range, static_cast<KTextEditor::CodeCompletionModel::InvocationType>(invocationType));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnCompletionInvoked(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_CompletionInvoked_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_CompletionInvoked_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseExecuteCompletionItem(const KTextEditor__CodeCompletionModel* self, KTextEditor__View* view, const KTextEditor__Range* word, const QModelIndex* index) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ExecuteCompletionItem_IsBase(true);
        vktexteditorcodecompletionmodel->executeCompletionItem(view, *word, *index);
    } else {
        self->KTextEditor::CodeCompletionModel::executeCompletionItem(view, *word, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnExecuteCompletionItem(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ExecuteCompletionItem_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ExecuteCompletionItem_Callback>(slot));
    }
}

// Base class handler implementation
int KTextEditor__CodeCompletionModel_QBaseColumnCount(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ColumnCount_IsBase(true);
        return vktexteditorcodecompletionmodel->columnCount(*parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnColumnCount(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ColumnCount_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ColumnCount_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KTextEditor__CodeCompletionModel_QBaseIndex(const KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Index_IsBase(true);
        return new QModelIndex(vktexteditorcodecompletionmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKTextEditorCodeCompletionModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnIndex(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Index_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Index_Callback>(slot));
    }
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ KTextEditor__CodeCompletionModel_QBaseItemData(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vktexteditorcodecompletionmodel->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<int, QVariant> _ret = self->KTextEditor::CodeCompletionModel::itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnItemData(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ItemData_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ItemData_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KTextEditor__CodeCompletionModel_QBaseParent(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Parent_IsBase(true);
        return new QModelIndex(vktexteditorcodecompletionmodel->parent(*index));
    } else {
        return new QModelIndex(((VirtualKTextEditorCodeCompletionModel*)self)->parent(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnParent(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Parent_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Parent_Callback>(slot));
    }
}

// Base class handler implementation
int KTextEditor__CodeCompletionModel_QBaseRowCount(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_RowCount_IsBase(true);
        return vktexteditorcodecompletionmodel->rowCount(*parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnRowCount(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_RowCount_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KTextEditor__CodeCompletionModel_Sibling(const KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* idx) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return new QModelIndex(vktexteditorcodecompletionmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKTextEditorCodeCompletionModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* KTextEditor__CodeCompletionModel_QBaseSibling(const KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* idx) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Sibling_IsBase(true);
        return new QModelIndex(vktexteditorcodecompletionmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKTextEditorCodeCompletionModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSibling(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Sibling_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_HasChildren(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->hasChildren(*parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::hasChildren(*parent);
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseHasChildren(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_HasChildren_IsBase(true);
        return vktexteditorcodecompletionmodel->hasChildren(*parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnHasChildren(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_HasChildren_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KTextEditor__CodeCompletionModel_Data(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index, int role) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return new QVariant(vktexteditorcodecompletionmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKTextEditorCodeCompletionModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KTextEditor__CodeCompletionModel_QBaseData(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index, int role) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Data_IsBase(true);
        return new QVariant(vktexteditorcodecompletionmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKTextEditorCodeCompletionModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnData(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Data_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_SetData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KTextEditor::CodeCompletionModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseSetData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_SetData_IsBase(true);
        return vktexteditorcodecompletionmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KTextEditor::CodeCompletionModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSetData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_SetData_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KTextEditor__CodeCompletionModel_HeaderData(const KTextEditor__CodeCompletionModel* self, int section, int orientation, int role) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return new QVariant(vktexteditorcodecompletionmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKTextEditorCodeCompletionModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KTextEditor__CodeCompletionModel_QBaseHeaderData(const KTextEditor__CodeCompletionModel* self, int section, int orientation, int role) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_HeaderData_IsBase(true);
        return new QVariant(vktexteditorcodecompletionmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKTextEditorCodeCompletionModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnHeaderData(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_HeaderData_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_SetHeaderData(KTextEditor__CodeCompletionModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KTextEditor::CodeCompletionModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseSetHeaderData(KTextEditor__CodeCompletionModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_SetHeaderData_IsBase(true);
        return vktexteditorcodecompletionmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KTextEditor::CodeCompletionModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSetHeaderData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_SetHeaderData_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_SetItemData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->setItemData(*index, roles_QMap);
    } else {
        return self->KTextEditor::CodeCompletionModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseSetItemData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_SetItemData_IsBase(true);
        return vktexteditorcodecompletionmodel->setItemData(*index, roles_QMap);
    } else {
        return self->KTextEditor::CodeCompletionModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSetItemData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_SetItemData_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_ClearItemData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->clearItemData(*index);
    } else {
        return self->KTextEditor::CodeCompletionModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseClearItemData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ClearItemData_IsBase(true);
        return vktexteditorcodecompletionmodel->clearItemData(*index);
    } else {
        return self->KTextEditor::CodeCompletionModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnClearItemData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ClearItemData_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KTextEditor__CodeCompletionModel_MimeTypes(const KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        QList<QString> _ret = vktexteditorcodecompletionmodel->mimeTypes();
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
    } else {
        QList<QString> _ret = self->KTextEditor::CodeCompletionModel::mimeTypes();
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
}

// Base class handler implementation
libqt_list /* of libqt_string */ KTextEditor__CodeCompletionModel_QBaseMimeTypes(const KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vktexteditorcodecompletionmodel->mimeTypes();
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
    } else {
        QList<QString> _ret = self->KTextEditor::CodeCompletionModel::mimeTypes();
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
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMimeTypes(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_MimeTypes_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KTextEditor__CodeCompletionModel_MimeData(const KTextEditor__CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->mimeData(indexes_QList);
    } else {
        return self->KTextEditor::CodeCompletionModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* KTextEditor__CodeCompletionModel_QBaseMimeData(const KTextEditor__CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_MimeData_IsBase(true);
        return vktexteditorcodecompletionmodel->mimeData(indexes_QList);
    } else {
        return self->KTextEditor::CodeCompletionModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMimeData(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_MimeData_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_CanDropMimeData(const KTextEditor__CodeCompletionModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseCanDropMimeData(const KTextEditor__CodeCompletionModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_CanDropMimeData_IsBase(true);
        return vktexteditorcodecompletionmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnCanDropMimeData(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_DropMimeData(KTextEditor__CodeCompletionModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseDropMimeData(KTextEditor__CodeCompletionModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_DropMimeData_IsBase(true);
        return vktexteditorcodecompletionmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnDropMimeData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_DropMimeData_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__CodeCompletionModel_SupportedDropActions(const KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return static_cast<int>(vktexteditorcodecompletionmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KTextEditor::CodeCompletionModel::supportedDropActions());
    }
}

// Base class handler implementation
int KTextEditor__CodeCompletionModel_QBaseSupportedDropActions(const KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vktexteditorcodecompletionmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KTextEditor::CodeCompletionModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSupportedDropActions(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__CodeCompletionModel_SupportedDragActions(const KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return static_cast<int>(vktexteditorcodecompletionmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KTextEditor::CodeCompletionModel::supportedDragActions());
    }
}

// Base class handler implementation
int KTextEditor__CodeCompletionModel_QBaseSupportedDragActions(const KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vktexteditorcodecompletionmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KTextEditor::CodeCompletionModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSupportedDragActions(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_InsertRows(KTextEditor__CodeCompletionModel* self, int row, int count, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseInsertRows(KTextEditor__CodeCompletionModel* self, int row, int count, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_InsertRows_IsBase(true);
        return vktexteditorcodecompletionmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnInsertRows(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_InsertRows_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_InsertColumns(KTextEditor__CodeCompletionModel* self, int column, int count, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseInsertColumns(KTextEditor__CodeCompletionModel* self, int column, int count, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_InsertColumns_IsBase(true);
        return vktexteditorcodecompletionmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnInsertColumns(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_InsertColumns_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_RemoveRows(KTextEditor__CodeCompletionModel* self, int row, int count, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseRemoveRows(KTextEditor__CodeCompletionModel* self, int row, int count, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_RemoveRows_IsBase(true);
        return vktexteditorcodecompletionmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnRemoveRows(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_RemoveRows_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_RemoveColumns(KTextEditor__CodeCompletionModel* self, int column, int count, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseRemoveColumns(KTextEditor__CodeCompletionModel* self, int column, int count, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_RemoveColumns_IsBase(true);
        return vktexteditorcodecompletionmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnRemoveColumns(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_RemoveColumns_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_MoveRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KTextEditor::CodeCompletionModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseMoveRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_MoveRows_IsBase(true);
        return vktexteditorcodecompletionmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KTextEditor::CodeCompletionModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMoveRows(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_MoveRows_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_MoveColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KTextEditor::CodeCompletionModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseMoveColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_MoveColumns_IsBase(true);
        return vktexteditorcodecompletionmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KTextEditor::CodeCompletionModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMoveColumns(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_MoveColumns_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_FetchMore(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->fetchMore(*parent);
    } else {
        self->KTextEditor::CodeCompletionModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseFetchMore(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_FetchMore_IsBase(true);
        vktexteditorcodecompletionmodel->fetchMore(*parent);
    } else {
        self->KTextEditor::CodeCompletionModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnFetchMore(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_FetchMore_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_CanFetchMore(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->canFetchMore(*parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseCanFetchMore(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_CanFetchMore_IsBase(true);
        return vktexteditorcodecompletionmodel->canFetchMore(*parent);
    } else {
        return self->KTextEditor::CodeCompletionModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnCanFetchMore(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_CanFetchMore_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__CodeCompletionModel_Flags(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return static_cast<int>(vktexteditorcodecompletionmodel->flags(*index));
    } else {
        return static_cast<int>(self->KTextEditor::CodeCompletionModel::flags(*index));
    }
}

// Base class handler implementation
int KTextEditor__CodeCompletionModel_QBaseFlags(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Flags_IsBase(true);
        return static_cast<int>(vktexteditorcodecompletionmodel->flags(*index));
    } else {
        return static_cast<int>(self->KTextEditor::CodeCompletionModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnFlags(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Flags_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_Sort(KTextEditor__CodeCompletionModel* self, int column, int order) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KTextEditor::CodeCompletionModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseSort(KTextEditor__CodeCompletionModel* self, int column, int order) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Sort_IsBase(true);
        vktexteditorcodecompletionmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KTextEditor::CodeCompletionModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSort(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Sort_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KTextEditor__CodeCompletionModel_Buddy(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return new QModelIndex(vktexteditorcodecompletionmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKTextEditorCodeCompletionModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KTextEditor__CodeCompletionModel_QBaseBuddy(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Buddy_IsBase(true);
        return new QModelIndex(vktexteditorcodecompletionmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKTextEditorCodeCompletionModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnBuddy(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Buddy_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KTextEditor__CodeCompletionModel_Match(const KTextEditor__CodeCompletionModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        QList<QModelIndex> _ret = vktexteditorcodecompletionmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->KTextEditor::CodeCompletionModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KTextEditor__CodeCompletionModel_QBaseMatch(const KTextEditor__CodeCompletionModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vktexteditorcodecompletionmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->KTextEditor::CodeCompletionModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMatch(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Match_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KTextEditor__CodeCompletionModel_Span(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return new QSize(vktexteditorcodecompletionmodel->span(*index));
    } else {
        return new QSize(((VirtualKTextEditorCodeCompletionModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KTextEditor__CodeCompletionModel_QBaseSpan(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Span_IsBase(true);
        return new QSize(vktexteditorcodecompletionmodel->span(*index));
    } else {
        return new QSize(((VirtualKTextEditorCodeCompletionModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSpan(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Span_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KTextEditor__CodeCompletionModel_RoleNames(const KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        QHash<int, QByteArray> _ret = vktexteditorcodecompletionmodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QHash<int, QByteArray> _ret = self->KTextEditor::CodeCompletionModel::roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KTextEditor__CodeCompletionModel_QBaseRoleNames(const KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vktexteditorcodecompletionmodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QHash<int, QByteArray> _ret = self->KTextEditor::CodeCompletionModel::roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnRoleNames(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_RoleNames_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_MultiData(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->multiData(*index, *roleDataSpan);
    } else {
        self->KTextEditor::CodeCompletionModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseMultiData(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_MultiData_IsBase(true);
        vktexteditorcodecompletionmodel->multiData(*index, *roleDataSpan);
    } else {
        self->KTextEditor::CodeCompletionModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMultiData(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_MultiData_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_Submit(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->submit();
    } else {
        return self->KTextEditor::CodeCompletionModel::submit();
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseSubmit(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Submit_IsBase(true);
        return vktexteditorcodecompletionmodel->submit();
    } else {
        return self->KTextEditor::CodeCompletionModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSubmit(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Submit_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_Revert(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->revert();
    } else {
        self->KTextEditor::CodeCompletionModel::revert();
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseRevert(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Revert_IsBase(true);
        vktexteditorcodecompletionmodel->revert();
    } else {
        self->KTextEditor::CodeCompletionModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnRevert(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Revert_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_ResetInternalData(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->resetInternalData();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseResetInternalData(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ResetInternalData_IsBase(true);
        vktexteditorcodecompletionmodel->resetInternalData();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnResetInternalData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ResetInternalData_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_Event(KTextEditor__CodeCompletionModel* self, QEvent* event) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->event(event);
    } else {
        return self->KTextEditor::CodeCompletionModel::event(event);
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseEvent(KTextEditor__CodeCompletionModel* self, QEvent* event) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Event_IsBase(true);
        return vktexteditorcodecompletionmodel->event(event);
    } else {
        return self->KTextEditor::CodeCompletionModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnEvent(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Event_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_EventFilter(KTextEditor__CodeCompletionModel* self, QObject* watched, QEvent* event) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->eventFilter(watched, event);
    } else {
        return self->KTextEditor::CodeCompletionModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseEventFilter(KTextEditor__CodeCompletionModel* self, QObject* watched, QEvent* event) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EventFilter_IsBase(true);
        return vktexteditorcodecompletionmodel->eventFilter(watched, event);
    } else {
        return self->KTextEditor::CodeCompletionModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnEventFilter(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EventFilter_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_TimerEvent(KTextEditor__CodeCompletionModel* self, QTimerEvent* event) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->timerEvent(event);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseTimerEvent(KTextEditor__CodeCompletionModel* self, QTimerEvent* event) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_TimerEvent_IsBase(true);
        vktexteditorcodecompletionmodel->timerEvent(event);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnTimerEvent(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_TimerEvent_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_ChildEvent(KTextEditor__CodeCompletionModel* self, QChildEvent* event) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->childEvent(event);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseChildEvent(KTextEditor__CodeCompletionModel* self, QChildEvent* event) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ChildEvent_IsBase(true);
        vktexteditorcodecompletionmodel->childEvent(event);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnChildEvent(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ChildEvent_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_CustomEvent(KTextEditor__CodeCompletionModel* self, QEvent* event) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->customEvent(event);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseCustomEvent(KTextEditor__CodeCompletionModel* self, QEvent* event) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_CustomEvent_IsBase(true);
        vktexteditorcodecompletionmodel->customEvent(event);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnCustomEvent(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_CustomEvent_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_ConnectNotify(KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseConnectNotify(KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ConnectNotify_IsBase(true);
        vktexteditorcodecompletionmodel->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnConnectNotify(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ConnectNotify_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_DisconnectNotify(KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseDisconnectNotify(KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_DisconnectNotify_IsBase(true);
        vktexteditorcodecompletionmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnDisconnectNotify(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_SetHasGroups(KTextEditor__CodeCompletionModel* self, bool hasGroups) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setHasGroups(hasGroups);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->setHasGroups(hasGroups);
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseSetHasGroups(KTextEditor__CodeCompletionModel* self, bool hasGroups) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_SetHasGroups_IsBase(true);
        vktexteditorcodecompletionmodel->setHasGroups(hasGroups);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->setHasGroups(hasGroups);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSetHasGroups(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_SetHasGroups_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_SetHasGroups_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KTextEditor__CodeCompletionModel_CreateIndex(const KTextEditor__CodeCompletionModel* self, int row, int column) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return new QModelIndex(vktexteditorcodecompletionmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KTextEditor__CodeCompletionModel_QBaseCreateIndex(const KTextEditor__CodeCompletionModel* self, int row, int column) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_CreateIndex_IsBase(true);
        return new QModelIndex(vktexteditorcodecompletionmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnCreateIndex(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_CreateIndex_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_EncodeData(const KTextEditor__CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseEncodeData(const KTextEditor__CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EncodeData_IsBase(true);
        vktexteditorcodecompletionmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnEncodeData(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EncodeData_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_DecodeData(KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseDecodeData(KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_DecodeData_IsBase(true);
        return vktexteditorcodecompletionmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnDecodeData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_DecodeData_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_BeginInsertRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseBeginInsertRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_BeginInsertRows_IsBase(true);
        vktexteditorcodecompletionmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnBeginInsertRows(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_EndInsertRows(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->endInsertRows();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseEndInsertRows(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EndInsertRows_IsBase(true);
        vktexteditorcodecompletionmodel->endInsertRows();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnEndInsertRows(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EndInsertRows_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_BeginRemoveRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseBeginRemoveRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_BeginRemoveRows_IsBase(true);
        vktexteditorcodecompletionmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnBeginRemoveRows(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_EndRemoveRows(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->endRemoveRows();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseEndRemoveRows(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EndRemoveRows_IsBase(true);
        vktexteditorcodecompletionmodel->endRemoveRows();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnEndRemoveRows(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_BeginMoveRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseBeginMoveRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_BeginMoveRows_IsBase(true);
        return vktexteditorcodecompletionmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnBeginMoveRows(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_EndMoveRows(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->endMoveRows();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseEndMoveRows(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EndMoveRows_IsBase(true);
        vktexteditorcodecompletionmodel->endMoveRows();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnEndMoveRows(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EndMoveRows_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_BeginInsertColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseBeginInsertColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_BeginInsertColumns_IsBase(true);
        vktexteditorcodecompletionmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnBeginInsertColumns(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_EndInsertColumns(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->endInsertColumns();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseEndInsertColumns(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EndInsertColumns_IsBase(true);
        vktexteditorcodecompletionmodel->endInsertColumns();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnEndInsertColumns(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_BeginRemoveColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseBeginRemoveColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_BeginRemoveColumns_IsBase(true);
        vktexteditorcodecompletionmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnBeginRemoveColumns(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_EndRemoveColumns(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->endRemoveColumns();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseEndRemoveColumns(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EndRemoveColumns_IsBase(true);
        vktexteditorcodecompletionmodel->endRemoveColumns();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnEndRemoveColumns(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_BeginMoveColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseBeginMoveColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_BeginMoveColumns_IsBase(true);
        return vktexteditorcodecompletionmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnBeginMoveColumns(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_EndMoveColumns(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->endMoveColumns();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseEndMoveColumns(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EndMoveColumns_IsBase(true);
        vktexteditorcodecompletionmodel->endMoveColumns();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnEndMoveColumns(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_BeginResetModel(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->beginResetModel();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseBeginResetModel(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_BeginResetModel_IsBase(true);
        vktexteditorcodecompletionmodel->beginResetModel();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnBeginResetModel(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_BeginResetModel_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_EndResetModel(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->endResetModel();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseEndResetModel(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EndResetModel_IsBase(true);
        vktexteditorcodecompletionmodel->endResetModel();
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnEndResetModel(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_EndResetModel_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_ChangePersistentIndex(KTextEditor__CodeCompletionModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseChangePersistentIndex(KTextEditor__CodeCompletionModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ChangePersistentIndex_IsBase(true);
        vktexteditorcodecompletionmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnChangePersistentIndex(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_ChangePersistentIndexList(KTextEditor__CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    QList<QModelIndex> from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QList<QModelIndex> to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_QBaseChangePersistentIndexList(KTextEditor__CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    QList<QModelIndex> from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QList<QModelIndex> to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ChangePersistentIndexList_IsBase(true);
        vktexteditorcodecompletionmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKTextEditorCodeCompletionModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnChangePersistentIndexList(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KTextEditor__CodeCompletionModel_PersistentIndexList(const KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        QList<QModelIndex> _ret = vktexteditorcodecompletionmodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualKTextEditorCodeCompletionModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KTextEditor__CodeCompletionModel_QBasePersistentIndexList(const KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vktexteditorcodecompletionmodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualKTextEditorCodeCompletionModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnPersistentIndexList(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTextEditor__CodeCompletionModel_Sender(const KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->sender();
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTextEditor__CodeCompletionModel_QBaseSender(const KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Sender_IsBase(true);
        return vktexteditorcodecompletionmodel->sender();
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSender(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Sender_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__CodeCompletionModel_SenderSignalIndex(const KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTextEditor__CodeCompletionModel_QBaseSenderSignalIndex(const KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_SenderSignalIndex_IsBase(true);
        return vktexteditorcodecompletionmodel->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSenderSignalIndex(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__CodeCompletionModel_Receivers(const KTextEditor__CodeCompletionModel* self, const char* signal) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->receivers(signal);
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTextEditor__CodeCompletionModel_QBaseReceivers(const KTextEditor__CodeCompletionModel* self, const char* signal) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Receivers_IsBase(true);
        return vktexteditorcodecompletionmodel->receivers(signal);
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnReceivers(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_Receivers_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_IsSignalConnected(const KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        return vktexteditorcodecompletionmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_QBaseIsSignalConnected(const KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_IsSignalConnected_IsBase(true);
        return vktexteditorcodecompletionmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorCodeCompletionModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnIsSignalConnected(const KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self));
    if (vktexteditorcodecompletionmodel && vktexteditorcodecompletionmodel->isVirtualKTextEditorCodeCompletionModel) {
        vktexteditorcodecompletionmodel->setKTextEditor__CodeCompletionModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_IsSignalConnected_Callback>(slot));
    }
}

void KTextEditor__CodeCompletionModel_Delete(KTextEditor__CodeCompletionModel* self) {
    delete self;
}
