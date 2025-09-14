#include <KBookmark>
#include <KFilePlacesModel>
#include <QAbstractItemModel>
#include <QAction>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
#include <QIcon>
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
#include <QUrl>
#include <QVariant>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__Device
#include <kfileplacesmodel.h>
#include "libkfileplacesmodel.h"
#include "libkfileplacesmodel.hxx"

KFilePlacesModel* KFilePlacesModel_new() {
    return new VirtualKFilePlacesModel();
}

KFilePlacesModel* KFilePlacesModel_new2(QObject* parent) {
    return new VirtualKFilePlacesModel(parent);
}

QMetaObject* KFilePlacesModel_MetaObject(const KFilePlacesModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFilePlacesModel_Metacast(KFilePlacesModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFilePlacesModel_Metacall(KFilePlacesModel* self, int param1, int param2, void** param3) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFilePlacesModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFilePlacesModel_Tr(const char* s) {
    QString _ret = KFilePlacesModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KFilePlacesModel_Url(const KFilePlacesModel* self, const QModelIndex* index) {
    return new QUrl(self->url(*index));
}

bool KFilePlacesModel_SetupNeeded(const KFilePlacesModel* self, const QModelIndex* index) {
    return self->setupNeeded(*index);
}

bool KFilePlacesModel_IsTeardownAllowed(const KFilePlacesModel* self, const QModelIndex* index) {
    return self->isTeardownAllowed(*index);
}

bool KFilePlacesModel_IsEjectAllowed(const KFilePlacesModel* self, const QModelIndex* index) {
    return self->isEjectAllowed(*index);
}

bool KFilePlacesModel_IsTeardownOverlayRecommended(const KFilePlacesModel* self, const QModelIndex* index) {
    return self->isTeardownOverlayRecommended(*index);
}

int KFilePlacesModel_DeviceAccessibility(const KFilePlacesModel* self, const QModelIndex* index) {
    return static_cast<int>(self->deviceAccessibility(*index));
}

QIcon* KFilePlacesModel_Icon(const KFilePlacesModel* self, const QModelIndex* index) {
    return new QIcon(self->icon(*index));
}

libqt_string KFilePlacesModel_Text(const KFilePlacesModel* self, const QModelIndex* index) {
    QString _ret = self->text(*index);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KFilePlacesModel_IsHidden(const KFilePlacesModel* self, const QModelIndex* index) {
    return self->isHidden(*index);
}

bool KFilePlacesModel_IsGroupHidden(const KFilePlacesModel* self, const int typeVal) {
    return self->isGroupHidden(static_cast<const KFilePlacesModel::GroupType>(typeVal));
}

bool KFilePlacesModel_IsGroupHidden2(const KFilePlacesModel* self, const QModelIndex* index) {
    return self->isGroupHidden(*index);
}

bool KFilePlacesModel_IsDevice(const KFilePlacesModel* self, const QModelIndex* index) {
    return self->isDevice(*index);
}

Solid__Device* KFilePlacesModel_DeviceForIndex(const KFilePlacesModel* self, const QModelIndex* index) {
    return new Solid::Device(self->deviceForIndex(*index));
}

KBookmark* KFilePlacesModel_BookmarkForIndex(const KFilePlacesModel* self, const QModelIndex* index) {
    return new KBookmark(self->bookmarkForIndex(*index));
}

KBookmark* KFilePlacesModel_BookmarkForUrl(const KFilePlacesModel* self, const QUrl* searchUrl) {
    return new KBookmark(self->bookmarkForUrl(*searchUrl));
}

int KFilePlacesModel_GroupType(const KFilePlacesModel* self, const QModelIndex* index) {
    return static_cast<int>(self->groupType(*index));
}

libqt_list /* of QModelIndex* */ KFilePlacesModel_GroupIndexes(const KFilePlacesModel* self, const int typeVal) {
    QList<QModelIndex> _ret = self->groupIndexes(static_cast<const KFilePlacesModel::GroupType>(typeVal));
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

QAction* KFilePlacesModel_TeardownActionForIndex(const KFilePlacesModel* self, const QModelIndex* index) {
    return self->teardownActionForIndex(*index);
}

QAction* KFilePlacesModel_EjectActionForIndex(const KFilePlacesModel* self, const QModelIndex* index) {
    return self->ejectActionForIndex(*index);
}

QAction* KFilePlacesModel_PartitionActionForIndex(const KFilePlacesModel* self, const QModelIndex* index) {
    return self->partitionActionForIndex(*index);
}

void KFilePlacesModel_RequestTeardown(KFilePlacesModel* self, const QModelIndex* index) {
    self->requestTeardown(*index);
}

void KFilePlacesModel_RequestEject(KFilePlacesModel* self, const QModelIndex* index) {
    self->requestEject(*index);
}

void KFilePlacesModel_RequestSetup(KFilePlacesModel* self, const QModelIndex* index) {
    self->requestSetup(*index);
}

void KFilePlacesModel_AddPlace(KFilePlacesModel* self, const libqt_string text, const QUrl* url) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->addPlace(text_QString, *url);
}

void KFilePlacesModel_AddPlace2(KFilePlacesModel* self, const libqt_string text, const QUrl* url, const libqt_string iconName, const libqt_string appName, const QModelIndex* after) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    QString appName_QString = QString::fromUtf8(appName.data, appName.len);
    self->addPlace(text_QString, *url, iconName_QString, appName_QString, *after);
}

void KFilePlacesModel_EditPlace(KFilePlacesModel* self, const QModelIndex* index, const libqt_string text, const QUrl* url) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->editPlace(*index, text_QString, *url);
}

void KFilePlacesModel_RemovePlace(const KFilePlacesModel* self, const QModelIndex* index) {
    self->removePlace(*index);
}

void KFilePlacesModel_SetPlaceHidden(KFilePlacesModel* self, const QModelIndex* index, bool hidden) {
    self->setPlaceHidden(*index, hidden);
}

void KFilePlacesModel_SetGroupHidden(KFilePlacesModel* self, const int typeVal, bool hidden) {
    self->setGroupHidden(static_cast<const KFilePlacesModel::GroupType>(typeVal), hidden);
}

bool KFilePlacesModel_MovePlace(KFilePlacesModel* self, int itemRow, int row) {
    return self->movePlace(static_cast<int>(itemRow), static_cast<int>(row));
}

int KFilePlacesModel_HiddenCount(const KFilePlacesModel* self) {
    return self->hiddenCount();
}

QVariant* KFilePlacesModel_Data(const KFilePlacesModel* self, const QModelIndex* index, int role) {
    auto* vkfileplacesmodel = dynamic_cast<const VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKFilePlacesModel*)self)->data(*index, static_cast<int>(role)));
    }
}

