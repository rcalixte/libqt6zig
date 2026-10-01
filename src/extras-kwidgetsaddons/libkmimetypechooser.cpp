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
    return (QMetaObject*)self->metaObject();
}

void* KMimeTypeChooser_Metacast(KMimeTypeChooser* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KMimeTypeChooser_Metacall(KMimeTypeChooser* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KMimeTypeChooser_Tr(const char* s) {
    auto _ret = KMimeTypeChooser::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KMimeTypeChooser_MimeTypes(const KMimeTypeChooser* self) {
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

libqt_list /* of libqt_string */ KMimeTypeChooser_Patterns(const KMimeTypeChooser* self) {
    QList<QString> _ret = self->patterns();
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

libqt_string KMimeTypeChooser_Tr2(const char* s, const char* c) {
    auto _ret = KMimeTypeChooser::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMimeTypeChooser_Tr3(const char* s, const char* c, int n) {
    auto _ret = KMimeTypeChooser::tr(s, c, static_cast<int>(n));
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
QMetaObject* KMimeTypeChooser_SuperMetaObject(const KMimeTypeChooser* self) {
    return (QMetaObject*)self->KMimeTypeChooser::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMetaObject(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self)))
        vkmimetypechooser->kmimetypechooser_metaobject_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KMimeTypeChooser_SuperMetacast(KMimeTypeChooser* self, const char* param1) {
    return self->KMimeTypeChooser::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMetacast(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_metacast_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_Metacast_Callback>(slot);
}

// Base class handler implementation
int KMimeTypeChooser_SuperMetacall(KMimeTypeChooser* self, int param1, int param2, void** param3) {
    return self->KMimeTypeChooser::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMetacall(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_metacall_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_Metacall_Callback>(slot);
}

// Derived class handler implementation
int KMimeTypeChooser_DevType(const KMimeTypeChooser* self) {
    return self->devType();
}

// Base class handler implementation
int KMimeTypeChooser_SuperDevType(const KMimeTypeChooser* self) {
    return self->KMimeTypeChooser::devType();
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnDevType(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self)))
        vkmimetypechooser->kmimetypechooser_devtype_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_DevType_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_SetVisible(KMimeTypeChooser* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KMimeTypeChooser_SuperSetVisible(KMimeTypeChooser* self, bool visible) {
    self->KMimeTypeChooser::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnSetVisible(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_setvisible_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KMimeTypeChooser_SizeHint(const KMimeTypeChooser* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KMimeTypeChooser_SuperSizeHint(const KMimeTypeChooser* self) {
    return new QSize(self->KMimeTypeChooser::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnSizeHint(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self)))
        vkmimetypechooser->kmimetypechooser_sizehint_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KMimeTypeChooser_MinimumSizeHint(const KMimeTypeChooser* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KMimeTypeChooser_SuperMinimumSizeHint(const KMimeTypeChooser* self) {
    return new QSize(self->KMimeTypeChooser::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMinimumSizeHint(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self)))
        vkmimetypechooser->kmimetypechooser_minimumsizehint_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KMimeTypeChooser_HeightForWidth(const KMimeTypeChooser* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KMimeTypeChooser_SuperHeightForWidth(const KMimeTypeChooser* self, int param1) {
    return self->KMimeTypeChooser::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnHeightForWidth(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self)))
        vkmimetypechooser->kmimetypechooser_heightforwidth_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KMimeTypeChooser_HasHeightForWidth(const KMimeTypeChooser* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KMimeTypeChooser_SuperHasHeightForWidth(const KMimeTypeChooser* self) {
    return self->KMimeTypeChooser::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnHasHeightForWidth(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self)))
        vkmimetypechooser->kmimetypechooser_hasheightforwidth_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KMimeTypeChooser_PaintEngine(const KMimeTypeChooser* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KMimeTypeChooser_SuperPaintEngine(const KMimeTypeChooser* self) {
    return self->KMimeTypeChooser::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnPaintEngine(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self)))
        vkmimetypechooser->kmimetypechooser_paintengine_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KMimeTypeChooser_Event(KMimeTypeChooser* self, QEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        return vkmimetypechooser->event(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMimeTypeChooser_SuperEvent(KMimeTypeChooser* self, QEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        return vkmimetypechooser->KMimeTypeChooser::event(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_event_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_Event_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_MousePressEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperMousePressEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMousePressEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_mousepressevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_MouseReleaseEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperMouseReleaseEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMouseReleaseEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_mousereleaseevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_MouseDoubleClickEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperMouseDoubleClickEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMouseDoubleClickEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_mousedoubleclickevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_MouseMoveEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperMouseMoveEvent(KMimeTypeChooser* self, QMouseEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMouseMoveEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_mousemoveevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_WheelEvent(KMimeTypeChooser* self, QWheelEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperWheelEvent(KMimeTypeChooser* self, QWheelEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnWheelEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_wheelevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_KeyPressEvent(KMimeTypeChooser* self, QKeyEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperKeyPressEvent(KMimeTypeChooser* self, QKeyEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnKeyPressEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_keypressevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_KeyReleaseEvent(KMimeTypeChooser* self, QKeyEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperKeyReleaseEvent(KMimeTypeChooser* self, QKeyEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnKeyReleaseEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_keyreleaseevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_FocusInEvent(KMimeTypeChooser* self, QFocusEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperFocusInEvent(KMimeTypeChooser* self, QFocusEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnFocusInEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_focusinevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_FocusOutEvent(KMimeTypeChooser* self, QFocusEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperFocusOutEvent(KMimeTypeChooser* self, QFocusEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnFocusOutEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_focusoutevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_EnterEvent(KMimeTypeChooser* self, QEnterEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperEnterEvent(KMimeTypeChooser* self, QEnterEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnEnterEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_enterevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_LeaveEvent(KMimeTypeChooser* self, QEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperLeaveEvent(KMimeTypeChooser* self, QEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnLeaveEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_leaveevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_PaintEvent(KMimeTypeChooser* self, QPaintEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperPaintEvent(KMimeTypeChooser* self, QPaintEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnPaintEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_paintevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_MoveEvent(KMimeTypeChooser* self, QMoveEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperMoveEvent(KMimeTypeChooser* self, QMoveEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMoveEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_moveevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_ResizeEvent(KMimeTypeChooser* self, QResizeEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperResizeEvent(KMimeTypeChooser* self, QResizeEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnResizeEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_resizeevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_CloseEvent(KMimeTypeChooser* self, QCloseEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperCloseEvent(KMimeTypeChooser* self, QCloseEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnCloseEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_closeevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_ContextMenuEvent(KMimeTypeChooser* self, QContextMenuEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperContextMenuEvent(KMimeTypeChooser* self, QContextMenuEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnContextMenuEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_contextmenuevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_TabletEvent(KMimeTypeChooser* self, QTabletEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperTabletEvent(KMimeTypeChooser* self, QTabletEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnTabletEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_tabletevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_ActionEvent(KMimeTypeChooser* self, QActionEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperActionEvent(KMimeTypeChooser* self, QActionEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnActionEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_actionevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_DragEnterEvent(KMimeTypeChooser* self, QDragEnterEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperDragEnterEvent(KMimeTypeChooser* self, QDragEnterEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnDragEnterEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_dragenterevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_DragMoveEvent(KMimeTypeChooser* self, QDragMoveEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperDragMoveEvent(KMimeTypeChooser* self, QDragMoveEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnDragMoveEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_dragmoveevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_DragLeaveEvent(KMimeTypeChooser* self, QDragLeaveEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperDragLeaveEvent(KMimeTypeChooser* self, QDragLeaveEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnDragLeaveEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_dragleaveevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_DropEvent(KMimeTypeChooser* self, QDropEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperDropEvent(KMimeTypeChooser* self, QDropEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnDropEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_dropevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_ShowEvent(KMimeTypeChooser* self, QShowEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperShowEvent(KMimeTypeChooser* self, QShowEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnShowEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_showevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_HideEvent(KMimeTypeChooser* self, QHideEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperHideEvent(KMimeTypeChooser* self, QHideEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnHideEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_hideevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KMimeTypeChooser_NativeEvent(KMimeTypeChooser* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        return vkmimetypechooser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMimeTypeChooser_SuperNativeEvent(KMimeTypeChooser* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        return vkmimetypechooser->KMimeTypeChooser::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnNativeEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_nativeevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_ChangeEvent(KMimeTypeChooser* self, QEvent* param1) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperChangeEvent(KMimeTypeChooser* self, QEvent* param1) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnChangeEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_changeevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KMimeTypeChooser_Metric(const KMimeTypeChooser* self, int param1) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser) {
        return vkmimetypechooser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KMimeTypeChooser_SuperMetric(const KMimeTypeChooser* self, int param1) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self))) {
        return vkmimetypechooser->KMimeTypeChooser::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnMetric(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self)))
        vkmimetypechooser->kmimetypechooser_metric_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_Metric_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_InitPainter(const KMimeTypeChooser* self, QPainter* painter) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser) {
        vkmimetypechooser->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperInitPainter(const KMimeTypeChooser* self, QPainter* painter) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self))) {
        vkmimetypechooser->KMimeTypeChooser::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnInitPainter(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self)))
        vkmimetypechooser->kmimetypechooser_initpainter_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KMimeTypeChooser_Redirected(const KMimeTypeChooser* self, QPoint* offset) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser) {
        return vkmimetypechooser->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KMimeTypeChooser_SuperRedirected(const KMimeTypeChooser* self, QPoint* offset) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self))) {
        return vkmimetypechooser->KMimeTypeChooser::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnRedirected(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self)))
        vkmimetypechooser->kmimetypechooser_redirected_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KMimeTypeChooser_SharedPainter(const KMimeTypeChooser* self) {
    auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self));
    if (vkmimetypechooser) {
        return vkmimetypechooser->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KMimeTypeChooser_SuperSharedPainter(const KMimeTypeChooser* self) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self))) {
        return vkmimetypechooser->KMimeTypeChooser::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnSharedPainter(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self)))
        vkmimetypechooser->kmimetypechooser_sharedpainter_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_InputMethodEvent(KMimeTypeChooser* self, QInputMethodEvent* param1) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperInputMethodEvent(KMimeTypeChooser* self, QInputMethodEvent* param1) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnInputMethodEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_inputmethodevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KMimeTypeChooser_InputMethodQuery(const KMimeTypeChooser* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KMimeTypeChooser_SuperInputMethodQuery(const KMimeTypeChooser* self, int param1) {
    return new QVariant(self->KMimeTypeChooser::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnInputMethodQuery(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self)))
        vkmimetypechooser->kmimetypechooser_inputmethodquery_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KMimeTypeChooser_FocusNextPrevChild(KMimeTypeChooser* self, bool next) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        return vkmimetypechooser->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMimeTypeChooser_SuperFocusNextPrevChild(KMimeTypeChooser* self, bool next) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        return vkmimetypechooser->KMimeTypeChooser::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnFocusNextPrevChild(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_focusnextprevchild_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KMimeTypeChooser_EventFilter(KMimeTypeChooser* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KMimeTypeChooser_SuperEventFilter(KMimeTypeChooser* self, QObject* watched, QEvent* event) {
    return self->KMimeTypeChooser::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnEventFilter(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_eventfilter_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_TimerEvent(KMimeTypeChooser* self, QTimerEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperTimerEvent(KMimeTypeChooser* self, QTimerEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnTimerEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_timerevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_ChildEvent(KMimeTypeChooser* self, QChildEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperChildEvent(KMimeTypeChooser* self, QChildEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnChildEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_childevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_CustomEvent(KMimeTypeChooser* self, QEvent* event) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperCustomEvent(KMimeTypeChooser* self, QEvent* event) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnCustomEvent(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_customevent_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_ConnectNotify(KMimeTypeChooser* self, const QMetaMethod* signal) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperConnectNotify(KMimeTypeChooser* self, const QMetaMethod* signal) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnConnectNotify(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_connectnotify_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooser_DisconnectNotify(KMimeTypeChooser* self, const QMetaMethod* signal) {
    auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self);
    if (vkmimetypechooser) {
        vkmimetypechooser->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooser::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooser_SuperDisconnectNotify(KMimeTypeChooser* self, const QMetaMethod* signal) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->KMimeTypeChooser::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooser::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooser_OnDisconnectNotify(KMimeTypeChooser* self, intptr_t slot) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self))
        vkmimetypechooser->kmimetypechooser_disconnectnotify_callback = reinterpret_cast<VirtualKMimeTypeChooser::KMimeTypeChooser_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KMimeTypeChooser_UpdateMicroFocus(KMimeTypeChooser* self) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->VirtualKMimeTypeChooser::updateMicroFocus();
    } else
        qFatal("Error: Protected method KMimeTypeChooser::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KMimeTypeChooser_Create(KMimeTypeChooser* self) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->VirtualKMimeTypeChooser::create();
    } else
        qFatal("Error: Protected method KMimeTypeChooser::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KMimeTypeChooser_Destroy(KMimeTypeChooser* self) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        vkmimetypechooser->VirtualKMimeTypeChooser::destroy();
    } else
        qFatal("Error: Protected method KMimeTypeChooser::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMimeTypeChooser_FocusNextChild(KMimeTypeChooser* self) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        return vkmimetypechooser->VirtualKMimeTypeChooser::focusNextChild();
    } else
        qFatal("Error: Protected method KMimeTypeChooser::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMimeTypeChooser_FocusPreviousChild(KMimeTypeChooser* self) {
    if (auto* vkmimetypechooser = dynamic_cast<VirtualKMimeTypeChooser*>(self)) {
        return vkmimetypechooser->VirtualKMimeTypeChooser::focusPreviousChild();
    } else
        qFatal("Error: Protected method KMimeTypeChooser::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KMimeTypeChooser_Sender(const KMimeTypeChooser* self) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self))) {
        return vkmimetypechooser->VirtualKMimeTypeChooser::sender();
    } else
        qFatal("Error: Protected method KMimeTypeChooser::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KMimeTypeChooser_SenderSignalIndex(const KMimeTypeChooser* self) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self))) {
        return vkmimetypechooser->VirtualKMimeTypeChooser::senderSignalIndex();
    } else
        qFatal("Error: Protected method KMimeTypeChooser::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KMimeTypeChooser_Receivers(const KMimeTypeChooser* self, const char* signal) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self))) {
        return vkmimetypechooser->VirtualKMimeTypeChooser::receivers(signal);
    } else
        qFatal("Error: Protected method KMimeTypeChooser::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMimeTypeChooser_IsSignalConnected(const KMimeTypeChooser* self, const QMetaMethod* signal) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self))) {
        return vkmimetypechooser->VirtualKMimeTypeChooser::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KMimeTypeChooser::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KMimeTypeChooser_GetDecodedMetricF(const KMimeTypeChooser* self, int metricA, int metricB) {
    if (auto* vkmimetypechooser = const_cast<VirtualKMimeTypeChooser*>(dynamic_cast<const VirtualKMimeTypeChooser*>(self))) {
        return vkmimetypechooser->VirtualKMimeTypeChooser::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KMimeTypeChooser::getDecodedMetricF called without a directly constructed type");
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
    return (QMetaObject*)self->metaObject();
}

void* KMimeTypeChooserDialog_Metacast(KMimeTypeChooserDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KMimeTypeChooserDialog_Metacall(KMimeTypeChooserDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KMimeTypeChooserDialog_Tr(const char* s) {
    auto _ret = KMimeTypeChooserDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KMimeTypeChooser* KMimeTypeChooserDialog_Chooser(KMimeTypeChooserDialog* self) {
    return self->chooser();
}

QSize* KMimeTypeChooserDialog_SizeHint(const KMimeTypeChooserDialog* self) {
    return new QSize(self->sizeHint());
}

libqt_string KMimeTypeChooserDialog_Tr2(const char* s, const char* c) {
    auto _ret = KMimeTypeChooserDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMimeTypeChooserDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KMimeTypeChooserDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KMimeTypeChooserDialog_SuperMetaObject(const KMimeTypeChooserDialog* self) {
    return (QMetaObject*)self->KMimeTypeChooserDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMetaObject(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self)))
        vkmimetypechooserdialog->kmimetypechooserdialog_metaobject_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KMimeTypeChooserDialog_SuperMetacast(KMimeTypeChooserDialog* self, const char* param1) {
    return self->KMimeTypeChooserDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMetacast(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_metacast_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KMimeTypeChooserDialog_SuperMetacall(KMimeTypeChooserDialog* self, int param1, int param2, void** param3) {
    return self->KMimeTypeChooserDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMetacall(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_metacall_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KMimeTypeChooserDialog_SuperSizeHint(const KMimeTypeChooserDialog* self) {
    return new QSize(self->KMimeTypeChooserDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnSizeHint(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self)))
        vkmimetypechooserdialog->kmimetypechooserdialog_sizehint_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_SetVisible(KMimeTypeChooserDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperSetVisible(KMimeTypeChooserDialog* self, bool visible) {
    self->KMimeTypeChooserDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnSetVisible(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_setvisible_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KMimeTypeChooserDialog_MinimumSizeHint(const KMimeTypeChooserDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KMimeTypeChooserDialog_SuperMinimumSizeHint(const KMimeTypeChooserDialog* self) {
    return new QSize(self->KMimeTypeChooserDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMinimumSizeHint(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self)))
        vkmimetypechooserdialog->kmimetypechooserdialog_minimumsizehint_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_Open(KMimeTypeChooserDialog* self) {
    self->open();
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperOpen(KMimeTypeChooserDialog* self) {
    self->KMimeTypeChooserDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnOpen(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_open_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KMimeTypeChooserDialog_Exec(KMimeTypeChooserDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KMimeTypeChooserDialog_SuperExec(KMimeTypeChooserDialog* self) {
    return self->KMimeTypeChooserDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnExec(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_exec_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_Done(KMimeTypeChooserDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperDone(KMimeTypeChooserDialog* self, int param1) {
    self->KMimeTypeChooserDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnDone(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_done_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_Accept(KMimeTypeChooserDialog* self) {
    self->accept();
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperAccept(KMimeTypeChooserDialog* self) {
    self->KMimeTypeChooserDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnAccept(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_accept_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_Reject(KMimeTypeChooserDialog* self) {
    self->reject();
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperReject(KMimeTypeChooserDialog* self) {
    self->KMimeTypeChooserDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnReject(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_reject_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_KeyPressEvent(KMimeTypeChooserDialog* self, QKeyEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperKeyPressEvent(KMimeTypeChooserDialog* self, QKeyEvent* param1) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnKeyPressEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_keypressevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_CloseEvent(KMimeTypeChooserDialog* self, QCloseEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperCloseEvent(KMimeTypeChooserDialog* self, QCloseEvent* param1) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnCloseEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_closeevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_ShowEvent(KMimeTypeChooserDialog* self, QShowEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperShowEvent(KMimeTypeChooserDialog* self, QShowEvent* param1) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnShowEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_showevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_ResizeEvent(KMimeTypeChooserDialog* self, QResizeEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperResizeEvent(KMimeTypeChooserDialog* self, QResizeEvent* param1) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnResizeEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_resizeevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_ContextMenuEvent(KMimeTypeChooserDialog* self, QContextMenuEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperContextMenuEvent(KMimeTypeChooserDialog* self, QContextMenuEvent* param1) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnContextMenuEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_contextmenuevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KMimeTypeChooserDialog_EventFilter(KMimeTypeChooserDialog* self, QObject* param1, QEvent* param2) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        return vkmimetypechooserdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMimeTypeChooserDialog_SuperEventFilter(KMimeTypeChooserDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        return vkmimetypechooserdialog->KMimeTypeChooserDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnEventFilter(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_eventfilter_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KMimeTypeChooserDialog_DevType(const KMimeTypeChooserDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KMimeTypeChooserDialog_SuperDevType(const KMimeTypeChooserDialog* self) {
    return self->KMimeTypeChooserDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnDevType(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self)))
        vkmimetypechooserdialog->kmimetypechooserdialog_devtype_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KMimeTypeChooserDialog_HeightForWidth(const KMimeTypeChooserDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KMimeTypeChooserDialog_SuperHeightForWidth(const KMimeTypeChooserDialog* self, int param1) {
    return self->KMimeTypeChooserDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnHeightForWidth(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self)))
        vkmimetypechooserdialog->kmimetypechooserdialog_heightforwidth_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KMimeTypeChooserDialog_HasHeightForWidth(const KMimeTypeChooserDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KMimeTypeChooserDialog_SuperHasHeightForWidth(const KMimeTypeChooserDialog* self) {
    return self->KMimeTypeChooserDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnHasHeightForWidth(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self)))
        vkmimetypechooserdialog->kmimetypechooserdialog_hasheightforwidth_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KMimeTypeChooserDialog_PaintEngine(const KMimeTypeChooserDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KMimeTypeChooserDialog_SuperPaintEngine(const KMimeTypeChooserDialog* self) {
    return self->KMimeTypeChooserDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnPaintEngine(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self)))
        vkmimetypechooserdialog->kmimetypechooserdialog_paintengine_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KMimeTypeChooserDialog_Event(KMimeTypeChooserDialog* self, QEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        return vkmimetypechooserdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMimeTypeChooserDialog_SuperEvent(KMimeTypeChooserDialog* self, QEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        return vkmimetypechooserdialog->KMimeTypeChooserDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_event_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_MousePressEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperMousePressEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMousePressEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_mousepressevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_MouseReleaseEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperMouseReleaseEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMouseReleaseEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_mousereleaseevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_MouseDoubleClickEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperMouseDoubleClickEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMouseDoubleClickEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_MouseMoveEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperMouseMoveEvent(KMimeTypeChooserDialog* self, QMouseEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMouseMoveEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_mousemoveevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_WheelEvent(KMimeTypeChooserDialog* self, QWheelEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperWheelEvent(KMimeTypeChooserDialog* self, QWheelEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnWheelEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_wheelevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_KeyReleaseEvent(KMimeTypeChooserDialog* self, QKeyEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperKeyReleaseEvent(KMimeTypeChooserDialog* self, QKeyEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnKeyReleaseEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_keyreleaseevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_FocusInEvent(KMimeTypeChooserDialog* self, QFocusEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperFocusInEvent(KMimeTypeChooserDialog* self, QFocusEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnFocusInEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_focusinevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_FocusOutEvent(KMimeTypeChooserDialog* self, QFocusEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperFocusOutEvent(KMimeTypeChooserDialog* self, QFocusEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnFocusOutEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_focusoutevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_EnterEvent(KMimeTypeChooserDialog* self, QEnterEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperEnterEvent(KMimeTypeChooserDialog* self, QEnterEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnEnterEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_enterevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_LeaveEvent(KMimeTypeChooserDialog* self, QEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperLeaveEvent(KMimeTypeChooserDialog* self, QEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnLeaveEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_leaveevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_PaintEvent(KMimeTypeChooserDialog* self, QPaintEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperPaintEvent(KMimeTypeChooserDialog* self, QPaintEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnPaintEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_paintevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_MoveEvent(KMimeTypeChooserDialog* self, QMoveEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperMoveEvent(KMimeTypeChooserDialog* self, QMoveEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMoveEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_moveevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_TabletEvent(KMimeTypeChooserDialog* self, QTabletEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperTabletEvent(KMimeTypeChooserDialog* self, QTabletEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnTabletEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_tabletevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_ActionEvent(KMimeTypeChooserDialog* self, QActionEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperActionEvent(KMimeTypeChooserDialog* self, QActionEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnActionEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_actionevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_DragEnterEvent(KMimeTypeChooserDialog* self, QDragEnterEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperDragEnterEvent(KMimeTypeChooserDialog* self, QDragEnterEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnDragEnterEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_dragenterevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_DragMoveEvent(KMimeTypeChooserDialog* self, QDragMoveEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperDragMoveEvent(KMimeTypeChooserDialog* self, QDragMoveEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnDragMoveEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_dragmoveevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_DragLeaveEvent(KMimeTypeChooserDialog* self, QDragLeaveEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperDragLeaveEvent(KMimeTypeChooserDialog* self, QDragLeaveEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnDragLeaveEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_dragleaveevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_DropEvent(KMimeTypeChooserDialog* self, QDropEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperDropEvent(KMimeTypeChooserDialog* self, QDropEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnDropEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_dropevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_HideEvent(KMimeTypeChooserDialog* self, QHideEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperHideEvent(KMimeTypeChooserDialog* self, QHideEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnHideEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_hideevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KMimeTypeChooserDialog_NativeEvent(KMimeTypeChooserDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        return vkmimetypechooserdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMimeTypeChooserDialog_SuperNativeEvent(KMimeTypeChooserDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        return vkmimetypechooserdialog->KMimeTypeChooserDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnNativeEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_nativeevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_ChangeEvent(KMimeTypeChooserDialog* self, QEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperChangeEvent(KMimeTypeChooserDialog* self, QEvent* param1) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnChangeEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_changeevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KMimeTypeChooserDialog_Metric(const KMimeTypeChooserDialog* self, int param1) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog) {
        return vkmimetypechooserdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KMimeTypeChooserDialog_SuperMetric(const KMimeTypeChooserDialog* self, int param1) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self))) {
        return vkmimetypechooserdialog->KMimeTypeChooserDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnMetric(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self)))
        vkmimetypechooserdialog->kmimetypechooserdialog_metric_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_InitPainter(const KMimeTypeChooserDialog* self, QPainter* painter) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperInitPainter(const KMimeTypeChooserDialog* self, QPainter* painter) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self))) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnInitPainter(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self)))
        vkmimetypechooserdialog->kmimetypechooserdialog_initpainter_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KMimeTypeChooserDialog_Redirected(const KMimeTypeChooserDialog* self, QPoint* offset) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog) {
        return vkmimetypechooserdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KMimeTypeChooserDialog_SuperRedirected(const KMimeTypeChooserDialog* self, QPoint* offset) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self))) {
        return vkmimetypechooserdialog->KMimeTypeChooserDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnRedirected(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self)))
        vkmimetypechooserdialog->kmimetypechooserdialog_redirected_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KMimeTypeChooserDialog_SharedPainter(const KMimeTypeChooserDialog* self) {
    auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self));
    if (vkmimetypechooserdialog) {
        return vkmimetypechooserdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KMimeTypeChooserDialog_SuperSharedPainter(const KMimeTypeChooserDialog* self) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self))) {
        return vkmimetypechooserdialog->KMimeTypeChooserDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnSharedPainter(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self)))
        vkmimetypechooserdialog->kmimetypechooserdialog_sharedpainter_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_InputMethodEvent(KMimeTypeChooserDialog* self, QInputMethodEvent* param1) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperInputMethodEvent(KMimeTypeChooserDialog* self, QInputMethodEvent* param1) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnInputMethodEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_inputmethodevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KMimeTypeChooserDialog_InputMethodQuery(const KMimeTypeChooserDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KMimeTypeChooserDialog_SuperInputMethodQuery(const KMimeTypeChooserDialog* self, int param1) {
    return new QVariant(self->KMimeTypeChooserDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnInputMethodQuery(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self)))
        vkmimetypechooserdialog->kmimetypechooserdialog_inputmethodquery_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KMimeTypeChooserDialog_FocusNextPrevChild(KMimeTypeChooserDialog* self, bool next) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        return vkmimetypechooserdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMimeTypeChooserDialog_SuperFocusNextPrevChild(KMimeTypeChooserDialog* self, bool next) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        return vkmimetypechooserdialog->KMimeTypeChooserDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnFocusNextPrevChild(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_focusnextprevchild_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_TimerEvent(KMimeTypeChooserDialog* self, QTimerEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperTimerEvent(KMimeTypeChooserDialog* self, QTimerEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnTimerEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_timerevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_ChildEvent(KMimeTypeChooserDialog* self, QChildEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperChildEvent(KMimeTypeChooserDialog* self, QChildEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnChildEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_childevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_CustomEvent(KMimeTypeChooserDialog* self, QEvent* event) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperCustomEvent(KMimeTypeChooserDialog* self, QEvent* event) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnCustomEvent(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_customevent_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_ConnectNotify(KMimeTypeChooserDialog* self, const QMetaMethod* signal) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperConnectNotify(KMimeTypeChooserDialog* self, const QMetaMethod* signal) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnConnectNotify(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_connectnotify_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KMimeTypeChooserDialog_DisconnectNotify(KMimeTypeChooserDialog* self, const QMetaMethod* signal) {
    auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self);
    if (vkmimetypechooserdialog) {
        vkmimetypechooserdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KMimeTypeChooserDialog_SuperDisconnectNotify(KMimeTypeChooserDialog* self, const QMetaMethod* signal) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->KMimeTypeChooserDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KMimeTypeChooserDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMimeTypeChooserDialog_OnDisconnectNotify(KMimeTypeChooserDialog* self, intptr_t slot) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self))
        vkmimetypechooserdialog->kmimetypechooserdialog_disconnectnotify_callback = reinterpret_cast<VirtualKMimeTypeChooserDialog::KMimeTypeChooserDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KMimeTypeChooserDialog_AdjustPosition(KMimeTypeChooserDialog* self, QWidget* param1) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->VirtualKMimeTypeChooserDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KMimeTypeChooserDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KMimeTypeChooserDialog_UpdateMicroFocus(KMimeTypeChooserDialog* self) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->VirtualKMimeTypeChooserDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KMimeTypeChooserDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KMimeTypeChooserDialog_Create(KMimeTypeChooserDialog* self) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->VirtualKMimeTypeChooserDialog::create();
    } else
        qFatal("Error: Protected method KMimeTypeChooserDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KMimeTypeChooserDialog_Destroy(KMimeTypeChooserDialog* self) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        vkmimetypechooserdialog->VirtualKMimeTypeChooserDialog::destroy();
    } else
        qFatal("Error: Protected method KMimeTypeChooserDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMimeTypeChooserDialog_FocusNextChild(KMimeTypeChooserDialog* self) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        return vkmimetypechooserdialog->VirtualKMimeTypeChooserDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KMimeTypeChooserDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMimeTypeChooserDialog_FocusPreviousChild(KMimeTypeChooserDialog* self) {
    if (auto* vkmimetypechooserdialog = dynamic_cast<VirtualKMimeTypeChooserDialog*>(self)) {
        return vkmimetypechooserdialog->VirtualKMimeTypeChooserDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KMimeTypeChooserDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KMimeTypeChooserDialog_Sender(const KMimeTypeChooserDialog* self) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self))) {
        return vkmimetypechooserdialog->VirtualKMimeTypeChooserDialog::sender();
    } else
        qFatal("Error: Protected method KMimeTypeChooserDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KMimeTypeChooserDialog_SenderSignalIndex(const KMimeTypeChooserDialog* self) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self))) {
        return vkmimetypechooserdialog->VirtualKMimeTypeChooserDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KMimeTypeChooserDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KMimeTypeChooserDialog_Receivers(const KMimeTypeChooserDialog* self, const char* signal) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self))) {
        return vkmimetypechooserdialog->VirtualKMimeTypeChooserDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KMimeTypeChooserDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMimeTypeChooserDialog_IsSignalConnected(const KMimeTypeChooserDialog* self, const QMetaMethod* signal) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self))) {
        return vkmimetypechooserdialog->VirtualKMimeTypeChooserDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KMimeTypeChooserDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KMimeTypeChooserDialog_GetDecodedMetricF(const KMimeTypeChooserDialog* self, int metricA, int metricB) {
    if (auto* vkmimetypechooserdialog = const_cast<VirtualKMimeTypeChooserDialog*>(dynamic_cast<const VirtualKMimeTypeChooserDialog*>(self))) {
        return vkmimetypechooserdialog->VirtualKMimeTypeChooserDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KMimeTypeChooserDialog::getDecodedMetricF called without a directly constructed type");
}

void KMimeTypeChooserDialog_Delete(KMimeTypeChooserDialog* self) {
    delete self;
}
