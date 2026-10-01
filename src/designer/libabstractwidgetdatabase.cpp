#include <QChildEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerWidgetDataBaseInterface>
#include <QDesignerWidgetDataBaseItemInterface>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <abstractwidgetdatabase.h>
#include "libabstractwidgetdatabase.h"
#include "libabstractwidgetdatabase.hxx"

QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseItemInterface_new() {
    return new VirtualQDesignerWidgetDataBaseItemInterface();
}

libqt_string QDesignerWidgetDataBaseItemInterface_Name(const QDesignerWidgetDataBaseItemInterface* self) {
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

void QDesignerWidgetDataBaseItemInterface_SetName(QDesignerWidgetDataBaseItemInterface* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string QDesignerWidgetDataBaseItemInterface_Group(const QDesignerWidgetDataBaseItemInterface* self) {
    auto _ret = self->group();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerWidgetDataBaseItemInterface_SetGroup(QDesignerWidgetDataBaseItemInterface* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    self->setGroup(group_QString);
}

libqt_string QDesignerWidgetDataBaseItemInterface_ToolTip(const QDesignerWidgetDataBaseItemInterface* self) {
    auto _ret = self->toolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerWidgetDataBaseItemInterface_SetToolTip(QDesignerWidgetDataBaseItemInterface* self, const libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->setToolTip(toolTip_QString);
}

libqt_string QDesignerWidgetDataBaseItemInterface_WhatsThis(const QDesignerWidgetDataBaseItemInterface* self) {
    auto _ret = self->whatsThis();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerWidgetDataBaseItemInterface_SetWhatsThis(QDesignerWidgetDataBaseItemInterface* self, const libqt_string whatsThis) {
    QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
    self->setWhatsThis(whatsThis_QString);
}

libqt_string QDesignerWidgetDataBaseItemInterface_IncludeFile(const QDesignerWidgetDataBaseItemInterface* self) {
    auto _ret = self->includeFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerWidgetDataBaseItemInterface_SetIncludeFile(QDesignerWidgetDataBaseItemInterface* self, const libqt_string includeFile) {
    QString includeFile_QString = QString::fromUtf8(includeFile.data, includeFile.len);
    self->setIncludeFile(includeFile_QString);
}

QIcon* QDesignerWidgetDataBaseItemInterface_Icon(const QDesignerWidgetDataBaseItemInterface* self) {
    return new QIcon(self->icon());
}

void QDesignerWidgetDataBaseItemInterface_SetIcon(QDesignerWidgetDataBaseItemInterface* self, const QIcon* icon) {
    self->setIcon(*icon);
}

bool QDesignerWidgetDataBaseItemInterface_IsCompat(const QDesignerWidgetDataBaseItemInterface* self) {
    return self->isCompat();
}

void QDesignerWidgetDataBaseItemInterface_SetCompat(QDesignerWidgetDataBaseItemInterface* self, bool compat) {
    self->setCompat(compat);
}

bool QDesignerWidgetDataBaseItemInterface_IsContainer(const QDesignerWidgetDataBaseItemInterface* self) {
    return self->isContainer();
}

void QDesignerWidgetDataBaseItemInterface_SetContainer(QDesignerWidgetDataBaseItemInterface* self, bool container) {
    self->setContainer(container);
}

bool QDesignerWidgetDataBaseItemInterface_IsCustom(const QDesignerWidgetDataBaseItemInterface* self) {
    return self->isCustom();
}

void QDesignerWidgetDataBaseItemInterface_SetCustom(QDesignerWidgetDataBaseItemInterface* self, bool custom) {
    self->setCustom(custom);
}

libqt_string QDesignerWidgetDataBaseItemInterface_PluginPath(const QDesignerWidgetDataBaseItemInterface* self) {
    auto _ret = self->pluginPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerWidgetDataBaseItemInterface_SetPluginPath(QDesignerWidgetDataBaseItemInterface* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setPluginPath(path_QString);
}

bool QDesignerWidgetDataBaseItemInterface_IsPromoted(const QDesignerWidgetDataBaseItemInterface* self) {
    return self->isPromoted();
}

void QDesignerWidgetDataBaseItemInterface_SetPromoted(QDesignerWidgetDataBaseItemInterface* self, bool b) {
    self->setPromoted(b);
}

libqt_string QDesignerWidgetDataBaseItemInterface_Extends(const QDesignerWidgetDataBaseItemInterface* self) {
    auto _ret = self->extends();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerWidgetDataBaseItemInterface_SetExtends(QDesignerWidgetDataBaseItemInterface* self, const libqt_string s) {
    QString s_QString = QString::fromUtf8(s.data, s.len);
    self->setExtends(s_QString);
}

void QDesignerWidgetDataBaseItemInterface_SetDefaultPropertyValues(QDesignerWidgetDataBaseItemInterface* self, const libqt_list /* of QVariant* */ list) {
    QList<QVariant> list_QList;
    list_QList.reserve(list.len);
    QVariant** list_arr = static_cast<QVariant**>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(*(list_arr[i]));
    }
    self->setDefaultPropertyValues(list_QList);
}

libqt_list /* of QVariant* */ QDesignerWidgetDataBaseItemInterface_DefaultPropertyValues(const QDesignerWidgetDataBaseItemInterface* self) {
    QList<QVariant> _ret = self->defaultPropertyValues();
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnName(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self)))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_name_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_Name_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetName(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_setname_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetName_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnGroup(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self)))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_group_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_Group_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetGroup(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_setgroup_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetGroup_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnToolTip(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self)))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_tooltip_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_ToolTip_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetToolTip(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_settooltip_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetToolTip_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnWhatsThis(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self)))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_whatsthis_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_WhatsThis_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetWhatsThis(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_setwhatsthis_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetWhatsThis_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnIncludeFile(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self)))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_includefile_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_IncludeFile_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetIncludeFile(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_setincludefile_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetIncludeFile_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnIcon(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self)))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_icon_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_Icon_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetIcon(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_seticon_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetIcon_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnIsCompat(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self)))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_iscompat_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_IsCompat_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetCompat(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_setcompat_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetCompat_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnIsContainer(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self)))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_iscontainer_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_IsContainer_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetContainer(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_setcontainer_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetContainer_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnIsCustom(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self)))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_iscustom_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_IsCustom_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetCustom(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_setcustom_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetCustom_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnPluginPath(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self)))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_pluginpath_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_PluginPath_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetPluginPath(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_setpluginpath_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetPluginPath_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnIsPromoted(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self)))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_ispromoted_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_IsPromoted_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetPromoted(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_setpromoted_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetPromoted_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnExtends(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self)))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_extends_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_Extends_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetExtends(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_setextends_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetExtends_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetDefaultPropertyValues(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_setdefaultpropertyvalues_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetDefaultPropertyValues_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnDefaultPropertyValues(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self)))
        vqdesignerwidgetdatabaseiteminterface->qdesignerwidgetdatabaseiteminterface_defaultpropertyvalues_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_DefaultPropertyValues_Callback>(slot);
}