QModelIndex* KFilePlacesModel_Index(const KFilePlacesModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkfileplacesmodel = dynamic_cast<const VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKFilePlacesModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

QModelIndex* KFilePlacesModel_Parent(const KFilePlacesModel* self, const QModelIndex* child) {
    auto* vkfileplacesmodel = dynamic_cast<const VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return new QModelIndex(self->parent(*child));
    } else {
        return new QModelIndex(((VirtualKFilePlacesModel*)self)->parent(*child));
    }
}

libqt_map /* of int to libqt_string */ KFilePlacesModel_RoleNames(const KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<const VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
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
        QHash<int, QByteArray> _ret = ((VirtualKFilePlacesModel*)self)->roleNames();
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

int KFilePlacesModel_RowCount(const KFilePlacesModel* self, const QModelIndex* parent) {
    auto* vkfileplacesmodel = dynamic_cast<const VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualKFilePlacesModel*)self)->rowCount(*parent);
    }
}

int KFilePlacesModel_ColumnCount(const KFilePlacesModel* self, const QModelIndex* parent) {
    auto* vkfileplacesmodel = dynamic_cast<const VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return self->columnCount(*parent);
    } else {
        return ((VirtualKFilePlacesModel*)self)->columnCount(*parent);
    }
}

QModelIndex* KFilePlacesModel_ClosestItem(const KFilePlacesModel* self, const QUrl* url) {
    return new QModelIndex(self->closestItem(*url));
}

int KFilePlacesModel_SupportedDropActions(const KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<const VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return static_cast<int>(self->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualKFilePlacesModel*)self)->supportedDropActions());
    }
}

int KFilePlacesModel_Flags(const KFilePlacesModel* self, const QModelIndex* index) {
    auto* vkfileplacesmodel = dynamic_cast<const VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return static_cast<int>(self->flags(*index));
    } else {
        return static_cast<int>(((VirtualKFilePlacesModel*)self)->flags(*index));
    }
}

libqt_list /* of libqt_string */ KFilePlacesModel_MimeTypes(const KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<const VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        QList<QString> _ret = self->mimeTypes();
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
        QList<QString> _ret = ((VirtualKFilePlacesModel*)self)->mimeTypes();
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

QMimeData* KFilePlacesModel_MimeData(const KFilePlacesModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    auto* vkfileplacesmodel = dynamic_cast<const VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return self->mimeData(indexes_QList);
    } else {
        return ((VirtualKFilePlacesModel*)self)->mimeData(indexes_QList);
    }
}

