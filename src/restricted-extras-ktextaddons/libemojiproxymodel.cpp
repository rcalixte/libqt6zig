#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
#include <QItemSelection>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QModelRoleDataSpan>
#include <QObject>
#include <QSize>
#include <QSortFilterProxyModel>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__EmojiProxyModel
#include <emojiproxymodel.h>
#include "libemojiproxymodel.h"
#include "libemojiproxymodel.hxx"

TextEmoticonsCore__EmojiProxyModel* TextEmoticonsCore__EmojiProxyModel_new() {
    return new VirtualTextEmoticonsCoreEmojiProxyModel();
}

TextEmoticonsCore__EmojiProxyModel* TextEmoticonsCore__EmojiProxyModel_new2(QObject* parent) {
    return new VirtualTextEmoticonsCoreEmojiProxyModel(parent);
}

QMetaObject* TextEmoticonsCore__EmojiProxyModel_MetaObject(const TextEmoticonsCore__EmojiProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEmoticonsCore__EmojiProxyModel_Metacast(TextEmoticonsCore__EmojiProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEmoticonsCore__EmojiProxyModel_Metacall(TextEmoticonsCore__EmojiProxyModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextEmoticonsCore__EmojiProxyModel_Tr(const char* s) {
    auto _ret = TextEmoticonsCore::EmojiProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextEmoticonsCore__EmojiProxyModel_Category(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto _ret = self->category();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextEmoticonsCore__EmojiProxyModel_SetCategory(TextEmoticonsCore__EmojiProxyModel* self, const libqt_string newCategories) {
    QString newCategories_QString = QString::fromUtf8(newCategories.data, newCategories.len);
    self->setCategory(newCategories_QString);
}

libqt_list /* of libqt_string */ TextEmoticonsCore__EmojiProxyModel_RecentEmoticons(const TextEmoticonsCore__EmojiProxyModel* self) {
    QList<QString> _ret = self->recentEmoticons();
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

void TextEmoticonsCore__EmojiProxyModel_SetRecentEmoticons(TextEmoticonsCore__EmojiProxyModel* self, const libqt_list /* of libqt_string */ newRecentEmoticons) {
    QList<QString> newRecentEmoticons_QList;
    newRecentEmoticons_QList.reserve(newRecentEmoticons.len);
    libqt_string* newRecentEmoticons_arr = static_cast<libqt_string*>(newRecentEmoticons.data);
    for (size_t i = 0; i < newRecentEmoticons.len; ++i) {
        QString newRecentEmoticons_arr_i_QString = QString::fromUtf8(newRecentEmoticons_arr[i].data, newRecentEmoticons_arr[i].len);
        newRecentEmoticons_QList.push_back(newRecentEmoticons_arr_i_QString);
    }
    self->setRecentEmoticons(newRecentEmoticons_QList);
}

libqt_string TextEmoticonsCore__EmojiProxyModel_SearchIdentifier(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto _ret = self->searchIdentifier();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextEmoticonsCore__EmojiProxyModel_SetSearchIdentifier(TextEmoticonsCore__EmojiProxyModel* self, const libqt_string newSearchIdentifier) {
    QString newSearchIdentifier_QString = QString::fromUtf8(newSearchIdentifier.data, newSearchIdentifier.len);
    self->setSearchIdentifier(newSearchIdentifier_QString);
}

bool TextEmoticonsCore__EmojiProxyModel_FilterAcceptsRow(const TextEmoticonsCore__EmojiProxyModel* self, int source_row, const QModelIndex* source_parent) {
    auto* vtextemoticonscore__emojiproxymodel = dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscore__emojiproxymodel) {
        return vtextemoticonscore__emojiproxymodel->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    }
    qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::filterAcceptsRow called without a directly constructed type");
}

bool TextEmoticonsCore__EmojiProxyModel_LessThan(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vtextemoticonscore__emojiproxymodel = dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscore__emojiproxymodel) {
        return vtextemoticonscore__emojiproxymodel->lessThan(*left, *right);
    }
    qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::lessThan called without a directly constructed type");
}

libqt_string TextEmoticonsCore__EmojiProxyModel_Tr2(const char* s, const char* c) {
    auto _ret = TextEmoticonsCore::EmojiProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextEmoticonsCore__EmojiProxyModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextEmoticonsCore::EmojiProxyModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextEmoticonsCore__EmojiProxyModel_SuperMetaObject(const TextEmoticonsCore__EmojiProxyModel* self) {
    return (QMetaObject*)self->TextEmoticonsCore::EmojiProxyModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMetaObject(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_metaobject_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextEmoticonsCore__EmojiProxyModel_SuperMetacast(TextEmoticonsCore__EmojiProxyModel* self, const char* param1) {
    return self->TextEmoticonsCore::EmojiProxyModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMetacast(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_metacast_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SuperMetacall(TextEmoticonsCore__EmojiProxyModel* self, int param1, int param2, void** param3) {
    return self->TextEmoticonsCore::EmojiProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMetacall(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_metacall_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Metacall_Callback>(slot);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperFilterAcceptsRow(const TextEmoticonsCore__EmojiProxyModel* self, int source_row, const QModelIndex* source_parent) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self))) {
        return vtextemoticonscoreemojiproxymodel->TextEmoticonsCore::EmojiProxyModel::filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::filterAcceptsRow called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnFilterAcceptsRow(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_filteracceptsrow_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_FilterAcceptsRow_Callback>(slot);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperLessThan(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self))) {
        return vtextemoticonscoreemojiproxymodel->TextEmoticonsCore::EmojiProxyModel::lessThan(*left, *right);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::lessThan called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnLessThan(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_lessthan_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_LessThan_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SetSourceModel(TextEmoticonsCore__EmojiProxyModel* self, QAbstractItemModel* sourceModel) {
    self->setSourceModel(sourceModel);
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperSetSourceModel(TextEmoticonsCore__EmojiProxyModel* self, QAbstractItemModel* sourceModel) {
    self->TextEmoticonsCore::EmojiProxyModel::setSourceModel(sourceModel);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSetSourceModel(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_setsourcemodel_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_SetSourceModel_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_MapToSource(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->mapToSource(*proxyIndex));
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperMapToSource(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* proxyIndex) {
    return new QModelIndex(self->TextEmoticonsCore::EmojiProxyModel::mapToSource(*proxyIndex));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMapToSource(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_maptosource_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MapToSource_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_MapFromSource(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->mapFromSource(*sourceIndex));
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperMapFromSource(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceIndex) {
    return new QModelIndex(self->TextEmoticonsCore::EmojiProxyModel::mapFromSource(*sourceIndex));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMapFromSource(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_mapfromsource_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MapFromSource_Callback>(slot);
}

// Derived class handler implementation
QItemSelection* TextEmoticonsCore__EmojiProxyModel_MapSelectionToSource(const TextEmoticonsCore__EmojiProxyModel* self, const QItemSelection* proxySelection) {
    return new QItemSelection(self->mapSelectionToSource(*proxySelection));
}

// Base class handler implementation
QItemSelection* TextEmoticonsCore__EmojiProxyModel_SuperMapSelectionToSource(const TextEmoticonsCore__EmojiProxyModel* self, const QItemSelection* proxySelection) {
    return new QItemSelection(self->TextEmoticonsCore::EmojiProxyModel::mapSelectionToSource(*proxySelection));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMapSelectionToSource(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_mapselectiontosource_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MapSelectionToSource_Callback>(slot);
}

// Derived class handler implementation
QItemSelection* TextEmoticonsCore__EmojiProxyModel_MapSelectionFromSource(const TextEmoticonsCore__EmojiProxyModel* self, const QItemSelection* sourceSelection) {
    return new QItemSelection(self->mapSelectionFromSource(*sourceSelection));
}

// Base class handler implementation
QItemSelection* TextEmoticonsCore__EmojiProxyModel_SuperMapSelectionFromSource(const TextEmoticonsCore__EmojiProxyModel* self, const QItemSelection* sourceSelection) {
    return new QItemSelection(self->TextEmoticonsCore::EmojiProxyModel::mapSelectionFromSource(*sourceSelection));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMapSelectionFromSource(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_mapselectionfromsource_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MapSelectionFromSource_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn(const TextEmoticonsCore__EmojiProxyModel* self, int source_column, const QModelIndex* source_parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel) {
        return vtextemoticonscoreemojiproxymodel->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::filterAcceptsColumn called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperFilterAcceptsColumn(const TextEmoticonsCore__EmojiProxyModel* self, int source_column, const QModelIndex* source_parent) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self))) {
        return vtextemoticonscoreemojiproxymodel->TextEmoticonsCore::EmojiProxyModel::filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::filterAcceptsColumn called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnFilterAcceptsColumn(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_filteracceptscolumn_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_Index(const TextEmoticonsCore__EmojiProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperIndex(const TextEmoticonsCore__EmojiProxyModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->TextEmoticonsCore::EmojiProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnIndex(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_index_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_Parent(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->parent(*child));
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperParent(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* child) {
    return new QModelIndex(self->TextEmoticonsCore::EmojiProxyModel::parent(*child));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnParent(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_parent_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Parent_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_Sibling(const TextEmoticonsCore__EmojiProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperSibling(const TextEmoticonsCore__EmojiProxyModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->TextEmoticonsCore::EmojiProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSibling(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_sibling_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiProxyModel_RowCount(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

// Base class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SuperRowCount(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiProxyModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnRowCount(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_rowcount_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_RowCount_Callback>(slot);
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiProxyModel_ColumnCount(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

// Base class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SuperColumnCount(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiProxyModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnColumnCount(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_columncount_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_ColumnCount_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_HasChildren(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperHasChildren(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiProxyModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnHasChildren(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_haschildren_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_HasChildren_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextEmoticonsCore__EmojiProxyModel_Data(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

// Base class handler implementation
QVariant* TextEmoticonsCore__EmojiProxyModel_SuperData(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->TextEmoticonsCore::EmojiProxyModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_data_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Data_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SetData(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperSetData(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->TextEmoticonsCore::EmojiProxyModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSetData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_setdata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextEmoticonsCore__EmojiProxyModel_HeaderData(const TextEmoticonsCore__EmojiProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* TextEmoticonsCore__EmojiProxyModel_SuperHeaderData(const TextEmoticonsCore__EmojiProxyModel* self, int section, int orientation, int role) {
    return new QVariant(self->TextEmoticonsCore::EmojiProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnHeaderData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_headerdata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SetHeaderData(TextEmoticonsCore__EmojiProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperSetHeaderData(TextEmoticonsCore__EmojiProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->TextEmoticonsCore::EmojiProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSetHeaderData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_setheaderdata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
QMimeData* TextEmoticonsCore__EmojiProxyModel_MimeData(const TextEmoticonsCore__EmojiProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* TextEmoticonsCore__EmojiProxyModel_SuperMimeData(const TextEmoticonsCore__EmojiProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->TextEmoticonsCore::EmojiProxyModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMimeData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_mimedata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_DropMimeData(TextEmoticonsCore__EmojiProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperDropMimeData(TextEmoticonsCore__EmojiProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnDropMimeData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_dropmimedata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_InsertRows(TextEmoticonsCore__EmojiProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperInsertRows(TextEmoticonsCore__EmojiProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnInsertRows(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_insertrows_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_InsertColumns(TextEmoticonsCore__EmojiProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperInsertColumns(TextEmoticonsCore__EmojiProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnInsertColumns(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_insertcolumns_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_RemoveRows(TextEmoticonsCore__EmojiProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperRemoveRows(TextEmoticonsCore__EmojiProxyModel* self, int row, int count, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnRemoveRows(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_removerows_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_RemoveColumns(TextEmoticonsCore__EmojiProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperRemoveColumns(TextEmoticonsCore__EmojiProxyModel* self, int column, int count, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnRemoveColumns(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_removecolumns_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_FetchMore(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperFetchMore(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    self->TextEmoticonsCore::EmojiProxyModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnFetchMore(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_fetchmore_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_CanFetchMore(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperCanFetchMore(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiProxyModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnCanFetchMore(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_canfetchmore_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiProxyModel_Flags(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SuperFlags(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    return static_cast<int>(self->TextEmoticonsCore::EmojiProxyModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnFlags(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_flags_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Flags_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_Buddy(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperBuddy(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    return new QModelIndex(self->TextEmoticonsCore::EmojiProxyModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnBuddy(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_buddy_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiProxyModel_Match(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiProxyModel_SuperMatch(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->TextEmoticonsCore::EmojiProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void TextEmoticonsCore__EmojiProxyModel_OnMatch(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_match_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* TextEmoticonsCore__EmojiProxyModel_Span(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* TextEmoticonsCore__EmojiProxyModel_SuperSpan(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    return new QSize(self->TextEmoticonsCore::EmojiProxyModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSpan(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_span_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Span_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_Sort(TextEmoticonsCore__EmojiProxyModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperSort(TextEmoticonsCore__EmojiProxyModel* self, int column, int order) {
    self->TextEmoticonsCore::EmojiProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSort(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_sort_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Sort_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ TextEmoticonsCore__EmojiProxyModel_MimeTypes(const TextEmoticonsCore__EmojiProxyModel* self) {
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
libqt_list /* of libqt_string */ TextEmoticonsCore__EmojiProxyModel_SuperMimeTypes(const TextEmoticonsCore__EmojiProxyModel* self) {
    QList<QString> _ret = self->TextEmoticonsCore::EmojiProxyModel::mimeTypes();
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
void TextEmoticonsCore__EmojiProxyModel_OnMimeTypes(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_mimetypes_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SupportedDropActions(const TextEmoticonsCore__EmojiProxyModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SuperSupportedDropActions(const TextEmoticonsCore__EmojiProxyModel* self) {
    return static_cast<int>(self->TextEmoticonsCore::EmojiProxyModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSupportedDropActions(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_supporteddropactions_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_Submit(TextEmoticonsCore__EmojiProxyModel* self) {
    return self->submit();
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperSubmit(TextEmoticonsCore__EmojiProxyModel* self) {
    return self->TextEmoticonsCore::EmojiProxyModel::submit();
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSubmit(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_submit_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_Revert(TextEmoticonsCore__EmojiProxyModel* self) {
    self->revert();
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperRevert(TextEmoticonsCore__EmojiProxyModel* self) {
    self->TextEmoticonsCore::EmojiProxyModel::revert();
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnRevert(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_revert_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Revert_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ TextEmoticonsCore__EmojiProxyModel_ItemData(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
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

// Base class handler implementation
libqt_map /* of int to QVariant* */ TextEmoticonsCore__EmojiProxyModel_SuperItemData(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->TextEmoticonsCore::EmojiProxyModel::itemData(*index);
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
void TextEmoticonsCore__EmojiProxyModel_OnItemData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_itemdata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SetItemData(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperSetItemData(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->TextEmoticonsCore::EmojiProxyModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSetItemData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_setitemdata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_ClearItemData(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperClearItemData(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    return self->TextEmoticonsCore::EmojiProxyModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnClearItemData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_clearitemdata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_CanDropMimeData(const TextEmoticonsCore__EmojiProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperCanDropMimeData(const TextEmoticonsCore__EmojiProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnCanDropMimeData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_candropmimedata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SupportedDragActions(const TextEmoticonsCore__EmojiProxyModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SuperSupportedDragActions(const TextEmoticonsCore__EmojiProxyModel* self) {
    return static_cast<int>(self->TextEmoticonsCore::EmojiProxyModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSupportedDragActions(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_supporteddragactions_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ TextEmoticonsCore__EmojiProxyModel_RoleNames(const TextEmoticonsCore__EmojiProxyModel* self) {
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
libqt_map /* of int to libqt_string */ TextEmoticonsCore__EmojiProxyModel_SuperRoleNames(const TextEmoticonsCore__EmojiProxyModel* self) {
    QHash<int, QByteArray> _ret = self->TextEmoticonsCore::EmojiProxyModel::roleNames();
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
void TextEmoticonsCore__EmojiProxyModel_OnRoleNames(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_rolenames_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_MoveRows(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperMoveRows(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->TextEmoticonsCore::EmojiProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMoveRows(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_moverows_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_MoveColumns(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperMoveColumns(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->TextEmoticonsCore::EmojiProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMoveColumns(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_movecolumns_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_MultiData(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperMultiData(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->TextEmoticonsCore::EmojiProxyModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMultiData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_multidata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_ResetInternalData(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel) {
        vtextemoticonscoreemojiproxymodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperResetInternalData(TextEmoticonsCore__EmojiProxyModel* self) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->TextEmoticonsCore::EmojiProxyModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnResetInternalData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_resetinternaldata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_Event(TextEmoticonsCore__EmojiProxyModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperEvent(TextEmoticonsCore__EmojiProxyModel* self, QEvent* event) {
    return self->TextEmoticonsCore::EmojiProxyModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnEvent(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_event_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_EventFilter(TextEmoticonsCore__EmojiProxyModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperEventFilter(TextEmoticonsCore__EmojiProxyModel* self, QObject* watched, QEvent* event) {
    return self->TextEmoticonsCore::EmojiProxyModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnEventFilter(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_eventfilter_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_TimerEvent(TextEmoticonsCore__EmojiProxyModel* self, QTimerEvent* event) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel) {
        vtextemoticonscoreemojiproxymodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperTimerEvent(TextEmoticonsCore__EmojiProxyModel* self, QTimerEvent* event) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->TextEmoticonsCore::EmojiProxyModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnTimerEvent(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_timerevent_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_ChildEvent(TextEmoticonsCore__EmojiProxyModel* self, QChildEvent* event) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel) {
        vtextemoticonscoreemojiproxymodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperChildEvent(TextEmoticonsCore__EmojiProxyModel* self, QChildEvent* event) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->TextEmoticonsCore::EmojiProxyModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnChildEvent(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_childevent_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_CustomEvent(TextEmoticonsCore__EmojiProxyModel* self, QEvent* event) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel) {
        vtextemoticonscoreemojiproxymodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperCustomEvent(TextEmoticonsCore__EmojiProxyModel* self, QEvent* event) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->TextEmoticonsCore::EmojiProxyModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnCustomEvent(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_customevent_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_ConnectNotify(TextEmoticonsCore__EmojiProxyModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel) {
        vtextemoticonscoreemojiproxymodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperConnectNotify(TextEmoticonsCore__EmojiProxyModel* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->TextEmoticonsCore::EmojiProxyModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnConnectNotify(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_connectnotify_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_DisconnectNotify(TextEmoticonsCore__EmojiProxyModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel) {
        vtextemoticonscoreemojiproxymodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperDisconnectNotify(TextEmoticonsCore__EmojiProxyModel* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->TextEmoticonsCore::EmojiProxyModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiProxyModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnDisconnectNotify(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self))
        vtextemoticonscoreemojiproxymodel->textemoticonscore__emojiproxymodel_disconnectnotify_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_InvalidateFilter(TextEmoticonsCore__EmojiProxyModel* self) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::invalidateFilter();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::invalidateFilter called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_InvalidateRowsFilter(TextEmoticonsCore__EmojiProxyModel* self) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::invalidateRowsFilter();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::invalidateRowsFilter called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_InvalidateColumnsFilter(TextEmoticonsCore__EmojiProxyModel* self) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::invalidateColumnsFilter();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::invalidateColumnsFilter called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_CreateSourceIndex(const TextEmoticonsCore__EmojiProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::createSourceIndex called without a directly constructed type");
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_CreateIndex(const TextEmoticonsCore__EmojiProxyModel* self, int row, int column) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self)))
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_EncodeData(const TextEmoticonsCore__EmojiProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEmoticonsCore__EmojiProxyModel_DecodeData(TextEmoticonsCore__EmojiProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        return vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_BeginInsertRows(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_EndInsertRows(TextEmoticonsCore__EmojiProxyModel* self) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::endInsertRows();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_BeginRemoveRows(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_EndRemoveRows(TextEmoticonsCore__EmojiProxyModel* self) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::endRemoveRows();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEmoticonsCore__EmojiProxyModel_BeginMoveRows(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        return vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_EndMoveRows(TextEmoticonsCore__EmojiProxyModel* self) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::endMoveRows();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_BeginInsertColumns(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_EndInsertColumns(TextEmoticonsCore__EmojiProxyModel* self) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::endInsertColumns();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_BeginRemoveColumns(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_EndRemoveColumns(TextEmoticonsCore__EmojiProxyModel* self) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEmoticonsCore__EmojiProxyModel_BeginMoveColumns(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        return vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_EndMoveColumns(TextEmoticonsCore__EmojiProxyModel* self) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::endMoveColumns();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_BeginResetModel(TextEmoticonsCore__EmojiProxyModel* self) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::beginResetModel();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_EndResetModel(TextEmoticonsCore__EmojiProxyModel* self) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::endResetModel();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndex(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndexList(TextEmoticonsCore__EmojiProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self)) {
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
        vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiProxyModel_PersistentIndexList(const TextEmoticonsCore__EmojiProxyModel* self) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self))) {
        QList<QModelIndex> _ret = vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::persistentIndexList();
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
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextEmoticonsCore__EmojiProxyModel_Sender(const TextEmoticonsCore__EmojiProxyModel* self) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self))) {
        return vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::sender();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEmoticonsCore__EmojiProxyModel_SenderSignalIndex(const TextEmoticonsCore__EmojiProxyModel* self) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self))) {
        return vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEmoticonsCore__EmojiProxyModel_Receivers(const TextEmoticonsCore__EmojiProxyModel* self, const char* signal) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self))) {
        return vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::receivers(signal);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEmoticonsCore__EmojiProxyModel_IsSignalConnected(const TextEmoticonsCore__EmojiProxyModel* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self))) {
        return vtextemoticonscoreemojiproxymodel->VirtualTextEmoticonsCoreEmojiProxyModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiProxyModel::isSignalConnected called without a directly constructed type");
}

void TextEmoticonsCore__EmojiProxyModel_Delete(TextEmoticonsCore__EmojiProxyModel* self) {
    delete self;
}
