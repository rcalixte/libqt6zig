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
    return (QMetaObject*)self->metaObject();
}

void* QDesignerWidgetBoxInterface_Metacast(QDesignerWidgetBoxInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDesignerWidgetBoxInterface_Metacall(QDesignerWidgetBoxInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDesignerWidgetBoxInterface_Tr(const char* s) {
    auto _ret = QDesignerWidgetBoxInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDesignerWidgetBoxInterface_CategoryCount(const QDesignerWidgetBoxInterface* self) {
    return self->categoryCount();
}

QDesignerWidgetBoxInterface__Category* QDesignerWidgetBoxInterface_Category(const QDesignerWidgetBoxInterface* self, int cat_idx) {
    return new QDesignerWidgetBoxInterface::Category(self->category(static_cast<int>(cat_idx)));
}

void QDesignerWidgetBoxInterface_AddCategory(QDesignerWidgetBoxInterface* self, const QDesignerWidgetBoxInterface__Category* cat) {
    self->addCategory(*cat);
}

void QDesignerWidgetBoxInterface_RemoveCategory(QDesignerWidgetBoxInterface* self, int cat_idx) {
    self->removeCategory(static_cast<int>(cat_idx));
}

int QDesignerWidgetBoxInterface_WidgetCount(const QDesignerWidgetBoxInterface* self, int cat_idx) {
    return self->widgetCount(static_cast<int>(cat_idx));
}

QDesignerWidgetBoxInterface__Widget* QDesignerWidgetBoxInterface_Widget(const QDesignerWidgetBoxInterface* self, int cat_idx, int wgt_idx) {
    return new QDesignerWidgetBoxInterface::Widget(self->widget(static_cast<int>(cat_idx), static_cast<int>(wgt_idx)));
}

void QDesignerWidgetBoxInterface_AddWidget(QDesignerWidgetBoxInterface* self, int cat_idx, const QDesignerWidgetBoxInterface__Widget* wgt) {
    self->addWidget(static_cast<int>(cat_idx), *wgt);
}

void QDesignerWidgetBoxInterface_RemoveWidget(QDesignerWidgetBoxInterface* self, int cat_idx, int wgt_idx) {
    self->removeWidget(static_cast<int>(cat_idx), static_cast<int>(wgt_idx));
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
    self->dropWidgets(item_list_QList, *global_mouse_pos);
}

void QDesignerWidgetBoxInterface_SetFileName(QDesignerWidgetBoxInterface* self, const libqt_string file_name) {
    QString file_name_QString = QString::fromUtf8(file_name.data, file_name.len);
    self->setFileName(file_name_QString);
}

libqt_string QDesignerWidgetBoxInterface_FileName(const QDesignerWidgetBoxInterface* self) {
    auto _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QDesignerWidgetBoxInterface_Load(QDesignerWidgetBoxInterface* self) {
    return self->load();
}

bool QDesignerWidgetBoxInterface_Save(QDesignerWidgetBoxInterface* self) {
    return self->save();
}

libqt_string QDesignerWidgetBoxInterface_Tr2(const char* s, const char* c) {
    auto _ret = QDesignerWidgetBoxInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerWidgetBoxInterface_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDesignerWidgetBoxInterface::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDesignerWidgetBoxInterface_SuperMetaObject(const QDesignerWidgetBoxInterface* self) {
    return (QMetaObject*)self->QDesignerWidgetBoxInterface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMetaObject(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_metaobject_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDesignerWidgetBoxInterface_SuperMetacast(QDesignerWidgetBoxInterface* self, const char* param1) {
    return self->QDesignerWidgetBoxInterface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMetacast(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_metacast_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDesignerWidgetBoxInterface_SuperMetacall(QDesignerWidgetBoxInterface* self, int param1, int param2, void** param3) {
    return self->QDesignerWidgetBoxInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMetacall(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_metacall_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnCategoryCount(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_categorycount_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_CategoryCount_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnCategory(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_category_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Category_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnAddCategory(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_addcategory_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_AddCategory_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnRemoveCategory(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_removecategory_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_RemoveCategory_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnWidgetCount(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_widgetcount_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_WidgetCount_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnWidget(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_widget_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Widget_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnAddWidget(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_addwidget_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_AddWidget_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnRemoveWidget(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_removewidget_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_RemoveWidget_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnDropWidgets(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_dropwidgets_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_DropWidgets_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnSetFileName(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_setfilename_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_SetFileName_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnFileName(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_filename_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_FileName_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnLoad(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_load_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Load_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnSave(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_save_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Save_Callback>(slot);
}

// Derived class handler implementation
int QDesignerWidgetBoxInterface_DevType(const QDesignerWidgetBoxInterface* self) {
    return self->devType();
}

// Base class handler implementation
int QDesignerWidgetBoxInterface_SuperDevType(const QDesignerWidgetBoxInterface* self) {
    return self->QDesignerWidgetBoxInterface::devType();
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnDevType(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_devtype_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_DevType_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_SetVisible(QDesignerWidgetBoxInterface* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperSetVisible(QDesignerWidgetBoxInterface* self, bool visible) {
    self->QDesignerWidgetBoxInterface::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnSetVisible(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_setvisible_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QDesignerWidgetBoxInterface_SizeHint(const QDesignerWidgetBoxInterface* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QDesignerWidgetBoxInterface_SuperSizeHint(const QDesignerWidgetBoxInterface* self) {
    return new QSize(self->QDesignerWidgetBoxInterface::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnSizeHint(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_sizehint_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QDesignerWidgetBoxInterface_MinimumSizeHint(const QDesignerWidgetBoxInterface* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QDesignerWidgetBoxInterface_SuperMinimumSizeHint(const QDesignerWidgetBoxInterface* self) {
    return new QSize(self->QDesignerWidgetBoxInterface::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMinimumSizeHint(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_minimumsizehint_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QDesignerWidgetBoxInterface_HeightForWidth(const QDesignerWidgetBoxInterface* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QDesignerWidgetBoxInterface_SuperHeightForWidth(const QDesignerWidgetBoxInterface* self, int param1) {
    return self->QDesignerWidgetBoxInterface::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnHeightForWidth(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_heightforwidth_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerWidgetBoxInterface_HasHeightForWidth(const QDesignerWidgetBoxInterface* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QDesignerWidgetBoxInterface_SuperHasHeightForWidth(const QDesignerWidgetBoxInterface* self) {
    return self->QDesignerWidgetBoxInterface::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnHasHeightForWidth(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_hasheightforwidth_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QDesignerWidgetBoxInterface_PaintEngine(const QDesignerWidgetBoxInterface* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QDesignerWidgetBoxInterface_SuperPaintEngine(const QDesignerWidgetBoxInterface* self) {
    return self->QDesignerWidgetBoxInterface::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnPaintEngine(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_paintengine_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerWidgetBoxInterface_Event(QDesignerWidgetBoxInterface* self, QEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        return vqdesignerwidgetboxinterface->event(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDesignerWidgetBoxInterface_SuperEvent(QDesignerWidgetBoxInterface* self, QEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        return vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::event(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_event_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Event_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_MousePressEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperMousePressEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMousePressEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_mousepressevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_MouseReleaseEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperMouseReleaseEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMouseReleaseEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_mousereleaseevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_MouseDoubleClickEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperMouseDoubleClickEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMouseDoubleClickEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_mousedoubleclickevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_MouseMoveEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperMouseMoveEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMouseMoveEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_mousemoveevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_WheelEvent(QDesignerWidgetBoxInterface* self, QWheelEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperWheelEvent(QDesignerWidgetBoxInterface* self, QWheelEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnWheelEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_wheelevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_KeyPressEvent(QDesignerWidgetBoxInterface* self, QKeyEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperKeyPressEvent(QDesignerWidgetBoxInterface* self, QKeyEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnKeyPressEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_keypressevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_KeyReleaseEvent(QDesignerWidgetBoxInterface* self, QKeyEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperKeyReleaseEvent(QDesignerWidgetBoxInterface* self, QKeyEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnKeyReleaseEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_keyreleaseevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_FocusInEvent(QDesignerWidgetBoxInterface* self, QFocusEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperFocusInEvent(QDesignerWidgetBoxInterface* self, QFocusEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnFocusInEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_focusinevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_FocusOutEvent(QDesignerWidgetBoxInterface* self, QFocusEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperFocusOutEvent(QDesignerWidgetBoxInterface* self, QFocusEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnFocusOutEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_focusoutevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_EnterEvent(QDesignerWidgetBoxInterface* self, QEnterEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperEnterEvent(QDesignerWidgetBoxInterface* self, QEnterEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnEnterEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_enterevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_LeaveEvent(QDesignerWidgetBoxInterface* self, QEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperLeaveEvent(QDesignerWidgetBoxInterface* self, QEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnLeaveEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_leaveevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_PaintEvent(QDesignerWidgetBoxInterface* self, QPaintEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperPaintEvent(QDesignerWidgetBoxInterface* self, QPaintEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnPaintEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_paintevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_MoveEvent(QDesignerWidgetBoxInterface* self, QMoveEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperMoveEvent(QDesignerWidgetBoxInterface* self, QMoveEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMoveEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_moveevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_ResizeEvent(QDesignerWidgetBoxInterface* self, QResizeEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperResizeEvent(QDesignerWidgetBoxInterface* self, QResizeEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnResizeEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_resizeevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_CloseEvent(QDesignerWidgetBoxInterface* self, QCloseEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperCloseEvent(QDesignerWidgetBoxInterface* self, QCloseEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnCloseEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_closeevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_ContextMenuEvent(QDesignerWidgetBoxInterface* self, QContextMenuEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperContextMenuEvent(QDesignerWidgetBoxInterface* self, QContextMenuEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnContextMenuEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_contextmenuevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_TabletEvent(QDesignerWidgetBoxInterface* self, QTabletEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperTabletEvent(QDesignerWidgetBoxInterface* self, QTabletEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnTabletEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_tabletevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_ActionEvent(QDesignerWidgetBoxInterface* self, QActionEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperActionEvent(QDesignerWidgetBoxInterface* self, QActionEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnActionEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_actionevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_DragEnterEvent(QDesignerWidgetBoxInterface* self, QDragEnterEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperDragEnterEvent(QDesignerWidgetBoxInterface* self, QDragEnterEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnDragEnterEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_dragenterevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_DragMoveEvent(QDesignerWidgetBoxInterface* self, QDragMoveEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperDragMoveEvent(QDesignerWidgetBoxInterface* self, QDragMoveEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnDragMoveEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_dragmoveevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_DragLeaveEvent(QDesignerWidgetBoxInterface* self, QDragLeaveEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperDragLeaveEvent(QDesignerWidgetBoxInterface* self, QDragLeaveEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnDragLeaveEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_dragleaveevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_DropEvent(QDesignerWidgetBoxInterface* self, QDropEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperDropEvent(QDesignerWidgetBoxInterface* self, QDropEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnDropEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_dropevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_ShowEvent(QDesignerWidgetBoxInterface* self, QShowEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperShowEvent(QDesignerWidgetBoxInterface* self, QShowEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnShowEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_showevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_HideEvent(QDesignerWidgetBoxInterface* self, QHideEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperHideEvent(QDesignerWidgetBoxInterface* self, QHideEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnHideEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_hideevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerWidgetBoxInterface_NativeEvent(QDesignerWidgetBoxInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        return vqdesignerwidgetboxinterface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDesignerWidgetBoxInterface_SuperNativeEvent(QDesignerWidgetBoxInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        return vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnNativeEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_nativeevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_ChangeEvent(QDesignerWidgetBoxInterface* self, QEvent* param1) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperChangeEvent(QDesignerWidgetBoxInterface* self, QEvent* param1) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnChangeEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_changeevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QDesignerWidgetBoxInterface_Metric(const QDesignerWidgetBoxInterface* self, int param1) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface) {
        return vqdesignerwidgetboxinterface->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QDesignerWidgetBoxInterface_SuperMetric(const QDesignerWidgetBoxInterface* self, int param1) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self))) {
        return vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnMetric(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_metric_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Metric_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_InitPainter(const QDesignerWidgetBoxInterface* self, QPainter* painter) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperInitPainter(const QDesignerWidgetBoxInterface* self, QPainter* painter) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self))) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnInitPainter(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_initpainter_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QDesignerWidgetBoxInterface_Redirected(const QDesignerWidgetBoxInterface* self, QPoint* offset) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface) {
        return vqdesignerwidgetboxinterface->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QDesignerWidgetBoxInterface_SuperRedirected(const QDesignerWidgetBoxInterface* self, QPoint* offset) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self))) {
        return vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnRedirected(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_redirected_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QDesignerWidgetBoxInterface_SharedPainter(const QDesignerWidgetBoxInterface* self) {
    auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self));
    if (vqdesignerwidgetboxinterface) {
        return vqdesignerwidgetboxinterface->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QDesignerWidgetBoxInterface_SuperSharedPainter(const QDesignerWidgetBoxInterface* self) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self))) {
        return vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnSharedPainter(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_sharedpainter_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_InputMethodEvent(QDesignerWidgetBoxInterface* self, QInputMethodEvent* param1) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperInputMethodEvent(QDesignerWidgetBoxInterface* self, QInputMethodEvent* param1) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnInputMethodEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_inputmethodevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QDesignerWidgetBoxInterface_InputMethodQuery(const QDesignerWidgetBoxInterface* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QDesignerWidgetBoxInterface_SuperInputMethodQuery(const QDesignerWidgetBoxInterface* self, int param1) {
    return new QVariant(self->QDesignerWidgetBoxInterface::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnInputMethodQuery(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self)))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_inputmethodquery_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerWidgetBoxInterface_FocusNextPrevChild(QDesignerWidgetBoxInterface* self, bool next) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        return vqdesignerwidgetboxinterface->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDesignerWidgetBoxInterface_SuperFocusNextPrevChild(QDesignerWidgetBoxInterface* self, bool next) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        return vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnFocusNextPrevChild(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_focusnextprevchild_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerWidgetBoxInterface_EventFilter(QDesignerWidgetBoxInterface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDesignerWidgetBoxInterface_SuperEventFilter(QDesignerWidgetBoxInterface* self, QObject* watched, QEvent* event) {
    return self->QDesignerWidgetBoxInterface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnEventFilter(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_eventfilter_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_TimerEvent(QDesignerWidgetBoxInterface* self, QTimerEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperTimerEvent(QDesignerWidgetBoxInterface* self, QTimerEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnTimerEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_timerevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_ChildEvent(QDesignerWidgetBoxInterface* self, QChildEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperChildEvent(QDesignerWidgetBoxInterface* self, QChildEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnChildEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_childevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_CustomEvent(QDesignerWidgetBoxInterface* self, QEvent* event) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperCustomEvent(QDesignerWidgetBoxInterface* self, QEvent* event) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnCustomEvent(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_customevent_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_ConnectNotify(QDesignerWidgetBoxInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperConnectNotify(QDesignerWidgetBoxInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnConnectNotify(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_connectnotify_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetBoxInterface_DisconnectNotify(QDesignerWidgetBoxInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self);
    if (vqdesignerwidgetboxinterface) {
        vqdesignerwidgetboxinterface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetBoxInterface_SuperDisconnectNotify(QDesignerWidgetBoxInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->QDesignerWidgetBoxInterface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetBoxInterface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetBoxInterface_OnDisconnectNotify(QDesignerWidgetBoxInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self))
        vqdesignerwidgetboxinterface->qdesignerwidgetboxinterface_disconnectnotify_callback = reinterpret_cast<VirtualQDesignerWidgetBoxInterface::QDesignerWidgetBoxInterface_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QDesignerWidgetBoxInterface_UpdateMicroFocus(QDesignerWidgetBoxInterface* self) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->VirtualQDesignerWidgetBoxInterface::updateMicroFocus();
    } else
        qFatal("Error: Protected method QDesignerWidgetBoxInterface::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QDesignerWidgetBoxInterface_Create(QDesignerWidgetBoxInterface* self) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->VirtualQDesignerWidgetBoxInterface::create();
    } else
        qFatal("Error: Protected method QDesignerWidgetBoxInterface::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QDesignerWidgetBoxInterface_Destroy(QDesignerWidgetBoxInterface* self) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        vqdesignerwidgetboxinterface->VirtualQDesignerWidgetBoxInterface::destroy();
    } else
        qFatal("Error: Protected method QDesignerWidgetBoxInterface::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerWidgetBoxInterface_FocusNextChild(QDesignerWidgetBoxInterface* self) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        return vqdesignerwidgetboxinterface->VirtualQDesignerWidgetBoxInterface::focusNextChild();
    } else
        qFatal("Error: Protected method QDesignerWidgetBoxInterface::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerWidgetBoxInterface_FocusPreviousChild(QDesignerWidgetBoxInterface* self) {
    if (auto* vqdesignerwidgetboxinterface = dynamic_cast<VirtualQDesignerWidgetBoxInterface*>(self)) {
        return vqdesignerwidgetboxinterface->VirtualQDesignerWidgetBoxInterface::focusPreviousChild();
    } else
        qFatal("Error: Protected method QDesignerWidgetBoxInterface::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QDesignerWidgetBoxInterface_Sender(const QDesignerWidgetBoxInterface* self) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self))) {
        return vqdesignerwidgetboxinterface->VirtualQDesignerWidgetBoxInterface::sender();
    } else
        qFatal("Error: Protected method QDesignerWidgetBoxInterface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerWidgetBoxInterface_SenderSignalIndex(const QDesignerWidgetBoxInterface* self) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self))) {
        return vqdesignerwidgetboxinterface->VirtualQDesignerWidgetBoxInterface::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDesignerWidgetBoxInterface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerWidgetBoxInterface_Receivers(const QDesignerWidgetBoxInterface* self, const char* signal) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self))) {
        return vqdesignerwidgetboxinterface->VirtualQDesignerWidgetBoxInterface::receivers(signal);
    } else
        qFatal("Error: Protected method QDesignerWidgetBoxInterface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerWidgetBoxInterface_IsSignalConnected(const QDesignerWidgetBoxInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self))) {
        return vqdesignerwidgetboxinterface->VirtualQDesignerWidgetBoxInterface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDesignerWidgetBoxInterface::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QDesignerWidgetBoxInterface_GetDecodedMetricF(const QDesignerWidgetBoxInterface* self, int metricA, int metricB) {
    if (auto* vqdesignerwidgetboxinterface = const_cast<VirtualQDesignerWidgetBoxInterface*>(dynamic_cast<const VirtualQDesignerWidgetBoxInterface*>(self))) {
        return vqdesignerwidgetboxinterface->VirtualQDesignerWidgetBoxInterface::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QDesignerWidgetBoxInterface::getDecodedMetricF called without a directly constructed type");
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
    auto _ret = self->name();
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
    auto _ret = self->domXml();
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
    auto _ret = self->iconName();
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
    auto _ret = self->name();
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

void QDesignerWidgetBoxInterface__Category_OperatorAssign(QDesignerWidgetBoxInterface__Category* self, const QDesignerWidgetBoxInterface__Category* param1) {
    self->operator=(*param1);
}

void QDesignerWidgetBoxInterface__Category_Delete(QDesignerWidgetBoxInterface__Category* self) {
    delete self;
}
