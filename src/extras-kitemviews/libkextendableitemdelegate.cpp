#include <KExtendableItemDelegate>
#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QEvent>
#include <QHelpEvent>
#include <QList>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QStyleOptionViewItem>
#include <QStyledItemDelegate>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <kextendableitemdelegate.h>
#include "libkextendableitemdelegate.h"
#include "libkextendableitemdelegate.hxx"

KExtendableItemDelegate* KExtendableItemDelegate_new(QAbstractItemView* parent) {
    return new VirtualKExtendableItemDelegate(parent);
}

QMetaObject* KExtendableItemDelegate_MetaObject(const KExtendableItemDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* KExtendableItemDelegate_Metacast(KExtendableItemDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KExtendableItemDelegate_Metacall(KExtendableItemDelegate* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KExtendableItemDelegate_Tr(const char* s) {
    auto _ret = KExtendableItemDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* KExtendableItemDelegate_SizeHint(const KExtendableItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return new QSize(self->sizeHint(*option, *index));
}

void KExtendableItemDelegate_Paint(const KExtendableItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->paint(painter, *option, *index);
}

void KExtendableItemDelegate_ExtendItem(KExtendableItemDelegate* self, QWidget* extender, const QModelIndex* index) {
    self->extendItem(extender, *index);
}

void KExtendableItemDelegate_ContractItem(KExtendableItemDelegate* self, const QModelIndex* index) {
    self->contractItem(*index);
}

void KExtendableItemDelegate_ContractAll(KExtendableItemDelegate* self) {
    self->contractAll();
}

bool KExtendableItemDelegate_IsExtended(const KExtendableItemDelegate* self, const QModelIndex* index) {
    return self->isExtended(*index);
}

void KExtendableItemDelegate_UpdateExtenderGeometry(const KExtendableItemDelegate* self, QWidget* extender, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->updateExtenderGeometry(extender, *option, *index);
}

void KExtendableItemDelegate_ExtenderCreated(KExtendableItemDelegate* self, QWidget* extender, const QModelIndex* index) {
    self->extenderCreated(extender, *index);
}

void KExtendableItemDelegate_Connect_ExtenderCreated(KExtendableItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(KExtendableItemDelegate*, QWidget*, QModelIndex*) = reinterpret_cast<void (*)(KExtendableItemDelegate*, QWidget*, QModelIndex*)>(slot);
    KExtendableItemDelegate::connect(self,
                                     static_cast<void (KExtendableItemDelegate::*)(QWidget*, const QModelIndex&)>(&KExtendableItemDelegate::extenderCreated),
                                     [self, slotFunc](QWidget* extender, const QModelIndex& index) {
                                         QWidget* sigval1 = extender;
                                         const QModelIndex& index_ret = index;
                                         // Cast returned reference into pointer
                                         QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);
                                         slotFunc(self, sigval1, sigval2);
                                     });
}

void KExtendableItemDelegate_ExtenderDestroyed(KExtendableItemDelegate* self, QWidget* extender, const QModelIndex* index) {
    self->extenderDestroyed(extender, *index);
}

void KExtendableItemDelegate_Connect_ExtenderDestroyed(KExtendableItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(KExtendableItemDelegate*, QWidget*, QModelIndex*) = reinterpret_cast<void (*)(KExtendableItemDelegate*, QWidget*, QModelIndex*)>(slot);
    KExtendableItemDelegate::connect(self,
                                     static_cast<void (KExtendableItemDelegate::*)(QWidget*, const QModelIndex&)>(&KExtendableItemDelegate::extenderDestroyed),
                                     [self, slotFunc](QWidget* extender, const QModelIndex& index) {
                                         QWidget* sigval1 = extender;
                                         const QModelIndex& index_ret = index;
                                         // Cast returned reference into pointer
                                         QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);
                                         slotFunc(self, sigval1, sigval2);
                                     });
}

libqt_string KExtendableItemDelegate_Tr2(const char* s, const char* c) {
    auto _ret = KExtendableItemDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KExtendableItemDelegate_Tr3(const char* s, const char* c, int n) {
    auto _ret = KExtendableItemDelegate::tr(s, c, static_cast<int>(n));
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
QMetaObject* KExtendableItemDelegate_SuperMetaObject(const KExtendableItemDelegate* self) {
    return (QMetaObject*)self->KExtendableItemDelegate::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnMetaObject(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self)))
        vkextendableitemdelegate->kextendableitemdelegate_metaobject_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KExtendableItemDelegate_SuperMetacast(KExtendableItemDelegate* self, const char* param1) {
    return self->KExtendableItemDelegate::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnMetacast(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self))
        vkextendableitemdelegate->kextendableitemdelegate_metacast_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_Metacast_Callback>(slot);
}

// Base class handler implementation
int KExtendableItemDelegate_SuperMetacall(KExtendableItemDelegate* self, int param1, int param2, void** param3) {
    return self->KExtendableItemDelegate::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnMetacall(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self))
        vkextendableitemdelegate->kextendableitemdelegate_metacall_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KExtendableItemDelegate_SuperSizeHint(const KExtendableItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return new QSize(self->KExtendableItemDelegate::sizeHint(*option, *index));
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnSizeHint(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self)))
        vkextendableitemdelegate->kextendableitemdelegate_sizehint_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_SizeHint_Callback>(slot);
}

