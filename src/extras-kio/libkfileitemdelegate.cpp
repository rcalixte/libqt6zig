#include <KFileItem>
#include <KFileItemDelegate>
#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QHelpEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QPointF>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QTimerEvent>
#include <QWidget>
#include <kfileitemdelegate.h>
#include "libkfileitemdelegate.h"
#include "libkfileitemdelegate.hxx"

KFileItemDelegate* KFileItemDelegate_new() {
    return new VirtualKFileItemDelegate();
}

KFileItemDelegate* KFileItemDelegate_new2(QObject* parent) {
    return new VirtualKFileItemDelegate(parent);
}

QMetaObject* KFileItemDelegate_MetaObject(const KFileItemDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFileItemDelegate_Metacast(KFileItemDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFileItemDelegate_Metacall(KFileItemDelegate* self, int param1, int param2, void** param3) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFileItemDelegate*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFileItemDelegate_Tr(const char* s) {
    QString _ret = KFileItemDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* KFileItemDelegate_SizeHint(const KFileItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkfileitemdelegate = dynamic_cast<const VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        return new QSize(self->sizeHint(*option, *index));
    } else {
        return new QSize(((VirtualKFileItemDelegate*)self)->sizeHint(*option, *index));
    }
}

void KFileItemDelegate_Paint(const KFileItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkfileitemdelegate = dynamic_cast<const VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        self->paint(painter, *option, *index);
    } else {
        ((VirtualKFileItemDelegate*)self)->paint(painter, *option, *index);
    }
}

QWidget* KFileItemDelegate_CreateEditor(const KFileItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkfileitemdelegate = dynamic_cast<const VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        return self->createEditor(parent, *option, *index);
    } else {
        return ((VirtualKFileItemDelegate*)self)->createEditor(parent, *option, *index);
    }
}

bool KFileItemDelegate_EditorEvent(KFileItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        return self->editorEvent(event, model, *option, *index);
    } else {
        return ((VirtualKFileItemDelegate*)self)->editorEvent(event, model, *option, *index);
    }
}

void KFileItemDelegate_SetEditorData(const KFileItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vkfileitemdelegate = dynamic_cast<const VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        self->setEditorData(editor, *index);
    } else {
        ((VirtualKFileItemDelegate*)self)->setEditorData(editor, *index);
    }
}

void KFileItemDelegate_SetModelData(const KFileItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    auto* vkfileitemdelegate = dynamic_cast<const VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        self->setModelData(editor, model, *index);
    } else {
        ((VirtualKFileItemDelegate*)self)->setModelData(editor, model, *index);
    }
}

void KFileItemDelegate_UpdateEditorGeometry(const KFileItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkfileitemdelegate = dynamic_cast<const VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        self->updateEditorGeometry(editor, *option, *index);
    } else {
        ((VirtualKFileItemDelegate*)self)->updateEditorGeometry(editor, *option, *index);
    }
}

void KFileItemDelegate_SetShowInformation(KFileItemDelegate* self, const libqt_list /* of int */ list) {
    QList<KFileItemDelegate::Information> list_QList;
    list_QList.reserve(list.len);
    int* list_arr = static_cast<int*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(static_cast<KFileItemDelegate::Information>(list_arr[i]));
    }
    self->setShowInformation(list_QList);
}

void KFileItemDelegate_SetShowInformation2(KFileItemDelegate* self, int information) {
    self->setShowInformation(static_cast<KFileItemDelegate::Information>(information));
}

