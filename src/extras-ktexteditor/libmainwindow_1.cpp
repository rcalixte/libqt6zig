#include <KTextEditor/Document>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__MainWindow
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Plugin
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View
#include <KXMLGUIFactory>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWidget>
#include <mainwindow.h>
#include "libmainwindow_1.h"
#include "libmainwindow_1.hxx"

KTextEditor__MainWindow* KTextEditor__MainWindow_new(QObject* parent) {
    return new VirtualKTextEditorMainWindow(parent);
}

QMetaObject* KTextEditor__MainWindow_MetaObject(const KTextEditor__MainWindow* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEditor__MainWindow_Metacast(KTextEditor__MainWindow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEditor__MainWindow_Metacall(KTextEditor__MainWindow* self, int param1, int param2, void** param3) {
    auto* vktexteditor__mainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditor__mainwindow && vktexteditor__mainwindow->isVirtualKTextEditorMainWindow) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTextEditorMainWindow*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTextEditor__MainWindow_Tr(const char* s) {
    QString _ret = KTextEditor::MainWindow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWidget* KTextEditor__MainWindow_Window(KTextEditor__MainWindow* self) {
    return self->window();
}

KXMLGUIFactory* KTextEditor__MainWindow_GuiFactory(KTextEditor__MainWindow* self) {
    return self->guiFactory();
}

void KTextEditor__MainWindow_UnhandledShortcutOverride(KTextEditor__MainWindow* self, QEvent* e) {
    self->unhandledShortcutOverride(e);
}

void KTextEditor__MainWindow_Connect_UnhandledShortcutOverride(KTextEditor__MainWindow* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__MainWindow*, QEvent*) = reinterpret_cast<void (*)(KTextEditor__MainWindow*, QEvent*)>(slot);
    KTextEditor::MainWindow::connect(self, &KTextEditor::MainWindow::unhandledShortcutOverride, [self, slotFunc](QEvent* e) {
        QEvent* sigval1 = e;
        slotFunc(self, sigval1);
    });
}

libqt_list /* of KTextEditor__View* */ KTextEditor__MainWindow_Views(KTextEditor__MainWindow* self) {
    QList<KTextEditor::View*> _ret = self->views();
    // Convert QList<> from C++ memory to manually-managed C memory
    KTextEditor__View** _arr = static_cast<KTextEditor__View**>(malloc(sizeof(KTextEditor__View*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KTextEditor__View* KTextEditor__MainWindow_ActiveView(KTextEditor__MainWindow* self) {
    return self->activeView();
}

KTextEditor__View* KTextEditor__MainWindow_ActivateView(KTextEditor__MainWindow* self, KTextEditor__Document* document) {
    return self->activateView(document);
}

KTextEditor__View* KTextEditor__MainWindow_OpenUrl(KTextEditor__MainWindow* self, const QUrl* url) {
    return self->openUrl(*url);
}

bool KTextEditor__MainWindow_CloseView(KTextEditor__MainWindow* self, KTextEditor__View* view) {
    return self->closeView(view);
}

void KTextEditor__MainWindow_SplitView(KTextEditor__MainWindow* self, int orientation) {
    self->splitView(static_cast<Qt::Orientation>(orientation));
}

bool KTextEditor__MainWindow_CloseSplitView(KTextEditor__MainWindow* self, KTextEditor__View* view) {
    return self->closeSplitView(view);
}

bool KTextEditor__MainWindow_ViewsInSameSplitView(KTextEditor__MainWindow* self, KTextEditor__View* view1, KTextEditor__View* view2) {
    return self->viewsInSameSplitView(view1, view2);
}

void KTextEditor__MainWindow_ViewChanged(KTextEditor__MainWindow* self, KTextEditor__View* view) {
    self->viewChanged(view);
}

void KTextEditor__MainWindow_Connect_ViewChanged(KTextEditor__MainWindow* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__MainWindow*, KTextEditor__View*) = reinterpret_cast<void (*)(KTextEditor__MainWindow*, KTextEditor__View*)>(slot);
    KTextEditor::MainWindow::connect(self, &KTextEditor::MainWindow::viewChanged, [self, slotFunc](KTextEditor::View* view) {
        KTextEditor__View* sigval1 = view;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__MainWindow_ViewCreated(KTextEditor__MainWindow* self, KTextEditor__View* view) {
    self->viewCreated(view);
}

void KTextEditor__MainWindow_Connect_ViewCreated(KTextEditor__MainWindow* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__MainWindow*, KTextEditor__View*) = reinterpret_cast<void (*)(KTextEditor__MainWindow*, KTextEditor__View*)>(slot);
    KTextEditor::MainWindow::connect(self, &KTextEditor::MainWindow::viewCreated, [self, slotFunc](KTextEditor::View* view) {
        KTextEditor__View* sigval1 = view;
        slotFunc(self, sigval1);
    });
}

QWidget* KTextEditor__MainWindow_CreateViewBar(KTextEditor__MainWindow* self, KTextEditor__View* view) {
    return self->createViewBar(view);
}

void KTextEditor__MainWindow_DeleteViewBar(KTextEditor__MainWindow* self, KTextEditor__View* view) {
    self->deleteViewBar(view);
}

void KTextEditor__MainWindow_AddWidgetToViewBar(KTextEditor__MainWindow* self, KTextEditor__View* view, QWidget* bar) {
    self->addWidgetToViewBar(view, bar);
}

void KTextEditor__MainWindow_ShowViewBar(KTextEditor__MainWindow* self, KTextEditor__View* view) {
    self->showViewBar(view);
}

void KTextEditor__MainWindow_HideViewBar(KTextEditor__MainWindow* self, KTextEditor__View* view) {
    self->hideViewBar(view);
}

QWidget* KTextEditor__MainWindow_CreateToolView(KTextEditor__MainWindow* self, KTextEditor__Plugin* plugin, const libqt_string identifier, int pos, const QIcon* icon, const libqt_string text) {
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->createToolView(plugin, identifier_QString, static_cast<KTextEditor::MainWindow::ToolViewPosition>(pos), *icon, text_QString);
}

bool KTextEditor__MainWindow_MoveToolView(KTextEditor__MainWindow* self, QWidget* widget, int pos) {
    return self->moveToolView(widget, static_cast<KTextEditor::MainWindow::ToolViewPosition>(pos));
}

bool KTextEditor__MainWindow_ShowToolView(KTextEditor__MainWindow* self, QWidget* widget) {
    return self->showToolView(widget);
}

bool KTextEditor__MainWindow_HideToolView(KTextEditor__MainWindow* self, QWidget* widget) {
    return self->hideToolView(widget);
}

bool KTextEditor__MainWindow_ShowPluginConfigPage(KTextEditor__MainWindow* self, KTextEditor__Plugin* plugin, int page) {
    return self->showPluginConfigPage(plugin, static_cast<int>(page));
}

QObject* KTextEditor__MainWindow_PluginView(KTextEditor__MainWindow* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->pluginView(name_QString);
}

void KTextEditor__MainWindow_PluginViewCreated(KTextEditor__MainWindow* self, const libqt_string name, QObject* pluginView) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->pluginViewCreated(name_QString, pluginView);
}

void KTextEditor__MainWindow_Connect_PluginViewCreated(KTextEditor__MainWindow* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__MainWindow*, const char*, QObject*) = reinterpret_cast<void (*)(KTextEditor__MainWindow*, const char*, QObject*)>(slot);
    KTextEditor::MainWindow::connect(self, &KTextEditor::MainWindow::pluginViewCreated, [self, slotFunc](const QString& name, QObject* pluginView) {
        const QString name_ret = name;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray name_b = name_ret.toUtf8();
        const char* name_str = static_cast<const char*>(malloc(name_b.length() + 1));
        memcpy((void*)name_str, name_b.data(), name_b.length());
        ((char*)name_str)[name_b.length()] = '\0';
        const char* sigval1 = name_str;
        QObject* sigval2 = pluginView;
        slotFunc(self, sigval1, sigval2);
        libqt_free(name_str);
    });
}

void KTextEditor__MainWindow_PluginViewDeleted(KTextEditor__MainWindow* self, const libqt_string name, QObject* pluginView) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->pluginViewDeleted(name_QString, pluginView);
}

void KTextEditor__MainWindow_Connect_PluginViewDeleted(KTextEditor__MainWindow* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__MainWindow*, const char*, QObject*) = reinterpret_cast<void (*)(KTextEditor__MainWindow*, const char*, QObject*)>(slot);
    KTextEditor::MainWindow::connect(self, &KTextEditor::MainWindow::pluginViewDeleted, [self, slotFunc](const QString& name, QObject* pluginView) {
        const QString name_ret = name;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray name_b = name_ret.toUtf8();
        const char* name_str = static_cast<const char*>(malloc(name_b.length() + 1));
        memcpy((void*)name_str, name_b.data(), name_b.length());
        ((char*)name_str)[name_b.length()] = '\0';
        const char* sigval1 = name_str;
        QObject* sigval2 = pluginView;
        slotFunc(self, sigval1, sigval2);
        libqt_free(name_str);
    });
}

bool KTextEditor__MainWindow_AddWidget(KTextEditor__MainWindow* self, QWidget* widget) {
    return self->addWidget(widget);
}

bool KTextEditor__MainWindow_RemoveWidget(KTextEditor__MainWindow* self, QWidget* widget) {
    return self->removeWidget(widget);
}

libqt_list /* of QWidget* */ KTextEditor__MainWindow_Widgets(KTextEditor__MainWindow* self) {
    QList<QWidget*> _ret = self->widgets();
    // Convert QList<> from C++ memory to manually-managed C memory
    QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QWidget* KTextEditor__MainWindow_ActiveWidget(KTextEditor__MainWindow* self) {
    return self->activeWidget();
}

void KTextEditor__MainWindow_ActivateWidget(KTextEditor__MainWindow* self, QWidget* widget) {
    self->activateWidget(widget);
}

void KTextEditor__MainWindow_WidgetAdded(KTextEditor__MainWindow* self, QWidget* widget) {
    self->widgetAdded(widget);
}

void KTextEditor__MainWindow_Connect_WidgetAdded(KTextEditor__MainWindow* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__MainWindow*, QWidget*) = reinterpret_cast<void (*)(KTextEditor__MainWindow*, QWidget*)>(slot);
    KTextEditor::MainWindow::connect(self, &KTextEditor::MainWindow::widgetAdded, [self, slotFunc](QWidget* widget) {
        QWidget* sigval1 = widget;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__MainWindow_WidgetRemoved(KTextEditor__MainWindow* self, QWidget* widget) {
    self->widgetRemoved(widget);
}

void KTextEditor__MainWindow_Connect_WidgetRemoved(KTextEditor__MainWindow* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__MainWindow*, QWidget*) = reinterpret_cast<void (*)(KTextEditor__MainWindow*, QWidget*)>(slot);
    KTextEditor::MainWindow::connect(self, &KTextEditor::MainWindow::widgetRemoved, [self, slotFunc](QWidget* widget) {
        QWidget* sigval1 = widget;
        slotFunc(self, sigval1);
    });
}

bool KTextEditor__MainWindow_ShowMessage(KTextEditor__MainWindow* self, const libqt_map /* of libqt_string to QVariant* */ message) {
    QMap<QString, QVariant> message_QMap;
    libqt_string* message_karr = static_cast<libqt_string*>(message.keys);
    QVariant** message_varr = static_cast<QVariant**>(message.values);
    for (size_t i = 0; i < message.len; ++i) {
        QString message_karr_i_QString = QString::fromUtf8(message_karr[i].data, message_karr[i].len);
        message_QMap[message_karr_i_QString] = *(message_varr[i]);
    }
    return self->showMessage(message_QMap);
}

libqt_string KTextEditor__MainWindow_Tr2(const char* s, const char* c) {
    QString _ret = KTextEditor::MainWindow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__MainWindow_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTextEditor::MainWindow::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KTextEditor__View* KTextEditor__MainWindow_OpenUrl2(KTextEditor__MainWindow* self, const QUrl* url, const libqt_string encoding) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    return self->openUrl(*url, encoding_QString);
}

// Base class handler implementation
int KTextEditor__MainWindow_QBaseMetacall(KTextEditor__MainWindow* self, int param1, int param2, void** param3) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_Metacall_IsBase(true);
        return vktexteditormainwindow->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KTextEditor::MainWindow::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MainWindow_OnMetacall(KTextEditor__MainWindow* self, intptr_t slot) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_Metacall_Callback(reinterpret_cast<VirtualKTextEditorMainWindow::KTextEditor__MainWindow_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__MainWindow_Event(KTextEditor__MainWindow* self, QEvent* event) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        return vktexteditormainwindow->event(event);
    } else {
        return self->KTextEditor::MainWindow::event(event);
    }
}

// Base class handler implementation
bool KTextEditor__MainWindow_QBaseEvent(KTextEditor__MainWindow* self, QEvent* event) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_Event_IsBase(true);
        return vktexteditormainwindow->event(event);
    } else {
        return self->KTextEditor::MainWindow::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MainWindow_OnEvent(KTextEditor__MainWindow* self, intptr_t slot) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_Event_Callback(reinterpret_cast<VirtualKTextEditorMainWindow::KTextEditor__MainWindow_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__MainWindow_EventFilter(KTextEditor__MainWindow* self, QObject* watched, QEvent* event) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        return vktexteditormainwindow->eventFilter(watched, event);
    } else {
        return self->KTextEditor::MainWindow::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KTextEditor__MainWindow_QBaseEventFilter(KTextEditor__MainWindow* self, QObject* watched, QEvent* event) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_EventFilter_IsBase(true);
        return vktexteditormainwindow->eventFilter(watched, event);
    } else {
        return self->KTextEditor::MainWindow::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MainWindow_OnEventFilter(KTextEditor__MainWindow* self, intptr_t slot) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_EventFilter_Callback(reinterpret_cast<VirtualKTextEditorMainWindow::KTextEditor__MainWindow_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__MainWindow_TimerEvent(KTextEditor__MainWindow* self, QTimerEvent* event) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->timerEvent(event);
    } else {
        ((VirtualKTextEditorMainWindow*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__MainWindow_QBaseTimerEvent(KTextEditor__MainWindow* self, QTimerEvent* event) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_TimerEvent_IsBase(true);
        vktexteditormainwindow->timerEvent(event);
    } else {
        ((VirtualKTextEditorMainWindow*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MainWindow_OnTimerEvent(KTextEditor__MainWindow* self, intptr_t slot) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_TimerEvent_Callback(reinterpret_cast<VirtualKTextEditorMainWindow::KTextEditor__MainWindow_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__MainWindow_ChildEvent(KTextEditor__MainWindow* self, QChildEvent* event) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->childEvent(event);
    } else {
        ((VirtualKTextEditorMainWindow*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__MainWindow_QBaseChildEvent(KTextEditor__MainWindow* self, QChildEvent* event) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_ChildEvent_IsBase(true);
        vktexteditormainwindow->childEvent(event);
    } else {
        ((VirtualKTextEditorMainWindow*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MainWindow_OnChildEvent(KTextEditor__MainWindow* self, intptr_t slot) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_ChildEvent_Callback(reinterpret_cast<VirtualKTextEditorMainWindow::KTextEditor__MainWindow_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__MainWindow_CustomEvent(KTextEditor__MainWindow* self, QEvent* event) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->customEvent(event);
    } else {
        ((VirtualKTextEditorMainWindow*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__MainWindow_QBaseCustomEvent(KTextEditor__MainWindow* self, QEvent* event) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_CustomEvent_IsBase(true);
        vktexteditormainwindow->customEvent(event);
    } else {
        ((VirtualKTextEditorMainWindow*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MainWindow_OnCustomEvent(KTextEditor__MainWindow* self, intptr_t slot) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_CustomEvent_Callback(reinterpret_cast<VirtualKTextEditorMainWindow::KTextEditor__MainWindow_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__MainWindow_ConnectNotify(KTextEditor__MainWindow* self, const QMetaMethod* signal) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorMainWindow*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__MainWindow_QBaseConnectNotify(KTextEditor__MainWindow* self, const QMetaMethod* signal) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_ConnectNotify_IsBase(true);
        vktexteditormainwindow->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorMainWindow*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MainWindow_OnConnectNotify(KTextEditor__MainWindow* self, intptr_t slot) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_ConnectNotify_Callback(reinterpret_cast<VirtualKTextEditorMainWindow::KTextEditor__MainWindow_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__MainWindow_DisconnectNotify(KTextEditor__MainWindow* self, const QMetaMethod* signal) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorMainWindow*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__MainWindow_QBaseDisconnectNotify(KTextEditor__MainWindow* self, const QMetaMethod* signal) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_DisconnectNotify_IsBase(true);
        vktexteditormainwindow->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorMainWindow*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MainWindow_OnDisconnectNotify(KTextEditor__MainWindow* self, intptr_t slot) {
    auto* vktexteditormainwindow = dynamic_cast<VirtualKTextEditorMainWindow*>(self);
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_DisconnectNotify_Callback(reinterpret_cast<VirtualKTextEditorMainWindow::KTextEditor__MainWindow_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTextEditor__MainWindow_Sender(const KTextEditor__MainWindow* self) {
    auto* vktexteditormainwindow = const_cast<VirtualKTextEditorMainWindow*>(dynamic_cast<const VirtualKTextEditorMainWindow*>(self));
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        return vktexteditormainwindow->sender();
    } else {
        return ((VirtualKTextEditorMainWindow*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTextEditor__MainWindow_QBaseSender(const KTextEditor__MainWindow* self) {
    auto* vktexteditormainwindow = const_cast<VirtualKTextEditorMainWindow*>(dynamic_cast<const VirtualKTextEditorMainWindow*>(self));
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_Sender_IsBase(true);
        return vktexteditormainwindow->sender();
    } else {
        return ((VirtualKTextEditorMainWindow*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MainWindow_OnSender(const KTextEditor__MainWindow* self, intptr_t slot) {
    auto* vktexteditormainwindow = const_cast<VirtualKTextEditorMainWindow*>(dynamic_cast<const VirtualKTextEditorMainWindow*>(self));
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_Sender_Callback(reinterpret_cast<VirtualKTextEditorMainWindow::KTextEditor__MainWindow_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__MainWindow_SenderSignalIndex(const KTextEditor__MainWindow* self) {
    auto* vktexteditormainwindow = const_cast<VirtualKTextEditorMainWindow*>(dynamic_cast<const VirtualKTextEditorMainWindow*>(self));
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        return vktexteditormainwindow->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorMainWindow*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTextEditor__MainWindow_QBaseSenderSignalIndex(const KTextEditor__MainWindow* self) {
    auto* vktexteditormainwindow = const_cast<VirtualKTextEditorMainWindow*>(dynamic_cast<const VirtualKTextEditorMainWindow*>(self));
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_SenderSignalIndex_IsBase(true);
        return vktexteditormainwindow->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorMainWindow*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MainWindow_OnSenderSignalIndex(const KTextEditor__MainWindow* self, intptr_t slot) {
    auto* vktexteditormainwindow = const_cast<VirtualKTextEditorMainWindow*>(dynamic_cast<const VirtualKTextEditorMainWindow*>(self));
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTextEditorMainWindow::KTextEditor__MainWindow_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__MainWindow_Receivers(const KTextEditor__MainWindow* self, const char* signal) {
    auto* vktexteditormainwindow = const_cast<VirtualKTextEditorMainWindow*>(dynamic_cast<const VirtualKTextEditorMainWindow*>(self));
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        return vktexteditormainwindow->receivers(signal);
    } else {
        return ((VirtualKTextEditorMainWindow*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTextEditor__MainWindow_QBaseReceivers(const KTextEditor__MainWindow* self, const char* signal) {
    auto* vktexteditormainwindow = const_cast<VirtualKTextEditorMainWindow*>(dynamic_cast<const VirtualKTextEditorMainWindow*>(self));
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_Receivers_IsBase(true);
        return vktexteditormainwindow->receivers(signal);
    } else {
        return ((VirtualKTextEditorMainWindow*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MainWindow_OnReceivers(const KTextEditor__MainWindow* self, intptr_t slot) {
    auto* vktexteditormainwindow = const_cast<VirtualKTextEditorMainWindow*>(dynamic_cast<const VirtualKTextEditorMainWindow*>(self));
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_Receivers_Callback(reinterpret_cast<VirtualKTextEditorMainWindow::KTextEditor__MainWindow_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__MainWindow_IsSignalConnected(const KTextEditor__MainWindow* self, const QMetaMethod* signal) {
    auto* vktexteditormainwindow = const_cast<VirtualKTextEditorMainWindow*>(dynamic_cast<const VirtualKTextEditorMainWindow*>(self));
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        return vktexteditormainwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorMainWindow*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTextEditor__MainWindow_QBaseIsSignalConnected(const KTextEditor__MainWindow* self, const QMetaMethod* signal) {
    auto* vktexteditormainwindow = const_cast<VirtualKTextEditorMainWindow*>(dynamic_cast<const VirtualKTextEditorMainWindow*>(self));
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_IsSignalConnected_IsBase(true);
        return vktexteditormainwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorMainWindow*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__MainWindow_OnIsSignalConnected(const KTextEditor__MainWindow* self, intptr_t slot) {
    auto* vktexteditormainwindow = const_cast<VirtualKTextEditorMainWindow*>(dynamic_cast<const VirtualKTextEditorMainWindow*>(self));
    if (vktexteditormainwindow && vktexteditormainwindow->isVirtualKTextEditorMainWindow) {
        vktexteditormainwindow->setKTextEditor__MainWindow_IsSignalConnected_Callback(reinterpret_cast<VirtualKTextEditorMainWindow::KTextEditor__MainWindow_IsSignalConnected_Callback>(slot));
    }
}

void KTextEditor__MainWindow_Delete(KTextEditor__MainWindow* self) {
    delete self;
}