// Base class handler implementation
void KExtendableItemDelegate_SuperPaint(const KExtendableItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->KExtendableItemDelegate::paint(painter, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnPaint(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self)))
        vkextendableitemdelegate->kextendableitemdelegate_paint_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_Paint_Callback>(slot);
}

// Base class handler implementation
void KExtendableItemDelegate_SuperUpdateExtenderGeometry(const KExtendableItemDelegate* self, QWidget* extender, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->KExtendableItemDelegate::updateExtenderGeometry(extender, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnUpdateExtenderGeometry(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self)))
        vkextendableitemdelegate->kextendableitemdelegate_updateextendergeometry_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_UpdateExtenderGeometry_Callback>(slot);
}

// Derived class handler implementation
QWidget* KExtendableItemDelegate_CreateEditor(const KExtendableItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->createEditor(parent, *option, *index);
}

// Base class handler implementation
QWidget* KExtendableItemDelegate_SuperCreateEditor(const KExtendableItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->KExtendableItemDelegate::createEditor(parent, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnCreateEditor(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self)))
        vkextendableitemdelegate->kextendableitemdelegate_createeditor_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_CreateEditor_Callback>(slot);
}

// Derived class handler implementation
void KExtendableItemDelegate_SetEditorData(const KExtendableItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->setEditorData(editor, *index);
}

// Base class handler implementation
void KExtendableItemDelegate_SuperSetEditorData(const KExtendableItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->KExtendableItemDelegate::setEditorData(editor, *index);
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnSetEditorData(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self)))
        vkextendableitemdelegate->kextendableitemdelegate_seteditordata_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_SetEditorData_Callback>(slot);
}

// Derived class handler implementation
void KExtendableItemDelegate_SetModelData(const KExtendableItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    self->setModelData(editor, model, *index);
}

// Base class handler implementation
void KExtendableItemDelegate_SuperSetModelData(const KExtendableItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    self->KExtendableItemDelegate::setModelData(editor, model, *index);
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnSetModelData(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self)))
        vkextendableitemdelegate->kextendableitemdelegate_setmodeldata_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_SetModelData_Callback>(slot);
}

// Derived class handler implementation
void KExtendableItemDelegate_UpdateEditorGeometry(const KExtendableItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->updateEditorGeometry(editor, *option, *index);
}

// Base class handler implementation
void KExtendableItemDelegate_SuperUpdateEditorGeometry(const KExtendableItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->KExtendableItemDelegate::updateEditorGeometry(editor, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnUpdateEditorGeometry(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self)))
        vkextendableitemdelegate->kextendableitemdelegate_updateeditorgeometry_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_UpdateEditorGeometry_Callback>(slot);
}

// Derived class handler implementation
libqt_string KExtendableItemDelegate_DisplayText(const KExtendableItemDelegate* self, const QVariant* value, const QLocale* locale) {
    auto _ret = self->displayText(*value, *locale);
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
libqt_string KExtendableItemDelegate_SuperDisplayText(const KExtendableItemDelegate* self, const QVariant* value, const QLocale* locale) {
    auto _ret = self->KExtendableItemDelegate::displayText(*value, *locale);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnDisplayText(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self)))
        vkextendableitemdelegate->kextendableitemdelegate_displaytext_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_DisplayText_Callback>(slot);
}