bool KFilePlacesModel_DropMimeData(KFilePlacesModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return ((VirtualKFilePlacesModel*)self)->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

void KFilePlacesModel_Refresh(const KFilePlacesModel* self) {
    self->refresh();
}

QUrl* KFilePlacesModel_ConvertedUrl(const QUrl* url) {
    return new QUrl(KFilePlacesModel::convertedUrl(*url));
}

void KFilePlacesModel_SetSupportedSchemes(KFilePlacesModel* self, const libqt_list /* of libqt_string */ schemes) {
    QList<QString> schemes_QList;
    schemes_QList.reserve(schemes.len);
    libqt_string* schemes_arr = static_cast<libqt_string*>(schemes.data);
    for (size_t i = 0; i < schemes.len; ++i) {
        QString schemes_arr_i_QString = QString::fromUtf8(schemes_arr[i].data, schemes_arr[i].len);
        schemes_QList.push_back(schemes_arr_i_QString);
    }
    self->setSupportedSchemes(schemes_QList);
}

libqt_list /* of libqt_string */ KFilePlacesModel_SupportedSchemes(const KFilePlacesModel* self) {
    QList<QString> _ret = self->supportedSchemes();
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

void KFilePlacesModel_ErrorMessage(KFilePlacesModel* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->errorMessage(message_QString);
}

void KFilePlacesModel_Connect_ErrorMessage(KFilePlacesModel* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesModel*, const char*) = reinterpret_cast<void (*)(KFilePlacesModel*, const char*)>(slot);
    KFilePlacesModel::connect(self, &KFilePlacesModel::errorMessage, [self, slotFunc](const QString& message) {
        const QString message_ret = message;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray message_b = message_ret.toUtf8();
        const char* message_str = static_cast<const char*>(malloc(message_b.length() + 1));
        memcpy((void*)message_str, message_b.data(), message_b.length());
        ((char*)message_str)[message_b.length()] = '\0';
        const char* sigval1 = message_str;
        slotFunc(self, sigval1);
        libqt_free(message_str);
    });
}

void KFilePlacesModel_SetupDone(KFilePlacesModel* self, const QModelIndex* index, bool success) {
    self->setupDone(*index, success);
}

void KFilePlacesModel_Connect_SetupDone(KFilePlacesModel* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesModel*, QModelIndex*, bool) = reinterpret_cast<void (*)(KFilePlacesModel*, QModelIndex*, bool)>(slot);
    KFilePlacesModel::connect(self, &KFilePlacesModel::setupDone, [self, slotFunc](const QModelIndex& index, bool success) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        bool sigval2 = success;
        slotFunc(self, sigval1, sigval2);
    });
}

void KFilePlacesModel_TeardownDone(KFilePlacesModel* self, const QModelIndex* index, int errorVal, const QVariant* errorData) {
    self->teardownDone(*index, static_cast<Solid::ErrorType>(errorVal), *errorData);
}

void KFilePlacesModel_Connect_TeardownDone(KFilePlacesModel* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesModel*, QModelIndex*, int, QVariant*) = reinterpret_cast<void (*)(KFilePlacesModel*, QModelIndex*, int, QVariant*)>(slot);
    KFilePlacesModel::connect(self, &KFilePlacesModel::teardownDone, [self, slotFunc](const QModelIndex& index, Solid::ErrorType errorVal, const QVariant& errorData) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        int sigval2 = static_cast<int>(errorVal);
        const QVariant& errorData_ret = errorData;
        // Cast returned reference into pointer
        QVariant* sigval3 = const_cast<QVariant*>(&errorData_ret);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void KFilePlacesModel_GroupHiddenChanged(KFilePlacesModel* self, int group, bool hidden) {
    self->groupHiddenChanged(static_cast<KFilePlacesModel::GroupType>(group), hidden);
}

void KFilePlacesModel_Connect_GroupHiddenChanged(KFilePlacesModel* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesModel*, int, bool) = reinterpret_cast<void (*)(KFilePlacesModel*, int, bool)>(slot);
    KFilePlacesModel::connect(self, &KFilePlacesModel::groupHiddenChanged, [self, slotFunc](KFilePlacesModel::GroupType group, bool hidden) {
        int sigval1 = static_cast<int>(group);
        bool sigval2 = hidden;
        slotFunc(self, sigval1, sigval2);
    });
}

void KFilePlacesModel_Reloaded(KFilePlacesModel* self) {
    self->reloaded();
}