libqt_list /* of int */ KFileItemDelegate_ShowInformation(const KFileItemDelegate* self) {
    QList<KFileItemDelegate::Information> _ret = self->showInformation();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KFileItemDelegate_SetShadowColor(KFileItemDelegate* self, const QColor* color) {
    self->setShadowColor(*color);
}

QColor* KFileItemDelegate_ShadowColor(const KFileItemDelegate* self) {
    return new QColor(self->shadowColor());
}

void KFileItemDelegate_SetShadowOffset(KFileItemDelegate* self, const QPointF* offset) {
    self->setShadowOffset(*offset);
}

QPointF* KFileItemDelegate_ShadowOffset(const KFileItemDelegate* self) {
    return new QPointF(self->shadowOffset());
}

void KFileItemDelegate_SetShadowBlur(KFileItemDelegate* self, double radius) {
    self->setShadowBlur(static_cast<qreal>(radius));
}

double KFileItemDelegate_ShadowBlur(const KFileItemDelegate* self) {
    return static_cast<double>(self->shadowBlur());
}

void KFileItemDelegate_SetMaximumSize(KFileItemDelegate* self, const QSize* size) {
    self->setMaximumSize(*size);
}

QSize* KFileItemDelegate_MaximumSize(const KFileItemDelegate* self) {
    return new QSize(self->maximumSize());
}

void KFileItemDelegate_SetShowToolTipWhenElided(KFileItemDelegate* self, bool showToolTip) {
    self->setShowToolTipWhenElided(showToolTip);
}

bool KFileItemDelegate_ShowToolTipWhenElided(const KFileItemDelegate* self) {
    return self->showToolTipWhenElided();
}

QRect* KFileItemDelegate_IconRect(const KFileItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return new QRect(self->iconRect(*option, *index));
}

void KFileItemDelegate_SetWrapMode(KFileItemDelegate* self, int wrapMode) {
    self->setWrapMode(static_cast<QTextOption::WrapMode>(wrapMode));
}

int KFileItemDelegate_WrapMode(const KFileItemDelegate* self) {
    return static_cast<int>(self->wrapMode());
}

void KFileItemDelegate_SetJobTransfersVisible(KFileItemDelegate* self, bool jobTransfersVisible) {
    self->setJobTransfersVisible(jobTransfersVisible);
}

bool KFileItemDelegate_JobTransfersVisible(const KFileItemDelegate* self) {
    return self->jobTransfersVisible();
}

bool KFileItemDelegate_EventFilter(KFileItemDelegate* self, QObject* object, QEvent* event) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        return self->eventFilter(object, event);
    } else {
        return ((VirtualKFileItemDelegate*)self)->eventFilter(object, event);
    }
}

QRect* KFileItemDelegate_SelectionEmblemRect(const KFileItemDelegate* self) {
    return new QRect(self->selectionEmblemRect());
}

void KFileItemDelegate_SetSelectionEmblemRect(KFileItemDelegate* self, QRect* rect, int iconSize) {
    self->setSelectionEmblemRect(*rect, static_cast<int>(iconSize));
}

KFileItem* KFileItemDelegate_FileItem(const KFileItemDelegate* self, const QModelIndex* index) {
    return new KFileItem(self->fileItem(*index));
}

bool KFileItemDelegate_HelpEvent(KFileItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        return self->helpEvent(event, view, *option, *index);
    } else {
        return ((VirtualKFileItemDelegate*)self)->helpEvent(event, view, *option, *index);
    }
}

QRegion* KFileItemDelegate_Shape(KFileItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return new QRegion(self->shape(*option, *index));
}

