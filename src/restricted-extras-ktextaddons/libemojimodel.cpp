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
    return (QMetaObject*)self->metaObject();
}

void* TextEmoticonsCore__EmojiModel_Metacast(TextEmoticonsCore__EmojiModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEmoticonsCore__EmojiModel_Metacall(TextEmoticonsCore__EmojiModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextEmoticonsCore__EmojiModel_Tr(const char* s) {
    auto _ret = TextEmoticonsCore::EmojiModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int TextEmoticonsCore__EmojiModel_RowCount(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

QVariant* TextEmoticonsCore__EmojiModel_Data(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
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

libqt_string TextEmoticonsCore__EmojiModel_Tr2(const char* s, const char* c) {
    auto _ret = TextEmoticonsCore::EmojiModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextEmoticonsCore__EmojiModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextEmoticonsCore::EmojiModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextEmoticonsCore__EmojiModel_SuperMetaObject(const TextEmoticonsCore__EmojiModel* self) {
    return (QMetaObject*)self->TextEmoticonsCore::EmojiModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnMetaObject(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_metaobject_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextEmoticonsCore__EmojiModel_SuperMetacast(TextEmoticonsCore__EmojiModel* self, const char* param1) {
    return self->TextEmoticonsCore::EmojiModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnMetacast(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_metacast_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextEmoticonsCore__EmojiModel_SuperMetacall(TextEmoticonsCore__EmojiModel* self, int param1, int param2, void** param3) {
    return self->TextEmoticonsCore::EmojiModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnMetacall(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_metacall_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Metacall_Callback>(slot);
}

// Base class handler implementation
int TextEmoticonsCore__EmojiModel_SuperRowCount(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnRowCount(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_rowcount_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_RowCount_Callback>(slot);
}

// Base class handler implementation
QVariant* TextEmoticonsCore__EmojiModel_SuperData(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->TextEmoticonsCore::EmojiModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_data_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Data_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiModel_Index(const TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiModel_SuperIndex(const TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->TextEmoticonsCore::EmojiModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnIndex(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_index_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Index_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiModel_Sibling(const TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiModel_SuperSibling(const TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->TextEmoticonsCore::EmojiModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSibling(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_sibling_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_DropMimeData(TextEmoticonsCore__EmojiModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperDropMimeData(TextEmoticonsCore__EmojiModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnDropMimeData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_dropmimedata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiModel_Flags(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

// Base class handler implementation
int TextEmoticonsCore__EmojiModel_SuperFlags(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    return static_cast<int>(self->TextEmoticonsCore::EmojiModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnFlags(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_flags_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Flags_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_SetData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperSetData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->TextEmoticonsCore::EmojiModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSetData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_setdata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextEmoticonsCore__EmojiModel_HeaderData(const TextEmoticonsCore__EmojiModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* TextEmoticonsCore__EmojiModel_SuperHeaderData(const TextEmoticonsCore__EmojiModel* self, int section, int orientation, int role) {
    return new QVariant(self->TextEmoticonsCore::EmojiModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnHeaderData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_headerdata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_SetHeaderData(TextEmoticonsCore__EmojiModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperSetHeaderData(TextEmoticonsCore__EmojiModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->TextEmoticonsCore::EmojiModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSetHeaderData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_setheaderdata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ TextEmoticonsCore__EmojiModel_ItemData(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ TextEmoticonsCore__EmojiModel_SuperItemData(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
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

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnItemData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_itemdata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_SetItemData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperSetItemData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->TextEmoticonsCore::EmojiModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSetItemData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_setitemdata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_ClearItemData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperClearItemData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    return self->TextEmoticonsCore::EmojiModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnClearItemData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_clearitemdata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ TextEmoticonsCore__EmojiModel_MimeTypes(const TextEmoticonsCore__EmojiModel* self) {
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
libqt_list /* of libqt_string */ TextEmoticonsCore__EmojiModel_SuperMimeTypes(const TextEmoticonsCore__EmojiModel* self) {
    QList<QString> _ret = self->TextEmoticonsCore::EmojiModel::mimeTypes();
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
void TextEmoticonsCore__EmojiModel_OnMimeTypes(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_mimetypes_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* TextEmoticonsCore__EmojiModel_MimeData(const TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* TextEmoticonsCore__EmojiModel_SuperMimeData(const TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->TextEmoticonsCore::EmojiModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnMimeData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_mimedata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_CanDropMimeData(const TextEmoticonsCore__EmojiModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperCanDropMimeData(const TextEmoticonsCore__EmojiModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnCanDropMimeData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_candropmimedata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiModel_SupportedDropActions(const TextEmoticonsCore__EmojiModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int TextEmoticonsCore__EmojiModel_SuperSupportedDropActions(const TextEmoticonsCore__EmojiModel* self) {
    return static_cast<int>(self->TextEmoticonsCore::EmojiModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSupportedDropActions(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_supporteddropactions_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int TextEmoticonsCore__EmojiModel_SupportedDragActions(const TextEmoticonsCore__EmojiModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int TextEmoticonsCore__EmojiModel_SuperSupportedDragActions(const TextEmoticonsCore__EmojiModel* self) {
    return static_cast<int>(self->TextEmoticonsCore::EmojiModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSupportedDragActions(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_supporteddragactions_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_InsertRows(TextEmoticonsCore__EmojiModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperInsertRows(TextEmoticonsCore__EmojiModel* self, int row, int count, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnInsertRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_insertrows_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_InsertColumns(TextEmoticonsCore__EmojiModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperInsertColumns(TextEmoticonsCore__EmojiModel* self, int column, int count, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnInsertColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_insertcolumns_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_RemoveRows(TextEmoticonsCore__EmojiModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperRemoveRows(TextEmoticonsCore__EmojiModel* self, int row, int count, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnRemoveRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_removerows_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_RemoveColumns(TextEmoticonsCore__EmojiModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperRemoveColumns(TextEmoticonsCore__EmojiModel* self, int column, int count, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnRemoveColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_removecolumns_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_MoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperMoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->TextEmoticonsCore::EmojiModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnMoveRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_moverows_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_MoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperMoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->TextEmoticonsCore::EmojiModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnMoveColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_movecolumns_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_FetchMore(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperFetchMore(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent) {
    self->TextEmoticonsCore::EmojiModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnFetchMore(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_fetchmore_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_CanFetchMore(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperCanFetchMore(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent) {
    return self->TextEmoticonsCore::EmojiModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnCanFetchMore(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_canfetchmore_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_Sort(TextEmoticonsCore__EmojiModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperSort(TextEmoticonsCore__EmojiModel* self, int column, int order) {
    self->TextEmoticonsCore::EmojiModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSort(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_sort_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiModel_Buddy(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* TextEmoticonsCore__EmojiModel_SuperBuddy(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    return new QModelIndex(self->TextEmoticonsCore::EmojiModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnBuddy(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_buddy_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiModel_Match(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiModel_SuperMatch(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnMatch(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_match_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* TextEmoticonsCore__EmojiModel_Span(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* TextEmoticonsCore__EmojiModel_SuperSpan(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index) {
    return new QSize(self->TextEmoticonsCore::EmojiModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSpan(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_span_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Span_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ TextEmoticonsCore__EmojiModel_RoleNames(const TextEmoticonsCore__EmojiModel* self) {
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
libqt_map /* of int to libqt_string */ TextEmoticonsCore__EmojiModel_SuperRoleNames(const TextEmoticonsCore__EmojiModel* self) {
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

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnRoleNames(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_rolenames_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_MultiData(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperMultiData(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->TextEmoticonsCore::EmojiModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnMultiData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_multidata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_Submit(TextEmoticonsCore__EmojiModel* self) {
    return self->submit();
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperSubmit(TextEmoticonsCore__EmojiModel* self) {
    return self->TextEmoticonsCore::EmojiModel::submit();
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnSubmit(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_submit_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_Revert(TextEmoticonsCore__EmojiModel* self) {
    self->revert();
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperRevert(TextEmoticonsCore__EmojiModel* self) {
    self->TextEmoticonsCore::EmojiModel::revert();
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnRevert(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_revert_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_ResetInternalData(TextEmoticonsCore__EmojiModel* self) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel) {
        vtextemoticonscoreemojimodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperResetInternalData(TextEmoticonsCore__EmojiModel* self) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->TextEmoticonsCore::EmojiModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnResetInternalData(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_resetinternaldata_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_Event(TextEmoticonsCore__EmojiModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperEvent(TextEmoticonsCore__EmojiModel* self, QEvent* event) {
    return self->TextEmoticonsCore::EmojiModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnEvent(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_event_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__EmojiModel_EventFilter(TextEmoticonsCore__EmojiModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextEmoticonsCore__EmojiModel_SuperEventFilter(TextEmoticonsCore__EmojiModel* self, QObject* watched, QEvent* event) {
    return self->TextEmoticonsCore::EmojiModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnEventFilter(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_eventfilter_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_TimerEvent(TextEmoticonsCore__EmojiModel* self, QTimerEvent* event) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel) {
        vtextemoticonscoreemojimodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperTimerEvent(TextEmoticonsCore__EmojiModel* self, QTimerEvent* event) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->TextEmoticonsCore::EmojiModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnTimerEvent(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_timerevent_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_ChildEvent(TextEmoticonsCore__EmojiModel* self, QChildEvent* event) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel) {
        vtextemoticonscoreemojimodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperChildEvent(TextEmoticonsCore__EmojiModel* self, QChildEvent* event) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->TextEmoticonsCore::EmojiModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnChildEvent(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_childevent_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_CustomEvent(TextEmoticonsCore__EmojiModel* self, QEvent* event) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel) {
        vtextemoticonscoreemojimodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperCustomEvent(TextEmoticonsCore__EmojiModel* self, QEvent* event) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->TextEmoticonsCore::EmojiModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnCustomEvent(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_customevent_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_ConnectNotify(TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel) {
        vtextemoticonscoreemojimodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperConnectNotify(TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->TextEmoticonsCore::EmojiModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnConnectNotify(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_connectnotify_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__EmojiModel_DisconnectNotify(TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self);
    if (vtextemoticonscoreemojimodel) {
        vtextemoticonscoreemojimodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__EmojiModel_SuperDisconnectNotify(TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->TextEmoticonsCore::EmojiModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::EmojiModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__EmojiModel_OnDisconnectNotify(TextEmoticonsCore__EmojiModel* self, intptr_t slot) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self))
        vtextemoticonscoreemojimodel->textemoticonscore__emojimodel_disconnectnotify_callback = reinterpret_cast<VirtualTextEmoticonsCoreEmojiModel::TextEmoticonsCore__EmojiModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* TextEmoticonsCore__EmojiModel_CreateIndex(const TextEmoticonsCore__EmojiModel* self, int row, int column) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self)))
        return new QModelIndex(vtextemoticonscoreemojimodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiModel_EncodeData(const TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEmoticonsCore__EmojiModel_DecodeData(TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        return vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiModel_BeginInsertRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiModel_EndInsertRows(TextEmoticonsCore__EmojiModel* self) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::endInsertRows();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiModel_BeginRemoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiModel_EndRemoveRows(TextEmoticonsCore__EmojiModel* self) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::endRemoveRows();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEmoticonsCore__EmojiModel_BeginMoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        return vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiModel_EndMoveRows(TextEmoticonsCore__EmojiModel* self) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::endMoveRows();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiModel_BeginInsertColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiModel_EndInsertColumns(TextEmoticonsCore__EmojiModel* self) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::endInsertColumns();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiModel_BeginRemoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiModel_EndRemoveColumns(TextEmoticonsCore__EmojiModel* self) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEmoticonsCore__EmojiModel_BeginMoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        return vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiModel_EndMoveColumns(TextEmoticonsCore__EmojiModel* self) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::endMoveColumns();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiModel_BeginResetModel(TextEmoticonsCore__EmojiModel* self) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::beginResetModel();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiModel_EndResetModel(TextEmoticonsCore__EmojiModel* self) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::endResetModel();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiModel_ChangePersistentIndex(TextEmoticonsCore__EmojiModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
        vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEmoticonsCore__EmojiModel_ChangePersistentIndexList(TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vtextemoticonscoreemojimodel = dynamic_cast<VirtualTextEmoticonsCoreEmojiModel*>(self)) {
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
        vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiModel_PersistentIndexList(const TextEmoticonsCore__EmojiModel* self) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self))) {
        QList<QModelIndex> _ret = vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::persistentIndexList();
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
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextEmoticonsCore__EmojiModel_Sender(const TextEmoticonsCore__EmojiModel* self) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self))) {
        return vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::sender();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEmoticonsCore__EmojiModel_SenderSignalIndex(const TextEmoticonsCore__EmojiModel* self) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self))) {
        return vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEmoticonsCore__EmojiModel_Receivers(const TextEmoticonsCore__EmojiModel* self, const char* signal) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self))) {
        return vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::receivers(signal);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEmoticonsCore__EmojiModel_IsSignalConnected(const TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonscoreemojimodel = const_cast<VirtualTextEmoticonsCoreEmojiModel*>(dynamic_cast<const VirtualTextEmoticonsCoreEmojiModel*>(self))) {
        return vtextemoticonscoreemojimodel->VirtualTextEmoticonsCoreEmojiModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::EmojiModel::isSignalConnected called without a directly constructed type");
}

void TextEmoticonsCore__EmojiModel_Delete(TextEmoticonsCore__EmojiModel* self) {
    delete self;
}
