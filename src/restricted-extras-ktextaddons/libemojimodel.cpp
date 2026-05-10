#include <QAbstractItemModel>
#include <QAbstractListModel>
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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__CustomEmoji
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__CustomEmojiIconManager
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__EmojiModel
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__UnicodeEmoticon
#include <emojimodel.h>
#include "libemojimodel.h"
#include "libemojimodel.hxx"

TextEmoticonsCore__EmojiModel* TextEmoticonsCore__EmojiModel_new() {
    return new VirtualTextEmoticonsCoreEmojiModel();
}

TextEmoticonsCore__EmojiModel* TextEmoticonsCore__EmojiModel_new2(QObject* parent) {
    return new VirtualTextEmoticonsCoreEmojiModel(parent);
}

QMetaObject* TextEmoticonsCore__EmojiModel_MetaObject(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscore__emojimodel = dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscore__emojimodel && vtextemoticonscore__emojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextEmoticonsCoreEmojiModel*)self)->metaObject();
    }
}

void* TextEmoticonsCore__EmojiModel_Metacast(TextEmoticonsCore__EmojiModel* self, const char* param1) {
    auto* vtextemoticonscore__emojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscore__emojimodel && vtextemoticonscore__emojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->qt_metacast(param1);
    }
}

int TextEmoticonsCore__EmojiModel_Metacall(TextEmoticonsCore__EmojiModel* self, int param1, int param2, void** param3) {
    auto* vtextemoticonscore__emojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscore__emojimodel && vtextemoticonscore__emojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int TextEmoticonsCore__EmojiModel_RowCount(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscore__emojimodel = dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscore__emojimodel && vtextemoticonscore__emojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->rowCount(*parent);
    }
}

QVariant* TextEmoticonsCore__EmojiModel_Data(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, int role) {
    auto* vtextemoticonscore__emojimodel = dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscore__emojimodel && vtextemoticonscore__emojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualTextEmoticonsCoreEmojiModel*)self)->data(*index, static_cast<int>(role)));
    }
}

