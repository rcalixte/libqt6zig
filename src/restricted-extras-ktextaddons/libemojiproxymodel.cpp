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
    auto* vtextemoticonscore__emojiproxymodel = dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscore__emojiproxymodel && vtextemoticonscore__emojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->metaObject();
    }
}

void* TextEmoticonsCore__EmojiProxyModel_Metacast(TextEmoticonsCore__EmojiProxyModel* self, const char* param1) {
    auto* vtextemoticonscore__emojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscore__emojiproxymodel && vtextemoticonscore__emojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->qt_metacast(param1);
    }
}

int TextEmoticonsCore__EmojiProxyModel_Metacall(TextEmoticonsCore__EmojiProxyModel* self, int param1, int param2, void** param3) {
    auto* vtextemoticonscore__emojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscore__emojiproxymodel && vtextemoticonscore__emojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
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
    if (vtextemoticonscore__emojiproxymodel && vtextemoticonscore__emojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscore__emojiproxymodel->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    }
    return {};
}

bool TextEmoticonsCore__EmojiProxyModel_LessThan(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vtextemoticonscore__emojiproxymodel = dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscore__emojiproxymodel && vtextemoticonscore__emojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscore__emojiproxymodel->lessThan(*left, *right);
    }
    return {};
}

// Base class handler implementation
QMetaObject* TextEmoticonsCore__EmojiProxyModel_SuperMetaObject(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MetaObject_IsBase(true);
        return (QMetaObject*)vtextemoticonscoreemojiproxymodel->metaObject();
    } else {
        return (QMetaObject*)self->TextEmoticonsCore::EmojiProxyModel::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMetaObject(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MetaObject_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextEmoticonsCore__EmojiProxyModel_SuperMetacast(TextEmoticonsCore__EmojiProxyModel* self, const char* param1) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Metacast_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->qt_metacast(param1);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMetacast(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Metacast_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SuperMetacall(TextEmoticonsCore__EmojiProxyModel* self, int param1, int param2, void** param3) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Metacall_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMetacall(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Metacall_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperFilterAcceptsRow(const TextEmoticonsCore__EmojiProxyModel* self, int source_row, const QModelIndex* source_parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_FilterAcceptsRow_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->filterAcceptsRow(static_cast<int>(source_row), *source_parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnFilterAcceptsRow(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_FilterAcceptsRow_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_FilterAcceptsRow_Callback>(slot));
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperLessThan(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* left, const QModelIndex* right) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_LessThan_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->lessThan(*left, *right);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->lessThan(*left, *right);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnLessThan(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_LessThan_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_LessThan_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SetSourceModel(TextEmoticonsCore__EmojiProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setSourceModel(sourceModel);
    } else {
        self->TextEmoticonsCore::EmojiProxyModel::setSourceModel(sourceModel);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperSetSourceModel(TextEmoticonsCore__EmojiProxyModel* self, QAbstractItemModel* sourceModel) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_SetSourceModel_IsBase(true);
        vtextemoticonscoreemojiproxymodel->setSourceModel(sourceModel);
    } else {
        self->TextEmoticonsCore::EmojiProxyModel::setSourceModel(sourceModel);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSetSourceModel(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_SetSourceModel_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_MapToSource(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperMapToSource(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* proxyIndex) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MapToSource_IsBase(true);
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->mapToSource(*proxyIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMapToSource(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MapToSource_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MapToSource_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_MapFromSource(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperMapFromSource(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceIndex) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MapFromSource_IsBase(true);
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->mapFromSource(*sourceIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMapFromSource(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MapFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* TextEmoticonsCore__EmojiProxyModel_MapSelectionToSource(const TextEmoticonsCore__EmojiProxyModel* self, const QItemSelection* proxySelection) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return new QItemSelection(vtextemoticonscoreemojiproxymodel->mapSelectionToSource(*proxySelection));
    } else {
        return new QItemSelection(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->mapSelectionToSource(*proxySelection));
    }
}

// Base class handler implementation
QItemSelection* TextEmoticonsCore__EmojiProxyModel_SuperMapSelectionToSource(const TextEmoticonsCore__EmojiProxyModel* self, const QItemSelection* proxySelection) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MapSelectionToSource_IsBase(true);
        return new QItemSelection(vtextemoticonscoreemojiproxymodel->mapSelectionToSource(*proxySelection));
    } else {
        return new QItemSelection(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->mapSelectionToSource(*proxySelection));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMapSelectionToSource(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MapSelectionToSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* TextEmoticonsCore__EmojiProxyModel_MapSelectionFromSource(const TextEmoticonsCore__EmojiProxyModel* self, const QItemSelection* sourceSelection) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return new QItemSelection(vtextemoticonscoreemojiproxymodel->mapSelectionFromSource(*sourceSelection));
    } else {
        return new QItemSelection(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->mapSelectionFromSource(*sourceSelection));
    }
}

// Base class handler implementation
QItemSelection* TextEmoticonsCore__EmojiProxyModel_SuperMapSelectionFromSource(const TextEmoticonsCore__EmojiProxyModel* self, const QItemSelection* sourceSelection) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MapSelectionFromSource_IsBase(true);
        return new QItemSelection(vtextemoticonscoreemojiproxymodel->mapSelectionFromSource(*sourceSelection));
    } else {
        return new QItemSelection(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->mapSelectionFromSource(*sourceSelection));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMapSelectionFromSource(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MapSelectionFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn(const TextEmoticonsCore__EmojiProxyModel* self, int source_column, const QModelIndex* source_parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperFilterAcceptsColumn(const TextEmoticonsCore__EmojiProxyModel* self, int source_column, const QModelIndex* source_parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->filterAcceptsColumn(static_cast<int>(source_column), *source_parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnFilterAcceptsColumn(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_Index(const TextEmoticonsCore__EmojiProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperIndex(const TextEmoticonsCore__EmojiProxyModel* self, int row, int column, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Index_IsBase(true);
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnIndex(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Index_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_Parent(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* child) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->parent(*child));
    }
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperParent(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* child) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Parent_IsBase(true);
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->parent(*child));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnParent(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Parent_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_Sibling(const TextEmoticonsCore__EmojiProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperSibling(const TextEmoticonsCore__EmojiProxyModel* self, int row, int column, const QModelIndex* idx) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSibling(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Sibling_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiProxyModel_RowCount(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->rowCount(*parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::rowCount(*parent);
    }
}

// Base class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SuperRowCount(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_RowCount_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->rowCount(*parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnRowCount(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_RowCount_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiProxyModel_ColumnCount(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->columnCount(*parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::columnCount(*parent);
    }
}

// Base class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SuperColumnCount(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ColumnCount_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->columnCount(*parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnColumnCount(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_HasChildren(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->hasChildren(*parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::hasChildren(*parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperHasChildren(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_HasChildren_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->hasChildren(*parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnHasChildren(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_HasChildren_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextEmoticonsCore__EmojiProxyModel_Data(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, int role) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return new QVariant(vtextemoticonscoreemojiproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* TextEmoticonsCore__EmojiProxyModel_SuperData(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, int role) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Data_IsBase(true);
        return new QVariant(vtextemoticonscoreemojiproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnData(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Data_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SetData(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperSetData(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_SetData_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSetData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_SetData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextEmoticonsCore__EmojiProxyModel_HeaderData(const TextEmoticonsCore__EmojiProxyModel* self, int section, int orientation, int role) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return new QVariant(vtextemoticonscoreemojiproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* TextEmoticonsCore__EmojiProxyModel_SuperHeaderData(const TextEmoticonsCore__EmojiProxyModel* self, int section, int orientation, int role) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_HeaderData_IsBase(true);
        return new QVariant(vtextemoticonscoreemojiproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnHeaderData(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_HeaderData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SetHeaderData(TextEmoticonsCore__EmojiProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperSetHeaderData(TextEmoticonsCore__EmojiProxyModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_SetHeaderData_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSetHeaderData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* TextEmoticonsCore__EmojiProxyModel_MimeData(const TextEmoticonsCore__EmojiProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->mimeData(indexes_QList);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* TextEmoticonsCore__EmojiProxyModel_SuperMimeData(const TextEmoticonsCore__EmojiProxyModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MimeData_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->mimeData(indexes_QList);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMimeData(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MimeData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_DropMimeData(TextEmoticonsCore__EmojiProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperDropMimeData(TextEmoticonsCore__EmojiProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_DropMimeData_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnDropMimeData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_InsertRows(TextEmoticonsCore__EmojiProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperInsertRows(TextEmoticonsCore__EmojiProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_InsertRows_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnInsertRows(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_InsertRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_InsertColumns(TextEmoticonsCore__EmojiProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperInsertColumns(TextEmoticonsCore__EmojiProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_InsertColumns_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnInsertColumns(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_RemoveRows(TextEmoticonsCore__EmojiProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperRemoveRows(TextEmoticonsCore__EmojiProxyModel* self, int row, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_RemoveRows_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnRemoveRows(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_RemoveColumns(TextEmoticonsCore__EmojiProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperRemoveColumns(TextEmoticonsCore__EmojiProxyModel* self, int column, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_RemoveColumns_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnRemoveColumns(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_FetchMore(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->fetchMore(*parent);
    } else {
        self->TextEmoticonsCore::EmojiProxyModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperFetchMore(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_FetchMore_IsBase(true);
        vtextemoticonscoreemojiproxymodel->fetchMore(*parent);
    } else {
        self->TextEmoticonsCore::EmojiProxyModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnFetchMore(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_FetchMore_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_CanFetchMore(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->canFetchMore(*parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperCanFetchMore(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_CanFetchMore_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->canFetchMore(*parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnCanFetchMore(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiProxyModel_Flags(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return static_cast<int>(vtextemoticonscoreemojiproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->TextEmoticonsCore::EmojiProxyModel::flags(*index));
    }
}

// Base class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SuperFlags(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Flags_IsBase(true);
        return static_cast<int>(vtextemoticonscoreemojiproxymodel->flags(*index));
    } else {
        return static_cast<int>(self->TextEmoticonsCore::EmojiProxyModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnFlags(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Flags_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_Buddy(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperBuddy(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnBuddy(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Buddy_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiProxyModel_Match(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        QList<QModelIndex> _ret = vtextemoticonscoreemojiproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
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
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiProxyModel_SuperMatch(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vtextemoticonscoreemojiproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
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
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMatch(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Match_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextEmoticonsCore__EmojiProxyModel_Span(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return new QSize(vtextemoticonscoreemojiproxymodel->span(*index));
    } else {
        return new QSize(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* TextEmoticonsCore__EmojiProxyModel_SuperSpan(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Span_IsBase(true);
        return new QSize(vtextemoticonscoreemojiproxymodel->span(*index));
    } else {
        return new QSize(((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSpan(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Span_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_Sort(TextEmoticonsCore__EmojiProxyModel* self, int column, int order) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->TextEmoticonsCore::EmojiProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperSort(TextEmoticonsCore__EmojiProxyModel* self, int column, int order) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Sort_IsBase(true);
        vtextemoticonscoreemojiproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->TextEmoticonsCore::EmojiProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSort(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Sort_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ TextEmoticonsCore__EmojiProxyModel_MimeTypes(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        QList<QString> _ret = vtextemoticonscoreemojiproxymodel->mimeTypes();
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
    } else {
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
}

// Base class handler implementation
libqt_list /* of libqt_string */ TextEmoticonsCore__EmojiProxyModel_SuperMimeTypes(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vtextemoticonscoreemojiproxymodel->mimeTypes();
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
    } else {
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
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMimeTypes(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SupportedDropActions(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return static_cast<int>(vtextemoticonscoreemojiproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->TextEmoticonsCore::EmojiProxyModel::supportedDropActions());
    }
}

// Base class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SuperSupportedDropActions(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vtextemoticonscoreemojiproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(self->TextEmoticonsCore::EmojiProxyModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSupportedDropActions(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_Submit(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->submit();
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::submit();
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperSubmit(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Submit_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->submit();
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSubmit(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Submit_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_Revert(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->revert();
    } else {
        self->TextEmoticonsCore::EmojiProxyModel::revert();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperRevert(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Revert_IsBase(true);
        vtextemoticonscoreemojiproxymodel->revert();
    } else {
        self->TextEmoticonsCore::EmojiProxyModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnRevert(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Revert_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ TextEmoticonsCore__EmojiProxyModel_ItemData(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        QMap<int, QVariant> _ret = vtextemoticonscoreemojiproxymodel->itemData(*index);
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
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ TextEmoticonsCore__EmojiProxyModel_SuperItemData(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vtextemoticonscoreemojiproxymodel->itemData(*index);
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
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnItemData(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ItemData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SetItemData(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperSetItemData(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_SetItemData_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->setItemData(*index, roles_QMap);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSetItemData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_SetItemData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_ClearItemData(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->clearItemData(*index);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperClearItemData(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ClearItemData_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->clearItemData(*index);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnClearItemData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_CanDropMimeData(const TextEmoticonsCore__EmojiProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperCanDropMimeData(const TextEmoticonsCore__EmojiProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_CanDropMimeData_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnCanDropMimeData(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SupportedDragActions(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return static_cast<int>(vtextemoticonscoreemojiproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->TextEmoticonsCore::EmojiProxyModel::supportedDragActions());
    }
}

// Base class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SuperSupportedDragActions(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vtextemoticonscoreemojiproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(self->TextEmoticonsCore::EmojiProxyModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSupportedDragActions(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ TextEmoticonsCore__EmojiProxyModel_RoleNames(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        QHash<int, QByteArray> _ret = vtextemoticonscoreemojiproxymodel->roleNames();
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
    } else {
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
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ TextEmoticonsCore__EmojiProxyModel_SuperRoleNames(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vtextemoticonscoreemojiproxymodel->roleNames();
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
    } else {
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
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnRoleNames(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_RoleNames_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_MoveRows(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperMoveRows(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MoveRows_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMoveRows(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MoveRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_MoveColumns(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperMoveColumns(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MoveColumns_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMoveColumns(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_MultiData(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->TextEmoticonsCore::EmojiProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperMultiData(const TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MultiData_IsBase(true);
        vtextemoticonscoreemojiproxymodel->multiData(*index, *roleDataSpan);
    } else {
        self->TextEmoticonsCore::EmojiProxyModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnMultiData(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_MultiData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_ResetInternalData(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->resetInternalData();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperResetInternalData(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ResetInternalData_IsBase(true);
        vtextemoticonscoreemojiproxymodel->resetInternalData();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnResetInternalData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_Event(TextEmoticonsCore__EmojiProxyModel* self, QEvent* event) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->event(event);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::event(event);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperEvent(TextEmoticonsCore__EmojiProxyModel* self, QEvent* event) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Event_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->event(event);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnEvent(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Event_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_EventFilter(TextEmoticonsCore__EmojiProxyModel* self, QObject* watched, QEvent* event) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->eventFilter(watched, event);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperEventFilter(TextEmoticonsCore__EmojiProxyModel* self, QObject* watched, QEvent* event) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EventFilter_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->eventFilter(watched, event);
    } else {
        return self->TextEmoticonsCore::EmojiProxyModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnEventFilter(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EventFilter_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_TimerEvent(TextEmoticonsCore__EmojiProxyModel* self, QTimerEvent* event) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->timerEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperTimerEvent(TextEmoticonsCore__EmojiProxyModel* self, QTimerEvent* event) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_TimerEvent_IsBase(true);
        vtextemoticonscoreemojiproxymodel->timerEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnTimerEvent(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_ChildEvent(TextEmoticonsCore__EmojiProxyModel* self, QChildEvent* event) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->childEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperChildEvent(TextEmoticonsCore__EmojiProxyModel* self, QChildEvent* event) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ChildEvent_IsBase(true);
        vtextemoticonscoreemojiproxymodel->childEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnChildEvent(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_CustomEvent(TextEmoticonsCore__EmojiProxyModel* self, QEvent* event) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->customEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperCustomEvent(TextEmoticonsCore__EmojiProxyModel* self, QEvent* event) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_CustomEvent_IsBase(true);
        vtextemoticonscoreemojiproxymodel->customEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnCustomEvent(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_ConnectNotify(TextEmoticonsCore__EmojiProxyModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->connectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperConnectNotify(TextEmoticonsCore__EmojiProxyModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ConnectNotify_IsBase(true);
        vtextemoticonscoreemojiproxymodel->connectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnConnectNotify(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_DisconnectNotify(TextEmoticonsCore__EmojiProxyModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperDisconnectNotify(TextEmoticonsCore__EmojiProxyModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_DisconnectNotify_IsBase(true);
        vtextemoticonscoreemojiproxymodel->disconnectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnDisconnectNotify(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_InvalidateFilter(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->invalidateFilter();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->invalidateFilter();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperInvalidateFilter(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_InvalidateFilter_IsBase(true);
        vtextemoticonscoreemojiproxymodel->invalidateFilter();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->invalidateFilter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnInvalidateFilter(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_InvalidateFilter_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_InvalidateFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_InvalidateRowsFilter(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->invalidateRowsFilter();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->invalidateRowsFilter();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperInvalidateRowsFilter(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_InvalidateRowsFilter_IsBase(true);
        vtextemoticonscoreemojiproxymodel->invalidateRowsFilter();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->invalidateRowsFilter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnInvalidateRowsFilter(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_InvalidateRowsFilter_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_InvalidateRowsFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_InvalidateColumnsFilter(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->invalidateColumnsFilter();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->invalidateColumnsFilter();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperInvalidateColumnsFilter(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_InvalidateColumnsFilter_IsBase(true);
        vtextemoticonscoreemojiproxymodel->invalidateColumnsFilter();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->invalidateColumnsFilter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnInvalidateColumnsFilter(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_InvalidateColumnsFilter_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_InvalidateColumnsFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_CreateSourceIndex(const TextEmoticonsCore__EmojiProxyModel* self, int row, int col, void* internalPtr) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperCreateSourceIndex(const TextEmoticonsCore__EmojiProxyModel* self, int row, int col, void* internalPtr) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_CreateSourceIndex_IsBase(true);
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnCreateSourceIndex(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_CreateSourceIndex_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_CreateSourceIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_CreateIndex(const TextEmoticonsCore__EmojiProxyModel* self, int row, int column) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiProxyModel_SuperCreateIndex(const TextEmoticonsCore__EmojiProxyModel* self, int row, int column) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vtextemoticonscoreemojiproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnCreateIndex(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_EncodeData(const TextEmoticonsCore__EmojiProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperEncodeData(const TextEmoticonsCore__EmojiProxyModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EncodeData_IsBase(true);
        vtextemoticonscoreemojiproxymodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnEncodeData(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EncodeData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_DecodeData(TextEmoticonsCore__EmojiProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperDecodeData(TextEmoticonsCore__EmojiProxyModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_DecodeData_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnDecodeData(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_DecodeData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_BeginInsertRows(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperBeginInsertRows(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_BeginInsertRows_IsBase(true);
        vtextemoticonscoreemojiproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnBeginInsertRows(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_EndInsertRows(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->endInsertRows();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperEndInsertRows(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EndInsertRows_IsBase(true);
        vtextemoticonscoreemojiproxymodel->endInsertRows();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnEndInsertRows(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_BeginRemoveRows(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperBeginRemoveRows(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_BeginRemoveRows_IsBase(true);
        vtextemoticonscoreemojiproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnBeginRemoveRows(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_EndRemoveRows(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->endRemoveRows();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperEndRemoveRows(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EndRemoveRows_IsBase(true);
        vtextemoticonscoreemojiproxymodel->endRemoveRows();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnEndRemoveRows(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_BeginMoveRows(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperBeginMoveRows(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_BeginMoveRows_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnBeginMoveRows(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_EndMoveRows(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->endMoveRows();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperEndMoveRows(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EndMoveRows_IsBase(true);
        vtextemoticonscoreemojiproxymodel->endMoveRows();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnEndMoveRows(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_BeginInsertColumns(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperBeginInsertColumns(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_BeginInsertColumns_IsBase(true);
        vtextemoticonscoreemojiproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnBeginInsertColumns(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_EndInsertColumns(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->endInsertColumns();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperEndInsertColumns(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EndInsertColumns_IsBase(true);
        vtextemoticonscoreemojiproxymodel->endInsertColumns();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnEndInsertColumns(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_BeginRemoveColumns(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperBeginRemoveColumns(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_BeginRemoveColumns_IsBase(true);
        vtextemoticonscoreemojiproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnBeginRemoveColumns(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_EndRemoveColumns(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->endRemoveColumns();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperEndRemoveColumns(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EndRemoveColumns_IsBase(true);
        vtextemoticonscoreemojiproxymodel->endRemoveColumns();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnEndRemoveColumns(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_BeginMoveColumns(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperBeginMoveColumns(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_BeginMoveColumns_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnBeginMoveColumns(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_EndMoveColumns(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->endMoveColumns();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperEndMoveColumns(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EndMoveColumns_IsBase(true);
        vtextemoticonscoreemojiproxymodel->endMoveColumns();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnEndMoveColumns(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_BeginResetModel(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->beginResetModel();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperBeginResetModel(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_BeginResetModel_IsBase(true);
        vtextemoticonscoreemojiproxymodel->beginResetModel();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnBeginResetModel(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_EndResetModel(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->endResetModel();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperEndResetModel(TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EndResetModel_IsBase(true);
        vtextemoticonscoreemojiproxymodel->endResetModel();
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnEndResetModel(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndex(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperChangePersistentIndex(TextEmoticonsCore__EmojiProxyModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ChangePersistentIndex_IsBase(true);
        vtextemoticonscoreemojiproxymodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnChangePersistentIndex(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndexList(TextEmoticonsCore__EmojiProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
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
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiProxyModel_SuperChangePersistentIndexList(TextEmoticonsCore__EmojiProxyModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
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
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ChangePersistentIndexList_IsBase(true);
        vtextemoticonscoreemojiproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnChangePersistentIndexList(TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(self);
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiProxyModel_PersistentIndexList(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        QList<QModelIndex> _ret = vtextemoticonscoreemojiproxymodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->persistentIndexList();
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
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiProxyModel_SuperPersistentIndexList(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vtextemoticonscoreemojiproxymodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->persistentIndexList();
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
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnPersistentIndexList(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextEmoticonsCore__EmojiProxyModel_Sender(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->sender();
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextEmoticonsCore__EmojiProxyModel_SuperSender(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Sender_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->sender();
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSender(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Sender_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SenderSignalIndex(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->senderSignalIndex();
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SuperSenderSignalIndex(const TextEmoticonsCore__EmojiProxyModel* self) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_SenderSignalIndex_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->senderSignalIndex();
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnSenderSignalIndex(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiProxyModel_Receivers(const TextEmoticonsCore__EmojiProxyModel* self, const char* signal) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->receivers(signal);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextEmoticonsCore__EmojiProxyModel_SuperReceivers(const TextEmoticonsCore__EmojiProxyModel* self, const char* signal) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Receivers_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->receivers(signal);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnReceivers(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_Receivers_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_IsSignalConnected(const TextEmoticonsCore__EmojiProxyModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        return vtextemoticonscoreemojiproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiProxyModel_SuperIsSignalConnected(const TextEmoticonsCore__EmojiProxyModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_IsSignalConnected_IsBase(true);
        return vtextemoticonscoreemojiproxymodel->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiProxyModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiProxyModel_OnIsSignalConnected(const TextEmoticonsCore__EmojiProxyModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojiproxymodel = const_cast<VirtualTextEmoticonsCoreEmojiProxyModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiProxyModel*>(self));
    if (vtextemoticonscoreemojiproxymodel && vtextemoticonscoreemojiproxymodel->isVirtualTextEmoticonsCoreEmojiProxyModel) {
        vtextemoticonscoreemojiproxymodel->setTextEmoticonsCore__EmojiProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiProxyModel::TextEmoticonsCore__EmojiProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void TextEmoticonsCore__EmojiProxyModel_Delete(TextEmoticonsCore__EmojiProxyModel* self) {
    delete self;
}