void QDesignerWidgetDataBaseItemInterface_Delete(QDesignerWidgetDataBaseItemInterface* self) {
    delete self;
}

QDesignerWidgetDataBaseInterface* QDesignerWidgetDataBaseInterface_new() {
    return new VirtualQDesignerWidgetDataBaseInterface();
}

QDesignerWidgetDataBaseInterface* QDesignerWidgetDataBaseInterface_new2(QObject* parent) {
    return new VirtualQDesignerWidgetDataBaseInterface(parent);
}

QMetaObject* QDesignerWidgetDataBaseInterface_MetaObject(const QDesignerWidgetDataBaseInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDesignerWidgetDataBaseInterface_Metacast(QDesignerWidgetDataBaseInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDesignerWidgetDataBaseInterface_Metacall(QDesignerWidgetDataBaseInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDesignerWidgetDataBaseInterface_Tr(const char* s) {
    auto _ret = QDesignerWidgetDataBaseInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDesignerWidgetDataBaseInterface_Count(const QDesignerWidgetDataBaseInterface* self) {
    return self->count();
}

QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseInterface_Item(const QDesignerWidgetDataBaseInterface* self, int index) {
    return self->item(static_cast<int>(index));
}

int QDesignerWidgetDataBaseInterface_IndexOf(const QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item) {
    return self->indexOf(item);
}

void QDesignerWidgetDataBaseInterface_Insert(QDesignerWidgetDataBaseInterface* self, int index, QDesignerWidgetDataBaseItemInterface* item) {
    self->insert(static_cast<int>(index), item);
}

void QDesignerWidgetDataBaseInterface_Append(QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item) {
    self->append(item);
}

int QDesignerWidgetDataBaseInterface_IndexOfObject(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName) {
    return self->indexOfObject(object, resolveName);
}

int QDesignerWidgetDataBaseInterface_IndexOfClassName(const QDesignerWidgetDataBaseInterface* self, const libqt_string className, bool resolveName) {
    QString className_QString = QString::fromUtf8(className.data, className.len);
    return self->indexOfClassName(className_QString, resolveName);
}

QDesignerFormEditorInterface* QDesignerWidgetDataBaseInterface_Core(const QDesignerWidgetDataBaseInterface* self) {
    return self->core();
}

bool QDesignerWidgetDataBaseInterface_IsContainer(const QDesignerWidgetDataBaseInterface* self, QObject* object) {
    return self->isContainer(object);
}

bool QDesignerWidgetDataBaseInterface_IsCustom(const QDesignerWidgetDataBaseInterface* self, QObject* object) {
    return self->isCustom(object);
}

void QDesignerWidgetDataBaseInterface_Changed(QDesignerWidgetDataBaseInterface* self) {
    self->changed();
}

void QDesignerWidgetDataBaseInterface_Connect_Changed(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerWidgetDataBaseInterface*) = reinterpret_cast<void (*)(QDesignerWidgetDataBaseInterface*)>(slot);
    QDesignerWidgetDataBaseInterface::connect(self,
                                              static_cast<void (QDesignerWidgetDataBaseInterface::*)()>(&QDesignerWidgetDataBaseInterface::changed),
                                              [self, slotFunc]() {
                                                  slotFunc(self);
                                              });
}

libqt_string QDesignerWidgetDataBaseInterface_Tr2(const char* s, const char* c) {
    auto _ret = QDesignerWidgetDataBaseInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerWidgetDataBaseInterface_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDesignerWidgetDataBaseInterface::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QDesignerWidgetDataBaseInterface_IsContainer2(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName) {
    return self->isContainer(object, resolveName);
}

bool QDesignerWidgetDataBaseInterface_IsCustom2(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName) {
    return self->isCustom(object, resolveName);
}

// Base class handler implementation
QMetaObject* QDesignerWidgetDataBaseInterface_SuperMetaObject(const QDesignerWidgetDataBaseInterface* self) {
    return (QMetaObject*)self->QDesignerWidgetDataBaseInterface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnMetaObject(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self)))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_metaobject_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDesignerWidgetDataBaseInterface_SuperMetacast(QDesignerWidgetDataBaseInterface* self, const char* param1) {
    return self->QDesignerWidgetDataBaseInterface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnMetacast(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_metacast_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDesignerWidgetDataBaseInterface_SuperMetacall(QDesignerWidgetDataBaseInterface* self, int param1, int param2, void** param3) {
    return self->QDesignerWidgetDataBaseInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnMetacall(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_metacall_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Metacall_Callback>(slot);
}

// Base class handler implementation
int QDesignerWidgetDataBaseInterface_SuperCount(const QDesignerWidgetDataBaseInterface* self) {
    return self->QDesignerWidgetDataBaseInterface::count();
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnCount(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self)))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_count_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Count_Callback>(slot);
}

// Base class handler implementation
QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseInterface_SuperItem(const QDesignerWidgetDataBaseInterface* self, int index) {
    return self->QDesignerWidgetDataBaseInterface::item(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnItem(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self)))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_item_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Item_Callback>(slot);
}

// Base class handler implementation
int QDesignerWidgetDataBaseInterface_SuperIndexOf(const QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item) {
    return self->QDesignerWidgetDataBaseInterface::indexOf(item);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnIndexOf(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self)))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_indexof_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_IndexOf_Callback>(slot);
}

// Base class handler implementation
void QDesignerWidgetDataBaseInterface_SuperInsert(QDesignerWidgetDataBaseInterface* self, int index, QDesignerWidgetDataBaseItemInterface* item) {
    self->QDesignerWidgetDataBaseInterface::insert(static_cast<int>(index), item);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnInsert(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_insert_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Insert_Callback>(slot);
}

// Base class handler implementation
void QDesignerWidgetDataBaseInterface_SuperAppend(QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item) {
    self->QDesignerWidgetDataBaseInterface::append(item);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnAppend(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_append_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Append_Callback>(slot);
}

// Base class handler implementation
int QDesignerWidgetDataBaseInterface_SuperIndexOfObject(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName) {
    return self->QDesignerWidgetDataBaseInterface::indexOfObject(object, resolveName);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnIndexOfObject(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self)))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_indexofobject_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_IndexOfObject_Callback>(slot);
}

// Base class handler implementation
int QDesignerWidgetDataBaseInterface_SuperIndexOfClassName(const QDesignerWidgetDataBaseInterface* self, const libqt_string className, bool resolveName) {
    QString className_QString = QString::fromUtf8(className.data, className.len);
    return self->QDesignerWidgetDataBaseInterface::indexOfClassName(className_QString, resolveName);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnIndexOfClassName(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self)))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_indexofclassname_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_IndexOfClassName_Callback>(slot);
}