libqt_string KFileItemDelegate_Tr2(const char* s, const char* c) {
    QString _ret = KFileItemDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileItemDelegate_Tr3(const char* s, const char* c, int n) {
    QString _ret = KFileItemDelegate::tr(s, c, static_cast<int>(n));
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
int KFileItemDelegate_QBaseMetacall(KFileItemDelegate* self, int param1, int param2, void** param3) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_Metacall_IsBase(true);
        return vkfileitemdelegate->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFileItemDelegate::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnMetacall(KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_Metacall_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KFileItemDelegate_QBaseSizeHint(const KFileItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_SizeHint_IsBase(true);
        return new QSize(vkfileitemdelegate->sizeHint(*option, *index));
    } else {
        return new QSize(((VirtualKFileItemDelegate*)self)->sizeHint(*option, *index));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnSizeHint(const KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_SizeHint_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
void KFileItemDelegate_QBasePaint(const KFileItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_Paint_IsBase(true);
        vkfileitemdelegate->paint(painter, *option, *index);
    } else {
        self->KFileItemDelegate::paint(painter, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnPaint(const KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_Paint_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_Paint_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* KFileItemDelegate_QBaseCreateEditor(const KFileItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_CreateEditor_IsBase(true);
        return vkfileitemdelegate->createEditor(parent, *option, *index);
    } else {
        return self->KFileItemDelegate::createEditor(parent, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnCreateEditor(const KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_CreateEditor_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_CreateEditor_Callback>(slot));
    }
}

// Base class handler implementation
bool KFileItemDelegate_QBaseEditorEvent(KFileItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_EditorEvent_IsBase(true);
        return vkfileitemdelegate->editorEvent(event, model, *option, *index);
    } else {
        return self->KFileItemDelegate::editorEvent(event, model, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnEditorEvent(KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_EditorEvent_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_EditorEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KFileItemDelegate_QBaseSetEditorData(const KFileItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_SetEditorData_IsBase(true);
        vkfileitemdelegate->setEditorData(editor, *index);
    } else {
        self->KFileItemDelegate::setEditorData(editor, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnSetEditorData(const KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_SetEditorData_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_SetEditorData_Callback>(slot));
    }
}

// Base class handler implementation
void KFileItemDelegate_QBaseSetModelData(const KFileItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_SetModelData_IsBase(true);
        vkfileitemdelegate->setModelData(editor, model, *index);
    } else {
        self->KFileItemDelegate::setModelData(editor, model, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnSetModelData(const KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_SetModelData_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_SetModelData_Callback>(slot));
    }
}

// Base class handler implementation
void KFileItemDelegate_QBaseUpdateEditorGeometry(const KFileItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_UpdateEditorGeometry_IsBase(true);
        vkfileitemdelegate->updateEditorGeometry(editor, *option, *index);
    } else {
        self->KFileItemDelegate::updateEditorGeometry(editor, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnUpdateEditorGeometry(const KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_UpdateEditorGeometry_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_UpdateEditorGeometry_Callback>(slot));
    }
}

// Base class handler implementation
bool KFileItemDelegate_QBaseEventFilter(KFileItemDelegate* self, QObject* object, QEvent* event) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_EventFilter_IsBase(true);
        return vkfileitemdelegate->eventFilter(object, event);
    } else {
        return self->KFileItemDelegate::eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnEventFilter(KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_EventFilter_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_EventFilter_Callback>(slot));
    }
}

// Base class handler implementation
bool KFileItemDelegate_QBaseHelpEvent(KFileItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_HelpEvent_IsBase(true);
        return vkfileitemdelegate->helpEvent(event, view, *option, *index);
    } else {
        return self->KFileItemDelegate::helpEvent(event, view, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnHelpEvent(KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_HelpEvent_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_HelpEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileItemDelegate_DestroyEditor(const KFileItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->destroyEditor(editor, *index);
    } else {
        self->KFileItemDelegate::destroyEditor(editor, *index);
    }
}

// Base class handler implementation
void KFileItemDelegate_QBaseDestroyEditor(const KFileItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_DestroyEditor_IsBase(true);
        vkfileitemdelegate->destroyEditor(editor, *index);
    } else {
        self->KFileItemDelegate::destroyEditor(editor, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnDestroyEditor(const KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_DestroyEditor_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_DestroyEditor_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of int */ KFileItemDelegate_PaintingRoles(const KFileItemDelegate* self) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        QList<int> _ret = vkfileitemdelegate->paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<int> _ret = self->KFileItemDelegate::paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of int */ KFileItemDelegate_QBasePaintingRoles(const KFileItemDelegate* self) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_PaintingRoles_IsBase(true);
        QList<int> _ret = vkfileitemdelegate->paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<int> _ret = self->KFileItemDelegate::paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnPaintingRoles(const KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_PaintingRoles_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_PaintingRoles_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileItemDelegate_Event(KFileItemDelegate* self, QEvent* event) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        return vkfileitemdelegate->event(event);
    } else {
        return self->KFileItemDelegate::event(event);
    }
}

// Base class handler implementation
bool KFileItemDelegate_QBaseEvent(KFileItemDelegate* self, QEvent* event) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_Event_IsBase(true);
        return vkfileitemdelegate->event(event);
    } else {
        return self->KFileItemDelegate::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnEvent(KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_Event_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileItemDelegate_TimerEvent(KFileItemDelegate* self, QTimerEvent* event) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->timerEvent(event);
    } else {
        ((VirtualKFileItemDelegate*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFileItemDelegate_QBaseTimerEvent(KFileItemDelegate* self, QTimerEvent* event) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_TimerEvent_IsBase(true);
        vkfileitemdelegate->timerEvent(event);
    } else {
        ((VirtualKFileItemDelegate*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnTimerEvent(KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_TimerEvent_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileItemDelegate_ChildEvent(KFileItemDelegate* self, QChildEvent* event) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->childEvent(event);
    } else {
        ((VirtualKFileItemDelegate*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFileItemDelegate_QBaseChildEvent(KFileItemDelegate* self, QChildEvent* event) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_ChildEvent_IsBase(true);
        vkfileitemdelegate->childEvent(event);
    } else {
        ((VirtualKFileItemDelegate*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnChildEvent(KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_ChildEvent_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileItemDelegate_CustomEvent(KFileItemDelegate* self, QEvent* event) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->customEvent(event);
    } else {
        ((VirtualKFileItemDelegate*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFileItemDelegate_QBaseCustomEvent(KFileItemDelegate* self, QEvent* event) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_CustomEvent_IsBase(true);
        vkfileitemdelegate->customEvent(event);
    } else {
        ((VirtualKFileItemDelegate*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnCustomEvent(KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_CustomEvent_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileItemDelegate_ConnectNotify(KFileItemDelegate* self, const QMetaMethod* signal) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->connectNotify(*signal);
    } else {
        ((VirtualKFileItemDelegate*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFileItemDelegate_QBaseConnectNotify(KFileItemDelegate* self, const QMetaMethod* signal) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_ConnectNotify_IsBase(true);
        vkfileitemdelegate->connectNotify(*signal);
    } else {
        ((VirtualKFileItemDelegate*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnConnectNotify(KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_ConnectNotify_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileItemDelegate_DisconnectNotify(KFileItemDelegate* self, const QMetaMethod* signal) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->disconnectNotify(*signal);
    } else {
        ((VirtualKFileItemDelegate*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFileItemDelegate_QBaseDisconnectNotify(KFileItemDelegate* self, const QMetaMethod* signal) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_DisconnectNotify_IsBase(true);
        vkfileitemdelegate->disconnectNotify(*signal);
    } else {
        ((VirtualKFileItemDelegate*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnDisconnectNotify(KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_DisconnectNotify_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFileItemDelegate_Sender(const KFileItemDelegate* self) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        return vkfileitemdelegate->sender();
    } else {
        return ((VirtualKFileItemDelegate*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFileItemDelegate_QBaseSender(const KFileItemDelegate* self) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_Sender_IsBase(true);
        return vkfileitemdelegate->sender();
    } else {
        return ((VirtualKFileItemDelegate*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnSender(const KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_Sender_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileItemDelegate_SenderSignalIndex(const KFileItemDelegate* self) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        return vkfileitemdelegate->senderSignalIndex();
    } else {
        return ((VirtualKFileItemDelegate*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFileItemDelegate_QBaseSenderSignalIndex(const KFileItemDelegate* self) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_SenderSignalIndex_IsBase(true);
        return vkfileitemdelegate->senderSignalIndex();
    } else {
        return ((VirtualKFileItemDelegate*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnSenderSignalIndex(const KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileItemDelegate_Receivers(const KFileItemDelegate* self, const char* signal) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        return vkfileitemdelegate->receivers(signal);
    } else {
        return ((VirtualKFileItemDelegate*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFileItemDelegate_QBaseReceivers(const KFileItemDelegate* self, const char* signal) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_Receivers_IsBase(true);
        return vkfileitemdelegate->receivers(signal);
    } else {
        return ((VirtualKFileItemDelegate*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnReceivers(const KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_Receivers_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileItemDelegate_IsSignalConnected(const KFileItemDelegate* self, const QMetaMethod* signal) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        return vkfileitemdelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileItemDelegate*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFileItemDelegate_QBaseIsSignalConnected(const KFileItemDelegate* self, const QMetaMethod* signal) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_IsSignalConnected_IsBase(true);
        return vkfileitemdelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileItemDelegate*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnIsSignalConnected(const KFileItemDelegate* self, intptr_t slot) {
    auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self));
    if (vkfileitemdelegate && vkfileitemdelegate->isVirtualKFileItemDelegate) {
        vkfileitemdelegate->setKFileItemDelegate_IsSignalConnected_Callback(reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_IsSignalConnected_Callback>(slot));
    }
}

void KFileItemDelegate_Delete(KFileItemDelegate* self) {
    delete self;
}