libqt_list /* of TextEmoticonsCore__UnicodeEmoticon* */ TextEmoticonsCore__EmojiModel_EmoticonList(const TextEmoticonsCore__EmojiModel* self) {
    const QList<TextEmoticonsCore::UnicodeEmoticon>& _ret = self->emoticonList();
    // Convert QList<> from C++ memory to manually-managed C memory
    TextEmoticonsCore__UnicodeEmoticon** _arr = static_cast<TextEmoticonsCore__UnicodeEmoticon**>(malloc(sizeof(TextEmoticonsCore__UnicodeEmoticon*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new TextEmoticonsCore::UnicodeEmoticon(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void TextEmoticonsCore__EmojiModel_SetUnicodeEmoticonList(TextEmoticonsCore__EmojiModel* self, const libqt_list /* of TextEmoticonsCore__UnicodeEmoticon* */ newEmoticonList) {
    QList<TextEmoticonsCore::UnicodeEmoticon> newEmoticonList_QList;
    newEmoticonList_QList.reserve(newEmoticonList.len);
    TextEmoticonsCore__UnicodeEmoticon** newEmoticonList_arr = static_cast<TextEmoticonsCore__UnicodeEmoticon**>(newEmoticonList.data);
    for (size_t i = 0; i < newEmoticonList.len; ++i) {
        newEmoticonList_QList.push_back(*(newEmoticonList_arr[i]));
    }
    self->setUnicodeEmoticonList(newEmoticonList_QList);
}

libqt_list /* of TextEmoticonsCore__CustomEmoji* */ TextEmoticonsCore__EmojiModel_CustomEmojiList(const TextEmoticonsCore__EmojiModel* self) {
    QList<TextEmoticonsCore::CustomEmoji> _ret = self->customEmojiList();
    // Convert QList<> from C++ memory to manually-managed C memory
    TextEmoticonsCore__CustomEmoji** _arr = static_cast<TextEmoticonsCore__CustomEmoji**>(malloc(sizeof(TextEmoticonsCore__CustomEmoji*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new TextEmoticonsCore::CustomEmoji(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void TextEmoticonsCore__EmojiModel_SetCustomEmojiList(TextEmoticonsCore__EmojiModel* self, const libqt_list /* of TextEmoticonsCore__CustomEmoji* */ newCustomEmojiList) {
    QList<TextEmoticonsCore::CustomEmoji> newCustomEmojiList_QList;
    newCustomEmojiList_QList.reserve(newCustomEmojiList.len);
    TextEmoticonsCore__CustomEmoji** newCustomEmojiList_arr = static_cast<TextEmoticonsCore__CustomEmoji**>(newCustomEmojiList.data);
    for (size_t i = 0; i < newCustomEmojiList.len; ++i) {
        newCustomEmojiList_QList.push_back(*(newCustomEmojiList_arr[i]));
    }
    self->setCustomEmojiList(newCustomEmojiList_QList);
}

TextEmoticonsCore__CustomEmojiIconManager* TextEmoticonsCore__EmojiModel_CustomEmojiIconManager(const TextEmoticonsCore__EmojiModel* self) {
    return self->customEmojiIconManager();
}

void TextEmoticonsCore__EmojiModel_SetCustomEmojiIconManager(TextEmoticonsCore__EmojiModel* self, TextEmoticonsCore__CustomEmojiIconManager* newCustomEmojiIconManager) {
    self->setCustomEmojiIconManager(newCustomEmojiIconManager);
}

void TextEmoticonsCore__EmojiModel_SetExcludeEmoticons(TextEmoticonsCore__EmojiModel* self, const libqt_list /* of libqt_string */ emoticons) {
    QList<QString> emoticons_QList;
    emoticons_QList.reserve(emoticons.len);
    libqt_string* emoticons_arr = static_cast<libqt_string*>(emoticons.data);
    for (size_t i = 0; i < emoticons.len; ++i) {
        QString emoticons_arr_i_QString = QString::fromUtf8(emoticons_arr[i].data, emoticons_arr[i].len);
        emoticons_QList.push_back(emoticons_arr_i_QString);
    }
    self->setExcludeEmoticons(emoticons_QList);
}

// Base class handler implementation
QMetaObject* TextEmoticonsCore__EmojiModel_SuperMetaObject(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_MetaObject_IsBase(true);
        return (QMetaObject*)vtextemoticonscoreemojimodel->metaObject();
    } else {
        return (QMetaObject*)self->TextEmoticonsCore::EmojiModel::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnMetaObject(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_MetaObject_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextEmoticonsCore__EmojiModel_SuperMetacast(TextEmoticonsCore__EmojiModel* self, const char* param1) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Metacast_IsBase(true);
        return vtextemoticonscoreemojimodel->qt_metacast(param1);
    } else {
        return self->TextEmoticonsCore::EmojiModel::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnMetacast(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Metacast_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextEmoticonsCore__EmojiModel_SuperMetacall(TextEmoticonsCore__EmojiModel* self, int param1, int param2, void** param3) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Metacall_IsBase(true);
        return vtextemoticonscoreemojimodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextEmoticonsCore::EmojiModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnMetacall(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Metacall_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int TextEmoticonsCore__EmojiModel_SuperRowCount(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_RowCount_IsBase(true);
        return vtextemoticonscoreemojimodel->rowCount(*parent);
    } else {
        return self->TextEmoticonsCore::EmojiModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnRowCount(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_RowCount_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_RowCount_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* TextEmoticonsCore__EmojiModel_SuperData(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, int role) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Data_IsBase(true);
        return new QVariant(vtextemoticonscoreemojimodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualTextEmoticonsCoreEmojiModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnData(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Data_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiModel_Index(const TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return new QModelIndex(vtextemoticonscoreemojimodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiModel_SuperIndex(const TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Index_IsBase(true);
        return new QModelIndex(vtextemoticonscoreemojimodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnIndex(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Index_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiModel_Sibling(const TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* idx) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return new QModelIndex(vtextemoticonscoreemojimodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiModel_SuperSibling(const TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* idx) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Sibling_IsBase(true);
        return new QModelIndex(vtextemoticonscoreemojimodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSibling(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Sibling_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_DropMimeData(TextEmoticonsCore__EmojiModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperDropMimeData(TextEmoticonsCore__EmojiModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_DropMimeData_IsBase(true);
        return vtextemoticonscoreemojimodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnDropMimeData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_DropMimeData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiModel_Flags(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return static_cast<int>(vtextemoticonscoreemojimodel->flags(*index));
    } else {
        return static_cast<int>(self->TextEmoticonsCore::EmojiModel::flags(*index));
    }
}

// Base class handler implementation
int TextEmoticonsCore__EmojiModel_SuperFlags(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Flags_IsBase(true);
        return static_cast<int>(vtextemoticonscoreemojimodel->flags(*index));
    } else {
        return static_cast<int>(self->TextEmoticonsCore::EmojiModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnFlags(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Flags_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_SetData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->TextEmoticonsCore::EmojiModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperSetData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_SetData_IsBase(true);
        return vtextemoticonscoreemojimodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->TextEmoticonsCore::EmojiModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSetData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_SetData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextEmoticonsCore__EmojiModel_HeaderData(const TextEmoticonsCore__EmojiModel* self, int section, int orientation, int role) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return new QVariant(vtextemoticonscoreemojimodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualTextEmoticonsCoreEmojiModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* TextEmoticonsCore__EmojiModel_SuperHeaderData(const TextEmoticonsCore__EmojiModel* self, int section, int orientation, int role) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_HeaderData_IsBase(true);
        return new QVariant(vtextemoticonscoreemojimodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualTextEmoticonsCoreEmojiModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnHeaderData(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_HeaderData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_SetHeaderData(TextEmoticonsCore__EmojiModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->TextEmoticonsCore::EmojiModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperSetHeaderData(TextEmoticonsCore__EmojiModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_SetHeaderData_IsBase(true);
        return vtextemoticonscoreemojimodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->TextEmoticonsCore::EmojiModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSetHeaderData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_SetHeaderData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ TextEmoticonsCore__EmojiModel_ItemData(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        QMap<int, QVariant> _ret = vtextemoticonscoreemojimodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->TextEmoticonsCore::EmojiModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ TextEmoticonsCore__EmojiModel_SuperItemData(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vtextemoticonscoreemojimodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->TextEmoticonsCore::EmojiModel::itemData(*index);
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
void TextEmoticonsCore__EmojiModel_OnItemData(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_ItemData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_SetItemData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->setItemData(*index, roles_QMap);
    } else {
        return self->TextEmoticonsCore::EmojiModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperSetItemData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_SetItemData_IsBase(true);
        return vtextemoticonscoreemojimodel->setItemData(*index, roles_QMap);
    } else {
        return self->TextEmoticonsCore::EmojiModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSetItemData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_SetItemData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_ClearItemData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->clearItemData(*index);
    } else {
        return self->TextEmoticonsCore::EmojiModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperClearItemData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_ClearItemData_IsBase(true);
        return vtextemoticonscoreemojimodel->clearItemData(*index);
    } else {
        return self->TextEmoticonsCore::EmojiModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnClearItemData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_ClearItemData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ TextEmoticonsCore__EmojiModel_MimeTypes(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        QList<QString> _ret = vtextemoticonscoreemojimodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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
        QList<QString> _ret = self->TextEmoticonsCore::EmojiModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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
libqt_list /* of libqt_string */ TextEmoticonsCore__EmojiModel_SuperMimeTypes(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vtextemoticonscoreemojimodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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
        QList<QString> _ret = self->TextEmoticonsCore::EmojiModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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
void TextEmoticonsCore__EmojiModel_OnMimeTypes(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_MimeTypes_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* TextEmoticonsCore__EmojiModel_MimeData(const TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->mimeData(indexes_QList);
    } else {
        return self->TextEmoticonsCore::EmojiModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* TextEmoticonsCore__EmojiModel_SuperMimeData(const TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_MimeData_IsBase(true);
        return vtextemoticonscoreemojimodel->mimeData(indexes_QList);
    } else {
        return self->TextEmoticonsCore::EmojiModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnMimeData(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_MimeData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_CanDropMimeData(const TextEmoticonsCore__EmojiModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperCanDropMimeData(const TextEmoticonsCore__EmojiModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_CanDropMimeData_IsBase(true);
        return vtextemoticonscoreemojimodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnCanDropMimeData(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_CanDropMimeData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiModel_SupportedDropActions(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return static_cast<int>(vtextemoticonscoreemojimodel->supportedDropActions());
    } else {
        return static_cast<int>(self->TextEmoticonsCore::EmojiModel::supportedDropActions());
    }
}

// Base class handler implementation
int TextEmoticonsCore__EmojiModel_SuperSupportedDropActions(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vtextemoticonscoreemojimodel->supportedDropActions());
    } else {
        return static_cast<int>(self->TextEmoticonsCore::EmojiModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSupportedDropActions(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_SupportedDropActions_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiModel_SupportedDragActions(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return static_cast<int>(vtextemoticonscoreemojimodel->supportedDragActions());
    } else {
        return static_cast<int>(self->TextEmoticonsCore::EmojiModel::supportedDragActions());
    }
}

// Base class handler implementation
int TextEmoticonsCore__EmojiModel_SuperSupportedDragActions(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vtextemoticonscoreemojimodel->supportedDragActions());
    } else {
        return static_cast<int>(self->TextEmoticonsCore::EmojiModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSupportedDragActions(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_SupportedDragActions_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_InsertRows(TextEmoticonsCore__EmojiModel* self, int row, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperInsertRows(TextEmoticonsCore__EmojiModel* self, int row, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_InsertRows_IsBase(true);
        return vtextemoticonscoreemojimodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnInsertRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_InsertRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_InsertColumns(TextEmoticonsCore__EmojiModel* self, int column, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperInsertColumns(TextEmoticonsCore__EmojiModel* self, int column, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_InsertColumns_IsBase(true);
        return vtextemoticonscoreemojimodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnInsertColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_InsertColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_RemoveRows(TextEmoticonsCore__EmojiModel* self, int row, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperRemoveRows(TextEmoticonsCore__EmojiModel* self, int row, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_RemoveRows_IsBase(true);
        return vtextemoticonscoreemojimodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnRemoveRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_RemoveRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_RemoveColumns(TextEmoticonsCore__EmojiModel* self, int column, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperRemoveColumns(TextEmoticonsCore__EmojiModel* self, int column, int count, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_RemoveColumns_IsBase(true);
        return vtextemoticonscoreemojimodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->TextEmoticonsCore::EmojiModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnRemoveColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_RemoveColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_MoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->TextEmoticonsCore::EmojiModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperMoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_MoveRows_IsBase(true);
        return vtextemoticonscoreemojimodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->TextEmoticonsCore::EmojiModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnMoveRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_MoveRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_MoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->TextEmoticonsCore::EmojiModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperMoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_MoveColumns_IsBase(true);
        return vtextemoticonscoreemojimodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->TextEmoticonsCore::EmojiModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnMoveColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_MoveColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_FetchMore(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->fetchMore(*parent);
    } else {
        self->TextEmoticonsCore::EmojiModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperFetchMore(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_FetchMore_IsBase(true);
        vtextemoticonscoreemojimodel->fetchMore(*parent);
    } else {
        self->TextEmoticonsCore::EmojiModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnFetchMore(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_FetchMore_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_CanFetchMore(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->canFetchMore(*parent);
    } else {
        return self->TextEmoticonsCore::EmojiModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperCanFetchMore(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_CanFetchMore_IsBase(true);
        return vtextemoticonscoreemojimodel->canFetchMore(*parent);
    } else {
        return self->TextEmoticonsCore::EmojiModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnCanFetchMore(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_CanFetchMore_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_Sort(TextEmoticonsCore__EmojiModel* self, int column, int order) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->TextEmoticonsCore::EmojiModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperSort(TextEmoticonsCore__EmojiModel* self, int column, int order) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Sort_IsBase(true);
        vtextemoticonscoreemojimodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->TextEmoticonsCore::EmojiModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSort(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Sort_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiModel_Buddy(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return new QModelIndex(vtextemoticonscoreemojimodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiModel_SuperBuddy(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Buddy_IsBase(true);
        return new QModelIndex(vtextemoticonscoreemojimodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualTextEmoticonsCoreEmojiModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnBuddy(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Buddy_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiModel_Match(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        QList<QModelIndex> _ret = vtextemoticonscoreemojimodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->TextEmoticonsCore::EmojiModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiModel_SuperMatch(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vtextemoticonscoreemojimodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->TextEmoticonsCore::EmojiModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void TextEmoticonsCore__EmojiModel_OnMatch(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Match_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextEmoticonsCore__EmojiModel_Span(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return new QSize(vtextemoticonscoreemojimodel->span(*index));
    } else {
        return new QSize(((VirtualTextEmoticonsCoreEmojiModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* TextEmoticonsCore__EmojiModel_SuperSpan(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Span_IsBase(true);
        return new QSize(vtextemoticonscoreemojimodel->span(*index));
    } else {
        return new QSize(((VirtualTextEmoticonsCoreEmojiModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSpan(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Span_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ TextEmoticonsCore__EmojiModel_RoleNames(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        QHash<int, QByteArray> _ret = vtextemoticonscoreemojimodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->TextEmoticonsCore::EmojiModel::roleNames();
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
libqt_map /* of int to libqt_string */ TextEmoticonsCore__EmojiModel_SuperRoleNames(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vtextemoticonscoreemojimodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->TextEmoticonsCore::EmojiModel::roleNames();
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
void TextEmoticonsCore__EmojiModel_OnRoleNames(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_RoleNames_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_MultiData(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->multiData(*index, *roleDataSpan);
    } else {
        self->TextEmoticonsCore::EmojiModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperMultiData(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_MultiData_IsBase(true);
        vtextemoticonscoreemojimodel->multiData(*index, *roleDataSpan);
    } else {
        self->TextEmoticonsCore::EmojiModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnMultiData(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_MultiData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_Submit(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->submit();
    } else {
        return self->TextEmoticonsCore::EmojiModel::submit();
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperSubmit(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Submit_IsBase(true);
        return vtextemoticonscoreemojimodel->submit();
    } else {
        return self->TextEmoticonsCore::EmojiModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSubmit(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Submit_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_Revert(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->revert();
    } else {
        self->TextEmoticonsCore::EmojiModel::revert();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperRevert(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Revert_IsBase(true);
        vtextemoticonscoreemojimodel->revert();
    } else {
        self->TextEmoticonsCore::EmojiModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnRevert(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Revert_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_ResetInternalData(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->resetInternalData();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperResetInternalData(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_ResetInternalData_IsBase(true);
        vtextemoticonscoreemojimodel->resetInternalData();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnResetInternalData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_ResetInternalData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_Event(TextEmoticonsCore__EmojiModel* self, QEvent* event) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->event(event);
    } else {
        return self->TextEmoticonsCore::EmojiModel::event(event);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperEvent(TextEmoticonsCore__EmojiModel* self, QEvent* event) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Event_IsBase(true);
        return vtextemoticonscoreemojimodel->event(event);
    } else {
        return self->TextEmoticonsCore::EmojiModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnEvent(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Event_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_EventFilter(TextEmoticonsCore__EmojiModel* self, QObject* watched, QEvent* event) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->eventFilter(watched, event);
    } else {
        return self->TextEmoticonsCore::EmojiModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperEventFilter(TextEmoticonsCore__EmojiModel* self, QObject* watched, QEvent* event) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EventFilter_IsBase(true);
        return vtextemoticonscoreemojimodel->eventFilter(watched, event);
    } else {
        return self->TextEmoticonsCore::EmojiModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnEventFilter(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EventFilter_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_TimerEvent(TextEmoticonsCore__EmojiModel* self, QTimerEvent* event) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->timerEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperTimerEvent(TextEmoticonsCore__EmojiModel* self, QTimerEvent* event) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_TimerEvent_IsBase(true);
        vtextemoticonscoreemojimodel->timerEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnTimerEvent(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_TimerEvent_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_ChildEvent(TextEmoticonsCore__EmojiModel* self, QChildEvent* event) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->childEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperChildEvent(TextEmoticonsCore__EmojiModel* self, QChildEvent* event) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_ChildEvent_IsBase(true);
        vtextemoticonscoreemojimodel->childEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnChildEvent(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_ChildEvent_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_CustomEvent(TextEmoticonsCore__EmojiModel* self, QEvent* event) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->customEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperCustomEvent(TextEmoticonsCore__EmojiModel* self, QEvent* event) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_CustomEvent_IsBase(true);
        vtextemoticonscoreemojimodel->customEvent(event);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnCustomEvent(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_CustomEvent_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_ConnectNotify(TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->connectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperConnectNotify(TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_ConnectNotify_IsBase(true);
        vtextemoticonscoreemojimodel->connectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnConnectNotify(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_ConnectNotify_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_DisconnectNotify(TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->disconnectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperDisconnectNotify(TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_DisconnectNotify_IsBase(true);
        vtextemoticonscoreemojimodel->disconnectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnDisconnectNotify(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_DisconnectNotify_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiModel_CreateIndex(const TextEmoticonsCore__EmojiModel* self, int row, int column) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return new QModelIndex(vtextemoticonscoreemojimodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiModel_SuperCreateIndex(const TextEmoticonsCore__EmojiModel* self, int row, int column) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_CreateIndex_IsBase(true);
        return new QModelIndex(vtextemoticonscoreemojimodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnCreateIndex(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_CreateIndex_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_EncodeData(const TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperEncodeData(const TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EncodeData_IsBase(true);
        vtextemoticonscoreemojimodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnEncodeData(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EncodeData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_DecodeData(TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperDecodeData(TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_DecodeData_IsBase(true);
        return vtextemoticonscoreemojimodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnDecodeData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_DecodeData_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_BeginInsertRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperBeginInsertRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_BeginInsertRows_IsBase(true);
        vtextemoticonscoreemojimodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnBeginInsertRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_BeginInsertRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_EndInsertRows(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->endInsertRows();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperEndInsertRows(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EndInsertRows_IsBase(true);
        vtextemoticonscoreemojimodel->endInsertRows();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnEndInsertRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EndInsertRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_BeginRemoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperBeginRemoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_BeginRemoveRows_IsBase(true);
        vtextemoticonscoreemojimodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnBeginRemoveRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_EndRemoveRows(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->endRemoveRows();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperEndRemoveRows(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EndRemoveRows_IsBase(true);
        vtextemoticonscoreemojimodel->endRemoveRows();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnEndRemoveRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EndRemoveRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_BeginMoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperBeginMoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_BeginMoveRows_IsBase(true);
        return vtextemoticonscoreemojimodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnBeginMoveRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_BeginMoveRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_EndMoveRows(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->endMoveRows();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperEndMoveRows(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EndMoveRows_IsBase(true);
        vtextemoticonscoreemojimodel->endMoveRows();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnEndMoveRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EndMoveRows_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_BeginInsertColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperBeginInsertColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_BeginInsertColumns_IsBase(true);
        vtextemoticonscoreemojimodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnBeginInsertColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_EndInsertColumns(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->endInsertColumns();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperEndInsertColumns(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EndInsertColumns_IsBase(true);
        vtextemoticonscoreemojimodel->endInsertColumns();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnEndInsertColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EndInsertColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_BeginRemoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperBeginRemoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_BeginRemoveColumns_IsBase(true);
        vtextemoticonscoreemojimodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnBeginRemoveColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_EndRemoveColumns(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->endRemoveColumns();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperEndRemoveColumns(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EndRemoveColumns_IsBase(true);
        vtextemoticonscoreemojimodel->endRemoveColumns();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnEndRemoveColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_BeginMoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperBeginMoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_BeginMoveColumns_IsBase(true);
        return vtextemoticonscoreemojimodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnBeginMoveColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_EndMoveColumns(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->endMoveColumns();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperEndMoveColumns(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EndMoveColumns_IsBase(true);
        vtextemoticonscoreemojimodel->endMoveColumns();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnEndMoveColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EndMoveColumns_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_BeginResetModel(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->beginResetModel();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperBeginResetModel(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_BeginResetModel_IsBase(true);
        vtextemoticonscoreemojimodel->beginResetModel();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnBeginResetModel(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_BeginResetModel_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_EndResetModel(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->endResetModel();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperEndResetModel(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EndResetModel_IsBase(true);
        vtextemoticonscoreemojimodel->endResetModel();
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnEndResetModel(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_EndResetModel_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_ChangePersistentIndex(TextEmoticonsCore__EmojiModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperChangePersistentIndex(TextEmoticonsCore__EmojiModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_ChangePersistentIndex_IsBase(true);
        vtextemoticonscoreemojimodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnChangePersistentIndex(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_ChangePersistentIndexList(TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
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
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperChangePersistentIndexList(TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
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
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_ChangePersistentIndexList_IsBase(true);
        vtextemoticonscoreemojimodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualTextEmoticonsCoreEmojiModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnChangePersistentIndexList(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiModel_PersistentIndexList(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        QList<QModelIndex> _ret = vtextemoticonscoreemojimodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualTextEmoticonsCoreEmojiModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiModel_SuperPersistentIndexList(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vtextemoticonscoreemojimodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualTextEmoticonsCoreEmojiModel*)self)->persistentIndexList();
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
void TextEmoticonsCore__EmojiModel_OnPersistentIndexList(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_PersistentIndexList_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextEmoticonsCore__EmojiModel_Sender(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->sender();
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextEmoticonsCore__EmojiModel_SuperSender(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Sender_IsBase(true);
        return vtextemoticonscoreemojimodel->sender();
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSender(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Sender_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiModel_SenderSignalIndex(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->senderSignalIndex();
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextEmoticonsCore__EmojiModel_SuperSenderSignalIndex(const TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_SenderSignalIndex_IsBase(true);
        return vtextemoticonscoreemojimodel->senderSignalIndex();
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSenderSignalIndex(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiModel_Receivers(const TextEmoticonsCore__EmojiModel* self, const char* signal) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->receivers(signal);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextEmoticonsCore__EmojiModel_SuperReceivers(const TextEmoticonsCore__EmojiModel* self, const char* signal) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Receivers_IsBase(true);
        return vtextemoticonscoreemojimodel->receivers(signal);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnReceivers(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_Receivers_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_IsSignalConnected(const TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        return vtextemoticonscoreemojimodel->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperIsSignalConnected(const TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_IsSignalConnected_IsBase(true);
        return vtextemoticonscoreemojimodel->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEmoticonsCoreEmojiModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnIsSignalConnected(const TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self));
    if (vtextemoticonscoreemojimodel && vtextemoticonscoreemojimodel->isVirtualTextEmoticonsCoreEmojiModel) {
        vtextemoticonscoreemojimodel->setTextEmoticonsCore__EmojiModel_IsSignalConnected_Callback(reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_IsSignalConnected_Callback>(slot));
    }
}

void TextEmoticonsCore__EmojiModel_Delete(TextEmoticonsCore__EmojiModel* self) {
    delete self;
}
