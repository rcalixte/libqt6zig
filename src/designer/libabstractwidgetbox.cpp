#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDesignerDnDItemInterface>
#include <QDesignerWidgetBoxInterface>
#define WORKAROUND_INNER_CLASS_DEFINITION_QDesignerWidgetBoxInterface__Category
#define WORKAROUND_INNER_CLASS_DEFINITION_QDesignerWidgetBoxInterface__Widget
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
#include <abstractwidgetbox.h>
#include "libabstractwidgetbox.h"
#include "libabstractwidgetbox.hxx"

QDesignerWidgetBoxInterface* QDesignerWidgetBoxInterface_new(QWidget* parent) {
    return new VirtualQDesignerWidgetBoxInterface(parent);
}

QDesignerWidgetBoxInterface* QDesignerWidgetBoxInterface_new2() {
    return new VirtualQDesignerWidgetBoxInterface();
}

QDesignerWidgetBoxInterface* QDesignerWidgetBoxInterface_new3(QWidget* parent, int flags) {
    return new VirtualQDesignerWidgetBoxInterface(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QDesignerWidgetBoxInterface_MetaObject(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQDesignerWidgetBoxInterface*)self)->metaObject();
    }
}

void* QDesignerWidgetBoxInterface_Metacast(QDesignerWidgetBoxInterface* self, const char* param1) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->qt_metacast(param1);
    }
}

int QDesignerWidgetBoxInterface_Metacall(QDesignerWidgetBoxInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QDesignerWidgetBoxInterface_CategoryCount(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->categoryCount();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->categoryCount();
    }
}

QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface_Category(const QDesignerWidgetBoxInterface* self, int cat_idx) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return new QDesignerWidgetBoxInterface::Category(vqdesignerwidgetboxinterface->category(static_cast<int>(cat_idx)));
    } else {
        return new QDesignerWidgetBoxInterface::Category(((VirtualQDesignerWidgetBoxInterface*)self)->category(static_cast<int>(cat_idx)));
    }
}

void QDesignerWidgetBoxInterface_AddCategory(QDesignerWidgetBoxInterface* self, const QDesignerWidgetBoxInterface__Category* cat) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->addCategory(*cat);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->addCategory(*cat);
    }
}

void QDesignerWidgetBoxInterface_RemoveCategory(QDesignerWidgetBoxInterface* self, int cat_idx) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->removeCategory(static_cast<int>(cat_idx));
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->removeCategory(static_cast<int>(cat_idx));
    }
}

int QDesignerWidgetBoxInterface_WidgetCount(const QDesignerWidgetBoxInterface* self, int cat_idx) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->widgetCount(static_cast<int>(cat_idx));
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->widgetCount(static_cast<int>(cat_idx));
    }
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface_Widget(const QDesignerWidgetBoxInterface* self, int cat_idx, int wgt_idx) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return new QDesignerWidgetBoxInterface::Widget(vqdesignerwidgetboxinterface->widget(static_cast<int>(cat_idx), static_cast<int>(wgt_idx)));
    } else {
        return new QDesignerWidgetBoxInterface::Widget(((VirtualQDesignerWidgetBoxInterface*)self)->widget(static_cast<int>(cat_idx), static_cast<int>(wgt_idx)));
    }
}

void QDesignerWidgetBoxInterface_AddWidget(QDesignerWidgetBoxInterface* self, int cat_idx, const QDesignerWidgetBoxInterface__Widget* wgt) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->addWidget(static_cast<int>(cat_idx), *wgt);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->addWidget(static_cast<int>(cat_idx), *wgt);
    }
}

void QDesignerWidgetBoxInterface_RemoveWidget(QDesignerWidgetBoxInterface* self, int cat_idx, int wgt_idx) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->removeWidget(static_cast<int>(cat_idx), static_cast<int>(wgt_idx));
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->removeWidget(static_cast<int>(cat_idx), static_cast<int>(wgt_idx));
    }
}

int QDesignerWidgetBoxInterface_FindOrInsertCategory(QDesignerWidgetBoxInterface* self, const libqt_string categoryName) {
    QString categoryName_QString = QString::fromUtf8(categoryName.data, categoryName.len);
    return self->findOrInsertCategory(categoryName_QString);
}

void QDesignerWidgetBoxInterface_DropWidgets(QDesignerWidgetBoxInterface* self, const libqt_list /* of QDesignerDnDItemInterface* */ item_list, const QPoint* global_mouse_pos) {
    QList<QDesignerDnDItemInterface*> item_list_QList;
    item_list_QList.reserve(item_list.len);
    QDesignerDnDItemInterface** item_list_arr = static_cast<QDesignerDnDItemInterface**>(item_list.data);
    for (size_t i = 0; i < item_list.len; ++i) {
        item_list_QList.push_back(item_list_arr[i]);
    }
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->dropWidgets(item_list_QList, *global_mouse_pos);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->dropWidgets(item_list_QList, *global_mouse_pos);
    }
}

