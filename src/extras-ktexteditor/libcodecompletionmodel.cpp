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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTextEditor__CodeCompletionModel_Tr(const char* s) {
    auto _ret = KTextEditor::CodeCompletionModel::tr(s);
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
    self->completionInvoked(view, *range, static_cast<KTextEditor::CodeCompletionModel::InvocationType>(invocationType));
}

void KTextEditor__CodeCompletionModel_ExecuteCompletionItem(const KTextEditor__CodeCompletionModel* self, KTextEditor__View* view, const KTextEditor__Range* word, const QModelIndex* index) {
    self->executeCompletionItem(view, *word, *index);
}

int KTextEditor__CodeCompletionModel_ColumnCount(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

QModelIndex* KTextEditor__CodeCompletionModel_Index(const KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

libqt_map /* of int to QVariant* */ KTextEditor__CodeCompletionModel_ItemData(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
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
}

QModelIndex* KTextEditor__CodeCompletionModel_Parent(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    return new QModelIndex(self->parent(*index));
}

int KTextEditor__CodeCompletionModel_RowCount(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

bool KTextEditor__CodeCompletionModel_HasGroups(const KTextEditor__CodeCompletionModel* self) {
    return self->hasGroups();
}

void KTextEditor__CodeCompletionModel_WaitForReset(KTextEditor__CodeCompletionModel* self) {
    self->waitForReset();
}

void KTextEditor__CodeCompletionModel_Connect_WaitForReset(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__CodeCompletionModel*) = reinterpret_cast<void (*)(KTextEditor__CodeCompletionModel*)>(slot);
    KTextEditor::CodeCompletionModel::connect(self,
                                              static_cast<void (KTextEditor::CodeCompletionModel::*)()>(&KTextEditor::CodeCompletionModel::waitForReset),
                                              [self, slotFunc]() {
                                                  slotFunc(self);
                                              });
}

void KTextEditor__CodeCompletionModel_HasGroupsChanged(KTextEditor__CodeCompletionModel* self, KTextEditor__CodeCompletionModel* model, bool hasGroups) {
    self->hasGroupsChanged(model, hasGroups);
}

void KTextEditor__CodeCompletionModel_Connect_HasGroupsChanged(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__CodeCompletionModel*, KTextEditor__CodeCompletionModel*, bool) = reinterpret_cast<void (*)(KTextEditor__CodeCompletionModel*, KTextEditor__CodeCompletionModel*, bool)>(slot);
    KTextEditor::CodeCompletionModel::connect(self,
                                              static_cast<void (KTextEditor::CodeCompletionModel::*)(KTextEditor::CodeCompletionModel*, bool)>(&KTextEditor::CodeCompletionModel::hasGroupsChanged),
                                              [self, slotFunc](KTextEditor::CodeCompletionModel* model, bool hasGroups) {
                                                  KTextEditor__CodeCompletionModel* sigval1 = model;
                                                  bool sigval2 = hasGroups;
                                                  slotFunc(self, sigval1, sigval2);
                                              });
}

libqt_string KTextEditor__CodeCompletionModel_Tr2(const char* s, const char* c) {
    auto _ret = KTextEditor::CodeCompletionModel::tr(s, c);
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
    auto _ret = KTextEditor::CodeCompletionModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KTextEditor__CodeCompletionModel_SuperMetaObject(const KTextEditor__CodeCompletionModel* self) {
    return (QMetaObject*)self->KTextEditor::CodeCompletionModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMetaObject(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_metaobject_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KTextEditor__CodeCompletionModel_SuperMetacast(KTextEditor__CodeCompletionModel* self, const char* param1) {
    return self->KTextEditor::CodeCompletionModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMetacast(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_metacast_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KTextEditor__CodeCompletionModel_SuperMetacall(KTextEditor__CodeCompletionModel* self, int param1, int param2, void** param3) {
    return self->KTextEditor::CodeCompletionModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMetacall(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_metacall_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Metacall_Callback>(slot);
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_SuperCompletionInvoked(KTextEditor__CodeCompletionModel* self, KTextEditor__View* view, const KTextEditor__Range* range, int invocationType) {
    self->KTextEditor::CodeCompletionModel::completionInvoked(view, *range, static_cast<KTextEditor::CodeCompletionModel::InvocationType>(invocationType));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnCompletionInvoked(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_completioninvoked_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_CompletionInvoked_Callback>(slot);
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_SuperExecuteCompletionItem(const KTextEditor__CodeCompletionModel* self, KTextEditor__View* view, const KTextEditor__Range* word, const QModelIndex* index) {
    self->KTextEditor::CodeCompletionModel::executeCompletionItem(view, *word, *index);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnExecuteCompletionItem(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_executecompletionitem_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ExecuteCompletionItem_Callback>(slot);
}

// Base class handler implementation
int KTextEditor__CodeCompletionModel_SuperColumnCount(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    return self->KTextEditor::CodeCompletionModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnColumnCount(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_columncount_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KTextEditor__CodeCompletionModel_SuperIndex(const KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->KTextEditor::CodeCompletionModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnIndex(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_index_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Index_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ KTextEditor__CodeCompletionModel_SuperItemData(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
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

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnItemData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_itemdata_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ItemData_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KTextEditor__CodeCompletionModel_SuperParent(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KTextEditor::CodeCompletionModel::parent(*index));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnParent(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_parent_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Parent_Callback>(slot);
}

// Base class handler implementation
int KTextEditor__CodeCompletionModel_SuperRowCount(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    return self->KTextEditor::CodeCompletionModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnRowCount(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_rowcount_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_RowCount_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KTextEditor__CodeCompletionModel_Sibling(const KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* KTextEditor__CodeCompletionModel_SuperSibling(const KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KTextEditor::CodeCompletionModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSibling(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_sibling_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_HasChildren(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperHasChildren(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    return self->KTextEditor::CodeCompletionModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnHasChildren(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_haschildren_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_HasChildren_Callback>(slot);
}

// Derived class handler implementation
QVariant* KTextEditor__CodeCompletionModel_Data(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_data_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Data_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_SetData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperSetData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KTextEditor::CodeCompletionModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSetData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_setdata_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* KTextEditor__CodeCompletionModel_HeaderData(const KTextEditor__CodeCompletionModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* KTextEditor__CodeCompletionModel_SuperHeaderData(const KTextEditor__CodeCompletionModel* self, int section, int orientation, int role) {
    return new QVariant(self->KTextEditor::CodeCompletionModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnHeaderData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_headerdata_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_SetHeaderData(KTextEditor__CodeCompletionModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperSetHeaderData(KTextEditor__CodeCompletionModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KTextEditor::CodeCompletionModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSetHeaderData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_setheaderdata_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_SetItemData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperSetItemData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KTextEditor::CodeCompletionModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSetItemData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_setitemdata_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_ClearItemData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperClearItemData(KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    return self->KTextEditor::CodeCompletionModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnClearItemData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_clearitemdata_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KTextEditor__CodeCompletionModel_MimeTypes(const KTextEditor__CodeCompletionModel* self) {
    QList<QString> _ret = self->mimeTypes();
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

// Base class handler implementation
libqt_list /* of libqt_string */ KTextEditor__CodeCompletionModel_SuperMimeTypes(const KTextEditor__CodeCompletionModel* self) {
    QList<QString> _ret = self->KTextEditor::CodeCompletionModel::mimeTypes();
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

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMimeTypes(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_mimetypes_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KTextEditor__CodeCompletionModel_MimeData(const KTextEditor__CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* KTextEditor__CodeCompletionModel_SuperMimeData(const KTextEditor__CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KTextEditor::CodeCompletionModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMimeData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_mimedata_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_CanDropMimeData(const KTextEditor__CodeCompletionModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperCanDropMimeData(const KTextEditor__CodeCompletionModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KTextEditor::CodeCompletionModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnCanDropMimeData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_candropmimedata_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_DropMimeData(KTextEditor__CodeCompletionModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperDropMimeData(KTextEditor__CodeCompletionModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KTextEditor::CodeCompletionModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnDropMimeData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_dropmimedata_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KTextEditor__CodeCompletionModel_SupportedDropActions(const KTextEditor__CodeCompletionModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int KTextEditor__CodeCompletionModel_SuperSupportedDropActions(const KTextEditor__CodeCompletionModel* self) {
    return static_cast<int>(self->KTextEditor::CodeCompletionModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSupportedDropActions(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_supporteddropactions_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int KTextEditor__CodeCompletionModel_SupportedDragActions(const KTextEditor__CodeCompletionModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KTextEditor__CodeCompletionModel_SuperSupportedDragActions(const KTextEditor__CodeCompletionModel* self) {
    return static_cast<int>(self->KTextEditor::CodeCompletionModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSupportedDragActions(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_supporteddragactions_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_InsertRows(KTextEditor__CodeCompletionModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperInsertRows(KTextEditor__CodeCompletionModel* self, int row, int count, const QModelIndex* parent) {
    return self->KTextEditor::CodeCompletionModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnInsertRows(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_insertrows_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_InsertColumns(KTextEditor__CodeCompletionModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperInsertColumns(KTextEditor__CodeCompletionModel* self, int column, int count, const QModelIndex* parent) {
    return self->KTextEditor::CodeCompletionModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnInsertColumns(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_insertcolumns_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_RemoveRows(KTextEditor__CodeCompletionModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperRemoveRows(KTextEditor__CodeCompletionModel* self, int row, int count, const QModelIndex* parent) {
    return self->KTextEditor::CodeCompletionModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnRemoveRows(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_removerows_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_RemoveColumns(KTextEditor__CodeCompletionModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperRemoveColumns(KTextEditor__CodeCompletionModel* self, int column, int count, const QModelIndex* parent) {
    return self->KTextEditor::CodeCompletionModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnRemoveColumns(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_removecolumns_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_MoveRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperMoveRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KTextEditor::CodeCompletionModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMoveRows(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_moverows_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_MoveColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperMoveColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KTextEditor::CodeCompletionModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMoveColumns(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_movecolumns_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_FetchMore(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_SuperFetchMore(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    self->KTextEditor::CodeCompletionModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnFetchMore(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_fetchmore_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_CanFetchMore(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperCanFetchMore(const KTextEditor__CodeCompletionModel* self, const QModelIndex* parent) {
    return self->KTextEditor::CodeCompletionModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnCanFetchMore(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_canfetchmore_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
int KTextEditor__CodeCompletionModel_Flags(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int KTextEditor__CodeCompletionModel_SuperFlags(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KTextEditor::CodeCompletionModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnFlags(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_flags_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Flags_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_Sort(KTextEditor__CodeCompletionModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_SuperSort(KTextEditor__CodeCompletionModel* self, int column, int order) {
    self->KTextEditor::CodeCompletionModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSort(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_sort_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KTextEditor__CodeCompletionModel_Buddy(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KTextEditor__CodeCompletionModel_SuperBuddy(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KTextEditor::CodeCompletionModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnBuddy(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_buddy_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KTextEditor__CodeCompletionModel_Match(const KTextEditor__CodeCompletionModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KTextEditor__CodeCompletionModel_SuperMatch(const KTextEditor__CodeCompletionModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KTextEditor::CodeCompletionModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMatch(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_match_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* KTextEditor__CodeCompletionModel_Span(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KTextEditor__CodeCompletionModel_SuperSpan(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index) {
    return new QSize(self->KTextEditor::CodeCompletionModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSpan(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_span_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Span_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KTextEditor__CodeCompletionModel_RoleNames(const KTextEditor__CodeCompletionModel* self) {
    QHash<int, QByteArray> _ret = self->roleNames();
    // Convert QHash<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = _itr->first;
        QByteArray _hashval_qb = _itr->second;
        libqt_string _hashval_str;
        _hashval_str.len = _hashval_qb.length();
        _hashval_str.data = static_cast<char*>(malloc(_hashval_str.len));
        memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
        _varr[_ctr] = _hashval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KTextEditor__CodeCompletionModel_SuperRoleNames(const KTextEditor__CodeCompletionModel* self) {
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
        _hashval_str.data = static_cast<char*>(malloc(_hashval_str.len));
        memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
        _varr[_ctr] = _hashval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnRoleNames(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_rolenames_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_MultiData(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_SuperMultiData(const KTextEditor__CodeCompletionModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KTextEditor::CodeCompletionModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnMultiData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_multidata_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_Submit(KTextEditor__CodeCompletionModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperSubmit(KTextEditor__CodeCompletionModel* self) {
    return self->KTextEditor::CodeCompletionModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnSubmit(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_submit_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_Revert(KTextEditor__CodeCompletionModel* self) {
    self->revert();
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_SuperRevert(KTextEditor__CodeCompletionModel* self) {
    self->KTextEditor::CodeCompletionModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnRevert(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_revert_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_ResetInternalData(KTextEditor__CodeCompletionModel* self) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel) {
        vktexteditorcodecompletionmodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KTextEditor::CodeCompletionModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_SuperResetInternalData(KTextEditor__CodeCompletionModel* self) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->KTextEditor::CodeCompletionModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KTextEditor::CodeCompletionModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnResetInternalData(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_resetinternaldata_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_Event(KTextEditor__CodeCompletionModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperEvent(KTextEditor__CodeCompletionModel* self, QEvent* event) {
    return self->KTextEditor::CodeCompletionModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnEvent(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_event_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__CodeCompletionModel_EventFilter(KTextEditor__CodeCompletionModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KTextEditor__CodeCompletionModel_SuperEventFilter(KTextEditor__CodeCompletionModel* self, QObject* watched, QEvent* event) {
    return self->KTextEditor::CodeCompletionModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnEventFilter(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_eventfilter_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_TimerEvent(KTextEditor__CodeCompletionModel* self, QTimerEvent* event) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel) {
        vktexteditorcodecompletionmodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::CodeCompletionModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_SuperTimerEvent(KTextEditor__CodeCompletionModel* self, QTimerEvent* event) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->KTextEditor::CodeCompletionModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::CodeCompletionModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnTimerEvent(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_timerevent_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_ChildEvent(KTextEditor__CodeCompletionModel* self, QChildEvent* event) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel) {
        vktexteditorcodecompletionmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::CodeCompletionModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_SuperChildEvent(KTextEditor__CodeCompletionModel* self, QChildEvent* event) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->KTextEditor::CodeCompletionModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::CodeCompletionModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnChildEvent(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_childevent_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_CustomEvent(KTextEditor__CodeCompletionModel* self, QEvent* event) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel) {
        vktexteditorcodecompletionmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::CodeCompletionModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_SuperCustomEvent(KTextEditor__CodeCompletionModel* self, QEvent* event) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->KTextEditor::CodeCompletionModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::CodeCompletionModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnCustomEvent(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_customevent_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_ConnectNotify(KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel) {
        vktexteditorcodecompletionmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::CodeCompletionModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_SuperConnectNotify(KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->KTextEditor::CodeCompletionModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTextEditor::CodeCompletionModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnConnectNotify(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_connectnotify_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__CodeCompletionModel_DisconnectNotify(KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal) {
    auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self);
    if (vktexteditorcodecompletionmodel) {
        vktexteditorcodecompletionmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::CodeCompletionModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__CodeCompletionModel_SuperDisconnectNotify(KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->KTextEditor::CodeCompletionModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTextEditor::CodeCompletionModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__CodeCompletionModel_OnDisconnectNotify(KTextEditor__CodeCompletionModel* self, intptr_t slot) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self))
        vktexteditorcodecompletionmodel->ktexteditor__codecompletionmodel_disconnectnotify_callback = reinterpret_cast<VirtualKTextEditorCodeCompletionModel::KTextEditor__CodeCompletionModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_SetHasGroups(KTextEditor__CodeCompletionModel* self, bool hasGroups) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::setHasGroups(hasGroups);
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::setHasGroups called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* KTextEditor__CodeCompletionModel_CreateIndex(const KTextEditor__CodeCompletionModel* self, int row, int column) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self)))
        return new QModelIndex(vktexteditorcodecompletionmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KTextEditor::CodeCompletionModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_EncodeData(const KTextEditor__CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTextEditor__CodeCompletionModel_DecodeData(KTextEditor__CodeCompletionModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        return vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_BeginInsertRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_EndInsertRows(KTextEditor__CodeCompletionModel* self) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::endInsertRows();
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_BeginRemoveRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_EndRemoveRows(KTextEditor__CodeCompletionModel* self) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTextEditor__CodeCompletionModel_BeginMoveRows(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        return vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_EndMoveRows(KTextEditor__CodeCompletionModel* self) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::endMoveRows();
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_BeginInsertColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_EndInsertColumns(KTextEditor__CodeCompletionModel* self) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_BeginRemoveColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_EndRemoveColumns(KTextEditor__CodeCompletionModel* self) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTextEditor__CodeCompletionModel_BeginMoveColumns(KTextEditor__CodeCompletionModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        return vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_EndMoveColumns(KTextEditor__CodeCompletionModel* self) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_BeginResetModel(KTextEditor__CodeCompletionModel* self) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::beginResetModel();
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_EndResetModel(KTextEditor__CodeCompletionModel* self) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::endResetModel();
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_ChangePersistentIndex(KTextEditor__CodeCompletionModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__CodeCompletionModel_ChangePersistentIndexList(KTextEditor__CodeCompletionModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vktexteditorcodecompletionmodel = dynamic_cast<VirtualKTextEditorCodeCompletionModel*>(self)) {
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
        vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KTextEditor__CodeCompletionModel_PersistentIndexList(const KTextEditor__CodeCompletionModel* self) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self))) {
        QList<QModelIndex> _ret = vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KTextEditor__CodeCompletionModel_Sender(const KTextEditor__CodeCompletionModel* self) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self))) {
        return vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::sender();
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KTextEditor__CodeCompletionModel_SenderSignalIndex(const KTextEditor__CodeCompletionModel* self) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self))) {
        return vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KTextEditor__CodeCompletionModel_Receivers(const KTextEditor__CodeCompletionModel* self, const char* signal) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self))) {
        return vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::receivers(signal);
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTextEditor__CodeCompletionModel_IsSignalConnected(const KTextEditor__CodeCompletionModel* self, const QMetaMethod* signal) {
    if (auto* vktexteditorcodecompletionmodel = const_cast<VirtualKTextEditorCodeCompletionModel*>(dynamic_cast<const VirtualKTextEditorCodeCompletionModel*>(self))) {
        return vktexteditorcodecompletionmodel->VirtualKTextEditorCodeCompletionModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KTextEditor::CodeCompletionModel::isSignalConnected called without a directly constructed type");
}

void KTextEditor__CodeCompletionModel_Delete(KTextEditor__CodeCompletionModel* self) {
    delete self;
}