void KFilePlacesModel_Connect_Reloaded(KFilePlacesModel* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesModel*) = reinterpret_cast<void (*)(KFilePlacesModel*)>(slot);
    KFilePlacesModel::connect(self, &KFilePlacesModel::reloaded, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KFilePlacesModel_SupportedSchemesChanged(KFilePlacesModel* self) {
    self->supportedSchemesChanged();
}

void KFilePlacesModel_Connect_SupportedSchemesChanged(KFilePlacesModel* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesModel*) = reinterpret_cast<void (*)(KFilePlacesModel*)>(slot);
    KFilePlacesModel::connect(self, &KFilePlacesModel::supportedSchemesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KFilePlacesModel_Tr2(const char* s, const char* c) {
    QString _ret = KFilePlacesModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFilePlacesModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KFilePlacesModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFilePlacesModel_AddPlace3(KFilePlacesModel* self, const libqt_string text, const QUrl* url, const libqt_string iconName) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    self->addPlace(text_QString, *url, iconName_QString);
}

void KFilePlacesModel_AddPlace4(KFilePlacesModel* self, const libqt_string text, const QUrl* url, const libqt_string iconName, const libqt_string appName) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    QString appName_QString = QString::fromUtf8(appName.data, appName.len);
    self->addPlace(text_QString, *url, iconName_QString, appName_QString);
}

void KFilePlacesModel_EditPlace4(KFilePlacesModel* self, const QModelIndex* index, const libqt_string text, const QUrl* url, const libqt_string iconName) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    self->editPlace(*index, text_QString, *url, iconName_QString);
}

void KFilePlacesModel_EditPlace5(KFilePlacesModel* self, const QModelIndex* index, const libqt_string text, const QUrl* url, const libqt_string iconName, const libqt_string appName) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    QString appName_QString = QString::fromUtf8(appName.data, appName.len);
    self->editPlace(*index, text_QString, *url, iconName_QString, appName_QString);
}

// Base class handler implementation
int KFilePlacesModel_QBaseMetacall(KFilePlacesModel* self, int param1, int param2, void** param3) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Metacall_IsBase(true);
        return vkfileplacesmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFilePlacesModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnMetacall(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Metacall_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KFilePlacesModel_QBaseData(const KFilePlacesModel* self, const QModelIndex* index, int role) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Data_IsBase(true);
        return new QVariant(vkfileplacesmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKFilePlacesModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnData(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Data_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Data_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KFilePlacesModel_QBaseIndex(const KFilePlacesModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Index_IsBase(true);
        return new QModelIndex(vkfileplacesmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKFilePlacesModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnIndex(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Index_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Index_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KFilePlacesModel_QBaseParent(const KFilePlacesModel* self, const QModelIndex* child) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Parent_IsBase(true);
        return new QModelIndex(vkfileplacesmodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualKFilePlacesModel*)self)->parent(*child));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnParent(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Parent_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Parent_Callback>(slot));
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KFilePlacesModel_QBaseRoleNames(const KFilePlacesModel* self) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vkfileplacesmodel->roleNames();
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
        QHash<int, QByteArray> _ret = self->KFilePlacesModel::roleNames();
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
void KFilePlacesModel_OnRoleNames(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_RoleNames_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_RoleNames_Callback>(slot));
    }
}

// Base class handler implementation
int KFilePlacesModel_QBaseRowCount(const KFilePlacesModel* self, const QModelIndex* parent) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_RowCount_IsBase(true);
        return vkfileplacesmodel->rowCount(*parent);
    } else {
        return self->KFilePlacesModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnRowCount(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_RowCount_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_RowCount_Callback>(slot));
    }
}

// Base class handler implementation
int KFilePlacesModel_QBaseColumnCount(const KFilePlacesModel* self, const QModelIndex* parent) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ColumnCount_IsBase(true);
        return vkfileplacesmodel->columnCount(*parent);
    } else {
        return self->KFilePlacesModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnColumnCount(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ColumnCount_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_ColumnCount_Callback>(slot));
    }
}

// Base class handler implementation
int KFilePlacesModel_QBaseSupportedDropActions(const KFilePlacesModel* self) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vkfileplacesmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KFilePlacesModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSupportedDropActions(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_SupportedDropActions_Callback>(slot));
    }
}

