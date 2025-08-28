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
#include <QByteArray>
#include <cstring>
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
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQFileSystemModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnMetacall(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Metacall_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFileSystemModel_QBaseMetacall(QFileSystemModel* self, int param1, int param2, void** param3) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Metacall_IsBase(true);
        return vqfilesystemmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQFileSystemModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QFileSystemModel_Tr(const char* s) {
    QString _ret = QFileSystemModel::tr(s);
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
    QFileSystemModel::connect(self, &QFileSystemModel::rootPathChanged, [self, slotFunc](const QString& newPath) {
        const QString newPath_ret = newPath;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray newPath_b = newPath_ret.toUtf8();
        const char* newPath_str = static_cast<const char*>(malloc(newPath_b.length() + 1));
        memcpy((void*)newPath_str, newPath_b.data(), newPath_b.length());
        ((char*)newPath_str)[newPath_b.length()] = '\0';
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
    QFileSystemModel::connect(self, &QFileSystemModel::fileRenamed, [self, slotFunc](const QString& path, const QString& oldName, const QString& newName) {
        const QString path_ret = path;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray path_b = path_ret.toUtf8();
        const char* path_str = static_cast<const char*>(malloc(path_b.length() + 1));
        memcpy((void*)path_str, path_b.data(), path_b.length());
        ((char*)path_str)[path_b.length()] = '\0';
        const char* sigval1 = path_str;
        const QString oldName_ret = oldName;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray oldName_b = oldName_ret.toUtf8();
        const char* oldName_str = static_cast<const char*>(malloc(oldName_b.length() + 1));
        memcpy((void*)oldName_str, oldName_b.data(), oldName_b.length());
        ((char*)oldName_str)[oldName_b.length()] = '\0';
        const char* sigval2 = oldName_str;
        const QString newName_ret = newName;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray newName_b = newName_ret.toUtf8();
        const char* newName_str = static_cast<const char*>(malloc(newName_b.length() + 1));
        memcpy((void*)newName_str, newName_b.data(), newName_b.length());
        ((char*)newName_str)[newName_b.length()] = '\0';
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
    QFileSystemModel::connect(self, &QFileSystemModel::directoryLoaded, [self, slotFunc](const QString& path) {
        const QString path_ret = path;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray path_b = path_ret.toUtf8();
        const char* path_str = static_cast<const char*>(malloc(path_b.length() + 1));
        memcpy((void*)path_str, path_b.data(), path_b.length());
        ((char*)path_str)[path_b.length()] = '\0';
        const char* sigval1 = path_str;
        slotFunc(self, sigval1);
        libqt_free(path_str);
    });
}

QModelIndex* QFileSystemModel_Index(const QFileSystemModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQFileSystemModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnIndex(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Index_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Index_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QFileSystemModel_QBaseIndex(const QFileSystemModel* self, int row, int column, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Index_IsBase(true);
        return new QModelIndex(vqfilesystemmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualQFileSystemModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

QModelIndex* QFileSystemModel_Index2(const QFileSystemModel* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new QModelIndex(self->index(path_QString));
}

QModelIndex* QFileSystemModel_Parent(const QFileSystemModel* self, const QModelIndex* child) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return new QModelIndex(self->parent(*child));
    } else {
        return new QModelIndex(((VirtualQFileSystemModel*)self)->parent(*child));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnParent(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Parent_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Parent_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QFileSystemModel_QBaseParent(const QFileSystemModel* self, const QModelIndex* child) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Parent_IsBase(true);
        return new QModelIndex(vqfilesystemmodel->parent(*child));
    } else {
        return new QModelIndex(((VirtualQFileSystemModel*)self)->parent(*child));
    }
}

QModelIndex* QFileSystemModel_Sibling(const QFileSystemModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQFileSystemModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnSibling(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Sibling_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Sibling_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QFileSystemModel_QBaseSibling(const QFileSystemModel* self, int row, int column, const QModelIndex* idx) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Sibling_IsBase(true);
        return new QModelIndex(vqfilesystemmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualQFileSystemModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

bool QFileSystemModel_HasChildren(const QFileSystemModel* self, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return self->hasChildren(*parent);
    } else {
        return ((VirtualQFileSystemModel*)self)->hasChildren(*parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnHasChildren(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_HasChildren_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_HasChildren_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QFileSystemModel_QBaseHasChildren(const QFileSystemModel* self, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_HasChildren_IsBase(true);
        return vqfilesystemmodel->hasChildren(*parent);
    } else {
        return ((VirtualQFileSystemModel*)self)->hasChildren(*parent);
    }
}

bool QFileSystemModel_CanFetchMore(const QFileSystemModel* self, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return self->canFetchMore(*parent);
    } else {
        return ((VirtualQFileSystemModel*)self)->canFetchMore(*parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnCanFetchMore(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_CanFetchMore_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_CanFetchMore_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QFileSystemModel_QBaseCanFetchMore(const QFileSystemModel* self, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_CanFetchMore_IsBase(true);
        return vqfilesystemmodel->canFetchMore(*parent);
    } else {
        return ((VirtualQFileSystemModel*)self)->canFetchMore(*parent);
    }
}

void QFileSystemModel_FetchMore(QFileSystemModel* self, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        self->fetchMore(*parent);
    } else {
        ((VirtualQFileSystemModel*)self)->fetchMore(*parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnFetchMore(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_FetchMore_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_FetchMore_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QFileSystemModel_QBaseFetchMore(QFileSystemModel* self, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_FetchMore_IsBase(true);
        vqfilesystemmodel->fetchMore(*parent);
    } else {
        ((VirtualQFileSystemModel*)self)->fetchMore(*parent);
    }
}

int QFileSystemModel_RowCount(const QFileSystemModel* self, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return self->rowCount(*parent);
    } else {
        return ((VirtualQFileSystemModel*)self)->rowCount(*parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnRowCount(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_RowCount_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_RowCount_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFileSystemModel_QBaseRowCount(const QFileSystemModel* self, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_RowCount_IsBase(true);
        return vqfilesystemmodel->rowCount(*parent);
    } else {
        return ((VirtualQFileSystemModel*)self)->rowCount(*parent);
    }
}

int QFileSystemModel_ColumnCount(const QFileSystemModel* self, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return self->columnCount(*parent);
    } else {
        return ((VirtualQFileSystemModel*)self)->columnCount(*parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnColumnCount(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ColumnCount_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_ColumnCount_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFileSystemModel_QBaseColumnCount(const QFileSystemModel* self, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ColumnCount_IsBase(true);
        return vqfilesystemmodel->columnCount(*parent);
    } else {
        return ((VirtualQFileSystemModel*)self)->columnCount(*parent);
    }
}

QVariant* QFileSystemModel_MyComputer(const QFileSystemModel* self) {
    return new QVariant(self->myComputer());
}

QVariant* QFileSystemModel_Data(const QFileSystemModel* self, const QModelIndex* index, int role) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQFileSystemModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnData(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Data_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Data_Callback>(slot));
    }
}

// Virtual base class handler implementation
QVariant* QFileSystemModel_QBaseData(const QFileSystemModel* self, const QModelIndex* index, int role) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Data_IsBase(true);
        return new QVariant(vqfilesystemmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQFileSystemModel*)self)->data(*index, static_cast<int>(role)));
    }
}

bool QFileSystemModel_SetData(QFileSystemModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return self->setData(*index, *value, static_cast<int>(role));
    } else {
        return ((VirtualQFileSystemModel*)self)->setData(*index, *value, static_cast<int>(role));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnSetData(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_SetData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_SetData_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QFileSystemModel_QBaseSetData(QFileSystemModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_SetData_IsBase(true);
        return vqfilesystemmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return ((VirtualQFileSystemModel*)self)->setData(*index, *value, static_cast<int>(role));
    }
}

QVariant* QFileSystemModel_HeaderData(const QFileSystemModel* self, int section, int orientation, int role) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQFileSystemModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnHeaderData(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_HeaderData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_HeaderData_Callback>(slot));
    }
}

// Virtual base class handler implementation
QVariant* QFileSystemModel_QBaseHeaderData(const QFileSystemModel* self, int section, int orientation, int role) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_HeaderData_IsBase(true);
        return new QVariant(vqfilesystemmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQFileSystemModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

int QFileSystemModel_Flags(const QFileSystemModel* self, const QModelIndex* index) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return static_cast<int>(self->flags(*index));
    } else {
        return static_cast<int>(((VirtualQFileSystemModel*)self)->flags(*index));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnFlags(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Flags_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Flags_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFileSystemModel_QBaseFlags(const QFileSystemModel* self, const QModelIndex* index) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Flags_IsBase(true);
        return static_cast<int>(vqfilesystemmodel->flags(*index));
    } else {
        return static_cast<int>(((VirtualQFileSystemModel*)self)->flags(*index));
    }
}

void QFileSystemModel_Sort(QFileSystemModel* self, int column, int order) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        ((VirtualQFileSystemModel*)self)->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnSort(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Sort_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Sort_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QFileSystemModel_QBaseSort(QFileSystemModel* self, int column, int order) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Sort_IsBase(true);
        vqfilesystemmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        ((VirtualQFileSystemModel*)self)->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

libqt_list /* of libqt_string */ QFileSystemModel_MimeTypes(const QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
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
        QList<QString> _ret = ((VirtualQFileSystemModel*)self)->mimeTypes();
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

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnMimeTypes(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_MimeTypes_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_MimeTypes_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_list /* of libqt_string */ QFileSystemModel_QBaseMimeTypes(const QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vqfilesystemmodel->mimeTypes();
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
        QList<QString> _ret = ((VirtualQFileSystemModel*)self)->mimeTypes();
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

QMimeData* QFileSystemModel_MimeData(const QFileSystemModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return self->mimeData(indexes_QList);
    } else {
        return ((VirtualQFileSystemModel*)self)->mimeData(indexes_QList);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnMimeData(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_MimeData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_MimeData_Callback>(slot));
    }
}

// Virtual base class handler implementation
QMimeData* QFileSystemModel_QBaseMimeData(const QFileSystemModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_MimeData_IsBase(true);
        return vqfilesystemmodel->mimeData(indexes_QList);
    } else {
        return ((VirtualQFileSystemModel*)self)->mimeData(indexes_QList);
    }
}

bool QFileSystemModel_DropMimeData(QFileSystemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return ((VirtualQFileSystemModel*)self)->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnDropMimeData(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_DropMimeData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_DropMimeData_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QFileSystemModel_QBaseDropMimeData(QFileSystemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_DropMimeData_IsBase(true);
        return vqfilesystemmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return ((VirtualQFileSystemModel*)self)->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

int QFileSystemModel_SupportedDropActions(const QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return static_cast<int>(self->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualQFileSystemModel*)self)->supportedDropActions());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnSupportedDropActions(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_SupportedDropActions_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFileSystemModel_QBaseSupportedDropActions(const QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqfilesystemmodel->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualQFileSystemModel*)self)->supportedDropActions());
    }
}

libqt_map /* of int to libqt_string */ QFileSystemModel_RoleNames(const QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
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
        QHash<int, QByteArray> _ret = ((VirtualQFileSystemModel*)self)->roleNames();
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

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnRoleNames(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_RoleNames_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_RoleNames_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_map /* of int to libqt_string */ QFileSystemModel_QBaseRoleNames(const QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqfilesystemmodel->roleNames();
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
        QHash<int, QByteArray> _ret = ((VirtualQFileSystemModel*)self)->roleNames();
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

QModelIndex* QFileSystemModel_SetRootPath(QFileSystemModel* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new QModelIndex(self->setRootPath(path_QString));
}

libqt_string QFileSystemModel_RootPath(const QFileSystemModel* self) {
    QString _ret = self->rootPath();
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
    QString _ret = self->filePath(*index);
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
    QString _ret = self->type(*index);
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
    QString _ret = self->fileName(*index);
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
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->timerEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnTimerEvent(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_TimerEvent_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_TimerEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QFileSystemModel_QBaseTimerEvent(QFileSystemModel* self, QTimerEvent* event) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_TimerEvent_IsBase(true);
        vqfilesystemmodel->timerEvent(event);
    }
}

bool QFileSystemModel_Event(QFileSystemModel* self, QEvent* event) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->event(event);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSystemModel_OnEvent(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Event_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QFileSystemModel_QBaseEvent(QFileSystemModel* self, QEvent* event) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Event_IsBase(true);
        return vqfilesystemmodel->event(event);
    }
    return {};
}

libqt_string QFileSystemModel_Tr2(const char* s, const char* c) {
    QString _ret = QFileSystemModel::tr(s, c);
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
    QString _ret = QFileSystemModel::tr(s, c, static_cast<int>(n));
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

// Derived class handler implementation
bool QFileSystemModel_SetHeaderData(QFileSystemModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QFileSystemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseSetHeaderData(QFileSystemModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_SetHeaderData_IsBase(true);
        return vqfilesystemmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->QFileSystemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSetHeaderData(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_SetHeaderData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QFileSystemModel_ItemData(const QFileSystemModel* self, const QModelIndex* index) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        QMap<int, QVariant> _ret = vqfilesystemmodel->itemData(*index);
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
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ QFileSystemModel_QBaseItemData(const QFileSystemModel* self, const QModelIndex* index) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqfilesystemmodel->itemData(*index);
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
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnItemData(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ItemData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSystemModel_SetItemData(QFileSystemModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->setItemData(*index, roles_QMap);
    } else {
        return self->QFileSystemModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseSetItemData(QFileSystemModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_SetItemData_IsBase(true);
        return vqfilesystemmodel->setItemData(*index, roles_QMap);
    } else {
        return self->QFileSystemModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSetItemData(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_SetItemData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSystemModel_ClearItemData(QFileSystemModel* self, const QModelIndex* index) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->clearItemData(*index);
    } else {
        return self->QFileSystemModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseClearItemData(QFileSystemModel* self, const QModelIndex* index) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ClearItemData_IsBase(true);
        return vqfilesystemmodel->clearItemData(*index);
    } else {
        return self->QFileSystemModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnClearItemData(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ClearItemData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSystemModel_CanDropMimeData(const QFileSystemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QFileSystemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseCanDropMimeData(const QFileSystemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_CanDropMimeData_IsBase(true);
        return vqfilesystemmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->QFileSystemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnCanDropMimeData(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QFileSystemModel_SupportedDragActions(const QFileSystemModel* self) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return static_cast<int>(vqfilesystemmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QFileSystemModel::supportedDragActions());
    }
}

// Base class handler implementation
int QFileSystemModel_QBaseSupportedDragActions(const QFileSystemModel* self) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqfilesystemmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->QFileSystemModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSupportedDragActions(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSystemModel_InsertRows(QFileSystemModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QFileSystemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseInsertRows(QFileSystemModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_InsertRows_IsBase(true);
        return vqfilesystemmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QFileSystemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnInsertRows(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_InsertRows_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSystemModel_InsertColumns(QFileSystemModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QFileSystemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseInsertColumns(QFileSystemModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_InsertColumns_IsBase(true);
        return vqfilesystemmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QFileSystemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnInsertColumns(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_InsertColumns_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSystemModel_RemoveRows(QFileSystemModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QFileSystemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseRemoveRows(QFileSystemModel* self, int row, int count, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_RemoveRows_IsBase(true);
        return vqfilesystemmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->QFileSystemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnRemoveRows(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_RemoveRows_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSystemModel_RemoveColumns(QFileSystemModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QFileSystemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseRemoveColumns(QFileSystemModel* self, int column, int count, const QModelIndex* parent) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_RemoveColumns_IsBase(true);
        return vqfilesystemmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->QFileSystemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnRemoveColumns(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_RemoveColumns_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSystemModel_MoveRows(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QFileSystemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseMoveRows(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_MoveRows_IsBase(true);
        return vqfilesystemmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QFileSystemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnMoveRows(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_MoveRows_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSystemModel_MoveColumns(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QFileSystemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseMoveColumns(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_MoveColumns_IsBase(true);
        return vqfilesystemmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->QFileSystemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnMoveColumns(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_MoveColumns_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QFileSystemModel_Buddy(const QFileSystemModel* self, const QModelIndex* index) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return new QModelIndex(vqfilesystemmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQFileSystemModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QFileSystemModel_QBaseBuddy(const QFileSystemModel* self, const QModelIndex* index) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Buddy_IsBase(true);
        return new QModelIndex(vqfilesystemmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualQFileSystemModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnBuddy(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Buddy_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QFileSystemModel_Match(const QFileSystemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        QList<QModelIndex> _ret = vqfilesystemmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QFileSystemModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ QFileSystemModel_QBaseMatch(const QFileSystemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vqfilesystemmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QList<QModelIndex> _ret = self->QFileSystemModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QFileSystemModel_OnMatch(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Match_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFileSystemModel_Span(const QFileSystemModel* self, const QModelIndex* index) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return new QSize(vqfilesystemmodel->span(*index));
    } else {
        return new QSize(((VirtualQFileSystemModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* QFileSystemModel_QBaseSpan(const QFileSystemModel* self, const QModelIndex* index) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Span_IsBase(true);
        return new QSize(vqfilesystemmodel->span(*index));
    } else {
        return new QSize(((VirtualQFileSystemModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSpan(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Span_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_MultiData(const QFileSystemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QFileSystemModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseMultiData(const QFileSystemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_MultiData_IsBase(true);
        vqfilesystemmodel->multiData(*index, *roleDataSpan);
    } else {
        self->QFileSystemModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnMultiData(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_MultiData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSystemModel_Submit(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->submit();
    } else {
        return self->QFileSystemModel::submit();
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseSubmit(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Submit_IsBase(true);
        return vqfilesystemmodel->submit();
    } else {
        return self->QFileSystemModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSubmit(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Submit_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_Revert(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->revert();
    } else {
        self->QFileSystemModel::revert();
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseRevert(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Revert_IsBase(true);
        vqfilesystemmodel->revert();
    } else {
        self->QFileSystemModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnRevert(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Revert_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_ResetInternalData(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->resetInternalData();
    } else {
        ((VirtualQFileSystemModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseResetInternalData(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ResetInternalData_IsBase(true);
        vqfilesystemmodel->resetInternalData();
    } else {
        ((VirtualQFileSystemModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnResetInternalData(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ResetInternalData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSystemModel_EventFilter(QFileSystemModel* self, QObject* watched, QEvent* event) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->eventFilter(watched, event);
    } else {
        return self->QFileSystemModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseEventFilter(QFileSystemModel* self, QObject* watched, QEvent* event) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EventFilter_IsBase(true);
        return vqfilesystemmodel->eventFilter(watched, event);
    } else {
        return self->QFileSystemModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnEventFilter(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EventFilter_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_ChildEvent(QFileSystemModel* self, QChildEvent* event) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->childEvent(event);
    } else {
        ((VirtualQFileSystemModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseChildEvent(QFileSystemModel* self, QChildEvent* event) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ChildEvent_IsBase(true);
        vqfilesystemmodel->childEvent(event);
    } else {
        ((VirtualQFileSystemModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnChildEvent(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ChildEvent_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_CustomEvent(QFileSystemModel* self, QEvent* event) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->customEvent(event);
    } else {
        ((VirtualQFileSystemModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseCustomEvent(QFileSystemModel* self, QEvent* event) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_CustomEvent_IsBase(true);
        vqfilesystemmodel->customEvent(event);
    } else {
        ((VirtualQFileSystemModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnCustomEvent(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_CustomEvent_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_ConnectNotify(QFileSystemModel* self, const QMetaMethod* signal) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->connectNotify(*signal);
    } else {
        ((VirtualQFileSystemModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseConnectNotify(QFileSystemModel* self, const QMetaMethod* signal) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ConnectNotify_IsBase(true);
        vqfilesystemmodel->connectNotify(*signal);
    } else {
        ((VirtualQFileSystemModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnConnectNotify(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ConnectNotify_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_DisconnectNotify(QFileSystemModel* self, const QMetaMethod* signal) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQFileSystemModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseDisconnectNotify(QFileSystemModel* self, const QMetaMethod* signal) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_DisconnectNotify_IsBase(true);
        vqfilesystemmodel->disconnectNotify(*signal);
    } else {
        ((VirtualQFileSystemModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnDisconnectNotify(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QFileSystemModel_CreateIndex(const QFileSystemModel* self, int row, int column) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return new QModelIndex(vqfilesystemmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QFileSystemModel_QBaseCreateIndex(const QFileSystemModel* self, int row, int column) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqfilesystemmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnCreateIndex(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_CreateIndex_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_EncodeData(const QFileSystemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQFileSystemModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseEncodeData(const QFileSystemModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EncodeData_IsBase(true);
        vqfilesystemmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualQFileSystemModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnEncodeData(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EncodeData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSystemModel_DecodeData(QFileSystemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQFileSystemModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseDecodeData(QFileSystemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_DecodeData_IsBase(true);
        return vqfilesystemmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualQFileSystemModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnDecodeData(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_DecodeData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_BeginInsertRows(QFileSystemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQFileSystemModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseBeginInsertRows(QFileSystemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_BeginInsertRows_IsBase(true);
        vqfilesystemmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQFileSystemModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnBeginInsertRows(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_EndInsertRows(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->endInsertRows();
    } else {
        ((VirtualQFileSystemModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseEndInsertRows(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EndInsertRows_IsBase(true);
        vqfilesystemmodel->endInsertRows();
    } else {
        ((VirtualQFileSystemModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnEndInsertRows(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EndInsertRows_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_BeginRemoveRows(QFileSystemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQFileSystemModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseBeginRemoveRows(QFileSystemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_BeginRemoveRows_IsBase(true);
        vqfilesystemmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQFileSystemModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnBeginRemoveRows(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_EndRemoveRows(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->endRemoveRows();
    } else {
        ((VirtualQFileSystemModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseEndRemoveRows(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EndRemoveRows_IsBase(true);
        vqfilesystemmodel->endRemoveRows();
    } else {
        ((VirtualQFileSystemModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnEndRemoveRows(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSystemModel_BeginMoveRows(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQFileSystemModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseBeginMoveRows(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_BeginMoveRows_IsBase(true);
        return vqfilesystemmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualQFileSystemModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnBeginMoveRows(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_EndMoveRows(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->endMoveRows();
    } else {
        ((VirtualQFileSystemModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseEndMoveRows(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EndMoveRows_IsBase(true);
        vqfilesystemmodel->endMoveRows();
    } else {
        ((VirtualQFileSystemModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnEndMoveRows(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EndMoveRows_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_BeginInsertColumns(QFileSystemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQFileSystemModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseBeginInsertColumns(QFileSystemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_BeginInsertColumns_IsBase(true);
        vqfilesystemmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQFileSystemModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnBeginInsertColumns(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_EndInsertColumns(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->endInsertColumns();
    } else {
        ((VirtualQFileSystemModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseEndInsertColumns(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EndInsertColumns_IsBase(true);
        vqfilesystemmodel->endInsertColumns();
    } else {
        ((VirtualQFileSystemModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnEndInsertColumns(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_BeginRemoveColumns(QFileSystemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQFileSystemModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseBeginRemoveColumns(QFileSystemModel* self, const QModelIndex* parent, int first, int last) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_BeginRemoveColumns_IsBase(true);
        vqfilesystemmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQFileSystemModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnBeginRemoveColumns(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_EndRemoveColumns(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->endRemoveColumns();
    } else {
        ((VirtualQFileSystemModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseEndRemoveColumns(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EndRemoveColumns_IsBase(true);
        vqfilesystemmodel->endRemoveColumns();
    } else {
        ((VirtualQFileSystemModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnEndRemoveColumns(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSystemModel_BeginMoveColumns(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQFileSystemModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseBeginMoveColumns(QFileSystemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_BeginMoveColumns_IsBase(true);
        return vqfilesystemmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualQFileSystemModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnBeginMoveColumns(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_EndMoveColumns(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->endMoveColumns();
    } else {
        ((VirtualQFileSystemModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseEndMoveColumns(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EndMoveColumns_IsBase(true);
        vqfilesystemmodel->endMoveColumns();
    } else {
        ((VirtualQFileSystemModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnEndMoveColumns(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_BeginResetModel(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->beginResetModel();
    } else {
        ((VirtualQFileSystemModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseBeginResetModel(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_BeginResetModel_IsBase(true);
        vqfilesystemmodel->beginResetModel();
    } else {
        ((VirtualQFileSystemModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnBeginResetModel(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_BeginResetModel_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_EndResetModel(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->endResetModel();
    } else {
        ((VirtualQFileSystemModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseEndResetModel(QFileSystemModel* self) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EndResetModel_IsBase(true);
        vqfilesystemmodel->endResetModel();
    } else {
        ((VirtualQFileSystemModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnEndResetModel(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_EndResetModel_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_ChangePersistentIndex(QFileSystemModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQFileSystemModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseChangePersistentIndex(QFileSystemModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ChangePersistentIndex_IsBase(true);
        vqfilesystemmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualQFileSystemModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnChangePersistentIndex(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSystemModel_ChangePersistentIndexList(QFileSystemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
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
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQFileSystemModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QFileSystemModel_QBaseChangePersistentIndexList(QFileSystemModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
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
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ChangePersistentIndexList_IsBase(true);
        vqfilesystemmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualQFileSystemModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnChangePersistentIndexList(QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QFileSystemModel_PersistentIndexList(const QFileSystemModel* self) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        QList<QModelIndex> _ret = vqfilesystemmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQFileSystemModel*)self)->persistentIndexList();
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
libqt_list /* of QModelIndex* */ QFileSystemModel_QBasePersistentIndexList(const QFileSystemModel* self) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vqfilesystemmodel->persistentIndexList();
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
        QList<QModelIndex> _ret = ((VirtualQFileSystemModel*)self)->persistentIndexList();
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
void QFileSystemModel_OnPersistentIndexList(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QFileSystemModel_Sender(const QFileSystemModel* self) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->sender();
    } else {
        return ((VirtualQFileSystemModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* QFileSystemModel_QBaseSender(const QFileSystemModel* self) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Sender_IsBase(true);
        return vqfilesystemmodel->sender();
    } else {
        return ((VirtualQFileSystemModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSender(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Sender_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QFileSystemModel_SenderSignalIndex(const QFileSystemModel* self) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->senderSignalIndex();
    } else {
        return ((VirtualQFileSystemModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QFileSystemModel_QBaseSenderSignalIndex(const QFileSystemModel* self) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_SenderSignalIndex_IsBase(true);
        return vqfilesystemmodel->senderSignalIndex();
    } else {
        return ((VirtualQFileSystemModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSenderSignalIndex(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QFileSystemModel_Receivers(const QFileSystemModel* self, const char* signal) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->receivers(signal);
    } else {
        return ((VirtualQFileSystemModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QFileSystemModel_QBaseReceivers(const QFileSystemModel* self, const char* signal) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Receivers_IsBase(true);
        return vqfilesystemmodel->receivers(signal);
    } else {
        return ((VirtualQFileSystemModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnReceivers(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_Receivers_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSystemModel_IsSignalConnected(const QFileSystemModel* self, const QMetaMethod* signal) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        return vqfilesystemmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQFileSystemModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QFileSystemModel_QBaseIsSignalConnected(const QFileSystemModel* self, const QMetaMethod* signal) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_IsSignalConnected_IsBase(true);
        return vqfilesystemmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualQFileSystemModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnIsSignalConnected(const QFileSystemModel* self, intptr_t slot) {
    auto* vqfilesystemmodel = const_cast<VirtualQFileSystemModel*>(dynamic_cast<const VirtualQFileSystemModel*>(self));
    if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
        vqfilesystemmodel->setQFileSystemModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_IsSignalConnected_Callback>(slot));
    }
}

void QFileSystemModel_Delete(QFileSystemModel* self) {
    delete self;
}