// Base class handler implementation
QDesignerFormEditorInterface* QDesignerWidgetDataBaseInterface_SuperCore(const QDesignerWidgetDataBaseInterface* self) {
    return self->QDesignerWidgetDataBaseInterface::core();
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnCore(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self)))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_core_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Core_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerWidgetDataBaseInterface_Event(QDesignerWidgetDataBaseInterface* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDesignerWidgetDataBaseInterface_SuperEvent(QDesignerWidgetDataBaseInterface* self, QEvent* event) {
    return self->QDesignerWidgetDataBaseInterface::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnEvent(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_event_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerWidgetDataBaseInterface_EventFilter(QDesignerWidgetDataBaseInterface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDesignerWidgetDataBaseInterface_SuperEventFilter(QDesignerWidgetDataBaseInterface* self, QObject* watched, QEvent* event) {
    return self->QDesignerWidgetDataBaseInterface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnEventFilter(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_eventfilter_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetDataBaseInterface_TimerEvent(QDesignerWidgetDataBaseInterface* self, QTimerEvent* event) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface) {
        vqdesignerwidgetdatabaseinterface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetDataBaseInterface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseInterface_SuperTimerEvent(QDesignerWidgetDataBaseInterface* self, QTimerEvent* event) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self)) {
        vqdesignerwidgetdatabaseinterface->QDesignerWidgetDataBaseInterface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetDataBaseInterface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnTimerEvent(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_timerevent_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetDataBaseInterface_ChildEvent(QDesignerWidgetDataBaseInterface* self, QChildEvent* event) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface) {
        vqdesignerwidgetdatabaseinterface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetDataBaseInterface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseInterface_SuperChildEvent(QDesignerWidgetDataBaseInterface* self, QChildEvent* event) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self)) {
        vqdesignerwidgetdatabaseinterface->QDesignerWidgetDataBaseInterface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetDataBaseInterface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnChildEvent(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_childevent_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetDataBaseInterface_CustomEvent(QDesignerWidgetDataBaseInterface* self, QEvent* event) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface) {
        vqdesignerwidgetdatabaseinterface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetDataBaseInterface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseInterface_SuperCustomEvent(QDesignerWidgetDataBaseInterface* self, QEvent* event) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self)) {
        vqdesignerwidgetdatabaseinterface->QDesignerWidgetDataBaseInterface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetDataBaseInterface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnCustomEvent(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_customevent_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetDataBaseInterface_ConnectNotify(QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface) {
        vqdesignerwidgetdatabaseinterface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetDataBaseInterface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseInterface_SuperConnectNotify(QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self)) {
        vqdesignerwidgetdatabaseinterface->QDesignerWidgetDataBaseInterface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetDataBaseInterface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnConnectNotify(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_connectnotify_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDesignerWidgetDataBaseInterface_DisconnectNotify(QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface) {
        vqdesignerwidgetdatabaseinterface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerWidgetDataBaseInterface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseInterface_SuperDisconnectNotify(QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self)) {
        vqdesignerwidgetdatabaseinterface->QDesignerWidgetDataBaseInterface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerWidgetDataBaseInterface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnDisconnectNotify(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self))
        vqdesignerwidgetdatabaseinterface->qdesignerwidgetdatabaseinterface_disconnectnotify_callback = reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QDesignerWidgetDataBaseInterface_Sender(const QDesignerWidgetDataBaseInterface* self) {
    if (auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self))) {
        return vqdesignerwidgetdatabaseinterface->VirtualQDesignerWidgetDataBaseInterface::sender();
    } else
        qFatal("Error: Protected method QDesignerWidgetDataBaseInterface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerWidgetDataBaseInterface_SenderSignalIndex(const QDesignerWidgetDataBaseInterface* self) {
    if (auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self))) {
        return vqdesignerwidgetdatabaseinterface->VirtualQDesignerWidgetDataBaseInterface::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDesignerWidgetDataBaseInterface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerWidgetDataBaseInterface_Receivers(const QDesignerWidgetDataBaseInterface* self, const char* signal) {
    if (auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self))) {
        return vqdesignerwidgetdatabaseinterface->VirtualQDesignerWidgetDataBaseInterface::receivers(signal);
    } else
        qFatal("Error: Protected method QDesignerWidgetDataBaseInterface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerWidgetDataBaseInterface_IsSignalConnected(const QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self))) {
        return vqdesignerwidgetdatabaseinterface->VirtualQDesignerWidgetDataBaseInterface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDesignerWidgetDataBaseInterface::isSignalConnected called without a directly constructed type");
}

void QDesignerWidgetDataBaseInterface_Delete(QDesignerWidgetDataBaseInterface* self) {
    delete self;
}
