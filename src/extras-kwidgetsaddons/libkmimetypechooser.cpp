#include <KMimeTypeChooser>
#include <KMimeTypeChooserDialog>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kmimetypechooser.h>
#include "libkmimetypechooser.h"
#include "libkmimetypechooser.hxx"

KMimeTypeChooser* KMimeTypeChooser_new() {
    return new VirtualKMimeTypeChooser();
}

KMimeTypeChooser* KMimeTypeChooser_new2(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKMimeTypeChooser(text_QString);
}

KMimeTypeChooser* KMimeTypeChooser_new3(const libqt_string text, const libqt_list /* of libqt_string */ selectedMimeTypes) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> selectedMimeTypes_QList;
    selectedMimeTypes_QList.reserve(selectedMimeTypes.len);
    libqt_string* selectedMimeTypes_arr = static_cast<libqt_string*>(selectedMimeTypes.data);
    for (size_t i = 0; i < selectedMimeTypes.len; ++i) {
        QString selectedMimeTypes_arr_i_QString = QString::fromUtf8(selectedMimeTypes_arr[i].data, selectedMimeTypes_arr[i].len);
        selectedMimeTypes_QList.push_back(selectedMimeTypes_arr_i_QString);
    }
    return new VirtualKMimeTypeChooser(text_QString, selectedMimeTypes_QList);
}

KMimeTypeChooser* KMimeTypeChooser_new4(const libqt_string text, const libqt_list /* of libqt_string */ selectedMimeTypes, const libqt_string defaultGroup) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> selectedMimeTypes_QList;
    selectedMimeTypes_QList.reserve(selectedMimeTypes.len);
    libqt_string* selectedMimeTypes_arr = static_cast<libqt_string*>(selectedMimeTypes.data);
    for (size_t i = 0; i < selectedMimeTypes.len; ++i) {
        QString selectedMimeTypes_arr_i_QString = QString::fromUtf8(selectedMimeTypes_arr[i].data, selectedMimeTypes_arr[i].len);
        selectedMimeTypes_QList.push_back(selectedMimeTypes_arr_i_QString);
    }
    QString defaultGroup_QString = QString::fromUtf8(defaultGroup.data, defaultGroup.len);
    return new VirtualKMimeTypeChooser(text_QString, selectedMimeTypes_QList, defaultGroup_QString);
}

KMimeTypeChooser* KMimeTypeChooser_new5(const libqt_string text, const libqt_list /* of libqt_string */ selectedMimeTypes, const libqt_string defaultGroup, const libqt_list /* of libqt_string */ groupsToShow) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> selectedMimeTypes_QList;
    selectedMimeTypes_QList.reserve(selectedMimeTypes.len);
    libqt_string* selectedMimeTypes_arr = static_cast<libqt_string*>(selectedMimeTypes.data);
    for (size_t i = 0; i < selectedMimeTypes.len; ++i) {
        QString selectedMimeTypes_arr_i_QString = QString::fromUtf8(selectedMimeTypes_arr[i].data, selectedMimeTypes_arr[i].len);
        selectedMimeTypes_QList.push_back(selectedMimeTypes_arr_i_QString);
    }
    QString defaultGroup_QString = QString::fromUtf8(defaultGroup.data, defaultGroup.len);
    QList<QString> groupsToShow_QList;
    groupsToShow_QList.reserve(groupsToShow.len);
    libqt_string* groupsToShow_arr = static_cast<libqt_string*>(groupsToShow.data);
    for (size_t i = 0; i < groupsToShow.len; ++i) {
        QString groupsToShow_arr_i_QString = QString::fromUtf8(groupsToShow_arr[i].data, groupsToShow_arr[i].len);
        groupsToShow_QList.push_back(groupsToShow_arr_i_QString);
    }
    return new VirtualKMimeTypeChooser(text_QString, selectedMimeTypes_QList, defaultGroup_QString, groupsToShow_QList);
}

KMimeTypeChooser* KMimeTypeChooser_new6(const libqt_string text, const libqt_list /* of libqt_string */ selectedMimeTypes, const libqt_string defaultGroup, const libqt_list /* of libqt_string */ groupsToShow, int visuals) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> selectedMimeTypes_QList;
    selectedMimeTypes_QList.reserve(selectedMimeTypes.len);
    libqt_string* selectedMimeTypes_arr = static_cast<libqt_string*>(selectedMimeTypes.data);
    for (size_t i = 0; i < selectedMimeTypes.len; ++i) {
        QString selectedMimeTypes_arr_i_QString = QString::fromUtf8(selectedMimeTypes_arr[i].data, selectedMimeTypes_arr[i].len);
        selectedMimeTypes_QList.push_back(selectedMimeTypes_arr_i_QString);
    }
    QString defaultGroup_QString = QString::fromUtf8(defaultGroup.data, defaultGroup.len);
    QList<QString> groupsToShow_QList;
    groupsToShow_QList.reserve(groupsToShow.len);
    libqt_string* groupsToShow_arr = static_cast<libqt_string*>(groupsToShow.data);
    for (size_t i = 0; i < groupsToShow.len; ++i) {
        QString groupsToShow_arr_i_QString = QString::fromUtf8(groupsToShow_arr[i].data, groupsToShow_arr[i].len);
        groupsToShow_QList.push_back(groupsToShow_arr_i_QString);
    }
    return new VirtualKMimeTypeChooser(text_QString, selectedMimeTypes_QList, defaultGroup_QString, groupsToShow_QList, static_cast<int>(visuals));
}

KMimeTypeChooser* KMimeTypeChooser_new7(const libqt_string text, const libqt_list /* of libqt_string */ selectedMimeTypes, const libqt_string defaultGroup, const libqt_list /* of libqt_string */ groupsToShow, int visuals, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> selectedMimeTypes_QList;
    selectedMimeTypes_QList.reserve(selectedMimeTypes.len);
    libqt_string* selectedMimeTypes_arr = static_cast<libqt_string*>(selectedMimeTypes.data);
    for (size_t i = 0; i < selectedMimeTypes.len; ++i) {
        QString selectedMimeTypes_arr_i_QString = QString::fromUtf8(selectedMimeTypes_arr[i].data, selectedMimeTypes_arr[i].len);
        selectedMimeTypes_QList.push_back(selectedMimeTypes_arr_i_QString);
    }
    QString defaultGroup_QString = QString::fromUtf8(defaultGroup.data, defaultGroup.len);
    QList<QString> groupsToShow_QList;
    groupsToShow_QList.reserve(groupsToShow.len);
    libqt_string* groupsToShow_arr = static_cast<libqt_string*>(groupsToShow.data);
    for (size_t i = 0; i < groupsToShow.len; ++i) {
        QString groupsToShow_arr_i_QString = QString::fromUtf8(groupsToShow_arr[i].data, groupsToShow_arr[i].len);
        groupsToShow_QList.push_back(groupsToShow_arr_i_QString);
    }
    return new VirtualKMimeTypeChooser(text_QString, selectedMimeTypes_QList, defaultGroup_QString, groupsToShow_QList, static_cast<int>(visuals), parent);
}

QMetaObject* KMimeTypeChooser_MetaObject(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = dynamic_cast<const VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualKMimeTypeChooser*)self)->metaObject();
    }
}