void QDesignerWidgetBoxInterface_SetFileName(QDesignerWidgetBoxInterface* self, const libqt_string file_name) {
    QString file_name_QString = QString::fromUtf8(file_name.data, file_name.len);
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setFileName(file_name_QString);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->setFileName(file_name_QString);
    }
}

libqt_string QDesignerWidgetBoxInterface_FileName(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        QString _ret = vqdesignerwidgetboxinterface->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetBoxInterface*)self)->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

bool QDesignerWidgetBoxInterface_Load(QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->load();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->load();
    }
}

bool QDesignerWidgetBoxInterface_Save(QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->save();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->save();
    }
}

// Base class handler implementation
QMetaObject* QDesignerWidgetBoxInterface_SuperMetaObject(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_MetaObject_IsBase(true);
        return (QMetaObject*)vqdesignerwidgetboxinterface->metaObject();
    } else {
        return (QMetaObject*)self->QDesignerWidgetBoxInterface::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMetaObject(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_MetaObject_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QDesignerWidgetBoxInterface_SuperMetacast(QDesignerWidgetBoxInterface* self, const char* param1) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Metacast_IsBase(true);
        return vqdesignerwidgetboxinterface->qt_metacast(param1);
    } else {
        return self->QDesignerWidgetBoxInterface::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMetacast(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Metacast_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerWidgetBoxInterface_SuperMetacall(QDesignerWidgetBoxInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Metacall_IsBase(true);
        return vqdesignerwidgetboxinterface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDesignerWidgetBoxInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMetacall(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Metacall_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerWidgetBoxInterface_SuperCategoryCount(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_CategoryCount_IsBase(true);
        return vqdesignerwidgetboxinterface->categoryCount();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->categoryCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnCategoryCount(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_CategoryCount_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_CategoryCount_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface_SuperCategory(const QDesignerWidgetBoxInterface* self, int cat_idx) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Category_IsBase(true);
        return new QDesignerWidgetBoxInterface::Category(vqdesignerwidgetboxinterface->category(static_cast<int>(cat_idx)));
    } else {
        return new QDesignerWidgetBoxInterface::Category(((VirtualQDesignerWidgetBoxInterface*)self)->category(static_cast<int>(cat_idx)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnCategory(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Category_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Category_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperAddCategory(QDesignerWidgetBoxInterface* self, const QDesignerWidgetBoxInterface__Category* cat) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_AddCategory_IsBase(true);
        vqdesignerwidgetboxinterface->addCategory(*cat);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->addCategory(*cat);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnAddCategory(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_AddCategory_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_AddCategory_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperRemoveCategory(QDesignerWidgetBoxInterface* self, int cat_idx) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_RemoveCategory_IsBase(true);
        vqdesignerwidgetboxinterface->removeCategory(static_cast<int>(cat_idx));
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->removeCategory(static_cast<int>(cat_idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnRemoveCategory(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_RemoveCategory_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_RemoveCategory_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerWidgetBoxInterface_SuperWidgetCount(const QDesignerWidgetBoxInterface* self, int cat_idx) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_WidgetCount_IsBase(true);
        return vqdesignerwidgetboxinterface->widgetCount(static_cast<int>(cat_idx));
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->widgetCount(static_cast<int>(cat_idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnWidgetCount(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_WidgetCount_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_WidgetCount_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface_SuperWidget(const QDesignerWidgetBoxInterface* self, int cat_idx, int wgt_idx) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Widget_IsBase(true);
        return new QDesignerWidgetBoxInterface::Widget(vqdesignerwidgetboxinterface->widget(static_cast<int>(cat_idx), static_cast<int>(wgt_idx)));
    } else {
        return new QDesignerWidgetBoxInterface::Widget(((VirtualQDesignerWidgetBoxInterface*)self)->widget(static_cast<int>(cat_idx), static_cast<int>(wgt_idx)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnWidget(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Widget_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Widget_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperAddWidget(QDesignerWidgetBoxInterface* self, int cat_idx, const QDesignerWidgetBoxInterface__Widget* wgt) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_AddWidget_IsBase(true);
        vqdesignerwidgetboxinterface->addWidget(static_cast<int>(cat_idx), *wgt);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->addWidget(static_cast<int>(cat_idx), *wgt);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnAddWidget(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_AddWidget_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_AddWidget_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperRemoveWidget(QDesignerWidgetBoxInterface* self, int cat_idx, int wgt_idx) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_RemoveWidget_IsBase(true);
        vqdesignerwidgetboxinterface->removeWidget(static_cast<int>(cat_idx), static_cast<int>(wgt_idx));
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->removeWidget(static_cast<int>(cat_idx), static_cast<int>(wgt_idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnRemoveWidget(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_RemoveWidget_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_RemoveWidget_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperDropWidgets(QDesignerWidgetBoxInterface* self, const libqt_list /* of QDesignerDnDItemInterface* */ item_list, const QPoint* global_mouse_pos) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    QList<QDesignerDnDItemInterface*> item_list_QList;
    item_list_QList.reserve(item_list.len);
    QDesignerDnDItemInterface** item_list_arr = static_cast<QDesignerDnDItemInterface**>(item_list.data);
    for (size_t i = 0; i < item_list.len; ++i) {
        item_list_QList.push_back(item_list_arr[i]);
    }
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_DropWidgets_IsBase(true);
        vqdesignerwidgetboxinterface->dropWidgets(item_list_QList, *global_mouse_pos);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->dropWidgets(item_list_QList, *global_mouse_pos);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnDropWidgets(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_DropWidgets_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_DropWidgets_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperSetFileName(QDesignerWidgetBoxInterface* self, const libqt_string file_name) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    QString file_name_QString = QString::fromUtf8(file_name.data, file_name.len);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_SetFileName_IsBase(true);
        vqdesignerwidgetboxinterface->setFileName(file_name_QString);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->setFileName(file_name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnSetFileName(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_SetFileName_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_SetFileName_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerWidgetBoxInterface_SuperFileName(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_FileName_IsBase(true);
        QString _ret = vqdesignerwidgetboxinterface->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetBoxInterface*)self)->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnFileName(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_FileName_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_FileName_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerWidgetBoxInterface_SuperLoad(QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Load_IsBase(true);
        return vqdesignerwidgetboxinterface->load();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->load();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnLoad(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Load_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Load_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerWidgetBoxInterface_SuperSave(QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Save_IsBase(true);
        return vqdesignerwidgetboxinterface->save();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->save();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnSave(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Save_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Save_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerWidgetBoxInterface_DevType(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->devType();
    } else {
        return self->QDesignerWidgetBoxInterface::devType();
    }
}

// Base class handler implementation
int QDesignerWidgetBoxInterface_SuperDevType(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_DevType_IsBase(true);
        return vqdesignerwidgetboxinterface->devType();
    } else {
        return self->QDesignerWidgetBoxInterface::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnDevType(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_DevType_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_SetVisible(QDesignerWidgetBoxInterface* self, bool visible) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setVisible(visible);
    } else {
        self->QDesignerWidgetBoxInterface::setVisible(visible);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperSetVisible(QDesignerWidgetBoxInterface* self, bool visible) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_SetVisible_IsBase(true);
        vqdesignerwidgetboxinterface->setVisible(visible);
    } else {
        self->QDesignerWidgetBoxInterface::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnSetVisible(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_SetVisible_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDesignerWidgetBoxInterface_SizeHint(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return new QSize(vqdesignerwidgetboxinterface->sizeHint());
    } else {
        return new QSize(((VirtualQDesignerWidgetBoxInterface*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QDesignerWidgetBoxInterface_SuperSizeHint(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_SizeHint_IsBase(true);
        return new QSize(vqdesignerwidgetboxinterface->sizeHint());
    } else {
        return new QSize(((VirtualQDesignerWidgetBoxInterface*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnSizeHint(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_SizeHint_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDesignerWidgetBoxInterface_MinimumSizeHint(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return new QSize(vqdesignerwidgetboxinterface->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDesignerWidgetBoxInterface*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDesignerWidgetBoxInterface_SuperMinimumSizeHint(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_MinimumSizeHint_IsBase(true);
        return new QSize(vqdesignerwidgetboxinterface->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDesignerWidgetBoxInterface*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMinimumSizeHint(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerWidgetBoxInterface_HeightForWidth(const QDesignerWidgetBoxInterface* self, int param1) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDesignerWidgetBoxInterface::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDesignerWidgetBoxInterface_SuperHeightForWidth(const QDesignerWidgetBoxInterface* self, int param1) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_HeightForWidth_IsBase(true);
        return vqdesignerwidgetboxinterface->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDesignerWidgetBoxInterface::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnHeightForWidth(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_HeightForWidth_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerWidgetBoxInterface_HasHeightForWidth(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->hasHeightForWidth();
    } else {
        return self->QDesignerWidgetBoxInterface::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDesignerWidgetBoxInterface_SuperHasHeightForWidth(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_HasHeightForWidth_IsBase(true);
        return vqdesignerwidgetboxinterface->hasHeightForWidth();
    } else {
        return self->QDesignerWidgetBoxInterface::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnHasHeightForWidth(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDesignerWidgetBoxInterface_PaintEngine(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->paintEngine();
    } else {
        return self->QDesignerWidgetBoxInterface::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDesignerWidgetBoxInterface_SuperPaintEngine(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_PaintEngine_IsBase(true);
        return vqdesignerwidgetboxinterface->paintEngine();
    } else {
        return self->QDesignerWidgetBoxInterface::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnPaintEngine(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_PaintEngine_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerWidgetBoxInterface_Event(QDesignerWidgetBoxInterface* self, QEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->event(event);
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->event(event);
    }
}

// Base class handler implementation
bool QDesignerWidgetBoxInterface_SuperEvent(QDesignerWidgetBoxInterface* self, QEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Event_IsBase(true);
        return vqdesignerwidgetboxinterface->event(event);
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Event_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_MousePressEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->mousePressEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperMousePressEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_MousePressEvent_IsBase(true);
        vqdesignerwidgetboxinterface->mousePressEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMousePressEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_MousePressEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_MouseReleaseEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->mouseReleaseEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperMouseReleaseEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_MouseReleaseEvent_IsBase(true);
        vqdesignerwidgetboxinterface->mouseReleaseEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMouseReleaseEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_MouseDoubleClickEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperMouseDoubleClickEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_MouseDoubleClickEvent_IsBase(true);
        vqdesignerwidgetboxinterface->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMouseDoubleClickEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_MouseMoveEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->mouseMoveEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperMouseMoveEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_MouseMoveEvent_IsBase(true);
        vqdesignerwidgetboxinterface->mouseMoveEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMouseMoveEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_WheelEvent(QDesignerWidgetBoxInterface* self, QWheelEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->wheelEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperWheelEvent(QDesignerWidgetBoxInterface* self, QWheelEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_WheelEvent_IsBase(true);
        vqdesignerwidgetboxinterface->wheelEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnWheelEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_WheelEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_KeyPressEvent(QDesignerWidgetBoxInterface* self, QKeyEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->keyPressEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperKeyPressEvent(QDesignerWidgetBoxInterface* self, QKeyEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_KeyPressEvent_IsBase(true);
        vqdesignerwidgetboxinterface->keyPressEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnKeyPressEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_KeyPressEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_KeyReleaseEvent(QDesignerWidgetBoxInterface* self, QKeyEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->keyReleaseEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperKeyReleaseEvent(QDesignerWidgetBoxInterface* self, QKeyEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_KeyReleaseEvent_IsBase(true);
        vqdesignerwidgetboxinterface->keyReleaseEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnKeyReleaseEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_FocusInEvent(QDesignerWidgetBoxInterface* self, QFocusEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->focusInEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperFocusInEvent(QDesignerWidgetBoxInterface* self, QFocusEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_FocusInEvent_IsBase(true);
        vqdesignerwidgetboxinterface->focusInEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnFocusInEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_FocusInEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_FocusOutEvent(QDesignerWidgetBoxInterface* self, QFocusEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->focusOutEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperFocusOutEvent(QDesignerWidgetBoxInterface* self, QFocusEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_FocusOutEvent_IsBase(true);
        vqdesignerwidgetboxinterface->focusOutEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnFocusOutEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_FocusOutEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_EnterEvent(QDesignerWidgetBoxInterface* self, QEnterEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->enterEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperEnterEvent(QDesignerWidgetBoxInterface* self, QEnterEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_EnterEvent_IsBase(true);
        vqdesignerwidgetboxinterface->enterEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnEnterEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_EnterEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_LeaveEvent(QDesignerWidgetBoxInterface* self, QEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->leaveEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperLeaveEvent(QDesignerWidgetBoxInterface* self, QEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_LeaveEvent_IsBase(true);
        vqdesignerwidgetboxinterface->leaveEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnLeaveEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_LeaveEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_PaintEvent(QDesignerWidgetBoxInterface* self, QPaintEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->paintEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperPaintEvent(QDesignerWidgetBoxInterface* self, QPaintEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_PaintEvent_IsBase(true);
        vqdesignerwidgetboxinterface->paintEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnPaintEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_PaintEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_MoveEvent(QDesignerWidgetBoxInterface* self, QMoveEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->moveEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperMoveEvent(QDesignerWidgetBoxInterface* self, QMoveEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_MoveEvent_IsBase(true);
        vqdesignerwidgetboxinterface->moveEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMoveEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_MoveEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_ResizeEvent(QDesignerWidgetBoxInterface* self, QResizeEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->resizeEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperResizeEvent(QDesignerWidgetBoxInterface* self, QResizeEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_ResizeEvent_IsBase(true);
        vqdesignerwidgetboxinterface->resizeEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnResizeEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_ResizeEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_CloseEvent(QDesignerWidgetBoxInterface* self, QCloseEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->closeEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperCloseEvent(QDesignerWidgetBoxInterface* self, QCloseEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_CloseEvent_IsBase(true);
        vqdesignerwidgetboxinterface->closeEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnCloseEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_CloseEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_ContextMenuEvent(QDesignerWidgetBoxInterface* self, QContextMenuEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->contextMenuEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperContextMenuEvent(QDesignerWidgetBoxInterface* self, QContextMenuEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_ContextMenuEvent_IsBase(true);
        vqdesignerwidgetboxinterface->contextMenuEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnContextMenuEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_TabletEvent(QDesignerWidgetBoxInterface* self, QTabletEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->tabletEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperTabletEvent(QDesignerWidgetBoxInterface* self, QTabletEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_TabletEvent_IsBase(true);
        vqdesignerwidgetboxinterface->tabletEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnTabletEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_TabletEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_ActionEvent(QDesignerWidgetBoxInterface* self, QActionEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->actionEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperActionEvent(QDesignerWidgetBoxInterface* self, QActionEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_ActionEvent_IsBase(true);
        vqdesignerwidgetboxinterface->actionEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnActionEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_ActionEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_DragEnterEvent(QDesignerWidgetBoxInterface* self, QDragEnterEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->dragEnterEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperDragEnterEvent(QDesignerWidgetBoxInterface* self, QDragEnterEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_DragEnterEvent_IsBase(true);
        vqdesignerwidgetboxinterface->dragEnterEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnDragEnterEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_DragEnterEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_DragMoveEvent(QDesignerWidgetBoxInterface* self, QDragMoveEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->dragMoveEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperDragMoveEvent(QDesignerWidgetBoxInterface* self, QDragMoveEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_DragMoveEvent_IsBase(true);
        vqdesignerwidgetboxinterface->dragMoveEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnDragMoveEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_DragMoveEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_DragLeaveEvent(QDesignerWidgetBoxInterface* self, QDragLeaveEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->dragLeaveEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperDragLeaveEvent(QDesignerWidgetBoxInterface* self, QDragLeaveEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_DragLeaveEvent_IsBase(true);
        vqdesignerwidgetboxinterface->dragLeaveEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnDragLeaveEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_DropEvent(QDesignerWidgetBoxInterface* self, QDropEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->dropEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperDropEvent(QDesignerWidgetBoxInterface* self, QDropEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_DropEvent_IsBase(true);
        vqdesignerwidgetboxinterface->dropEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnDropEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_DropEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_ShowEvent(QDesignerWidgetBoxInterface* self, QShowEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->showEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperShowEvent(QDesignerWidgetBoxInterface* self, QShowEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_ShowEvent_IsBase(true);
        vqdesignerwidgetboxinterface->showEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnShowEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_ShowEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_HideEvent(QDesignerWidgetBoxInterface* self, QHideEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->hideEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperHideEvent(QDesignerWidgetBoxInterface* self, QHideEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_HideEvent_IsBase(true);
        vqdesignerwidgetboxinterface->hideEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnHideEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_HideEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerWidgetBoxInterface_NativeEvent(QDesignerWidgetBoxInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDesignerWidgetBoxInterface_SuperNativeEvent(QDesignerWidgetBoxInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_NativeEvent_IsBase(true);
        return vqdesignerwidgetboxinterface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnNativeEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_NativeEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_ChangeEvent(QDesignerWidgetBoxInterface* self, QEvent* param1) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->changeEvent(param1);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperChangeEvent(QDesignerWidgetBoxInterface* self, QEvent* param1) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_ChangeEvent_IsBase(true);
        vqdesignerwidgetboxinterface->changeEvent(param1);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnChangeEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_ChangeEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerWidgetBoxInterface_Metric(const QDesignerWidgetBoxInterface* self, int param1) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDesignerWidgetBoxInterface_SuperMetric(const QDesignerWidgetBoxInterface* self, int param1) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Metric_IsBase(true);
        return vqdesignerwidgetboxinterface->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMetric(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Metric_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_InitPainter(const QDesignerWidgetBoxInterface* self, QPainter* painter) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->initPainter(painter);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperInitPainter(const QDesignerWidgetBoxInterface* self, QPainter* painter) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_InitPainter_IsBase(true);
        vqdesignerwidgetboxinterface->initPainter(painter);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnInitPainter(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_InitPainter_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDesignerWidgetBoxInterface_Redirected(const QDesignerWidgetBoxInterface* self, QPoint* offset) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->redirected(offset);
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDesignerWidgetBoxInterface_SuperRedirected(const QDesignerWidgetBoxInterface* self, QPoint* offset) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Redirected_IsBase(true);
        return vqdesignerwidgetboxinterface->redirected(offset);
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnRedirected(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Redirected_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDesignerWidgetBoxInterface_SharedPainter(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->sharedPainter();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDesignerWidgetBoxInterface_SuperSharedPainter(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_SharedPainter_IsBase(true);
        return vqdesignerwidgetboxinterface->sharedPainter();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnSharedPainter(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_SharedPainter_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_InputMethodEvent(QDesignerWidgetBoxInterface* self, QInputMethodEvent* param1) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->inputMethodEvent(param1);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperInputMethodEvent(QDesignerWidgetBoxInterface* self, QInputMethodEvent* param1) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_InputMethodEvent_IsBase(true);
        vqdesignerwidgetboxinterface->inputMethodEvent(param1);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnInputMethodEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_InputMethodEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDesignerWidgetBoxInterface_InputMethodQuery(const QDesignerWidgetBoxInterface* self, int param1) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return new QVariant(vqdesignerwidgetboxinterface->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDesignerWidgetBoxInterface*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDesignerWidgetBoxInterface_SuperInputMethodQuery(const QDesignerWidgetBoxInterface* self, int param1) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_InputMethodQuery_IsBase(true);
        return new QVariant(vqdesignerwidgetboxinterface->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDesignerWidgetBoxInterface*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnInputMethodQuery(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_InputMethodQuery_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerWidgetBoxInterface_FocusNextPrevChild(QDesignerWidgetBoxInterface* self, bool next) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->focusNextPrevChild(next);
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDesignerWidgetBoxInterface_SuperFocusNextPrevChild(QDesignerWidgetBoxInterface* self, bool next) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_FocusNextPrevChild_IsBase(true);
        return vqdesignerwidgetboxinterface->focusNextPrevChild(next);
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnFocusNextPrevChild(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerWidgetBoxInterface_EventFilter(QDesignerWidgetBoxInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerWidgetBoxInterface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDesignerWidgetBoxInterface_SuperEventFilter(QDesignerWidgetBoxInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_EventFilter_IsBase(true);
        return vqdesignerwidgetboxinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerWidgetBoxInterface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnEventFilter(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_EventFilter_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_TimerEvent(QDesignerWidgetBoxInterface* self, QTimerEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperTimerEvent(QDesignerWidgetBoxInterface* self, QTimerEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_TimerEvent_IsBase(true);
        vqdesignerwidgetboxinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnTimerEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_TimerEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_ChildEvent(QDesignerWidgetBoxInterface* self, QChildEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->childEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperChildEvent(QDesignerWidgetBoxInterface* self, QChildEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_ChildEvent_IsBase(true);
        vqdesignerwidgetboxinterface->childEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnChildEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_ChildEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_CustomEvent(QDesignerWidgetBoxInterface* self, QEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->customEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperCustomEvent(QDesignerWidgetBoxInterface* self, QEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_CustomEvent_IsBase(true);
        vqdesignerwidgetboxinterface->customEvent(event);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnCustomEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_CustomEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_ConnectNotify(QDesignerWidgetBoxInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperConnectNotify(QDesignerWidgetBoxInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_ConnectNotify_IsBase(true);
        vqdesignerwidgetboxinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnConnectNotify(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_ConnectNotify_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_DisconnectNotify(QDesignerWidgetBoxInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperDisconnectNotify(QDesignerWidgetBoxInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_DisconnectNotify_IsBase(true);
        vqdesignerwidgetboxinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnDisconnectNotify(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_DisconnectNotify_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_UpdateMicroFocus(QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->updateMicroFocus();
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperUpdateMicroFocus(QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_UpdateMicroFocus_IsBase(true);
        vqdesignerwidgetboxinterface->updateMicroFocus();
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnUpdateMicroFocus(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_Create(QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->create();
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->create();
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperCreate(QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Create_IsBase(true);
        vqdesignerwidgetboxinterface->create();
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnCreate(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Create_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_Destroy(QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->destroy();
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->destroy();
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperDestroy(QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Destroy_IsBase(true);
        vqdesignerwidgetboxinterface->destroy();
    } else {
        ((VirtualQDesignerWidgetBoxInterface*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnDestroy(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Destroy_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerWidgetBoxInterface_FocusNextChild(QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->focusNextChild();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QDesignerWidgetBoxInterface_SuperFocusNextChild(QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_FocusNextChild_IsBase(true);
        return vqdesignerwidgetboxinterface->focusNextChild();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnFocusNextChild(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_FocusNextChild_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerWidgetBoxInterface_FocusPreviousChild(QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->focusPreviousChild();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDesignerWidgetBoxInterface_SuperFocusPreviousChild(QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_FocusPreviousChild_IsBase(true);
        return vqdesignerwidgetboxinterface->focusPreviousChild();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnFocusPreviousChild(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDesignerWidgetBoxInterface_Sender(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->sender();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDesignerWidgetBoxInterface_SuperSender(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Sender_IsBase(true);
        return vqdesignerwidgetboxinterface->sender();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnSender(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Sender_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerWidgetBoxInterface_SenderSignalIndex(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDesignerWidgetBoxInterface_SuperSenderSignalIndex(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_SenderSignalIndex_IsBase(true);
        return vqdesignerwidgetboxinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnSenderSignalIndex(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerWidgetBoxInterface_Receivers(const QDesignerWidgetBoxInterface* self, const char* signal) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDesignerWidgetBoxInterface_SuperReceivers(const QDesignerWidgetBoxInterface* self, const char* signal) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Receivers_IsBase(true);
        return vqdesignerwidgetboxinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnReceivers(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_Receivers_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerWidgetBoxInterface_IsSignalConnected(const QDesignerWidgetBoxInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDesignerWidgetBoxInterface_SuperIsSignalConnected(const QDesignerWidgetBoxInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_IsSignalConnected_IsBase(true);
        return vqdesignerwidgetboxinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnIsSignalConnected(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_IsSignalConnected_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QDesignerWidgetBoxInterface_GetDecodedMetricF(const QDesignerWidgetBoxInterface* self, int metricA, int metricB) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        return vqdesignerwidgetboxinterface->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QDesignerWidgetBoxInterface_SuperGetDecodedMetricF(const QDesignerWidgetBoxInterface* self, int metricA, int metricB) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_GetDecodedMetricF_IsBase(true);
        return vqdesignerwidgetboxinterface->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDesignerWidgetBoxInterface*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnGetDecodedMetricF(const QDesignerWidgetBoxInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface && vqdesignerwidgetboxinterface->isVirtualQDesignerWidgetBoxInterface) {
        vqdesignerwidgetboxinterface->setQDesignerWidgetBoxInterface_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_GetDecodedMetricF_Callback>(slot));
    }
}

void QDesignerWidgetBoxInterface_Delete(QDesignerWidgetBoxInterface* self) {
    delete self;
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new() {
    return new QDesignerWidgetBoxInterface::Widget();
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new2(const QDesignerWidgetBoxInterface__Widget* w) {
    return new QDesignerWidgetBoxInterface::Widget(*w);
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new3(const libqt_string aname) {
    QString aname_QString = QString::fromUtf8(aname.data, aname.len);
    return new QDesignerWidgetBoxInterface::Widget(aname_QString);
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new4(const libqt_string aname, const libqt_string xml) {
    QString aname_QString = QString::fromUtf8(aname.data, aname.len);
    QString xml_QString = QString::fromUtf8(xml.data, xml.len);
    return new QDesignerWidgetBoxInterface::Widget(aname_QString, xml_QString);
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new5(const libqt_string aname, const libqt_string xml, const libqt_string icon_name) {
    QString aname_QString = QString::fromUtf8(aname.data, aname.len);
    QString xml_QString = QString::fromUtf8(xml.data, xml.len);
    QString icon_name_QString = QString::fromUtf8(icon_name.data, icon_name.len);
    return new QDesignerWidgetBoxInterface::Widget(aname_QString, xml_QString, icon_name_QString);
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Widget_new6(const libqt_string aname, const libqt_string xml, const libqt_string icon_name, int atype) {
    QString aname_QString = QString::fromUtf8(aname.data, aname.len);
    QString xml_QString = QString::fromUtf8(xml.data, xml.len);
    QString icon_name_QString = QString::fromUtf8(icon_name.data, icon_name.len);
    return new QDesignerWidgetBoxInterface::Widget(aname_QString, xml_QString, icon_name_QString, static_cast<QDesignerWidgetBoxInterface::Widget::Type>(atype));
}

void QDesignerWidgetBoxInterface__Widget_OperatorAssign(QDesignerWidgetBoxInterface__Widget* self, const QDesignerWidgetBoxInterface__Widget* w) {
    self->operator=(*w);
}

libqt_string QDesignerWidgetBoxInterface__Widget_Name(const QDesignerWidgetBoxInterface__Widget* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerWidgetBoxInterface__Widget_SetName(QDesignerWidgetBoxInterface__Widget* self, const libqt_string aname) {
    QString aname_QString = QString::fromUtf8(aname.data, aname.len);
    self->setName(aname_QString);
}

libqt_string QDesignerWidgetBoxInterface__Widget_DomXml(const QDesignerWidgetBoxInterface__Widget* self) {
    QString _ret = self->domXml();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerWidgetBoxInterface__Widget_SetDomXml(QDesignerWidgetBoxInterface__Widget* self, const libqt_string xml) {
    QString xml_QString = QString::fromUtf8(xml.data, xml.len);
    self->setDomXml(xml_QString);
}

libqt_string QDesignerWidgetBoxInterface__Widget_IconName(const QDesignerWidgetBoxInterface__Widget* self) {
    QString _ret = self->iconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerWidgetBoxInterface__Widget_SetIconName(QDesignerWidgetBoxInterface__Widget* self, const libqt_string icon_name) {
    QString icon_name_QString = QString::fromUtf8(icon_name.data, icon_name.len);
    self->setIconName(icon_name_QString);
}

int QDesignerWidgetBoxInterface__Widget_Type(const QDesignerWidgetBoxInterface__Widget* self) {
    return static_cast<int>(self->type());
}

void QDesignerWidgetBoxInterface__Widget_SetType(QDesignerWidgetBoxInterface__Widget* self, int atype) {
    self->setType(static_cast<QDesignerWidgetBoxInterface::Widget::Type>(atype));
}

bool QDesignerWidgetBoxInterface__Widget_IsNull(const QDesignerWidgetBoxInterface__Widget* self) {
    return self->isNull();
}

void QDesignerWidgetBoxInterface__Widget_Delete(QDesignerWidgetBoxInterface__Widget* self) {
    delete self;
}

QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface__Category_new() {
    return new QDesignerWidgetBoxInterface::Category();
}

QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface__Category_new2(const QDesignerWidgetBoxInterface__Category* param1) {
    return new QDesignerWidgetBoxInterface::Category(*param1);
}

QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface__Category_new3(const libqt_string aname) {
    QString aname_QString = QString::fromUtf8(aname.data, aname.len);
    return new QDesignerWidgetBoxInterface::Category(aname_QString);
}

QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface__Category_new4(const libqt_string aname, int atype) {
    QString aname_QString = QString::fromUtf8(aname.data, aname.len);
    return new QDesignerWidgetBoxInterface::Category(aname_QString, static_cast<QDesignerWidgetBoxInterface::Category::Type>(atype));
}

libqt_string QDesignerWidgetBoxInterface__Category_Name(const QDesignerWidgetBoxInterface__Category* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerWidgetBoxInterface__Category_SetName(QDesignerWidgetBoxInterface__Category* self, const libqt_string aname) {
    QString aname_QString = QString::fromUtf8(aname.data, aname.len);
    self->setName(aname_QString);
}

int QDesignerWidgetBoxInterface__Category_WidgetCount(const QDesignerWidgetBoxInterface__Category* self) {
    return self->widgetCount();
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface__Category_Widget(const QDesignerWidgetBoxInterface__Category* self, int idx) {
    return new QDesignerWidgetBoxInterface::Widget(self->widget(static_cast<int>(idx)));
}

void QDesignerWidgetBoxInterface__Category_RemoveWidget(QDesignerWidgetBoxInterface__Category* self, int idx) {
    self->removeWidget(static_cast<int>(idx));
}

void QDesignerWidgetBoxInterface__Category_AddWidget(QDesignerWidgetBoxInterface__Category* self, const QDesignerWidgetBoxInterface__Widget* awidget) {
    self->addWidget(*awidget);
}

int QDesignerWidgetBoxInterface__Category_Type(const QDesignerWidgetBoxInterface__Category* self) {
    return static_cast<int>(self->type());
}

void QDesignerWidgetBoxInterface__Category_SetType(QDesignerWidgetBoxInterface__Category* self, int atype) {
    self->setType(static_cast<QDesignerWidgetBoxInterface::Category::Type>(atype));
}

bool QDesignerWidgetBoxInterface__Category_IsNull(const QDesignerWidgetBoxInterface__Category* self) {
    return self->isNull();
}

void QDesignerWidgetBoxInterface__Category_Delete(QDesignerWidgetBoxInterface__Category* self) {
    delete self;
}
