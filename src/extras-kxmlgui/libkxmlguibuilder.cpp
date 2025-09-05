#include <KXMLGUIBuilder>
#include <KXMLGUIClient>
#include <QAction>
#include <QDomElement>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vkxmlguibuilder = dynamic_cast<const VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        QList<QString> _ret = self->containerTags();
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
        QList<QString> _ret = ((VirtualKXMLGUIBuilder*)self)->containerTags();
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

QWidget* KXMLGUIBuilder_CreateContainer(KXMLGUIBuilder* self, QWidget* parent, int index, const QDomElement* element, QAction** containerAction) {
    auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        return self->createContainer(parent, static_cast<int>(index), *element, *containerAction);
    } else {
        return ((VirtualKXMLGUIBuilder*)self)->createContainer(parent, static_cast<int>(index), *element, *containerAction);
    }
}

void KXMLGUIBuilder_RemoveContainer(KXMLGUIBuilder* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction) {
    auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        self->removeContainer(container, parent, *element, containerAction);
    } else {
        ((VirtualKXMLGUIBuilder*)self)->removeContainer(container, parent, *element, containerAction);
    }
}

libqt_list /* of libqt_string */ KXMLGUIBuilder_CustomTags(const KXMLGUIBuilder* self) {
    auto* vkxmlguibuilder = dynamic_cast<const VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        QList<QString> _ret = self->customTags();
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
        QList<QString> _ret = ((VirtualKXMLGUIBuilder*)self)->customTags();
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

QAction* KXMLGUIBuilder_CreateCustomElement(KXMLGUIBuilder* self, QWidget* parent, int index, const QDomElement* element) {
    auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        return self->createCustomElement(parent, static_cast<int>(index), *element);
    } else {
        return ((VirtualKXMLGUIBuilder*)self)->createCustomElement(parent, static_cast<int>(index), *element);
    }
}

void KXMLGUIBuilder_FinalizeGUI(KXMLGUIBuilder* self, KXMLGUIClient* client) {
    auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        self->finalizeGUI(client);
    } else {
        ((VirtualKXMLGUIBuilder*)self)->finalizeGUI(client);
    }
}