void* KMimeTypeChooser_Metacast(KMimeTypeChooser* self, const char* param1) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualKMimeTypeChooser*)self)->qt_metacast(param1);
    }
}

int KMimeTypeChooser_Metacall(KMimeTypeChooser* self, int param1, int param2, void** param3) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKMimeTypeChooser*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_list /* of libqt_string */ KMimeTypeChooser_MimeTypes(const KMimeTypeChooser* self) {
    QList<QString> _ret = self->mimeTypes();
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

libqt_list /* of libqt_string */ KMimeTypeChooser_Patterns(const KMimeTypeChooser* self) {
    QList<QString> _ret = self->patterns();
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

// Base class handler implementation
QMetaObject* KMimeTypeChooser_SuperMetaObject(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_MetaObject_IsBase(true);
        return (QMetaObject*)vkmimetypechooser->metaObject();
    } else {
        return (QMetaObject*)self->KMimeTypeChooser::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMetaObject(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_MetaObject_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* KMimeTypeChooser_SuperMetacast(KMimeTypeChooser* self, const char* param1) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Metacast_IsBase(true);
        return vkmimetypechooser->qt_metacast(param1);
    } else {
        return self->KMimeTypeChooser::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMetacast(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Metacast_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int KMimeTypeChooser_SuperMetacall(KMimeTypeChooser* self, int param1, int param2, void** param3) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Metacall_IsBase(true);
        return vkmimetypechooser->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KMimeTypeChooser::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMetacall(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Metacall_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int KMimeTypeChooser_DevType(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->devType();
    } else {
        return self->KMimeTypeChooser::devType();
    }
}

// Base class handler implementation
int KMimeTypeChooser_SuperDevType(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_DevType_IsBase(true);
        return vkmimetypechooser->devType();
    } else {
        return self->KMimeTypeChooser::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnDevType(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_DevType_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_SetVisible(KMimeTypeChooser* self, bool visible) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setVisible(visible);
    } else {
        self->KMimeTypeChooser::setVisible(visible);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperSetVisible(KMimeTypeChooser* self, bool visible) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_SetVisible_IsBase(true);
        vkmimetypechooser->setVisible(visible);
    } else {
        self->KMimeTypeChooser::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnSetVisible(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_SetVisible_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KMimeTypeChooser_SizeHint(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return new QSize(vkmimetypechooser->sizeHint());
    } else {
        return new QSize(((VirtualKMimeTypeChooser*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KMimeTypeChooser_SuperSizeHint(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_SizeHint_IsBase(true);
        return new QSize(vkmimetypechooser->sizeHint());
    } else {
        return new QSize(((VirtualKMimeTypeChooser*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnSizeHint(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_SizeHint_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KMimeTypeChooser_MinimumSizeHint(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return new QSize(vkmimetypechooser->minimumSizeHint());
    } else {
        return new QSize(((VirtualKMimeTypeChooser*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KMimeTypeChooser_SuperMinimumSizeHint(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_MinimumSizeHint_IsBase(true);
        return new QSize(vkmimetypechooser->minimumSizeHint());
    } else {
        return new QSize(((VirtualKMimeTypeChooser*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMinimumSizeHint(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_MinimumSizeHint_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KMimeTypeChooser_HeightForWidth(const KMimeTypeChooser* self, int param1) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KMimeTypeChooser::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KMimeTypeChooser_SuperHeightForWidth(const KMimeTypeChooser* self, int param1) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_HeightForWidth_IsBase(true);
        return vkmimetypechooser->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KMimeTypeChooser::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnHeightForWidth(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_HeightForWidth_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooser_HasHeightForWidth(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->hasHeightForWidth();
    } else {
        return self->KMimeTypeChooser::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KMimeTypeChooser_SuperHasHeightForWidth(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_HasHeightForWidth_IsBase(true);
        return vkmimetypechooser->hasHeightForWidth();
    } else {
        return self->KMimeTypeChooser::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnHasHeightForWidth(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_HasHeightForWidth_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KMimeTypeChooser_PaintEngine(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->paintEngine();
    } else {
        return self->KMimeTypeChooser::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KMimeTypeChooser_SuperPaintEngine(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_PaintEngine_IsBase(true);
        return vkmimetypechooser->paintEngine();
    } else {
        return self->KMimeTypeChooser::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnPaintEngine(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_PaintEngine_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooser_Event(KMimeTypeChooser* self, QEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->event(event);
    } else {
        return ((VirtualKMimeTypeChooser*)self)->event(event);
    }
}

// Base class handler implementation
bool KMimeTypeChooser_SuperEvent(KMimeTypeChooser* self, QEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Event_IsBase(true);
        return vkmimetypechooser->event(event);
    } else {
        return ((VirtualKMimeTypeChooser*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Event_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_MousePressEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->mousePressEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperMousePressEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_MousePressEvent_IsBase(true);
        vkmimetypechooser->mousePressEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMousePressEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_MousePressEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_MouseReleaseEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->mouseReleaseEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperMouseReleaseEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_MouseReleaseEvent_IsBase(true);
        vkmimetypechooser->mouseReleaseEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMouseReleaseEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_MouseDoubleClickEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperMouseDoubleClickEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_MouseDoubleClickEvent_IsBase(true);
        vkmimetypechooser->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMouseDoubleClickEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_MouseMoveEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->mouseMoveEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperMouseMoveEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_MouseMoveEvent_IsBase(true);
        vkmimetypechooser->mouseMoveEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMouseMoveEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_MouseMoveEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_WheelEvent(KMimeTypeChooser* self, QWheelEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->wheelEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperWheelEvent(KMimeTypeChooser* self, QWheelEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_WheelEvent_IsBase(true);
        vkmimetypechooser->wheelEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnWheelEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_WheelEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_KeyPressEvent(KMimeTypeChooser* self, QKeyEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->keyPressEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperKeyPressEvent(KMimeTypeChooser* self, QKeyEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_KeyPressEvent_IsBase(true);
        vkmimetypechooser->keyPressEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnKeyPressEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_KeyPressEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_KeyReleaseEvent(KMimeTypeChooser* self, QKeyEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->keyReleaseEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperKeyReleaseEvent(KMimeTypeChooser* self, QKeyEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_KeyReleaseEvent_IsBase(true);
        vkmimetypechooser->keyReleaseEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnKeyReleaseEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_FocusInEvent(KMimeTypeChooser* self, QFocusEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->focusInEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperFocusInEvent(KMimeTypeChooser* self, QFocusEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_FocusInEvent_IsBase(true);
        vkmimetypechooser->focusInEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnFocusInEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_FocusInEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_FocusOutEvent(KMimeTypeChooser* self, QFocusEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->focusOutEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperFocusOutEvent(KMimeTypeChooser* self, QFocusEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_FocusOutEvent_IsBase(true);
        vkmimetypechooser->focusOutEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnFocusOutEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_FocusOutEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_EnterEvent(KMimeTypeChooser* self, QEnterEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->enterEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperEnterEvent(KMimeTypeChooser* self, QEnterEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_EnterEvent_IsBase(true);
        vkmimetypechooser->enterEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnEnterEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_EnterEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_LeaveEvent(KMimeTypeChooser* self, QEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->leaveEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperLeaveEvent(KMimeTypeChooser* self, QEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_LeaveEvent_IsBase(true);
        vkmimetypechooser->leaveEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnLeaveEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_LeaveEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_PaintEvent(KMimeTypeChooser* self, QPaintEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->paintEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperPaintEvent(KMimeTypeChooser* self, QPaintEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_PaintEvent_IsBase(true);
        vkmimetypechooser->paintEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnPaintEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_PaintEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_MoveEvent(KMimeTypeChooser* self, QMoveEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->moveEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperMoveEvent(KMimeTypeChooser* self, QMoveEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_MoveEvent_IsBase(true);
        vkmimetypechooser->moveEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMoveEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_MoveEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_ResizeEvent(KMimeTypeChooser* self, QResizeEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->resizeEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperResizeEvent(KMimeTypeChooser* self, QResizeEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_ResizeEvent_IsBase(true);
        vkmimetypechooser->resizeEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnResizeEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_ResizeEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_CloseEvent(KMimeTypeChooser* self, QCloseEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->closeEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperCloseEvent(KMimeTypeChooser* self, QCloseEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_CloseEvent_IsBase(true);
        vkmimetypechooser->closeEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnCloseEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_CloseEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_ContextMenuEvent(KMimeTypeChooser* self, QContextMenuEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->contextMenuEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperContextMenuEvent(KMimeTypeChooser* self, QContextMenuEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_ContextMenuEvent_IsBase(true);
        vkmimetypechooser->contextMenuEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnContextMenuEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_ContextMenuEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_TabletEvent(KMimeTypeChooser* self, QTabletEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->tabletEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperTabletEvent(KMimeTypeChooser* self, QTabletEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_TabletEvent_IsBase(true);
        vkmimetypechooser->tabletEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnTabletEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_TabletEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_ActionEvent(KMimeTypeChooser* self, QActionEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->actionEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperActionEvent(KMimeTypeChooser* self, QActionEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_ActionEvent_IsBase(true);
        vkmimetypechooser->actionEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnActionEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_ActionEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_DragEnterEvent(KMimeTypeChooser* self, QDragEnterEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->dragEnterEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperDragEnterEvent(KMimeTypeChooser* self, QDragEnterEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_DragEnterEvent_IsBase(true);
        vkmimetypechooser->dragEnterEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnDragEnterEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_DragEnterEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_DragMoveEvent(KMimeTypeChooser* self, QDragMoveEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->dragMoveEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperDragMoveEvent(KMimeTypeChooser* self, QDragMoveEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_DragMoveEvent_IsBase(true);
        vkmimetypechooser->dragMoveEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnDragMoveEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_DragMoveEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_DragLeaveEvent(KMimeTypeChooser* self, QDragLeaveEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->dragLeaveEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperDragLeaveEvent(KMimeTypeChooser* self, QDragLeaveEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_DragLeaveEvent_IsBase(true);
        vkmimetypechooser->dragLeaveEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnDragLeaveEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_DragLeaveEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_DropEvent(KMimeTypeChooser* self, QDropEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->dropEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperDropEvent(KMimeTypeChooser* self, QDropEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_DropEvent_IsBase(true);
        vkmimetypechooser->dropEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnDropEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_DropEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_ShowEvent(KMimeTypeChooser* self, QShowEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->showEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperShowEvent(KMimeTypeChooser* self, QShowEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_ShowEvent_IsBase(true);
        vkmimetypechooser->showEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnShowEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_ShowEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_HideEvent(KMimeTypeChooser* self, QHideEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->hideEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperHideEvent(KMimeTypeChooser* self, QHideEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_HideEvent_IsBase(true);
        vkmimetypechooser->hideEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnHideEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_HideEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooser_NativeEvent(KMimeTypeChooser* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKMimeTypeChooser*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KMimeTypeChooser_SuperNativeEvent(KMimeTypeChooser* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_NativeEvent_IsBase(true);
        return vkmimetypechooser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKMimeTypeChooser*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnNativeEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_NativeEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_ChangeEvent(KMimeTypeChooser* self, QEvent* param1) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->changeEvent(param1);
    } else {
        ((VirtualKMimeTypeChooser*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperChangeEvent(KMimeTypeChooser* self, QEvent* param1) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_ChangeEvent_IsBase(true);
        vkmimetypechooser->changeEvent(param1);
    } else {
        ((VirtualKMimeTypeChooser*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnChangeEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_ChangeEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KMimeTypeChooser_Metric(const KMimeTypeChooser* self, int param1) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKMimeTypeChooser*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KMimeTypeChooser_SuperMetric(const KMimeTypeChooser* self, int param1) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Metric_IsBase(true);
        return vkmimetypechooser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKMimeTypeChooser*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMetric(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Metric_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_InitPainter(const KMimeTypeChooser* self, QPainter* painter) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->initPainter(painter);
    } else {
        ((VirtualKMimeTypeChooser*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperInitPainter(const KMimeTypeChooser* self, QPainter* painter) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_InitPainter_IsBase(true);
        vkmimetypechooser->initPainter(painter);
    } else {
        ((VirtualKMimeTypeChooser*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnInitPainter(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_InitPainter_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KMimeTypeChooser_Redirected(const KMimeTypeChooser* self, QPoint* offset) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->redirected(offset);
    } else {
        return ((VirtualKMimeTypeChooser*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KMimeTypeChooser_SuperRedirected(const KMimeTypeChooser* self, QPoint* offset) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Redirected_IsBase(true);
        return vkmimetypechooser->redirected(offset);
    } else {
        return ((VirtualKMimeTypeChooser*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnRedirected(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Redirected_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KMimeTypeChooser_SharedPainter(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->sharedPainter();
    } else {
        return ((VirtualKMimeTypeChooser*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KMimeTypeChooser_SuperSharedPainter(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_SharedPainter_IsBase(true);
        return vkmimetypechooser->sharedPainter();
    } else {
        return ((VirtualKMimeTypeChooser*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnSharedPainter(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_SharedPainter_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_InputMethodEvent(KMimeTypeChooser* self, QInputMethodEvent* param1) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->inputMethodEvent(param1);
    } else {
        ((VirtualKMimeTypeChooser*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperInputMethodEvent(KMimeTypeChooser* self, QInputMethodEvent* param1) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_InputMethodEvent_IsBase(true);
        vkmimetypechooser->inputMethodEvent(param1);
    } else {
        ((VirtualKMimeTypeChooser*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnInputMethodEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_InputMethodEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KMimeTypeChooser_InputMethodQuery(const KMimeTypeChooser* self, int param1) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return new QVariant(vkmimetypechooser->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKMimeTypeChooser*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KMimeTypeChooser_SuperInputMethodQuery(const KMimeTypeChooser* self, int param1) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_InputMethodQuery_IsBase(true);
        return new QVariant(vkmimetypechooser->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKMimeTypeChooser*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnInputMethodQuery(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_InputMethodQuery_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooser_FocusNextPrevChild(KMimeTypeChooser* self, bool next) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->focusNextPrevChild(next);
    } else {
        return ((VirtualKMimeTypeChooser*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KMimeTypeChooser_SuperFocusNextPrevChild(KMimeTypeChooser* self, bool next) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_FocusNextPrevChild_IsBase(true);
        return vkmimetypechooser->focusNextPrevChild(next);
    } else {
        return ((VirtualKMimeTypeChooser*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnFocusNextPrevChild(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooser_EventFilter(KMimeTypeChooser* self, QObject* watched, QEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->eventFilter(watched, event);
    } else {
        return self->KMimeTypeChooser::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KMimeTypeChooser_SuperEventFilter(KMimeTypeChooser* self, QObject* watched, QEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_EventFilter_IsBase(true);
        return vkmimetypechooser->eventFilter(watched, event);
    } else {
        return self->KMimeTypeChooser::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnEventFilter(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_EventFilter_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_TimerEvent(KMimeTypeChooser* self, QTimerEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->timerEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperTimerEvent(KMimeTypeChooser* self, QTimerEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_TimerEvent_IsBase(true);
        vkmimetypechooser->timerEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnTimerEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_TimerEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_ChildEvent(KMimeTypeChooser* self, QChildEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->childEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperChildEvent(KMimeTypeChooser* self, QChildEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_ChildEvent_IsBase(true);
        vkmimetypechooser->childEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnChildEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_ChildEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_CustomEvent(KMimeTypeChooser* self, QEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->customEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperCustomEvent(KMimeTypeChooser* self, QEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_CustomEvent_IsBase(true);
        vkmimetypechooser->customEvent(event);
    } else {
        ((VirtualKMimeTypeChooser*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnCustomEvent(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_CustomEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_ConnectNotify(KMimeTypeChooser* self, const QMetaMethod* signal) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->connectNotify(*signal);
    } else {
        ((VirtualKMimeTypeChooser*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperConnectNotify(KMimeTypeChooser* self, const QMetaMethod* signal) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_ConnectNotify_IsBase(true);
        vkmimetypechooser->connectNotify(*signal);
    } else {
        ((VirtualKMimeTypeChooser*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnConnectNotify(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_ConnectNotify_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_DisconnectNotify(KMimeTypeChooser* self, const QMetaMethod* signal) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->disconnectNotify(*signal);
    } else {
        ((VirtualKMimeTypeChooser*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperDisconnectNotify(KMimeTypeChooser* self, const QMetaMethod* signal) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_DisconnectNotify_IsBase(true);
        vkmimetypechooser->disconnectNotify(*signal);
    } else {
        ((VirtualKMimeTypeChooser*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnDisconnectNotify(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_DisconnectNotify_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_UpdateMicroFocus(KMimeTypeChooser* self) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->updateMicroFocus();
    } else {
        ((VirtualKMimeTypeChooser*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperUpdateMicroFocus(KMimeTypeChooser* self) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_UpdateMicroFocus_IsBase(true);
        vkmimetypechooser->updateMicroFocus();
    } else {
        ((VirtualKMimeTypeChooser*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnUpdateMicroFocus(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_Create(KMimeTypeChooser* self) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->create();
    } else {
        ((VirtualKMimeTypeChooser*)self)->create();
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperCreate(KMimeTypeChooser* self) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Create_IsBase(true);
        vkmimetypechooser->create();
    } else {
        ((VirtualKMimeTypeChooser*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnCreate(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Create_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooser_Destroy(KMimeTypeChooser* self) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->destroy();
    } else {
        ((VirtualKMimeTypeChooser*)self)->destroy();
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperDestroy(KMimeTypeChooser* self) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Destroy_IsBase(true);
        vkmimetypechooser->destroy();
    } else {
        ((VirtualKMimeTypeChooser*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnDestroy(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Destroy_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooser_FocusNextChild(KMimeTypeChooser* self) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->focusNextChild();
    } else {
        return ((VirtualKMimeTypeChooser*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KMimeTypeChooser_SuperFocusNextChild(KMimeTypeChooser* self) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_FocusNextChild_IsBase(true);
        return vkmimetypechooser->focusNextChild();
    } else {
        return ((VirtualKMimeTypeChooser*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnFocusNextChild(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_FocusNextChild_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooser_FocusPreviousChild(KMimeTypeChooser* self) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->focusPreviousChild();
    } else {
        return ((VirtualKMimeTypeChooser*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KMimeTypeChooser_SuperFocusPreviousChild(KMimeTypeChooser* self) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_FocusPreviousChild_IsBase(true);
        return vkmimetypechooser->focusPreviousChild();
    } else {
        return ((VirtualKMimeTypeChooser*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnFocusPreviousChild(KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_FocusPreviousChild_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KMimeTypeChooser_Sender(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->sender();
    } else {
        return ((VirtualKMimeTypeChooser*)self)->sender();
    }
}

// Base class handler implementation
QObject* KMimeTypeChooser_SuperSender(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Sender_IsBase(true);
        return vkmimetypechooser->sender();
    } else {
        return ((VirtualKMimeTypeChooser*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnSender(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Sender_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KMimeTypeChooser_SenderSignalIndex(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->senderSignalIndex();
    } else {
        return ((VirtualKMimeTypeChooser*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KMimeTypeChooser_SuperSenderSignalIndex(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_SenderSignalIndex_IsBase(true);
        return vkmimetypechooser->senderSignalIndex();
    } else {
        return ((VirtualKMimeTypeChooser*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnSenderSignalIndex(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_SenderSignalIndex_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KMimeTypeChooser_Receivers(const KMimeTypeChooser* self, const char* signal) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->receivers(signal);
    } else {
        return ((VirtualKMimeTypeChooser*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KMimeTypeChooser_SuperReceivers(const KMimeTypeChooser* self, const char* signal) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Receivers_IsBase(true);
        return vkmimetypechooser->receivers(signal);
    } else {
        return ((VirtualKMimeTypeChooser*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnReceivers(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_Receivers_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooser_IsSignalConnected(const KMimeTypeChooser* self, const QMetaMethod* signal) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->isSignalConnected(*signal);
    } else {
        return ((VirtualKMimeTypeChooser*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KMimeTypeChooser_SuperIsSignalConnected(const KMimeTypeChooser* self, const QMetaMethod* signal) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_IsSignalConnected_IsBase(true);
        return vkmimetypechooser->isSignalConnected(*signal);
    } else {
        return ((VirtualKMimeTypeChooser*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnIsSignalConnected(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_IsSignalConnected_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KMimeTypeChooser_GetDecodedMetricF(const KMimeTypeChooser* self, int metricA, int metricB) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        return vkmimetypechooser->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKMimeTypeChooser*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KMimeTypeChooser_SuperGetDecodedMetricF(const KMimeTypeChooser* self, int metricA, int metricB) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_GetDecodedMetricF_IsBase(true);
        return vkmimetypechooser->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKMimeTypeChooser*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnGetDecodedMetricF(const KMimeTypeChooser* self, intptr_t slot) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser && vkmimetypechooser->isVirtualKMimeTypeChooser) {
        vkmimetypechooser->setKMimeTypeChooser_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_GetDecodedMetricF_Callback>(slot));
    }
}

void KMimeTypeChooser_Delete(KMimeTypeChooser* self) {
    delete self;
}

KMimeTypeChooserDialog* KMimeTypeChooserDialog_new() {
    return new VirtualKMimeTypeChooserDialog();
}

KMimeTypeChooserDialog* KMimeTypeChooserDialog_new2(const libqt_string title, const libqt_string text, const libqt_list /* of libqt_string */ selectedMimeTypes, const libqt_string defaultGroup) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> selectedMimeTypes_QList;
    selectedMimeTypes_QList.reserve(selectedMimeTypes.len);
    libqt_string* selectedMimeTypes_arr = static_cast<libqt_string*>(selectedMimeTypes.data);
    for (size_t i = 0; i < selectedMimeTypes.len; ++i) {
        QString selectedMimeTypes_arr_i_QString = QString::fromUtf8(selectedMimeTypes_arr[i].data, selectedMimeTypes_arr[i].len);
        selectedMimeTypes_QList.push_back(selectedMimeTypes_arr_i_QString);
    }
    QString defaultGroup_QString = QString::fromUtf8(defaultGroup.data, defaultGroup.len);
    return new VirtualKMimeTypeChooserDialog(title_QString, text_QString, selectedMimeTypes_QList, defaultGroup_QString);
}

KMimeTypeChooserDialog* KMimeTypeChooserDialog_new3(const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualKMimeTypeChooserDialog(title_QString);
}

KMimeTypeChooserDialog* KMimeTypeChooserDialog_new4(const libqt_string title, const libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKMimeTypeChooserDialog(title_QString, text_QString);
}

KMimeTypeChooserDialog* KMimeTypeChooserDialog_new5(const libqt_string title, const libqt_string text, const libqt_list /* of libqt_string */ selectedMimeTypes) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> selectedMimeTypes_QList;
    selectedMimeTypes_QList.reserve(selectedMimeTypes.len);
    libqt_string* selectedMimeTypes_arr = static_cast<libqt_string*>(selectedMimeTypes.data);
    for (size_t i = 0; i < selectedMimeTypes.len; ++i) {
        QString selectedMimeTypes_arr_i_QString = QString::fromUtf8(selectedMimeTypes_arr[i].data, selectedMimeTypes_arr[i].len);
        selectedMimeTypes_QList.push_back(selectedMimeTypes_arr_i_QString);
    }
    return new VirtualKMimeTypeChooserDialog(title_QString, text_QString, selectedMimeTypes_QList);
}

KMimeTypeChooserDialog* KMimeTypeChooserDialog_new6(const libqt_string title, const libqt_string text, const libqt_list /* of libqt_string */ selectedMimeTypes, const libqt_string defaultGroup) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> selectedMimeTypes_QList;
    selectedMimeTypes_QList.reserve(selectedMimeTypes.len);
    libqt_string* selectedMimeTypes_arr = static_cast<libqt_string*>(selectedMimeTypes.data);
    for (size_t i = 0; i < selectedMimeTypes.len; ++i) {
        QString selectedMimeTypes_arr_i_QString = QString::fromUtf8(selectedMimeTypes_arr[i].data, selectedMimeTypes_arr[i].len);
        selectedMimeTypes_QList.push_back(selectedMimeTypes_arr_i_QString);
    }
    QString defaultGroup_QString = QString::fromUtf8(defaultGroup.data, defaultGroup.len);
    return new VirtualKMimeTypeChooserDialog(title_QString, text_QString, selectedMimeTypes_QList, defaultGroup_QString);
}

KMimeTypeChooserDialog* KMimeTypeChooserDialog_new7(const libqt_string title, const libqt_string text, const libqt_list /* of libqt_string */ selectedMimeTypes, const libqt_string defaultGroup, const libqt_list /* of libqt_string */ groupsToShow) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> selectedMimeTypes_QList;
    selectedMimeTypes_QList.reserve(selectedMimeTypes.len);
    libqt_string* selectedMimeTypes_arr = static_cast<libqt_string*>(selectedMimeTypes.data);
    for (size_t i = 0; i < selectedMimeTypes.len; ++i) {
        QString selectedMimeTypes_arr_i_QString = QString::fromUtf8(selectedMimeTypes_arr[i].data, selectedMimeTypes_arr[i].len);
        selectedMimeTypes_QList.push_back(selectedMimeTypes_arr_i_QString);
    }
    QString defaultGroup_QString = QString::fromUtf8(defaultGroup.data, defaultGroup.len);
    QList<QString> groupsToShow_QList;
    groupsToShow_QList.reserve(groupsToShow.len);
    libqt_string* groupsToShow_arr = static_cast<libqt_string*>(groupsToShow.data);
    for (size_t i = 0; i < groupsToShow.len; ++i) {
        QString groupsToShow_arr_i_QString = QString::fromUtf8(groupsToShow_arr[i].data, groupsToShow_arr[i].len);
        groupsToShow_QList.push_back(groupsToShow_arr_i_QString);
    }
    return new VirtualKMimeTypeChooserDialog(title_QString, text_QString, selectedMimeTypes_QList, defaultGroup_QString, groupsToShow_QList);
}

KMimeTypeChooserDialog* KMimeTypeChooserDialog_new8(const libqt_string title, const libqt_string text, const libqt_list /* of libqt_string */ selectedMimeTypes, const libqt_string defaultGroup, const libqt_list /* of libqt_string */ groupsToShow, int visuals) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> selectedMimeTypes_QList;
    selectedMimeTypes_QList.reserve(selectedMimeTypes.len);
    libqt_string* selectedMimeTypes_arr = static_cast<libqt_string*>(selectedMimeTypes.data);
    for (size_t i = 0; i < selectedMimeTypes.len; ++i) {
        QString selectedMimeTypes_arr_i_QString = QString::fromUtf8(selectedMimeTypes_arr[i].data, selectedMimeTypes_arr[i].len);
        selectedMimeTypes_QList.push_back(selectedMimeTypes_arr_i_QString);
    }
    QString defaultGroup_QString = QString::fromUtf8(defaultGroup.data, defaultGroup.len);
    QList<QString> groupsToShow_QList;
    groupsToShow_QList.reserve(groupsToShow.len);
    libqt_string* groupsToShow_arr = static_cast<libqt_string*>(groupsToShow.data);
    for (size_t i = 0; i < groupsToShow.len; ++i) {
        QString groupsToShow_arr_i_QString = QString::fromUtf8(groupsToShow_arr[i].data, groupsToShow_arr[i].len);
        groupsToShow_QList.push_back(groupsToShow_arr_i_QString);
    }
    return new VirtualKMimeTypeChooserDialog(title_QString, text_QString, selectedMimeTypes_QList, defaultGroup_QString, groupsToShow_QList, static_cast<int>(visuals));
}

KMimeTypeChooserDialog* KMimeTypeChooserDialog_new9(const libqt_string title, const libqt_string text, const libqt_list /* of libqt_string */ selectedMimeTypes, const libqt_string defaultGroup, const libqt_list /* of libqt_string */ groupsToShow, int visuals, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> selectedMimeTypes_QList;
    selectedMimeTypes_QList.reserve(selectedMimeTypes.len);
    libqt_string* selectedMimeTypes_arr = static_cast<libqt_string*>(selectedMimeTypes.data);
    for (size_t i = 0; i < selectedMimeTypes.len; ++i) {
        QString selectedMimeTypes_arr_i_QString = QString::fromUtf8(selectedMimeTypes_arr[i].data, selectedMimeTypes_arr[i].len);
        selectedMimeTypes_QList.push_back(selectedMimeTypes_arr_i_QString);
    }
    QString defaultGroup_QString = QString::fromUtf8(defaultGroup.data, defaultGroup.len);
    QList<QString> groupsToShow_QList;
    groupsToShow_QList.reserve(groupsToShow.len);
    libqt_string* groupsToShow_arr = static_cast<libqt_string*>(groupsToShow.data);
    for (size_t i = 0; i < groupsToShow.len; ++i) {
        QString groupsToShow_arr_i_QString = QString::fromUtf8(groupsToShow_arr[i].data, groupsToShow_arr[i].len);
        groupsToShow_QList.push_back(groupsToShow_arr_i_QString);
    }
    return new VirtualKMimeTypeChooserDialog(title_QString, text_QString, selectedMimeTypes_QList, defaultGroup_QString, groupsToShow_QList, static_cast<int>(visuals), parent);
}

KMimeTypeChooserDialog* KMimeTypeChooserDialog_new10(const libqt_string title, const libqt_string text, const libqt_list /* of libqt_string */ selectedMimeTypes, const libqt_string defaultGroup, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> selectedMimeTypes_QList;
    selectedMimeTypes_QList.reserve(selectedMimeTypes.len);
    libqt_string* selectedMimeTypes_arr = static_cast<libqt_string*>(selectedMimeTypes.data);
    for (size_t i = 0; i < selectedMimeTypes.len; ++i) {
        QString selectedMimeTypes_arr_i_QString = QString::fromUtf8(selectedMimeTypes_arr[i].data, selectedMimeTypes_arr[i].len);
        selectedMimeTypes_QList.push_back(selectedMimeTypes_arr_i_QString);
    }
    QString defaultGroup_QString = QString::fromUtf8(defaultGroup.data, defaultGroup.len);
    return new VirtualKMimeTypeChooserDialog(title_QString, text_QString, selectedMimeTypes_QList, defaultGroup_QString, parent);
}

QMetaObject* KMimeTypeChooserDialog_MetaObject(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualKMimeTypeChooserDialog*)self)->metaObject();
    }
}

void* KMimeTypeChooserDialog_Metacast(KMimeTypeChooserDialog* self, const char* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->qt_metacast(param1);
    }
}

int KMimeTypeChooserDialog_Metacall(KMimeTypeChooserDialog* self, int param1, int param2, void** param3) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

KMimeTypeChooser* KMimeTypeChooserDialog_Chooser(KMimeTypeChooserDialog* self) {
    return self->chooser();
}

QSize* KMimeTypeChooserDialog_SizeHint(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKMimeTypeChooserDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QMetaObject* KMimeTypeChooserDialog_SuperMetaObject(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_MetaObject_IsBase(true);
        return (QMetaObject*)vkmimetypechooserdialog->metaObject();
    } else {
        return (QMetaObject*)self->KMimeTypeChooserDialog::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMetaObject(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_MetaObject_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* KMimeTypeChooserDialog_SuperMetacast(KMimeTypeChooserDialog* self, const char* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Metacast_IsBase(true);
        return vkmimetypechooserdialog->qt_metacast(param1);
    } else {
        return self->KMimeTypeChooserDialog::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMetacast(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Metacast_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int KMimeTypeChooserDialog_SuperMetacall(KMimeTypeChooserDialog* self, int param1, int param2, void** param3) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Metacall_IsBase(true);
        return vkmimetypechooserdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KMimeTypeChooserDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMetacall(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Metacall_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KMimeTypeChooserDialog_SuperSizeHint(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_SizeHint_IsBase(true);
        return new QSize(vkmimetypechooserdialog->sizeHint());
    } else {
        return new QSize(((VirtualKMimeTypeChooserDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnSizeHint(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_SizeHint_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_SetVisible(KMimeTypeChooserDialog* self, bool visible) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setVisible(visible);
    } else {
        self->KMimeTypeChooserDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperSetVisible(KMimeTypeChooserDialog* self, bool visible) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_SetVisible_IsBase(true);
        vkmimetypechooserdialog->setVisible(visible);
    } else {
        self->KMimeTypeChooserDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnSetVisible(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_SetVisible_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KMimeTypeChooserDialog_MinimumSizeHint(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return new QSize(vkmimetypechooserdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKMimeTypeChooserDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KMimeTypeChooserDialog_SuperMinimumSizeHint(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkmimetypechooserdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKMimeTypeChooserDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMinimumSizeHint(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_Open(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->open();
    } else {
        self->KMimeTypeChooserDialog::open();
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperOpen(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Open_IsBase(true);
        vkmimetypechooserdialog->open();
    } else {
        self->KMimeTypeChooserDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnOpen(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Open_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KMimeTypeChooserDialog_Exec(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->exec();
    } else {
        return self->KMimeTypeChooserDialog::exec();
    }
}

// Base class handler implementation
int KMimeTypeChooserDialog_SuperExec(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Exec_IsBase(true);
        return vkmimetypechooserdialog->exec();
    } else {
        return self->KMimeTypeChooserDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnExec(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Exec_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_Done(KMimeTypeChooserDialog* self, int param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->done(static_cast<int>(param1));
    } else {
        self->KMimeTypeChooserDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperDone(KMimeTypeChooserDialog* self, int param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Done_IsBase(true);
        vkmimetypechooserdialog->done(static_cast<int>(param1));
    } else {
        self->KMimeTypeChooserDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnDone(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Done_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_Accept(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->accept();
    } else {
        self->KMimeTypeChooserDialog::accept();
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperAccept(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Accept_IsBase(true);
        vkmimetypechooserdialog->accept();
    } else {
        self->KMimeTypeChooserDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnAccept(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Accept_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_Reject(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->reject();
    } else {
        self->KMimeTypeChooserDialog::reject();
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperReject(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Reject_IsBase(true);
        vkmimetypechooserdialog->reject();
    } else {
        self->KMimeTypeChooserDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnReject(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Reject_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_KeyPressEvent(KMimeTypeChooserDialog* self, QKeyEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->keyPressEvent(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperKeyPressEvent(KMimeTypeChooserDialog* self, QKeyEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_KeyPressEvent_IsBase(true);
        vkmimetypechooserdialog->keyPressEvent(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnKeyPressEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_CloseEvent(KMimeTypeChooserDialog* self, QCloseEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->closeEvent(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperCloseEvent(KMimeTypeChooserDialog* self, QCloseEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_CloseEvent_IsBase(true);
        vkmimetypechooserdialog->closeEvent(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnCloseEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_CloseEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_ShowEvent(KMimeTypeChooserDialog* self, QShowEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->showEvent(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperShowEvent(KMimeTypeChooserDialog* self, QShowEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_ShowEvent_IsBase(true);
        vkmimetypechooserdialog->showEvent(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnShowEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_ShowEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_ResizeEvent(KMimeTypeChooserDialog* self, QResizeEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->resizeEvent(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperResizeEvent(KMimeTypeChooserDialog* self, QResizeEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_ResizeEvent_IsBase(true);
        vkmimetypechooserdialog->resizeEvent(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnResizeEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_ContextMenuEvent(KMimeTypeChooserDialog* self, QContextMenuEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperContextMenuEvent(KMimeTypeChooserDialog* self, QContextMenuEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_ContextMenuEvent_IsBase(true);
        vkmimetypechooserdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnContextMenuEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooserDialog_EventFilter(KMimeTypeChooserDialog* self, QObject* param1, QEvent* param2) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KMimeTypeChooserDialog_SuperEventFilter(KMimeTypeChooserDialog* self, QObject* param1, QEvent* param2) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_EventFilter_IsBase(true);
        return vkmimetypechooserdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnEventFilter(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_EventFilter_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KMimeTypeChooserDialog_DevType(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->devType();
    } else {
        return self->KMimeTypeChooserDialog::devType();
    }
}

// Base class handler implementation
int KMimeTypeChooserDialog_SuperDevType(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_DevType_IsBase(true);
        return vkmimetypechooserdialog->devType();
    } else {
        return self->KMimeTypeChooserDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnDevType(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_DevType_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KMimeTypeChooserDialog_HeightForWidth(const KMimeTypeChooserDialog* self, int param1) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KMimeTypeChooserDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KMimeTypeChooserDialog_SuperHeightForWidth(const KMimeTypeChooserDialog* self, int param1) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_HeightForWidth_IsBase(true);
        return vkmimetypechooserdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KMimeTypeChooserDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnHeightForWidth(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooserDialog_HasHeightForWidth(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->hasHeightForWidth();
    } else {
        return self->KMimeTypeChooserDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KMimeTypeChooserDialog_SuperHasHeightForWidth(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_HasHeightForWidth_IsBase(true);
        return vkmimetypechooserdialog->hasHeightForWidth();
    } else {
        return self->KMimeTypeChooserDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnHasHeightForWidth(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KMimeTypeChooserDialog_PaintEngine(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->paintEngine();
    } else {
        return self->KMimeTypeChooserDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KMimeTypeChooserDialog_SuperPaintEngine(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_PaintEngine_IsBase(true);
        return vkmimetypechooserdialog->paintEngine();
    } else {
        return self->KMimeTypeChooserDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnPaintEngine(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_PaintEngine_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooserDialog_Event(KMimeTypeChooserDialog* self, QEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->event(event);
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KMimeTypeChooserDialog_SuperEvent(KMimeTypeChooserDialog* self, QEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Event_IsBase(true);
        return vkmimetypechooserdialog->event(event);
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Event_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_MousePressEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->mousePressEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperMousePressEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_MousePressEvent_IsBase(true);
        vkmimetypechooserdialog->mousePressEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMousePressEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_MouseReleaseEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperMouseReleaseEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_MouseReleaseEvent_IsBase(true);
        vkmimetypechooserdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMouseReleaseEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_MouseDoubleClickEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperMouseDoubleClickEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_MouseDoubleClickEvent_IsBase(true);
        vkmimetypechooserdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMouseDoubleClickEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_MouseMoveEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperMouseMoveEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_MouseMoveEvent_IsBase(true);
        vkmimetypechooserdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMouseMoveEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_WheelEvent(KMimeTypeChooserDialog* self, QWheelEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->wheelEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperWheelEvent(KMimeTypeChooserDialog* self, QWheelEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_WheelEvent_IsBase(true);
        vkmimetypechooserdialog->wheelEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnWheelEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_WheelEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_KeyReleaseEvent(KMimeTypeChooserDialog* self, QKeyEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperKeyReleaseEvent(KMimeTypeChooserDialog* self, QKeyEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_KeyReleaseEvent_IsBase(true);
        vkmimetypechooserdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnKeyReleaseEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_FocusInEvent(KMimeTypeChooserDialog* self, QFocusEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->focusInEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperFocusInEvent(KMimeTypeChooserDialog* self, QFocusEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_FocusInEvent_IsBase(true);
        vkmimetypechooserdialog->focusInEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnFocusInEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_FocusOutEvent(KMimeTypeChooserDialog* self, QFocusEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->focusOutEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperFocusOutEvent(KMimeTypeChooserDialog* self, QFocusEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_FocusOutEvent_IsBase(true);
        vkmimetypechooserdialog->focusOutEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnFocusOutEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_EnterEvent(KMimeTypeChooserDialog* self, QEnterEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->enterEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperEnterEvent(KMimeTypeChooserDialog* self, QEnterEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_EnterEvent_IsBase(true);
        vkmimetypechooserdialog->enterEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnEnterEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_EnterEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_LeaveEvent(KMimeTypeChooserDialog* self, QEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->leaveEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperLeaveEvent(KMimeTypeChooserDialog* self, QEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_LeaveEvent_IsBase(true);
        vkmimetypechooserdialog->leaveEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnLeaveEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_PaintEvent(KMimeTypeChooserDialog* self, QPaintEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->paintEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperPaintEvent(KMimeTypeChooserDialog* self, QPaintEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_PaintEvent_IsBase(true);
        vkmimetypechooserdialog->paintEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnPaintEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_PaintEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_MoveEvent(KMimeTypeChooserDialog* self, QMoveEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->moveEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperMoveEvent(KMimeTypeChooserDialog* self, QMoveEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_MoveEvent_IsBase(true);
        vkmimetypechooserdialog->moveEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMoveEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_MoveEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_TabletEvent(KMimeTypeChooserDialog* self, QTabletEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->tabletEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperTabletEvent(KMimeTypeChooserDialog* self, QTabletEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_TabletEvent_IsBase(true);
        vkmimetypechooserdialog->tabletEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnTabletEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_TabletEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_ActionEvent(KMimeTypeChooserDialog* self, QActionEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->actionEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperActionEvent(KMimeTypeChooserDialog* self, QActionEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_ActionEvent_IsBase(true);
        vkmimetypechooserdialog->actionEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnActionEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_ActionEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_DragEnterEvent(KMimeTypeChooserDialog* self, QDragEnterEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->dragEnterEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperDragEnterEvent(KMimeTypeChooserDialog* self, QDragEnterEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_DragEnterEvent_IsBase(true);
        vkmimetypechooserdialog->dragEnterEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnDragEnterEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_DragMoveEvent(KMimeTypeChooserDialog* self, QDragMoveEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->dragMoveEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperDragMoveEvent(KMimeTypeChooserDialog* self, QDragMoveEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_DragMoveEvent_IsBase(true);
        vkmimetypechooserdialog->dragMoveEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnDragMoveEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_DragLeaveEvent(KMimeTypeChooserDialog* self, QDragLeaveEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperDragLeaveEvent(KMimeTypeChooserDialog* self, QDragLeaveEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_DragLeaveEvent_IsBase(true);
        vkmimetypechooserdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnDragLeaveEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_DropEvent(KMimeTypeChooserDialog* self, QDropEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->dropEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperDropEvent(KMimeTypeChooserDialog* self, QDropEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_DropEvent_IsBase(true);
        vkmimetypechooserdialog->dropEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnDropEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_DropEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_HideEvent(KMimeTypeChooserDialog* self, QHideEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->hideEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperHideEvent(KMimeTypeChooserDialog* self, QHideEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_HideEvent_IsBase(true);
        vkmimetypechooserdialog->hideEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnHideEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_HideEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooserDialog_NativeEvent(KMimeTypeChooserDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KMimeTypeChooserDialog_SuperNativeEvent(KMimeTypeChooserDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_NativeEvent_IsBase(true);
        return vkmimetypechooserdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnNativeEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_NativeEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_ChangeEvent(KMimeTypeChooserDialog* self, QEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->changeEvent(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperChangeEvent(KMimeTypeChooserDialog* self, QEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_ChangeEvent_IsBase(true);
        vkmimetypechooserdialog->changeEvent(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnChangeEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KMimeTypeChooserDialog_Metric(const KMimeTypeChooserDialog* self, int param1) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KMimeTypeChooserDialog_SuperMetric(const KMimeTypeChooserDialog* self, int param1) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Metric_IsBase(true);
        return vkmimetypechooserdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMetric(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Metric_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_InitPainter(const KMimeTypeChooserDialog* self, QPainter* painter) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->initPainter(painter);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperInitPainter(const KMimeTypeChooserDialog* self, QPainter* painter) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_InitPainter_IsBase(true);
        vkmimetypechooserdialog->initPainter(painter);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnInitPainter(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_InitPainter_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KMimeTypeChooserDialog_Redirected(const KMimeTypeChooserDialog* self, QPoint* offset) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->redirected(offset);
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KMimeTypeChooserDialog_SuperRedirected(const KMimeTypeChooserDialog* self, QPoint* offset) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Redirected_IsBase(true);
        return vkmimetypechooserdialog->redirected(offset);
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnRedirected(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Redirected_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KMimeTypeChooserDialog_SharedPainter(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->sharedPainter();
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KMimeTypeChooserDialog_SuperSharedPainter(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_SharedPainter_IsBase(true);
        return vkmimetypechooserdialog->sharedPainter();
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnSharedPainter(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_SharedPainter_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_InputMethodEvent(KMimeTypeChooserDialog* self, QInputMethodEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperInputMethodEvent(KMimeTypeChooserDialog* self, QInputMethodEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_InputMethodEvent_IsBase(true);
        vkmimetypechooserdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnInputMethodEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KMimeTypeChooserDialog_InputMethodQuery(const KMimeTypeChooserDialog* self, int param1) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return new QVariant(vkmimetypechooserdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKMimeTypeChooserDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KMimeTypeChooserDialog_SuperInputMethodQuery(const KMimeTypeChooserDialog* self, int param1) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkmimetypechooserdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKMimeTypeChooserDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnInputMethodQuery(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooserDialog_FocusNextPrevChild(KMimeTypeChooserDialog* self, bool next) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KMimeTypeChooserDialog_SuperFocusNextPrevChild(KMimeTypeChooserDialog* self, bool next) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_FocusNextPrevChild_IsBase(true);
        return vkmimetypechooserdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnFocusNextPrevChild(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_TimerEvent(KMimeTypeChooserDialog* self, QTimerEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->timerEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperTimerEvent(KMimeTypeChooserDialog* self, QTimerEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_TimerEvent_IsBase(true);
        vkmimetypechooserdialog->timerEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnTimerEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_TimerEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_ChildEvent(KMimeTypeChooserDialog* self, QChildEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->childEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperChildEvent(KMimeTypeChooserDialog* self, QChildEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_ChildEvent_IsBase(true);
        vkmimetypechooserdialog->childEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnChildEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_ChildEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_CustomEvent(KMimeTypeChooserDialog* self, QEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->customEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperCustomEvent(KMimeTypeChooserDialog* self, QEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_CustomEvent_IsBase(true);
        vkmimetypechooserdialog->customEvent(event);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnCustomEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_CustomEvent_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_ConnectNotify(KMimeTypeChooserDialog* self, const QMetaMethod* signal) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->connectNotify(*signal);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperConnectNotify(KMimeTypeChooserDialog* self, const QMetaMethod* signal) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_ConnectNotify_IsBase(true);
        vkmimetypechooserdialog->connectNotify(*signal);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnConnectNotify(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_DisconnectNotify(KMimeTypeChooserDialog* self, const QMetaMethod* signal) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperDisconnectNotify(KMimeTypeChooserDialog* self, const QMetaMethod* signal) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_DisconnectNotify_IsBase(true);
        vkmimetypechooserdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnDisconnectNotify(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_AdjustPosition(KMimeTypeChooserDialog* self, QWidget* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->adjustPosition(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperAdjustPosition(KMimeTypeChooserDialog* self, QWidget* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_AdjustPosition_IsBase(true);
        vkmimetypechooserdialog->adjustPosition(param1);
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnAdjustPosition(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_UpdateMicroFocus(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->updateMicroFocus();
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperUpdateMicroFocus(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_UpdateMicroFocus_IsBase(true);
        vkmimetypechooserdialog->updateMicroFocus();
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnUpdateMicroFocus(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_Create(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->create();
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->create();
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperCreate(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Create_IsBase(true);
        vkmimetypechooserdialog->create();
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnCreate(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Create_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KMimeTypeChooserDialog_Destroy(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->destroy();
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperDestroy(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Destroy_IsBase(true);
        vkmimetypechooserdialog->destroy();
    } else {
        ((VirtualKMimeTypeChooserDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnDestroy(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Destroy_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooserDialog_FocusNextChild(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->focusNextChild();
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KMimeTypeChooserDialog_SuperFocusNextChild(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_FocusNextChild_IsBase(true);
        return vkmimetypechooserdialog->focusNextChild();
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnFocusNextChild(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooserDialog_FocusPreviousChild(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->focusPreviousChild();
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KMimeTypeChooserDialog_SuperFocusPreviousChild(KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_FocusPreviousChild_IsBase(true);
        return vkmimetypechooserdialog->focusPreviousChild();
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnFocusPreviousChild(KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KMimeTypeChooserDialog_Sender(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->sender();
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KMimeTypeChooserDialog_SuperSender(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Sender_IsBase(true);
        return vkmimetypechooserdialog->sender();
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnSender(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Sender_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KMimeTypeChooserDialog_SenderSignalIndex(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->senderSignalIndex();
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KMimeTypeChooserDialog_SuperSenderSignalIndex(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_SenderSignalIndex_IsBase(true);
        return vkmimetypechooserdialog->senderSignalIndex();
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnSenderSignalIndex(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KMimeTypeChooserDialog_Receivers(const KMimeTypeChooserDialog* self, const char* signal) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->receivers(signal);
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KMimeTypeChooserDialog_SuperReceivers(const KMimeTypeChooserDialog* self, const char* signal) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Receivers_IsBase(true);
        return vkmimetypechooserdialog->receivers(signal);
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnReceivers(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_Receivers_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMimeTypeChooserDialog_IsSignalConnected(const KMimeTypeChooserDialog* self, const QMetaMethod* signal) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KMimeTypeChooserDialog_SuperIsSignalConnected(const KMimeTypeChooserDialog* self, const QMetaMethod* signal) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_IsSignalConnected_IsBase(true);
        return vkmimetypechooserdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnIsSignalConnected(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KMimeTypeChooserDialog_GetDecodedMetricF(const KMimeTypeChooserDialog* self, int metricA, int metricB) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        return vkmimetypechooserdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KMimeTypeChooserDialog_SuperGetDecodedMetricF(const KMimeTypeChooserDialog* self, int metricA, int metricB) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_GetDecodedMetricF_IsBase(true);
        return vkmimetypechooserdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKMimeTypeChooserDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnGetDecodedMetricF(const KMimeTypeChooserDialog* self, intptr_t slot) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog && vkmimetypechooserdialog->isVirtualKMimeTypeChooserDialog) {
        vkmimetypechooserdialog->setKMimeTypeChooserDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KMimeTypeChooserDialog_Delete(KMimeTypeChooserDialog* self) {
    delete self;
}