// Base class handler implementation
int KFilePlacesModel_QBaseFlags(const KFilePlacesModel* self, const QModelIndex* index) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Flags_IsBase(true);
        return static_cast<int>(vkfileplacesmodel->flags(*index));
    } else {
        return static_cast<int>(self->KFilePlacesModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnFlags(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Flags_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Flags_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ KFilePlacesModel_QBaseMimeTypes(const KFilePlacesModel* self) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vkfileplacesmodel->mimeTypes();
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
        QList<QString> _ret = self->KFilePlacesModel::mimeTypes();
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
void KFilePlacesModel_OnMimeTypes(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_MimeTypes_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_MimeTypes_Callback>(slot));
    }
}

// Base class handler implementation
QMimeData* KFilePlacesModel_QBaseMimeData(const KFilePlacesModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_MimeData_IsBase(true);
        return vkfileplacesmodel->mimeData(indexes_QList);
    } else {
        return self->KFilePlacesModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnMimeData(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_MimeData_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_MimeData_Callback>(slot));
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseDropMimeData(KFilePlacesModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_DropMimeData_IsBase(true);
        return vkfileplacesmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KFilePlacesModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnDropMimeData(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_DropMimeData_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KFilePlacesModel_Sibling(const KFilePlacesModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return new QModelIndex(vkfileplacesmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKFilePlacesModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* KFilePlacesModel_QBaseSibling(const KFilePlacesModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Sibling_IsBase(true);
        return new QModelIndex(vkfileplacesmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKFilePlacesModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSibling(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Sibling_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_HasChildren(const KFilePlacesModel* self, const QModelIndex* parent) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->hasChildren(*parent);
    } else {
        return self->KFilePlacesModel::hasChildren(*parent);
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseHasChildren(const KFilePlacesModel* self, const QModelIndex* parent) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_HasChildren_IsBase(true);
        return vkfileplacesmodel->hasChildren(*parent);
    } else {
        return self->KFilePlacesModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnHasChildren(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_HasChildren_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_SetData(KFilePlacesModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KFilePlacesModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseSetData(KFilePlacesModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_SetData_IsBase(true);
        return vkfileplacesmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KFilePlacesModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSetData(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_SetData_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KFilePlacesModel_HeaderData(const KFilePlacesModel* self, int section, int orientation, int role) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return new QVariant(vkfileplacesmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKFilePlacesModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KFilePlacesModel_QBaseHeaderData(const KFilePlacesModel* self, int section, int orientation, int role) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_HeaderData_IsBase(true);
        return new QVariant(vkfileplacesmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKFilePlacesModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnHeaderData(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_HeaderData_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_SetHeaderData(KFilePlacesModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KFilePlacesModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseSetHeaderData(KFilePlacesModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_SetHeaderData_IsBase(true);
        return vkfileplacesmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KFilePlacesModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSetHeaderData(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_SetHeaderData_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KFilePlacesModel_ItemData(const KFilePlacesModel* self, const QModelIndex* index) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        QMap<int, QVariant> _ret = vkfileplacesmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KFilePlacesModel::itemData(*index);
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
libqt_map /* of int to QVariant* */ KFilePlacesModel_QBaseItemData(const KFilePlacesModel* self, const QModelIndex* index) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vkfileplacesmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = self->KFilePlacesModel::itemData(*index);
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
void KFilePlacesModel_OnItemData(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ItemData_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_SetItemData(KFilePlacesModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->setItemData(*index, roles_QMap);
    } else {
        return self->KFilePlacesModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseSetItemData(KFilePlacesModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_SetItemData_IsBase(true);
        return vkfileplacesmodel->setItemData(*index, roles_QMap);
    } else {
        return self->KFilePlacesModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSetItemData(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_SetItemData_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_ClearItemData(KFilePlacesModel* self, const QModelIndex* index) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->clearItemData(*index);
    } else {
        return self->KFilePlacesModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseClearItemData(KFilePlacesModel* self, const QModelIndex* index) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ClearItemData_IsBase(true);
        return vkfileplacesmodel->clearItemData(*index);
    } else {
        return self->KFilePlacesModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnClearItemData(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ClearItemData_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_CanDropMimeData(const KFilePlacesModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KFilePlacesModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseCanDropMimeData(const KFilePlacesModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_CanDropMimeData_IsBase(true);
        return vkfileplacesmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KFilePlacesModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnCanDropMimeData(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlacesModel_SupportedDragActions(const KFilePlacesModel* self) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return static_cast<int>(vkfileplacesmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KFilePlacesModel::supportedDragActions());
    }
}

// Base class handler implementation
int KFilePlacesModel_QBaseSupportedDragActions(const KFilePlacesModel* self) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vkfileplacesmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KFilePlacesModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSupportedDragActions(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_InsertRows(KFilePlacesModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KFilePlacesModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseInsertRows(KFilePlacesModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_InsertRows_IsBase(true);
        return vkfileplacesmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KFilePlacesModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnInsertRows(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_InsertRows_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_InsertColumns(KFilePlacesModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KFilePlacesModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseInsertColumns(KFilePlacesModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_InsertColumns_IsBase(true);
        return vkfileplacesmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KFilePlacesModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnInsertColumns(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_InsertColumns_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_RemoveRows(KFilePlacesModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KFilePlacesModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseRemoveRows(KFilePlacesModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_RemoveRows_IsBase(true);
        return vkfileplacesmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KFilePlacesModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnRemoveRows(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_RemoveRows_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_RemoveColumns(KFilePlacesModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KFilePlacesModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseRemoveColumns(KFilePlacesModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_RemoveColumns_IsBase(true);
        return vkfileplacesmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KFilePlacesModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnRemoveColumns(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_RemoveColumns_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_MoveRows(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KFilePlacesModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseMoveRows(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_MoveRows_IsBase(true);
        return vkfileplacesmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KFilePlacesModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnMoveRows(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_MoveRows_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_MoveColumns(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KFilePlacesModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseMoveColumns(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_MoveColumns_IsBase(true);
        return vkfileplacesmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KFilePlacesModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnMoveColumns(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_MoveColumns_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_FetchMore(KFilePlacesModel* self, const QModelIndex* parent) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->fetchMore(*parent);
    } else {
        self->KFilePlacesModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseFetchMore(KFilePlacesModel* self, const QModelIndex* parent) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_FetchMore_IsBase(true);
        vkfileplacesmodel->fetchMore(*parent);
    } else {
        self->KFilePlacesModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnFetchMore(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_FetchMore_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_CanFetchMore(const KFilePlacesModel* self, const QModelIndex* parent) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->canFetchMore(*parent);
    } else {
        return self->KFilePlacesModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseCanFetchMore(const KFilePlacesModel* self, const QModelIndex* parent) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_CanFetchMore_IsBase(true);
        return vkfileplacesmodel->canFetchMore(*parent);
    } else {
        return self->KFilePlacesModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnCanFetchMore(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_CanFetchMore_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_Sort(KFilePlacesModel* self, int column, int order) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KFilePlacesModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseSort(KFilePlacesModel* self, int column, int order) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Sort_IsBase(true);
        vkfileplacesmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KFilePlacesModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSort(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Sort_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KFilePlacesModel_Buddy(const KFilePlacesModel* self, const QModelIndex* index) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return new QModelIndex(vkfileplacesmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKFilePlacesModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KFilePlacesModel_QBaseBuddy(const KFilePlacesModel* self, const QModelIndex* index) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Buddy_IsBase(true);
        return new QModelIndex(vkfileplacesmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKFilePlacesModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnBuddy(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Buddy_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KFilePlacesModel_Match(const KFilePlacesModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        QList<QModelIndex> _ret = vkfileplacesmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KFilePlacesModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ KFilePlacesModel_QBaseMatch(const KFilePlacesModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vkfileplacesmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->KFilePlacesModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KFilePlacesModel_OnMatch(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Match_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFilePlacesModel_Span(const KFilePlacesModel* self, const QModelIndex* index) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return new QSize(vkfileplacesmodel->span(*index));
    } else {
        return new QSize(((VirtualKFilePlacesModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KFilePlacesModel_QBaseSpan(const KFilePlacesModel* self, const QModelIndex* index) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Span_IsBase(true);
        return new QSize(vkfileplacesmodel->span(*index));
    } else {
        return new QSize(((VirtualKFilePlacesModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSpan(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Span_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_MultiData(const KFilePlacesModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->multiData(*index, *roleDataSpan);
    } else {
        self->KFilePlacesModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseMultiData(const KFilePlacesModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_MultiData_IsBase(true);
        vkfileplacesmodel->multiData(*index, *roleDataSpan);
    } else {
        self->KFilePlacesModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnMultiData(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_MultiData_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_Submit(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->submit();
    } else {
        return self->KFilePlacesModel::submit();
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseSubmit(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Submit_IsBase(true);
        return vkfileplacesmodel->submit();
    } else {
        return self->KFilePlacesModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSubmit(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Submit_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_Revert(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->revert();
    } else {
        self->KFilePlacesModel::revert();
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseRevert(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Revert_IsBase(true);
        vkfileplacesmodel->revert();
    } else {
        self->KFilePlacesModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnRevert(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Revert_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_ResetInternalData(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->resetInternalData();
    } else {
        ((VirtualKFilePlacesModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseResetInternalData(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ResetInternalData_IsBase(true);
        vkfileplacesmodel->resetInternalData();
    } else {
        ((VirtualKFilePlacesModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnResetInternalData(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ResetInternalData_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_Event(KFilePlacesModel* self, QEvent* event) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->event(event);
    } else {
        return self->KFilePlacesModel::event(event);
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseEvent(KFilePlacesModel* self, QEvent* event) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Event_IsBase(true);
        return vkfileplacesmodel->event(event);
    } else {
        return self->KFilePlacesModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnEvent(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Event_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_EventFilter(KFilePlacesModel* self, QObject* watched, QEvent* event) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->eventFilter(watched, event);
    } else {
        return self->KFilePlacesModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseEventFilter(KFilePlacesModel* self, QObject* watched, QEvent* event) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EventFilter_IsBase(true);
        return vkfileplacesmodel->eventFilter(watched, event);
    } else {
        return self->KFilePlacesModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnEventFilter(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EventFilter_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_TimerEvent(KFilePlacesModel* self, QTimerEvent* event) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->timerEvent(event);
    } else {
        ((VirtualKFilePlacesModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseTimerEvent(KFilePlacesModel* self, QTimerEvent* event) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_TimerEvent_IsBase(true);
        vkfileplacesmodel->timerEvent(event);
    } else {
        ((VirtualKFilePlacesModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnTimerEvent(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_TimerEvent_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_ChildEvent(KFilePlacesModel* self, QChildEvent* event) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->childEvent(event);
    } else {
        ((VirtualKFilePlacesModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseChildEvent(KFilePlacesModel* self, QChildEvent* event) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ChildEvent_IsBase(true);
        vkfileplacesmodel->childEvent(event);
    } else {
        ((VirtualKFilePlacesModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnChildEvent(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ChildEvent_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_CustomEvent(KFilePlacesModel* self, QEvent* event) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->customEvent(event);
    } else {
        ((VirtualKFilePlacesModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseCustomEvent(KFilePlacesModel* self, QEvent* event) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_CustomEvent_IsBase(true);
        vkfileplacesmodel->customEvent(event);
    } else {
        ((VirtualKFilePlacesModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnCustomEvent(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_CustomEvent_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_ConnectNotify(KFilePlacesModel* self, const QMetaMethod* signal) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->connectNotify(*signal);
    } else {
        ((VirtualKFilePlacesModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseConnectNotify(KFilePlacesModel* self, const QMetaMethod* signal) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ConnectNotify_IsBase(true);
        vkfileplacesmodel->connectNotify(*signal);
    } else {
        ((VirtualKFilePlacesModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnConnectNotify(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ConnectNotify_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_DisconnectNotify(KFilePlacesModel* self, const QMetaMethod* signal) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKFilePlacesModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseDisconnectNotify(KFilePlacesModel* self, const QMetaMethod* signal) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_DisconnectNotify_IsBase(true);
        vkfileplacesmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKFilePlacesModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnDisconnectNotify(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KFilePlacesModel_CreateIndex(const KFilePlacesModel* self, int row, int column) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return new QModelIndex(vkfileplacesmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KFilePlacesModel_QBaseCreateIndex(const KFilePlacesModel* self, int row, int column) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_CreateIndex_IsBase(true);
        return new QModelIndex(vkfileplacesmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnCreateIndex(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_CreateIndex_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_EncodeData(const KFilePlacesModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKFilePlacesModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseEncodeData(const KFilePlacesModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EncodeData_IsBase(true);
        vkfileplacesmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKFilePlacesModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnEncodeData(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EncodeData_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_DecodeData(KFilePlacesModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKFilePlacesModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseDecodeData(KFilePlacesModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_DecodeData_IsBase(true);
        return vkfileplacesmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKFilePlacesModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnDecodeData(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_DecodeData_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_BeginInsertRows(KFilePlacesModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKFilePlacesModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseBeginInsertRows(KFilePlacesModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_BeginInsertRows_IsBase(true);
        vkfileplacesmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKFilePlacesModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnBeginInsertRows(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_EndInsertRows(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->endInsertRows();
    } else {
        ((VirtualKFilePlacesModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseEndInsertRows(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EndInsertRows_IsBase(true);
        vkfileplacesmodel->endInsertRows();
    } else {
        ((VirtualKFilePlacesModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnEndInsertRows(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EndInsertRows_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_BeginRemoveRows(KFilePlacesModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKFilePlacesModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseBeginRemoveRows(KFilePlacesModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_BeginRemoveRows_IsBase(true);
        vkfileplacesmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKFilePlacesModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnBeginRemoveRows(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_EndRemoveRows(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->endRemoveRows();
    } else {
        ((VirtualKFilePlacesModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseEndRemoveRows(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EndRemoveRows_IsBase(true);
        vkfileplacesmodel->endRemoveRows();
    } else {
        ((VirtualKFilePlacesModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnEndRemoveRows(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_BeginMoveRows(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKFilePlacesModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseBeginMoveRows(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_BeginMoveRows_IsBase(true);
        return vkfileplacesmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKFilePlacesModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnBeginMoveRows(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_EndMoveRows(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->endMoveRows();
    } else {
        ((VirtualKFilePlacesModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseEndMoveRows(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EndMoveRows_IsBase(true);
        vkfileplacesmodel->endMoveRows();
    } else {
        ((VirtualKFilePlacesModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnEndMoveRows(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EndMoveRows_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_BeginInsertColumns(KFilePlacesModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKFilePlacesModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseBeginInsertColumns(KFilePlacesModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_BeginInsertColumns_IsBase(true);
        vkfileplacesmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKFilePlacesModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnBeginInsertColumns(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_EndInsertColumns(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->endInsertColumns();
    } else {
        ((VirtualKFilePlacesModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseEndInsertColumns(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EndInsertColumns_IsBase(true);
        vkfileplacesmodel->endInsertColumns();
    } else {
        ((VirtualKFilePlacesModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnEndInsertColumns(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_BeginRemoveColumns(KFilePlacesModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKFilePlacesModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseBeginRemoveColumns(KFilePlacesModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_BeginRemoveColumns_IsBase(true);
        vkfileplacesmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKFilePlacesModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnBeginRemoveColumns(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_EndRemoveColumns(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->endRemoveColumns();
    } else {
        ((VirtualKFilePlacesModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseEndRemoveColumns(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EndRemoveColumns_IsBase(true);
        vkfileplacesmodel->endRemoveColumns();
    } else {
        ((VirtualKFilePlacesModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnEndRemoveColumns(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_BeginMoveColumns(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKFilePlacesModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseBeginMoveColumns(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_BeginMoveColumns_IsBase(true);
        return vkfileplacesmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKFilePlacesModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnBeginMoveColumns(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_EndMoveColumns(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->endMoveColumns();
    } else {
        ((VirtualKFilePlacesModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseEndMoveColumns(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EndMoveColumns_IsBase(true);
        vkfileplacesmodel->endMoveColumns();
    } else {
        ((VirtualKFilePlacesModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnEndMoveColumns(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_BeginResetModel(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->beginResetModel();
    } else {
        ((VirtualKFilePlacesModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseBeginResetModel(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_BeginResetModel_IsBase(true);
        vkfileplacesmodel->beginResetModel();
    } else {
        ((VirtualKFilePlacesModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnBeginResetModel(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_BeginResetModel_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_EndResetModel(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->endResetModel();
    } else {
        ((VirtualKFilePlacesModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseEndResetModel(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EndResetModel_IsBase(true);
        vkfileplacesmodel->endResetModel();
    } else {
        ((VirtualKFilePlacesModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnEndResetModel(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_EndResetModel_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_ChangePersistentIndex(KFilePlacesModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKFilePlacesModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseChangePersistentIndex(KFilePlacesModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ChangePersistentIndex_IsBase(true);
        vkfileplacesmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKFilePlacesModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnChangePersistentIndex(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlacesModel_ChangePersistentIndexList(KFilePlacesModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
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
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKFilePlacesModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KFilePlacesModel_QBaseChangePersistentIndexList(KFilePlacesModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
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
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ChangePersistentIndexList_IsBase(true);
        vkfileplacesmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKFilePlacesModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnChangePersistentIndexList(KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KFilePlacesModel_PersistentIndexList(const KFilePlacesModel* self) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        QList<QModelIndex> _ret = vkfileplacesmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKFilePlacesModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ KFilePlacesModel_QBasePersistentIndexList(const KFilePlacesModel* self) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vkfileplacesmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualKFilePlacesModel*)self)->persistentIndexList();
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
void KFilePlacesModel_OnPersistentIndexList(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFilePlacesModel_Sender(const KFilePlacesModel* self) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->sender();
    } else {
        return ((VirtualKFilePlacesModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFilePlacesModel_QBaseSender(const KFilePlacesModel* self) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Sender_IsBase(true);
        return vkfileplacesmodel->sender();
    } else {
        return ((VirtualKFilePlacesModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSender(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Sender_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlacesModel_SenderSignalIndex(const KFilePlacesModel* self) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->senderSignalIndex();
    } else {
        return ((VirtualKFilePlacesModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFilePlacesModel_QBaseSenderSignalIndex(const KFilePlacesModel* self) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_SenderSignalIndex_IsBase(true);
        return vkfileplacesmodel->senderSignalIndex();
    } else {
        return ((VirtualKFilePlacesModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSenderSignalIndex(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlacesModel_Receivers(const KFilePlacesModel* self, const char* signal) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->receivers(signal);
    } else {
        return ((VirtualKFilePlacesModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFilePlacesModel_QBaseReceivers(const KFilePlacesModel* self, const char* signal) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Receivers_IsBase(true);
        return vkfileplacesmodel->receivers(signal);
    } else {
        return ((VirtualKFilePlacesModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnReceivers(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_Receivers_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlacesModel_IsSignalConnected(const KFilePlacesModel* self, const QMetaMethod* signal) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        return vkfileplacesmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKFilePlacesModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFilePlacesModel_QBaseIsSignalConnected(const KFilePlacesModel* self, const QMetaMethod* signal) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_IsSignalConnected_IsBase(true);
        return vkfileplacesmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKFilePlacesModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnIsSignalConnected(const KFilePlacesModel* self, intptr_t slot) {
    auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self));
    if (vkfileplacesmodel && vkfileplacesmodel->isVirtualKFilePlacesModel) {
        vkfileplacesmodel->setKFilePlacesModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_IsSignalConnected_Callback>(slot));
    }
}

void KFilePlacesModel_Delete(KFilePlacesModel* self) {
    delete self;
}