// Derived class handler implementation
void KExtendableItemDelegate_InitStyleOption(const KExtendableItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate) {
        vkextendableitemdelegate->initStyleOption(option, *index);
    } else {
        qFatal("Error: Protected virtual method KExtendableItemDelegate::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KExtendableItemDelegate_SuperInitStyleOption(const KExtendableItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self))) {
        vkextendableitemdelegate->KExtendableItemDelegate::initStyleOption(option, *index);
    } else
        qFatal("Error: Protected virtual method KExtendableItemDelegate::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnInitStyleOption(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self)))
        vkextendableitemdelegate->kextendableitemdelegate_initstyleoption_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
bool KExtendableItemDelegate_EventFilter(KExtendableItemDelegate* self, QObject* object, QEvent* event) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate) {
        return vkextendableitemdelegate->eventFilter(object, event);
    } else {
        qFatal("Error: Protected virtual method KExtendableItemDelegate::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KExtendableItemDelegate_SuperEventFilter(KExtendableItemDelegate* self, QObject* object, QEvent* event) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self)) {
        return vkextendableitemdelegate->KExtendableItemDelegate::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method KExtendableItemDelegate::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnEventFilter(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self))
        vkextendableitemdelegate->kextendableitemdelegate_eventfilter_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool KExtendableItemDelegate_EditorEvent(KExtendableItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate) {
        return vkextendableitemdelegate->editorEvent(event, model, *option, *index);
    } else {
        qFatal("Error: Protected virtual method KExtendableItemDelegate::editorEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KExtendableItemDelegate_SuperEditorEvent(KExtendableItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self)) {
        return vkextendableitemdelegate->KExtendableItemDelegate::editorEvent(event, model, *option, *index);
    } else
        qFatal("Error: Protected virtual method KExtendableItemDelegate::editorEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnEditorEvent(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self))
        vkextendableitemdelegate->kextendableitemdelegate_editorevent_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_EditorEvent_Callback>(slot);
}

// Derived class handler implementation
void KExtendableItemDelegate_DestroyEditor(const KExtendableItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->destroyEditor(editor, *index);
}

// Base class handler implementation
void KExtendableItemDelegate_SuperDestroyEditor(const KExtendableItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->KExtendableItemDelegate::destroyEditor(editor, *index);
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnDestroyEditor(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self)))
        vkextendableitemdelegate->kextendableitemdelegate_destroyeditor_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_DestroyEditor_Callback>(slot);
}

// Derived class handler implementation
bool KExtendableItemDelegate_HelpEvent(KExtendableItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->helpEvent(event, view, *option, *index);
}

// Base class handler implementation
bool KExtendableItemDelegate_SuperHelpEvent(KExtendableItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->KExtendableItemDelegate::helpEvent(event, view, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnHelpEvent(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self))
        vkextendableitemdelegate->kextendableitemdelegate_helpevent_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_HelpEvent_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of int */ KExtendableItemDelegate_PaintingRoles(const KExtendableItemDelegate* self) {
    QList<int> _ret = self->paintingRoles();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
libqt_list /* of int */ KExtendableItemDelegate_SuperPaintingRoles(const KExtendableItemDelegate* self) {
    QList<int> _ret = self->KExtendableItemDelegate::paintingRoles();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnPaintingRoles(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self)))
        vkextendableitemdelegate->kextendableitemdelegate_paintingroles_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_PaintingRoles_Callback>(slot);
}

// Derived class handler implementation
bool KExtendableItemDelegate_Event(KExtendableItemDelegate* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KExtendableItemDelegate_SuperEvent(KExtendableItemDelegate* self, QEvent* event) {
    return self->KExtendableItemDelegate::event(event);
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnEvent(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self))
        vkextendableitemdelegate->kextendableitemdelegate_event_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_Event_Callback>(slot);
}

// Derived class handler implementation
void KExtendableItemDelegate_TimerEvent(KExtendableItemDelegate* self, QTimerEvent* event) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate) {
        vkextendableitemdelegate->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KExtendableItemDelegate::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KExtendableItemDelegate_SuperTimerEvent(KExtendableItemDelegate* self, QTimerEvent* event) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self)) {
        vkextendableitemdelegate->KExtendableItemDelegate::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KExtendableItemDelegate::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnTimerEvent(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self))
        vkextendableitemdelegate->kextendableitemdelegate_timerevent_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KExtendableItemDelegate_ChildEvent(KExtendableItemDelegate* self, QChildEvent* event) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate) {
        vkextendableitemdelegate->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KExtendableItemDelegate::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KExtendableItemDelegate_SuperChildEvent(KExtendableItemDelegate* self, QChildEvent* event) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self)) {
        vkextendableitemdelegate->KExtendableItemDelegate::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KExtendableItemDelegate::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnChildEvent(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self))
        vkextendableitemdelegate->kextendableitemdelegate_childevent_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KExtendableItemDelegate_CustomEvent(KExtendableItemDelegate* self, QEvent* event) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate) {
        vkextendableitemdelegate->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KExtendableItemDelegate::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KExtendableItemDelegate_SuperCustomEvent(KExtendableItemDelegate* self, QEvent* event) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self)) {
        vkextendableitemdelegate->KExtendableItemDelegate::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KExtendableItemDelegate::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnCustomEvent(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self))
        vkextendableitemdelegate->kextendableitemdelegate_customevent_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KExtendableItemDelegate_ConnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate) {
        vkextendableitemdelegate->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KExtendableItemDelegate::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KExtendableItemDelegate_SuperConnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self)) {
        vkextendableitemdelegate->KExtendableItemDelegate::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KExtendableItemDelegate::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnConnectNotify(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self))
        vkextendableitemdelegate->kextendableitemdelegate_connectnotify_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KExtendableItemDelegate_DisconnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate) {
        vkextendableitemdelegate->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KExtendableItemDelegate::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KExtendableItemDelegate_SuperDisconnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self)) {
        vkextendableitemdelegate->KExtendableItemDelegate::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KExtendableItemDelegate::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnDisconnectNotify(KExtendableItemDelegate* self, intptr_t slot) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self))
        vkextendableitemdelegate->kextendableitemdelegate_disconnectnotify_callback = reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QRect* KExtendableItemDelegate_ExtenderRect(const KExtendableItemDelegate* self, QWidget* extender, const QStyleOptionViewItem* option, const QModelIndex* index) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self)))
        return new QRect(vkextendableitemdelegate->extenderRect(extender, *option, *index));
    qFatal("Error: Protected method KExtendableItemDelegate::extenderRect called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtendableItemDelegate_SetExtendPixmap(KExtendableItemDelegate* self, const QPixmap* pixmap) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self)) {
        vkextendableitemdelegate->VirtualKExtendableItemDelegate::setExtendPixmap(*pixmap);
    } else
        qFatal("Error: Protected method KExtendableItemDelegate::setExtendPixmap called without a directly constructed type");
}

