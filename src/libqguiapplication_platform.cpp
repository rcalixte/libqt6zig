#define WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QWaylandApplication
#define WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QX11Application
#include <qguiapplication_platform.h>
#include "libqguiapplication_platform.h"
#include "libqguiapplication_platform.hxx"

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
QNativeInterface__QX11Application* QNativeInterface__QX11Application_new() {
    return new VirtualQNativeInterfaceQX11Application();
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
Display* QNativeInterface__QX11Application_Display(const QNativeInterface__QX11Application* self) {
    return static_cast<Display*>(self->display());
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
xcb_connection_t* QNativeInterface__QX11Application_Connection(const QNativeInterface__QX11Application* self) {
    return self->connection();
}
#endif

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QX11Application_OnDisplay(QNativeInterface__QX11Application* self, intptr_t slot) {
    if (auto* vqnativeinterfaceqx11application = const_cast<VirtualQNativeInterfaceQX11Application*>(dynamic_cast<const VirtualQNativeInterfaceQX11Application*>(self)))
        vqnativeinterfaceqx11application->qnativeinterface__qx11application_display_callback = reinterpret_cast<VirtualQNativeInterfaceQX11Application::QNativeInterface__QX11Application_Display_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QX11Application_OnConnection(QNativeInterface__QX11Application* self, intptr_t slot) {
    if (auto* vqnativeinterfaceqx11application = const_cast<VirtualQNativeInterfaceQX11Application*>(dynamic_cast<const VirtualQNativeInterfaceQX11Application*>(self)))
        vqnativeinterfaceqx11application->qnativeinterface__qx11application_connection_callback = reinterpret_cast<VirtualQNativeInterfaceQX11Application::QNativeInterface__QX11Application_Connection_Callback>(slot);
}

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
QNativeInterface__QWaylandApplication* QNativeInterface__QWaylandApplication_new() {
    return new VirtualQNativeInterfaceQWaylandApplication();
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
wl_display* QNativeInterface__QWaylandApplication_Display(const QNativeInterface__QWaylandApplication* self) {
    return self->display();
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
wl_compositor* QNativeInterface__QWaylandApplication_Compositor(const QNativeInterface__QWaylandApplication* self) {
    return self->compositor();
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
wl_seat* QNativeInterface__QWaylandApplication_Seat(const QNativeInterface__QWaylandApplication* self) {
    return self->seat();
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
wl_keyboard* QNativeInterface__QWaylandApplication_Keyboard(const QNativeInterface__QWaylandApplication* self) {
    return self->keyboard();
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
wl_pointer* QNativeInterface__QWaylandApplication_Pointer(const QNativeInterface__QWaylandApplication* self) {
    return self->pointer();
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
wl_touch* QNativeInterface__QWaylandApplication_Touch(const QNativeInterface__QWaylandApplication* self) {
    return self->touch();
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
unsigned int QNativeInterface__QWaylandApplication_LastInputSerial(const QNativeInterface__QWaylandApplication* self) {
    return static_cast<unsigned int>(self->lastInputSerial());
}
#endif

#if defined(Q_OS_LINUX) || defined(Q_OS_BSD4)
wl_seat* QNativeInterface__QWaylandApplication_LastInputSeat(const QNativeInterface__QWaylandApplication* self) {
    return self->lastInputSeat();
}
#endif

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnDisplay(QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    if (auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self)))
        vqnativeinterfaceqwaylandapplication->qnativeinterface__qwaylandapplication_display_callback = reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_Display_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnCompositor(QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    if (auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self)))
        vqnativeinterfaceqwaylandapplication->qnativeinterface__qwaylandapplication_compositor_callback = reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_Compositor_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnSeat(QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    if (auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self)))
        vqnativeinterfaceqwaylandapplication->qnativeinterface__qwaylandapplication_seat_callback = reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_Seat_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnKeyboard(QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    if (auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self)))
        vqnativeinterfaceqwaylandapplication->qnativeinterface__qwaylandapplication_keyboard_callback = reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_Keyboard_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnPointer(QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    if (auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self)))
        vqnativeinterfaceqwaylandapplication->qnativeinterface__qwaylandapplication_pointer_callback = reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_Pointer_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnTouch(QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    if (auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self)))
        vqnativeinterfaceqwaylandapplication->qnativeinterface__qwaylandapplication_touch_callback = reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_Touch_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnLastInputSerial(QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    if (auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self)))
        vqnativeinterfaceqwaylandapplication->qnativeinterface__qwaylandapplication_lastinputserial_callback = reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_LastInputSerial_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnLastInputSeat(QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    if (auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self)))
        vqnativeinterfaceqwaylandapplication->qnativeinterface__qwaylandapplication_lastinputseat_callback = reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_LastInputSeat_Callback>(slot);
}
