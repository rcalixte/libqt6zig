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
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <Solid/Device>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFilePlacesModel_Tr(const char* s) {
    auto _ret = KFilePlacesModel::tr(s);
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
    auto _ret = self->text(*index);
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
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
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
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

QModelIndex* KFilePlacesModel_Index(const KFilePlacesModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* KFilePlacesModel_Parent(const KFilePlacesModel* self, const QModelIndex* child) {
    return new QModelIndex(self->parent(*child));
}

libqt_map /* of int to libqt_string */ KFilePlacesModel_RoleNames(const KFilePlacesModel* self) {
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

int KFilePlacesModel_RowCount(const KFilePlacesModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

int KFilePlacesModel_ColumnCount(const KFilePlacesModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

QModelIndex* KFilePlacesModel_ClosestItem(const KFilePlacesModel* self, const QUrl* url) {
    return new QModelIndex(self->closestItem(*url));
}

int KFilePlacesModel_SupportedDropActions(const KFilePlacesModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

int KFilePlacesModel_Flags(const KFilePlacesModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

libqt_list /* of libqt_string */ KFilePlacesModel_MimeTypes(const KFilePlacesModel* self) {
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

QMimeData* KFilePlacesModel_MimeData(const KFilePlacesModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

bool KFilePlacesModel_DropMimeData(KFilePlacesModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
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

void KFilePlacesModel_ErrorMessage(KFilePlacesModel* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->errorMessage(message_QString);
}

void KFilePlacesModel_Connect_ErrorMessage(KFilePlacesModel* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesModel*, const char*) = reinterpret_cast<void (*)(KFilePlacesModel*, const char*)>(slot);
    KFilePlacesModel::connect(self,
                              static_cast<void (KFilePlacesModel::*)(const QString&)>(&KFilePlacesModel::errorMessage),
                              [self, slotFunc](const QString& message) {
                                  const auto message_ret = message;
                                  // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                  QByteArray message_b = message_ret.toUtf8();
                                  auto message_str_len = message_b.length();
                                  const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
                                  memcpy((void*)message_str, message_b.data(), message_str_len);
                                  ((char*)message_str)[message_str_len] = '\0';
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
    KFilePlacesModel::connect(self,
                              static_cast<void (KFilePlacesModel::*)(const QModelIndex&, bool)>(&KFilePlacesModel::setupDone),
                              [self, slotFunc](const QModelIndex& index, bool success) {
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
    KFilePlacesModel::connect(self,
                              static_cast<void (KFilePlacesModel::*)(const QModelIndex&, Solid::ErrorType, const QVariant&)>(&KFilePlacesModel::teardownDone),
                              [self, slotFunc](const QModelIndex& index, Solid::ErrorType errorVal, const QVariant& errorData) {
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
    KFilePlacesModel::connect(self,
                              static_cast<void (KFilePlacesModel::*)(KFilePlacesModel::GroupType, bool)>(&KFilePlacesModel::groupHiddenChanged),
                              [self, slotFunc](KFilePlacesModel::GroupType group, bool hidden) {
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
    KFilePlacesModel::connect(self,
                              static_cast<void (KFilePlacesModel::*)()>(&KFilePlacesModel::reloaded),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void KFilePlacesModel_SupportedSchemesChanged(KFilePlacesModel* self) {
    self->supportedSchemesChanged();
}

void KFilePlacesModel_Connect_SupportedSchemesChanged(KFilePlacesModel* self, intptr_t slot) {
    void (*slotFunc)(KFilePlacesModel*) = reinterpret_cast<void (*)(KFilePlacesModel*)>(slot);
    KFilePlacesModel::connect(self,
                              static_cast<void (KFilePlacesModel::*)()>(&KFilePlacesModel::supportedSchemesChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

libqt_string KFilePlacesModel_Tr2(const char* s, const char* c) {
    auto _ret = KFilePlacesModel::tr(s, c);
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
    auto _ret = KFilePlacesModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KFilePlacesModel_SuperMetaObject(const KFilePlacesModel* self) {
    return (QMetaObject*)self->KFilePlacesModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnMetaObject(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_metaobject_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFilePlacesModel_SuperMetacast(KFilePlacesModel* self, const char* param1) {
    return self->KFilePlacesModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnMetacast(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_metacast_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFilePlacesModel_SuperMetacall(KFilePlacesModel* self, int param1, int param2, void** param3) {
    return self->KFilePlacesModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnMetacall(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_metacall_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Metacall_Callback>(slot);
}

// Base class handler implementation
QVariant* KFilePlacesModel_SuperData(const KFilePlacesModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->KFilePlacesModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnData(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_data_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Data_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KFilePlacesModel_SuperIndex(const KFilePlacesModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->KFilePlacesModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnIndex(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_index_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Index_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KFilePlacesModel_SuperParent(const KFilePlacesModel* self, const QModelIndex* child) {
    return new QModelIndex(self->KFilePlacesModel::parent(*child));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnParent(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_parent_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Parent_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KFilePlacesModel_SuperRoleNames(const KFilePlacesModel* self) {
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
void KFilePlacesModel_OnRoleNames(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_rolenames_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_RoleNames_Callback>(slot);
}

// Base class handler implementation
int KFilePlacesModel_SuperRowCount(const KFilePlacesModel* self, const QModelIndex* parent) {
    return self->KFilePlacesModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnRowCount(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_rowcount_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_RowCount_Callback>(slot);
}

// Base class handler implementation
int KFilePlacesModel_SuperColumnCount(const KFilePlacesModel* self, const QModelIndex* parent) {
    return self->KFilePlacesModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnColumnCount(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_columncount_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
int KFilePlacesModel_SuperSupportedDropActions(const KFilePlacesModel* self) {
    return static_cast<int>(self->KFilePlacesModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSupportedDropActions(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_supporteddropactions_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_SupportedDropActions_Callback>(slot);
}

// Base class handler implementation
int KFilePlacesModel_SuperFlags(const KFilePlacesModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KFilePlacesModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnFlags(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_flags_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Flags_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ KFilePlacesModel_SuperMimeTypes(const KFilePlacesModel* self) {
    QList<QString> _ret = self->KFilePlacesModel::mimeTypes();
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
void KFilePlacesModel_OnMimeTypes(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_mimetypes_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_MimeTypes_Callback>(slot);
}

// Base class handler implementation
QMimeData* KFilePlacesModel_SuperMimeData(const KFilePlacesModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KFilePlacesModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnMimeData(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_mimedata_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_MimeData_Callback>(slot);
}

// Base class handler implementation
bool KFilePlacesModel_SuperDropMimeData(KFilePlacesModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KFilePlacesModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnDropMimeData(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_dropmimedata_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KFilePlacesModel_Sibling(const KFilePlacesModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* KFilePlacesModel_SuperSibling(const KFilePlacesModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KFilePlacesModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSibling(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_sibling_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_HasChildren(const KFilePlacesModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

// Base class handler implementation
bool KFilePlacesModel_SuperHasChildren(const KFilePlacesModel* self, const QModelIndex* parent) {
    return self->KFilePlacesModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnHasChildren(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_haschildren_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_HasChildren_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_SetData(KFilePlacesModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

// Base class handler implementation
bool KFilePlacesModel_SuperSetData(KFilePlacesModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KFilePlacesModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSetData(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_setdata_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_SetData_Callback>(slot);
}

// Derived class handler implementation
QVariant* KFilePlacesModel_HeaderData(const KFilePlacesModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* KFilePlacesModel_SuperHeaderData(const KFilePlacesModel* self, int section, int orientation, int role) {
    return new QVariant(self->KFilePlacesModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnHeaderData(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_headerdata_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_SetHeaderData(KFilePlacesModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KFilePlacesModel_SuperSetHeaderData(KFilePlacesModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KFilePlacesModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSetHeaderData(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_setheaderdata_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KFilePlacesModel_ItemData(const KFilePlacesModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ KFilePlacesModel_SuperItemData(const KFilePlacesModel* self, const QModelIndex* index) {
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

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnItemData(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_itemdata_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_SetItemData(KFilePlacesModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KFilePlacesModel_SuperSetItemData(KFilePlacesModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KFilePlacesModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSetItemData(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_setitemdata_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_ClearItemData(KFilePlacesModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KFilePlacesModel_SuperClearItemData(KFilePlacesModel* self, const QModelIndex* index) {
    return self->KFilePlacesModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnClearItemData(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_clearitemdata_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_CanDropMimeData(const KFilePlacesModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KFilePlacesModel_SuperCanDropMimeData(const KFilePlacesModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KFilePlacesModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnCanDropMimeData(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_candropmimedata_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KFilePlacesModel_SupportedDragActions(const KFilePlacesModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KFilePlacesModel_SuperSupportedDragActions(const KFilePlacesModel* self) {
    return static_cast<int>(self->KFilePlacesModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSupportedDragActions(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_supporteddragactions_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_InsertRows(KFilePlacesModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KFilePlacesModel_SuperInsertRows(KFilePlacesModel* self, int row, int count, const QModelIndex* parent) {
    return self->KFilePlacesModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnInsertRows(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_insertrows_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_InsertColumns(KFilePlacesModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KFilePlacesModel_SuperInsertColumns(KFilePlacesModel* self, int column, int count, const QModelIndex* parent) {
    return self->KFilePlacesModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnInsertColumns(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_insertcolumns_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_RemoveRows(KFilePlacesModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KFilePlacesModel_SuperRemoveRows(KFilePlacesModel* self, int row, int count, const QModelIndex* parent) {
    return self->KFilePlacesModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnRemoveRows(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_removerows_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_RemoveColumns(KFilePlacesModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KFilePlacesModel_SuperRemoveColumns(KFilePlacesModel* self, int column, int count, const QModelIndex* parent) {
    return self->KFilePlacesModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnRemoveColumns(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_removecolumns_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_MoveRows(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KFilePlacesModel_SuperMoveRows(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KFilePlacesModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnMoveRows(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_moverows_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_MoveColumns(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KFilePlacesModel_SuperMoveColumns(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KFilePlacesModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnMoveColumns(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_movecolumns_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesModel_FetchMore(KFilePlacesModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KFilePlacesModel_SuperFetchMore(KFilePlacesModel* self, const QModelIndex* parent) {
    self->KFilePlacesModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnFetchMore(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_fetchmore_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_CanFetchMore(const KFilePlacesModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool KFilePlacesModel_SuperCanFetchMore(const KFilePlacesModel* self, const QModelIndex* parent) {
    return self->KFilePlacesModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnCanFetchMore(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_canfetchmore_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesModel_Sort(KFilePlacesModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void KFilePlacesModel_SuperSort(KFilePlacesModel* self, int column, int order) {
    self->KFilePlacesModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSort(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_sort_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KFilePlacesModel_Buddy(const KFilePlacesModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KFilePlacesModel_SuperBuddy(const KFilePlacesModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KFilePlacesModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnBuddy(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_buddy_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KFilePlacesModel_Match(const KFilePlacesModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ KFilePlacesModel_SuperMatch(const KFilePlacesModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KFilePlacesModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void KFilePlacesModel_OnMatch(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_match_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* KFilePlacesModel_Span(const KFilePlacesModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KFilePlacesModel_SuperSpan(const KFilePlacesModel* self, const QModelIndex* index) {
    return new QSize(self->KFilePlacesModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSpan(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_span_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Span_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesModel_MultiData(const KFilePlacesModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KFilePlacesModel_SuperMultiData(const KFilePlacesModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KFilePlacesModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnMultiData(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        vkfileplacesmodel->kfileplacesmodel_multidata_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_Submit(KFilePlacesModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KFilePlacesModel_SuperSubmit(KFilePlacesModel* self) {
    return self->KFilePlacesModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnSubmit(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_submit_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesModel_Revert(KFilePlacesModel* self) {
    self->revert();
}

// Base class handler implementation
void KFilePlacesModel_SuperRevert(KFilePlacesModel* self) {
    self->KFilePlacesModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnRevert(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_revert_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesModel_ResetInternalData(KFilePlacesModel* self) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel) {
        vkfileplacesmodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KFilePlacesModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesModel_SuperResetInternalData(KFilePlacesModel* self) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->KFilePlacesModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KFilePlacesModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnResetInternalData(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_resetinternaldata_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_Event(KFilePlacesModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KFilePlacesModel_SuperEvent(KFilePlacesModel* self, QEvent* event) {
    return self->KFilePlacesModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnEvent(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_event_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlacesModel_EventFilter(KFilePlacesModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KFilePlacesModel_SuperEventFilter(KFilePlacesModel* self, QObject* watched, QEvent* event) {
    return self->KFilePlacesModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnEventFilter(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_eventfilter_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesModel_TimerEvent(KFilePlacesModel* self, QTimerEvent* event) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel) {
        vkfileplacesmodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesModel_SuperTimerEvent(KFilePlacesModel* self, QTimerEvent* event) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->KFilePlacesModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnTimerEvent(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_timerevent_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesModel_ChildEvent(KFilePlacesModel* self, QChildEvent* event) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel) {
        vkfileplacesmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesModel_SuperChildEvent(KFilePlacesModel* self, QChildEvent* event) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->KFilePlacesModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnChildEvent(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_childevent_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesModel_CustomEvent(KFilePlacesModel* self, QEvent* event) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel) {
        vkfileplacesmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesModel_SuperCustomEvent(KFilePlacesModel* self, QEvent* event) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->KFilePlacesModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlacesModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnCustomEvent(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_customevent_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesModel_ConnectNotify(KFilePlacesModel* self, const QMetaMethod* signal) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel) {
        vkfileplacesmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesModel_SuperConnectNotify(KFilePlacesModel* self, const QMetaMethod* signal) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->KFilePlacesModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFilePlacesModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnConnectNotify(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_connectnotify_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFilePlacesModel_DisconnectNotify(KFilePlacesModel* self, const QMetaMethod* signal) {
    auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self);
    if (vkfileplacesmodel) {
        vkfileplacesmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFilePlacesModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlacesModel_SuperDisconnectNotify(KFilePlacesModel* self, const QMetaMethod* signal) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->KFilePlacesModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFilePlacesModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlacesModel_OnDisconnectNotify(KFilePlacesModel* self, intptr_t slot) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self))
        vkfileplacesmodel->kfileplacesmodel_disconnectnotify_callback = reinterpret_cast<VirtualKFilePlacesModel::KFilePlacesModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KFilePlacesModel_CreateIndex(const KFilePlacesModel* self, int row, int column) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self)))
        return new QModelIndex(vkfileplacesmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KFilePlacesModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesModel_EncodeData(const KFilePlacesModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vkfileplacesmodel->VirtualKFilePlacesModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KFilePlacesModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFilePlacesModel_DecodeData(KFilePlacesModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        return vkfileplacesmodel->VirtualKFilePlacesModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KFilePlacesModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesModel_BeginInsertRows(KFilePlacesModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->VirtualKFilePlacesModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KFilePlacesModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesModel_EndInsertRows(KFilePlacesModel* self) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->VirtualKFilePlacesModel::endInsertRows();
    } else
        qFatal("Error: Protected method KFilePlacesModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesModel_BeginRemoveRows(KFilePlacesModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->VirtualKFilePlacesModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KFilePlacesModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesModel_EndRemoveRows(KFilePlacesModel* self) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->VirtualKFilePlacesModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KFilePlacesModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFilePlacesModel_BeginMoveRows(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        return vkfileplacesmodel->VirtualKFilePlacesModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KFilePlacesModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesModel_EndMoveRows(KFilePlacesModel* self) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->VirtualKFilePlacesModel::endMoveRows();
    } else
        qFatal("Error: Protected method KFilePlacesModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesModel_BeginInsertColumns(KFilePlacesModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->VirtualKFilePlacesModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KFilePlacesModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesModel_EndInsertColumns(KFilePlacesModel* self) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->VirtualKFilePlacesModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KFilePlacesModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesModel_BeginRemoveColumns(KFilePlacesModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->VirtualKFilePlacesModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KFilePlacesModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesModel_EndRemoveColumns(KFilePlacesModel* self) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->VirtualKFilePlacesModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KFilePlacesModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFilePlacesModel_BeginMoveColumns(KFilePlacesModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        return vkfileplacesmodel->VirtualKFilePlacesModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KFilePlacesModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesModel_EndMoveColumns(KFilePlacesModel* self) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->VirtualKFilePlacesModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KFilePlacesModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesModel_BeginResetModel(KFilePlacesModel* self) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->VirtualKFilePlacesModel::beginResetModel();
    } else
        qFatal("Error: Protected method KFilePlacesModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesModel_EndResetModel(KFilePlacesModel* self) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->VirtualKFilePlacesModel::endResetModel();
    } else
        qFatal("Error: Protected method KFilePlacesModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesModel_ChangePersistentIndex(KFilePlacesModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
        vkfileplacesmodel->VirtualKFilePlacesModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KFilePlacesModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlacesModel_ChangePersistentIndexList(KFilePlacesModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vkfileplacesmodel = dynamic_cast<VirtualKFilePlacesModel*>(self)) {
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
        vkfileplacesmodel->VirtualKFilePlacesModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KFilePlacesModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KFilePlacesModel_PersistentIndexList(const KFilePlacesModel* self) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self))) {
        QList<QModelIndex> _ret = vkfileplacesmodel->VirtualKFilePlacesModel::persistentIndexList();
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
        qFatal("Error: Protected method KFilePlacesModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KFilePlacesModel_Sender(const KFilePlacesModel* self) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self))) {
        return vkfileplacesmodel->VirtualKFilePlacesModel::sender();
    } else
        qFatal("Error: Protected method KFilePlacesModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFilePlacesModel_SenderSignalIndex(const KFilePlacesModel* self) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self))) {
        return vkfileplacesmodel->VirtualKFilePlacesModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFilePlacesModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFilePlacesModel_Receivers(const KFilePlacesModel* self, const char* signal) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self))) {
        return vkfileplacesmodel->VirtualKFilePlacesModel::receivers(signal);
    } else
        qFatal("Error: Protected method KFilePlacesModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFilePlacesModel_IsSignalConnected(const KFilePlacesModel* self, const QMetaMethod* signal) {
    if (auto* vkfileplacesmodel = const_cast<VirtualKFilePlacesModel*>(dynamic_cast<const VirtualKFilePlacesModel*>(self))) {
        return vkfileplacesmodel->VirtualKFilePlacesModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFilePlacesModel::isSignalConnected called without a directly constructed type");
}

void KFilePlacesModel_Delete(KFilePlacesModel* self) {
    delete self;
}