// Derived class protected handler implementation
void KExtendableItemDelegate_SetContractPixmap(KExtendableItemDelegate* self, const QPixmap* pixmap) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self)) {
        vkextendableitemdelegate->VirtualKExtendableItemDelegate::setContractPixmap(*pixmap);
    } else
        qFatal("Error: Protected method KExtendableItemDelegate::setContractPixmap called without a directly constructed type");
}

// Derived class handler implementation
QPixmap* KExtendableItemDelegate_ExtendPixmap(KExtendableItemDelegate* self) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self))
        return new QPixmap(vkextendableitemdelegate->extendPixmap());
    qFatal("Error: Protected method KExtendableItemDelegate::extendPixmap called without a directly constructed type");
}

// Derived class handler implementation
QPixmap* KExtendableItemDelegate_ContractPixmap(KExtendableItemDelegate* self) {
    if (auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self))
        return new QPixmap(vkextendableitemdelegate->contractPixmap());
    qFatal("Error: Protected method KExtendableItemDelegate::contractPixmap called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KExtendableItemDelegate_Sender(const KExtendableItemDelegate* self) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self))) {
        return vkextendableitemdelegate->VirtualKExtendableItemDelegate::sender();
    } else
        qFatal("Error: Protected method KExtendableItemDelegate::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KExtendableItemDelegate_SenderSignalIndex(const KExtendableItemDelegate* self) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self))) {
        return vkextendableitemdelegate->VirtualKExtendableItemDelegate::senderSignalIndex();
    } else
        qFatal("Error: Protected method KExtendableItemDelegate::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KExtendableItemDelegate_Receivers(const KExtendableItemDelegate* self, const char* signal) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self))) {
        return vkextendableitemdelegate->VirtualKExtendableItemDelegate::receivers(signal);
    } else
        qFatal("Error: Protected method KExtendableItemDelegate::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KExtendableItemDelegate_IsSignalConnected(const KExtendableItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self))) {
        return vkextendableitemdelegate->VirtualKExtendableItemDelegate::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KExtendableItemDelegate::isSignalConnected called without a directly constructed type");
}

void KExtendableItemDelegate_Delete(KExtendableItemDelegate* self) {
    delete self;
}