void KXMLGUIBuilder_VirtualHook(KXMLGUIBuilder* self, int id, void* data) {
    auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        vkxmlguibuilder->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ KXMLGUIBuilder_QBaseContainerTags(const KXMLGUIBuilder* self) {
    auto* vkxmlguibuilder = const_cast<VirtualKXMLGUIBuilder*>(dynamic_cast<const VirtualKXMLGUIBuilder*>(self));
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        vkxmlguibuilder->setKXMLGUIBuilder_ContainerTags_IsBase(true);
        QList<QString> _ret = vkxmlguibuilder->containerTags();
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
        QList<QString> _ret = self->KXMLGUIBuilder::containerTags();
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

// Auxiliary method to allow providing re-implementation
void KXMLGUIBuilder_OnContainerTags(const KXMLGUIBuilder* self, intptr_t slot) {
    auto* vkxmlguibuilder = const_cast<VirtualKXMLGUIBuilder*>(dynamic_cast<const VirtualKXMLGUIBuilder*>(self));
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        vkxmlguibuilder->setKXMLGUIBuilder_ContainerTags_Callback(reinterpret_cast<VirtualKXMLGUIBuilder::KXMLGUIBuilder_ContainerTags_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* KXMLGUIBuilder_QBaseCreateContainer(KXMLGUIBuilder* self, QWidget* parent, int index, const QDomElement* element, QAction** containerAction) {
    auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        vkxmlguibuilder->setKXMLGUIBuilder_CreateContainer_IsBase(true);
        return vkxmlguibuilder->createContainer(parent, static_cast<int>(index), *element, *containerAction);
    } else {
        return self->KXMLGUIBuilder::createContainer(parent, static_cast<int>(index), *element, *containerAction);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIBuilder_OnCreateContainer(KXMLGUIBuilder* self, intptr_t slot) {
    auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        vkxmlguibuilder->setKXMLGUIBuilder_CreateContainer_Callback(reinterpret_cast<VirtualKXMLGUIBuilder::KXMLGUIBuilder_CreateContainer_Callback>(slot));
    }
}

// Base class handler implementation
void KXMLGUIBuilder_QBaseRemoveContainer(KXMLGUIBuilder* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction) {
    auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        vkxmlguibuilder->setKXMLGUIBuilder_RemoveContainer_IsBase(true);
        vkxmlguibuilder->removeContainer(container, parent, *element, containerAction);
    } else {
        self->KXMLGUIBuilder::removeContainer(container, parent, *element, containerAction);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIBuilder_OnRemoveContainer(KXMLGUIBuilder* self, intptr_t slot) {
    auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        vkxmlguibuilder->setKXMLGUIBuilder_RemoveContainer_Callback(reinterpret_cast<VirtualKXMLGUIBuilder::KXMLGUIBuilder_RemoveContainer_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ KXMLGUIBuilder_QBaseCustomTags(const KXMLGUIBuilder* self) {
    auto* vkxmlguibuilder = const_cast<VirtualKXMLGUIBuilder*>(dynamic_cast<const VirtualKXMLGUIBuilder*>(self));
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        vkxmlguibuilder->setKXMLGUIBuilder_CustomTags_IsBase(true);
        QList<QString> _ret = vkxmlguibuilder->customTags();
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
        QList<QString> _ret = self->KXMLGUIBuilder::customTags();
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

// Auxiliary method to allow providing re-implementation
void KXMLGUIBuilder_OnCustomTags(const KXMLGUIBuilder* self, intptr_t slot) {
    auto* vkxmlguibuilder = const_cast<VirtualKXMLGUIBuilder*>(dynamic_cast<const VirtualKXMLGUIBuilder*>(self));
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        vkxmlguibuilder->setKXMLGUIBuilder_CustomTags_Callback(reinterpret_cast<VirtualKXMLGUIBuilder::KXMLGUIBuilder_CustomTags_Callback>(slot));
    }
}

// Base class handler implementation
QAction* KXMLGUIBuilder_QBaseCreateCustomElement(KXMLGUIBuilder* self, QWidget* parent, int index, const QDomElement* element) {
    auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        vkxmlguibuilder->setKXMLGUIBuilder_CreateCustomElement_IsBase(true);
        return vkxmlguibuilder->createCustomElement(parent, static_cast<int>(index), *element);
    } else {
        return self->KXMLGUIBuilder::createCustomElement(parent, static_cast<int>(index), *element);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIBuilder_OnCreateCustomElement(KXMLGUIBuilder* self, intptr_t slot) {
    auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        vkxmlguibuilder->setKXMLGUIBuilder_CreateCustomElement_Callback(reinterpret_cast<VirtualKXMLGUIBuilder::KXMLGUIBuilder_CreateCustomElement_Callback>(slot));
    }
}

// Base class handler implementation
void KXMLGUIBuilder_QBaseFinalizeGUI(KXMLGUIBuilder* self, KXMLGUIClient* client) {
    auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        vkxmlguibuilder->setKXMLGUIBuilder_FinalizeGUI_IsBase(true);
        vkxmlguibuilder->finalizeGUI(client);
    } else {
        self->KXMLGUIBuilder::finalizeGUI(client);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIBuilder_OnFinalizeGUI(KXMLGUIBuilder* self, intptr_t slot) {
    auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        vkxmlguibuilder->setKXMLGUIBuilder_FinalizeGUI_Callback(reinterpret_cast<VirtualKXMLGUIBuilder::KXMLGUIBuilder_FinalizeGUI_Callback>(slot));
    }
}

// Base class handler implementation
void KXMLGUIBuilder_QBaseVirtualHook(KXMLGUIBuilder* self, int id, void* data) {
    auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        vkxmlguibuilder->setKXMLGUIBuilder_VirtualHook_IsBase(true);
        vkxmlguibuilder->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKXMLGUIBuilder*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KXMLGUIBuilder_OnVirtualHook(KXMLGUIBuilder* self, intptr_t slot) {
    auto* vkxmlguibuilder = dynamic_cast<VirtualKXMLGUIBuilder*>(self);
    if (vkxmlguibuilder && vkxmlguibuilder->isVirtualKXMLGUIBuilder) {
        vkxmlguibuilder->setKXMLGUIBuilder_VirtualHook_Callback(reinterpret_cast<VirtualKXMLGUIBuilder::KXMLGUIBuilder_VirtualHook_Callback>(slot));
    }
}

void KXMLGUIBuilder_Delete(KXMLGUIBuilder* self) {
    delete self;
}
