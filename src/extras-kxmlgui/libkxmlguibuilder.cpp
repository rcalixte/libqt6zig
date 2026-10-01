#include <KXMLGUIBuilder>
#include <KXMLGUIClient>
#include <QAction>
#include <QDomElement>
#include <QList>
#include <QString>
#include <QWidget>
#include <kxmlguibuilder.h>
#include "libkxmlguibuilder.h"
#include "libkxmlguibuilder.hxx"

KXMLGUIBuilder* KXMLGUIBuilder_new(QWidget* widget) {
    return new VirtualKXMLGUIBuilder(widget);
}

KXMLGUIClient* KXMLGUIBuilder_BuilderClient(const KXMLGUIBuilder* self) {
    return self->builderClient();
}

void KXMLGUIBuilder_SetBuilderClient(KXMLGUIBuilder* self, KXMLGUIClient* client) {
    self->setBuilderClient(client);
}

QWidget* KXMLGUIBuilder_Widget(KXMLGUIBuilder* self) {
    return self->widget();
}

libqt_list /* of libqt_string */ KXMLGUIBuilder_ContainerTags(const KXMLGUIBuilder* self) {
    QList<QString> _ret = self->containerTags();
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

QWidget* KXMLGUIBuilder_CreateContainer(KXMLGUIBuilder* self, QWidget* parent, int index, const QDomElement* element, QAction** containerAction) {
    return self->createContainer(parent, static_cast<int>(index), *element, *containerAction);
}

void KXMLGUIBuilder_RemoveContainer(KXMLGUIBuilder* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction) {
    self->removeContainer(container, parent, *element, containerAction);
}

libqt_list /* of libqt_string */ KXMLGUIBuilder_CustomTags(const KXMLGUIBuilder* self) {
    QList<QString> _ret = self->customTags();
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

QAction* KXMLGUIBuilder_CreateCustomElement(KXMLGUIBuilder* self, QWidget* parent, int index, const QDomElement* element) {
    return self->createCustomElement(parent, static_cast<int>(index), *element);
}

void KXMLGUIBuilder_FinalizeGUI(KXMLGUIBuilder* self, KXMLGUIClient* client) {
    self->finalizeGUI(client);
}

// Base class handler implementation
libqt_list /* of libqt_string */ KXMLGUIBuilder_SuperContainerTags(const KXMLGUIBuilder* self) {
    QList<QString> _ret = self->KXMLGUIBuilder::containerTags();
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
void KXMLGUIBuilder_OnContainerTags(KXMLGUIBuilder* self, intptr_t slot) {
    if (auto* vkxmlguibuilder = const_cast<VirtualKXMLGUIBuilder*>(dynamic_cast<const VirtualKXMLGUIBuilder*>(self)))
        vkxmlguibuilder->kxmlguibuilder_containertags_callback = reinterpret_cast<VirtualKXMLGUIBuilder::KXMLGUIBuilder_ContainerTags_Callback>(slot);
}

// Base class handler implementation
QWidget* KXMLGUIBuilder_SuperCreateContainer(KXMLGUIBuilder* self, QWidget* parent, int index, const QDomElement* element, QAction** containerAction) {
    return self->KXMLGUIBuilder::createContainer(parent, static_cast<int>(index), *element, *containerAction);
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIBuilder_OnCreateContainer(KXMLGUIBuilder* self, intptr_t slot) {
    if (auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self))
        vkxmlguibuilder->kxmlguibuilder_createcontainer_callback = reinterpret_cast<VirtualKXMLGUIBuilder::KXMLGUIBuilder_CreateContainer_Callback>(slot);
}

// Base class handler implementation
void KXMLGUIBuilder_SuperRemoveContainer(KXMLGUIBuilder* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction) {
    self->KXMLGUIBuilder::removeContainer(container, parent, *element, containerAction);
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIBuilder_OnRemoveContainer(KXMLGUIBuilder* self, intptr_t slot) {
    if (auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self))
        vkxmlguibuilder->kxmlguibuilder_removecontainer_callback = reinterpret_cast<VirtualKXMLGUIBuilder::KXMLGUIBuilder_RemoveContainer_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ KXMLGUIBuilder_SuperCustomTags(const KXMLGUIBuilder* self) {
    QList<QString> _ret = self->KXMLGUIBuilder::customTags();
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
void KXMLGUIBuilder_OnCustomTags(KXMLGUIBuilder* self, intptr_t slot) {
    if (auto* vkxmlguibuilder = const_cast<VirtualKXMLGUIBuilder*>(dynamic_cast<const VirtualKXMLGUIBuilder*>(self)))
        vkxmlguibuilder->kxmlguibuilder_customtags_callback = reinterpret_cast<VirtualKXMLGUIBuilder::KXMLGUIBuilder_CustomTags_Callback>(slot);
}

// Base class handler implementation
QAction* KXMLGUIBuilder_SuperCreateCustomElement(KXMLGUIBuilder* self, QWidget* parent, int index, const QDomElement* element) {
    return self->KXMLGUIBuilder::createCustomElement(parent, static_cast<int>(index), *element);
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIBuilder_OnCreateCustomElement(KXMLGUIBuilder* self, intptr_t slot) {
    if (auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self))
        vkxmlguibuilder->kxmlguibuilder_createcustomelement_callback = reinterpret_cast<VirtualKXMLGUIBuilder::KXMLGUIBuilder_CreateCustomElement_Callback>(slot);
}

// Base class handler implementation
void KXMLGUIBuilder_SuperFinalizeGUI(KXMLGUIBuilder* self, KXMLGUIClient* client) {
    self->KXMLGUIBuilder::finalizeGUI(client);
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIBuilder_OnFinalizeGUI(KXMLGUIBuilder* self, intptr_t slot) {
    if (auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self))
        vkxmlguibuilder->kxmlguibuilder_finalizegui_callback = reinterpret_cast<VirtualKXMLGUIBuilder::KXMLGUIBuilder_FinalizeGUI_Callback>(slot);
}

void KXMLGUIBuilder_Delete(KXMLGUIBuilder* self) {
    delete self;
}
