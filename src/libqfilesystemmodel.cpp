#include <QAbstractFileIconProvider>
#include <QAbstractItemModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QDateTime>
#include <QDir>
#include <QEvent>
#include <QFileInfo>
#include <QFileSystemModel>
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
#include <QTimeZone>
#include <QTimerEvent>
#include <QVariant>
#include <qfilesystemmodel.h>
#include "libqfilesystemmodel.h"
#include "libqfilesystemmodel.hxx"

QFileSystemModel* QFileSystemModel_new() {
    return new VirtualQFileSystemModel();
}

QFileSystemModel* QFileSystemModel_new2(QObject* parent) {
    return new VirtualQFileSystemModel(parent);
}

QMetaObject* QFileSystemModel_MetaObject(const QFileSystemModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFileSystemModel_Metacast(QFileSystemModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFileSystemModel_Metacall(QFileSystemModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QFileSystemModel_Tr(const char* s) {
    auto _ret = QFileSystemModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFileSystemModel_RootPathChanged(QFileSystemModel* self, const libqt_string newPath) {
    QString newPath_QString = QString::fromUtf8(newPath.data, newPath.len);
    self->rootPathChanged(newPath_QString);
}

void QFileSystemModel_Connect_RootPathChanged(QFileSystemModel* self, intptr_t slot) {
    void (*slotFunc)(QFileSystemModel*, const char*) = reinterpret_cast<void (*)(QFileSystemModel*, const char*)>(slot);
    QFileSystemModel::connect(self,
                              static_cast<void (QFileSystemModel::*)(const QString&)>(&QFileSystemModel::rootPathChanged),
                              [self, slotFunc](const QString& newPath) {
                                  const auto newPath_ret = newPath;
                                  // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                  QByteArray newPath_b = newPath_ret.toUtf8();
                                  auto newPath_str_len = newPath_b.length();
                                  const char* newPath_str = static_cast<const char*>(malloc(newPath_str_len + 1));
                                  memcpy((void*)newPath_str, newPath_b.data(), newPath_str_len);
                                  ((char*)newPath_str)[newPath_str_len] = '\0';
                                  const char* sigval1 = newPath_str;
                                  slotFunc(self, sigval1);
                                  libqt_free(newPath_str);
                              });
}

void QFileSystemModel_FileRenamed(QFileSystemModel* self, const libqt_string path, const libqt_string oldName, const libqt_string newName) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    self->fileRenamed(path_QString, oldName_QString, newName_QString);
}

void QFileSystemModel_Connect_FileRenamed(QFileSystemModel* self, intptr_t slot) {
    void (*slotFunc)(QFileSystemModel*, const char*, const char*, const char*) = reinterpret_cast<void (*)(QFileSystemModel*, const char*, const char*, const char*)>(slot);
    QFileSystemModel::connect(self,
                              static_cast<void (QFileSystemModel::*)(const QString&, const QString&, const QString&)>(&QFileSystemModel::fileRenamed),
                              [self, slotFunc](const QString& path, const QString& oldName, const QString& newName) {
                                  const auto path_ret = path;
                                  // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                  QByteArray path_b = path_ret.toUtf8();
                                  auto path_str_len = path_b.length();
                                  const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
                                  memcpy((void*)path_str, path_b.data(), path_str_len);
                                  ((char*)path_str)[path_str_len] = '\0';
                                  const char* sigval1 = path_str;
                                  const auto oldName_ret = oldName;
                                  // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                  QByteArray oldName_b = oldName_ret.toUtf8();
                                  auto oldName_str_len = oldName_b.length();
                                  const char* oldName_str = static_cast<const char*>(malloc(oldName_str_len + 1));
                                  memcpy((void*)oldName_str, oldName_b.data(), oldName_str_len);
                                  ((char*)oldName_str)[oldName_str_len] = '\0';
                                  const char* sigval2 = oldName_str;
                                  const auto newName_ret = newName;
                                  // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                  QByteArray newName_b = newName_ret.toUtf8();
                                  auto newName_str_len = newName_b.length();
                                  const char* newName_str = static_cast<const char*>(malloc(newName_str_len + 1));
                                  memcpy((void*)newName_str, newName_b.data(), newName_str_len);
                                  ((char*)newName_str)[newName_str_len] = '\0';
                                  const char* sigval3 = newName_str;
                                  slotFunc(self, sigval1, sigval2, sigval3);
                                  libqt_free(path_str);
                                  libqt_free(oldName_str);
                                  libqt_free(newName_str);
                              });
}

void QFileSystemModel_DirectoryLoaded(QFileSystemModel* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->directoryLoaded(path_QString);
}

void QFileSystemModel_Connect_DirectoryLoaded(QFileSystemModel* self, intptr_t slot) {
    void (*slotFunc)(QFileSystemModel*, const char*) = reinterpret_cast<void (*)(QFileSystemModel*, const char*)>(slot);
    QFileSystemModel::connect(self,
                              static_cast<void (QFileSystemModel::*)(const QString&)>(&QFileSystemModel::directoryLoaded),
                              [self, slotFunc](const QString& path) {
                                  const auto path_ret = path;
                                  // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                  QByteArray path_b = path_ret.toUtf8();
                                  auto path_str_len = path_b.length();
                                  const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
                                  memcpy((void*)path_str, path_b.data(), path_str_len);
                                  ((char*)path_str)[path_str_len] = '\0';
                                  const char* sigval1 = path_str;
                                  slotFunc(self, sigval1);
                                  libqt_free(path_str);
                              });
}

QModelIndex* QFileSystemModel_Index(const QFileSystemModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QFileSystemModel_Index2(const QFileSystemModel* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new QModelIndex(self->index(path_QString));
}

QModelIndex* QFileSystemModel_Parent(const QFileSystemModel* self, const QModelIndex* child) {
    return new QModelIndex(self->parent(*child));
}

QModelIndex* QFileSystemModel_Sibling(const QFileSystemModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QFileSystemModel_HasChildren(const QFileSystemModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

bool QFileSystemModel_CanFetchMore(const QFileSystemModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

void QFileSystemModel_FetchMore(QFileSystemModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

int QFileSystemModel_RowCount(const QFileSystemModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

int QFileSystemModel_ColumnCount(const QFileSystemModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

QVariant* QFileSystemModel_MyComputer(const QFileSystemModel* self) {
    return new QVariant(self->myComputer());
}

QVariant* QFileSystemModel_Data(const QFileSystemModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QFileSystemModel_SetData(QFileSystemModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QFileSystemModel_HeaderData(const QFileSystemModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

int QFileSystemModel_Flags(const QFileSystemModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

void QFileSystemModel_Sort(QFileSystemModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

libqt_list /* of libqt_string */ QFileSystemModel_MimeTypes(const QFileSystemModel* self) {
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

QMimeData* QFileSystemModel_MimeData(const QFileSystemModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

bool QFileSystemModel_DropMimeData(QFileSystemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QFileSystemModel_SupportedDropActions(const QFileSystemModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

libqt_map /* of int to libqt_string */ QFileSystemModel_RoleNames(const QFileSystemModel* self) {
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

QModelIndex* QFileSystemModel_SetRootPath(QFileSystemModel* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new QModelIndex(self->setRootPath(path_QString));
}

libqt_string QFileSystemModel_RootPath(const QFileSystemModel* self) {
    auto _ret = self->rootPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDir* QFileSystemModel_RootDirectory(const QFileSystemModel* self) {
    return new QDir(self->rootDirectory());
}

void QFileSystemModel_SetIconProvider(QFileSystemModel* self, QAbstractFileIconProvider* provider) {
    self->setIconProvider(provider);
}

QAbstractFileIconProvider* QFileSystemModel_IconProvider(const QFileSystemModel* self) {
    return self->iconProvider();
}

void QFileSystemModel_SetFilter(QFileSystemModel* self, int filters) {
    self->setFilter(static_cast<QDir::Filters>(filters));
}

int QFileSystemModel_Filter(const QFileSystemModel* self) {
    return static_cast<int>(self->filter());
}

void QFileSystemModel_SetResolveSymlinks(QFileSystemModel* self, bool enable) {
    self->setResolveSymlinks(enable);
}

bool QFileSystemModel_ResolveSymlinks(const QFileSystemModel* self) {
    return self->resolveSymlinks();
}

void QFileSystemModel_SetReadOnly(QFileSystemModel* self, bool enable) {
    self->setReadOnly(enable);
}

bool QFileSystemModel_IsReadOnly(const QFileSystemModel* self) {
    return self->isReadOnly();
}

void QFileSystemModel_SetNameFilterDisables(QFileSystemModel* self, bool enable) {
    self->setNameFilterDisables(enable);
}

bool QFileSystemModel_NameFilterDisables(const QFileSystemModel* self) {
    return self->nameFilterDisables();
}

void QFileSystemModel_SetNameFilters(QFileSystemModel* self, const libqt_list /* of libqt_string */ filters) {
    QList<QString> filters_QList;
    filters_QList.reserve(filters.len);
    libqt_string* filters_arr = static_cast<libqt_string*>(filters.data);
    for (size_t i = 0; i < filters.len; ++i) {
        QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
        filters_QList.push_back(filters_arr_i_QString);
    }
    self->setNameFilters(filters_QList);
}

libqt_list /* of libqt_string */ QFileSystemModel_NameFilters(const QFileSystemModel* self) {
    QList<QString> _ret = self->nameFilters();
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

void QFileSystemModel_SetOption(QFileSystemModel* self, int option) {
    self->setOption(static_cast<QFileSystemModel::Option>(option));
}

bool QFileSystemModel_TestOption(const QFileSystemModel* self, int option) {
    return self->testOption(static_cast<QFileSystemModel::Option>(option));
}

void QFileSystemModel_SetOptions(QFileSystemModel* self, int options) {
    self->setOptions(static_cast<QFileSystemModel::Options>(options));
}

int QFileSystemModel_Options(const QFileSystemModel* self) {
    return static_cast<int>(self->options());
}

libqt_string QFileSystemModel_FilePath(const QFileSystemModel* self, const QModelIndex* index) {
    auto _ret = self->filePath(*index);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QFileSystemModel_IsDir(const QFileSystemModel* self, const QModelIndex* index) {
    return self->isDir(*index);
}

long long QFileSystemModel_Size(const QFileSystemModel* self, const QModelIndex* index) {
    return static_cast<long long>(self->size(*index));
}

libqt_string QFileSystemModel_Type(const QFileSystemModel* self, const QModelIndex* index) {
    auto _ret = self->type(*index);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDateTime* QFileSystemModel_LastModified(const QFileSystemModel* self, const QModelIndex* index) {
    return new QDateTime(self->lastModified(*index));
}

QDateTime* QFileSystemModel_LastModified2(const QFileSystemModel* self, const QModelIndex* index, const QTimeZone* tz) {
    return new QDateTime(self->lastModified(*index, *tz));
}

QModelIndex* QFileSystemModel_Mkdir(QFileSystemModel* self, const QModelIndex* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QModelIndex(self->mkdir(*parent, name_QString));
}

bool QFileSystemModel_Rmdir(QFileSystemModel* self, const QModelIndex* index) {
    return self->rmdir(*index);
}

libqt_string QFileSystemModel_FileName(const QFileSystemModel* self, const QModelIndex* index) {
    auto _ret = self->fileName(*index);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QIcon* QFileSystemModel_FileIcon(const QFileSystemModel* self, const QModelIndex* index) {
    return new QIcon(self->fileIcon(*index));
}

int QFileSystemModel_Permissions(const QFileSystemModel* self, const QModelIndex* index) {
    return static_cast<int>(self->permissions(*index));
}

QFileInfo* QFileSystemModel_FileInfo(const QFileSystemModel* self, const QModelIndex* index) {
    return new QFileInfo(self->fileInfo(*index));
}

bool QFileSystemModel_Remove(QFileSystemModel* self, const QModelIndex* index) {
    return self->remove(*index);
}

void QFileSystemModel_TimerEvent(QFileSystemModel* self, QTimerEvent* event) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel) {
        vqfilesystemmodel->timerEvent(event);
    }
}

bool QFileSystemModel_Event(QFileSystemModel* self, QEvent* event) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel) {
        return vqfilesystemmodel->event(event);
    }
    qFatal("Error: Protected method QFileSystemModel::event called without a directly constructed type");
}

libqt_string QFileSystemModel_Tr2(const char* s, const char* c) {
    auto _ret = QFileSystemModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileSystemModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QFileSystemModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QModelIndex* QFileSystemModel_Index22(const QFileSystemModel* self, const libqt_string path, int column) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new QModelIndex(self->index(path_QString, static_cast<int>(column)));
}

QVariant* QFileSystemModel_MyComputer1(const QFileSystemModel* self, int role) {
    return new QVariant(self->myComputer(static_cast<int>(role)));
}

void QFileSystemModel_SetOption2(QFileSystemModel* self, int option, bool on) {
    self->setOption(static_cast<QFileSystemModel::Option>(option), on);
}

// Base class handler implementation
QMetaObject* QFileSystemModel_SuperMetaObject(const QFileSystemModel* self) {
    return (QMetaObject*)self->QFileSystemModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnMetaObject(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_metaobject_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QFileSystemModel_SuperMetacast(QFileSystemModel* self, const char* param1) {
    return self->QFileSystemModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnMetacast(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_metacast_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QFileSystemModel_SuperMetacall(QFileSystemModel* self, int param1, int param2, void** param3) {
    return self->QFileSystemModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnMetacall(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_metacall_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Metacall_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QFileSystemModel_SuperIndex(const QFileSystemModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->QFileSystemModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnIndex(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_index_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Index_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QFileSystemModel_SuperParent(const QFileSystemModel* self, const QModelIndex* child) {
    return new QModelIndex(self->QFileSystemModel::parent(*child));
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnParent(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_parent_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Parent_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QFileSystemModel_SuperSibling(const QFileSystemModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->QFileSystemModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSibling(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_sibling_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Sibling_Callback>(slot);
}

// Base class handler implementation
bool QFileSystemModel_SuperHasChildren(const QFileSystemModel* self, const QModelIndex* parent) {
    return self->QFileSystemModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnHasChildren(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_haschildren_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_HasChildren_Callback>(slot);
}

// Base class handler implementation
bool QFileSystemModel_SuperCanFetchMore(const QFileSystemModel* self, const QModelIndex* parent) {
    return self->QFileSystemModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnCanFetchMore(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_canfetchmore_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_CanFetchMore_Callback>(slot);
}

// Base class handler implementation
void QFileSystemModel_SuperFetchMore(QFileSystemModel* self, const QModelIndex* parent) {
    self->QFileSystemModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnFetchMore(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_fetchmore_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_FetchMore_Callback>(slot);
}

// Base class handler implementation
int QFileSystemModel_SuperRowCount(const QFileSystemModel* self, const QModelIndex* parent) {
    return self->QFileSystemModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnRowCount(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_rowcount_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_RowCount_Callback>(slot);
}

// Base class handler implementation
int QFileSystemModel_SuperColumnCount(const QFileSystemModel* self, const QModelIndex* parent) {
    return self->QFileSystemModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnColumnCount(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_columncount_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
QVariant* QFileSystemModel_SuperData(const QFileSystemModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->QFileSystemModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnData(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_data_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Data_Callback>(slot);
}

// Base class handler implementation
bool QFileSystemModel_SuperSetData(QFileSystemModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->QFileSystemModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSetData(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_setdata_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_SetData_Callback>(slot);
}

// Base class handler implementation
QVariant* QFileSystemModel_SuperHeaderData(const QFileSystemModel* self, int section, int orientation, int role) {
    return new QVariant(self->QFileSystemModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnHeaderData(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_headerdata_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_HeaderData_Callback>(slot);
}

// Base class handler implementation
int QFileSystemModel_SuperFlags(const QFileSystemModel* self, const QModelIndex* index) {
    return static_cast<int>(self->QFileSystemModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnFlags(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_flags_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Flags_Callback>(slot);
}

// Base class handler implementation
void QFileSystemModel_SuperSort(QFileSystemModel* self, int column, int order) {
    self->QFileSystemModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSort(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_sort_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Sort_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QFileSystemModel_SuperMimeTypes(const QFileSystemModel* self) {
    QList<QString> _ret = self->QFileSystemModel::mimeTypes();
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
void QFileSystemModel_OnMimeTypes(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_mimetypes_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_MimeTypes_Callback>(slot);
}

// Base class handler implementation
QMimeData* QFileSystemModel_SuperMimeData(const QFileSystemModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->QFileSystemModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnMimeData(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_mimedata_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_MimeData_Callback>(slot);
}

// Base class handler implementation
bool QFileSystemModel_SuperDropMimeData(QFileSystemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QFileSystemModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnDropMimeData(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_dropmimedata_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_DropMimeData_Callback>(slot);
}

// Base class handler implementation
int QFileSystemModel_SuperSupportedDropActions(const QFileSystemModel* self) {
    return static_cast<int>(self->QFileSystemModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSupportedDropActions(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_supporteddropactions_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_SupportedDropActions_Callback>(slot);
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QFileSystemModel_SuperRoleNames(const QFileSystemModel* self) {
    QHash<int, QByteArray> _ret = self->QFileSystemModel::roleNames();
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
void QFileSystemModel_OnRoleNames(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_rolenames_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_RoleNames_Callback>(slot);
}

// Base class handler implementation
void QFileSystemModel_SuperTimerEvent(QFileSystemModel* self, QTimerEvent* event) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->QFileSystemModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileSystemModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnTimerEvent(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_timerevent_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_TimerEvent_Callback>(slot);
}

// Base class handler implementation
bool QFileSystemModel_SuperEvent(QFileSystemModel* self, QEvent* event) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        return vqfilesystemmodel->QFileSystemModel::event(event);
    } else
        qFatal("Error: Protected virtual method QFileSystemModel::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnEvent(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_event_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool QFileSystemModel_SetHeaderData(QFileSystemModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool QFileSystemModel_SuperSetHeaderData(QFileSystemModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->QFileSystemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSetHeaderData(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_setheaderdata_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QFileSystemModel_ItemData(const QFileSystemModel* self, const QModelIndex* index) {
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
libqt_map /* of int to QVariant* */ QFileSystemModel_SuperItemData(const QFileSystemModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->QFileSystemModel::itemData(*index);
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
void QFileSystemModel_OnItemData(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_itemdata_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool QFileSystemModel_SetItemData(QFileSystemModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool QFileSystemModel_SuperSetItemData(QFileSystemModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->QFileSystemModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSetItemData(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_setitemdata_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool QFileSystemModel_ClearItemData(QFileSystemModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool QFileSystemModel_SuperClearItemData(QFileSystemModel* self, const QModelIndex* index) {
    return self->QFileSystemModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnClearItemData(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_clearitemdata_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
bool QFileSystemModel_CanDropMimeData(const QFileSystemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool QFileSystemModel_SuperCanDropMimeData(const QFileSystemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->QFileSystemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnCanDropMimeData(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_candropmimedata_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
int QFileSystemModel_SupportedDragActions(const QFileSystemModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int QFileSystemModel_SuperSupportedDragActions(const QFileSystemModel* self) {
    return static_cast<int>(self->QFileSystemModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSupportedDragActions(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_supporteddragactions_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool QFileSystemModel_InsertRows(QFileSystemModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QFileSystemModel_SuperInsertRows(QFileSystemModel* self, int row, int count, const QModelIndex* parent) {
    return self->QFileSystemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnInsertRows(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_insertrows_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool QFileSystemModel_InsertColumns(QFileSystemModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QFileSystemModel_SuperInsertColumns(QFileSystemModel* self, int column, int count, const QModelIndex* parent) {
    return self->QFileSystemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnInsertColumns(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_insertcolumns_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool QFileSystemModel_RemoveRows(QFileSystemModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QFileSystemModel_SuperRemoveRows(QFileSystemModel* self, int row, int count, const QModelIndex* parent) {
    return self->QFileSystemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnRemoveRows(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_removerows_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QFileSystemModel_RemoveColumns(QFileSystemModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool QFileSystemModel_SuperRemoveColumns(QFileSystemModel* self, int column, int count, const QModelIndex* parent) {
    return self->QFileSystemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnRemoveColumns(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_removecolumns_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool QFileSystemModel_MoveRows(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QFileSystemModel_SuperMoveRows(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QFileSystemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnMoveRows(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_moverows_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool QFileSystemModel_MoveColumns(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool QFileSystemModel_SuperMoveColumns(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->QFileSystemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnMoveColumns(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_movecolumns_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QFileSystemModel_Buddy(const QFileSystemModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* QFileSystemModel_SuperBuddy(const QFileSystemModel* self, const QModelIndex* index) {
    return new QModelIndex(self->QFileSystemModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnBuddy(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_buddy_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QFileSystemModel_Match(const QFileSystemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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
libqt_list /* of QModelIndex* */ QFileSystemModel_SuperMatch(const QFileSystemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->QFileSystemModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QFileSystemModel_OnMatch(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_match_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* QFileSystemModel_Span(const QFileSystemModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* QFileSystemModel_SuperSpan(const QFileSystemModel* self, const QModelIndex* index) {
    return new QSize(self->QFileSystemModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSpan(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_span_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Span_Callback>(slot);
}

// Derived class handler implementation
void QFileSystemModel_MultiData(const QFileSystemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void QFileSystemModel_SuperMultiData(const QFileSystemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->QFileSystemModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnMultiData(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        vqfilesystemmodel->qfilesystemmodel_multidata_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool QFileSystemModel_Submit(QFileSystemModel* self) {
    return self->submit();
}

// Base class handler implementation
bool QFileSystemModel_SuperSubmit(QFileSystemModel* self) {
    return self->QFileSystemModel::submit();
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSubmit(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_submit_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void QFileSystemModel_Revert(QFileSystemModel* self) {
    self->revert();
}

// Base class handler implementation
void QFileSystemModel_SuperRevert(QFileSystemModel* self) {
    self->QFileSystemModel::revert();
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnRevert(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_revert_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void QFileSystemModel_ResetInternalData(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel) {
        vqfilesystemmodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method QFileSystemModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileSystemModel_SuperResetInternalData(QFileSystemModel* self) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->QFileSystemModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method QFileSystemModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnResetInternalData(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_resetinternaldata_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool QFileSystemModel_EventFilter(QFileSystemModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QFileSystemModel_SuperEventFilter(QFileSystemModel* self, QObject* watched, QEvent* event) {
    return self->QFileSystemModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnEventFilter(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_eventfilter_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QFileSystemModel_ChildEvent(QFileSystemModel* self, QChildEvent* event) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel) {
        vqfilesystemmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileSystemModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileSystemModel_SuperChildEvent(QFileSystemModel* self, QChildEvent* event) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->QFileSystemModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileSystemModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnChildEvent(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_childevent_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileSystemModel_CustomEvent(QFileSystemModel* self, QEvent* event) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel) {
        vqfilesystemmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileSystemModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileSystemModel_SuperCustomEvent(QFileSystemModel* self, QEvent* event) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->QFileSystemModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileSystemModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnCustomEvent(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_customevent_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileSystemModel_ConnectNotify(QFileSystemModel* self, const QMetaMethod* signal) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel) {
        vqfilesystemmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFileSystemModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileSystemModel_SuperConnectNotify(QFileSystemModel* self, const QMetaMethod* signal) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->QFileSystemModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFileSystemModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnConnectNotify(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_connectnotify_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QFileSystemModel_DisconnectNotify(QFileSystemModel* self, const QMetaMethod* signal) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel) {
        vqfilesystemmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFileSystemModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileSystemModel_SuperDisconnectNotify(QFileSystemModel* self, const QMetaMethod* signal) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->QFileSystemModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFileSystemModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnDisconnectNotify(QFileSystemModel* self, intptr_t slot) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self))
        vqfilesystemmodel->qfilesystemmodel_disconnectnotify_callback = reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QFileSystemModel_CreateIndex(const QFileSystemModel* self, int row, int column) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self)))
        return new QModelIndex(vqfilesystemmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method QFileSystemModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileSystemModel_EncodeData(const QFileSystemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vqfilesystemmodel->VirtualQFileSystemModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method QFileSystemModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFileSystemModel_DecodeData(QFileSystemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        return vqfilesystemmodel->VirtualQFileSystemModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method QFileSystemModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileSystemModel_BeginInsertRows(QFileSystemModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->VirtualQFileSystemModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QFileSystemModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileSystemModel_EndInsertRows(QFileSystemModel* self) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->VirtualQFileSystemModel::endInsertRows();
    } else
        qFatal("Error: Protected method QFileSystemModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileSystemModel_BeginRemoveRows(QFileSystemModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->VirtualQFileSystemModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QFileSystemModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileSystemModel_EndRemoveRows(QFileSystemModel* self) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->VirtualQFileSystemModel::endRemoveRows();
    } else
        qFatal("Error: Protected method QFileSystemModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFileSystemModel_BeginMoveRows(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        return vqfilesystemmodel->VirtualQFileSystemModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method QFileSystemModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileSystemModel_EndMoveRows(QFileSystemModel* self) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->VirtualQFileSystemModel::endMoveRows();
    } else
        qFatal("Error: Protected method QFileSystemModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileSystemModel_BeginInsertColumns(QFileSystemModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->VirtualQFileSystemModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QFileSystemModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileSystemModel_EndInsertColumns(QFileSystemModel* self) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->VirtualQFileSystemModel::endInsertColumns();
    } else
        qFatal("Error: Protected method QFileSystemModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileSystemModel_BeginRemoveColumns(QFileSystemModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->VirtualQFileSystemModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QFileSystemModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileSystemModel_EndRemoveColumns(QFileSystemModel* self) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->VirtualQFileSystemModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method QFileSystemModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFileSystemModel_BeginMoveColumns(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        return vqfilesystemmodel->VirtualQFileSystemModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method QFileSystemModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileSystemModel_EndMoveColumns(QFileSystemModel* self) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->VirtualQFileSystemModel::endMoveColumns();
    } else
        qFatal("Error: Protected method QFileSystemModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileSystemModel_BeginResetModel(QFileSystemModel* self) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->VirtualQFileSystemModel::beginResetModel();
    } else
        qFatal("Error: Protected method QFileSystemModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileSystemModel_EndResetModel(QFileSystemModel* self) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->VirtualQFileSystemModel::endResetModel();
    } else
        qFatal("Error: Protected method QFileSystemModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileSystemModel_ChangePersistentIndex(QFileSystemModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
        vqfilesystemmodel->VirtualQFileSystemModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method QFileSystemModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileSystemModel_ChangePersistentIndexList(QFileSystemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self)) {
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
        vqfilesystemmodel->VirtualQFileSystemModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method QFileSystemModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ QFileSystemModel_PersistentIndexList(const QFileSystemModel* self) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self))) {
        QList<QModelIndex> _ret = vqfilesystemmodel->VirtualQFileSystemModel::persistentIndexList();
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
        qFatal("Error: Protected method QFileSystemModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QFileSystemModel_Sender(const QFileSystemModel* self) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self))) {
        return vqfilesystemmodel->VirtualQFileSystemModel::sender();
    } else
        qFatal("Error: Protected method QFileSystemModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QFileSystemModel_SenderSignalIndex(const QFileSystemModel* self) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self))) {
        return vqfilesystemmodel->VirtualQFileSystemModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QFileSystemModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QFileSystemModel_Receivers(const QFileSystemModel* self, const char* signal) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self))) {
        return vqfilesystemmodel->VirtualQFileSystemModel::receivers(signal);
    } else
        qFatal("Error: Protected method QFileSystemModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFileSystemModel_IsSignalConnected(const QFileSystemModel* self, const QMetaMethod* signal) {
    if (auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self))) {
        return vqfilesystemmodel->VirtualQFileSystemModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QFileSystemModel::isSignalConnected called without a directly constructed type");
}

void QFileSystemModel_Delete(QFileSystemModel* self) {
    delete self;
}
