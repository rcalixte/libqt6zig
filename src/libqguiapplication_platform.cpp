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

// Base class handler implementation
Display* QNativeInterface__QX11Application_SuperDisplay(const QNativeInterface__QX11Application* self) {
    auto* vqnativeinterfaceqx11application = const_cast<VirtualQNativeInterfaceQX11Application*>(dynamic_cast<const VirtualQNativeInterfaceQX11Application*>(self));
    if (vqnativeinterfaceqx11application && vqnativeinterfaceqx11application->isVirtualQNativeInterfaceQX11Application) {
        vqnativeinterfaceqx11application->setQNativeInterface__QX11Application_Display_IsBase(true);
        return static_cast<Display*>(vqnativeinterfaceqx11application->display());
    } else {
        return static_cast<Display*>(((VirtualQNativeInterfaceQX11Application*)self)->display());
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QX11Application_OnDisplay(const QNativeInterface__QX11Application* self, intptr_t slot) {
    auto* vqnativeinterfaceqx11application = const_cast<VirtualQNativeInterfaceQX11Application*>(dynamic_cast<const VirtualQNativeInterfaceQX11Application*>(self));
    if (vqnativeinterfaceqx11application && vqnativeinterfaceqx11application->isVirtualQNativeInterfaceQX11Application)
        vqnativeinterfaceqx11application->setQNativeInterface__QX11Application_Display_Callback(reinterpret_cast<VirtualQNativeInterfaceQX11Application::QNativeInterface__QX11Application_Display_Callback>(slot));
}

// Base class handler implementation
xcb_connection_t* QNativeInterface__QX11Application_SuperConnection(const QNativeInterface__QX11Application* self) {
    auto* vqnativeinterfaceqx11application = const_cast<VirtualQNativeInterfaceQX11Application*>(dynamic_cast<const VirtualQNativeInterfaceQX11Application*>(self));
    if (vqnativeinterfaceqx11application && vqnativeinterfaceqx11application->isVirtualQNativeInterfaceQX11Application) {
        vqnativeinterfaceqx11application->setQNativeInterface__QX11Application_Connection_IsBase(true);
        return vqnativeinterfaceqx11application->connection();
    } else {
        return ((VirtualQNativeInterfaceQX11Application*)self)->connection();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QX11Application_OnConnection(const QNativeInterface__QX11Application* self, intptr_t slot) {
    auto* vqnativeinterfaceqx11application = const_cast<VirtualQNativeInterfaceQX11Application*>(dynamic_cast<const VirtualQNativeInterfaceQX11Application*>(self));
    if (vqnativeinterfaceqx11application && vqnativeinterfaceqx11application->isVirtualQNativeInterfaceQX11Application)
        vqnativeinterfaceqx11application->setQNativeInterface__QX11Application_Connection_Callback(reinterpret_cast<VirtualQNativeInterfaceQX11Application::QNativeInterface__QX11Application_Connection_Callback>(slot));
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

// Base class handler implementation
wl_display* QNativeInterface__QWaylandApplication_SuperDisplay(const QNativeInterface__QWaylandApplication* self) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication) {
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_Display_IsBase(true);
        return vqnativeinterfaceqwaylandapplication->display();
    } else {
        return ((VirtualQNativeInterfaceQWaylandApplication*)self)->display();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnDisplay(const QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication)
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_Display_Callback(reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_Display_Callback>(slot));
}

// Base class handler implementation
wl_compositor* QNativeInterface__QWaylandApplication_SuperCompositor(const QNativeInterface__QWaylandApplication* self) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication) {
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_Compositor_IsBase(true);
        return vqnativeinterfaceqwaylandapplication->compositor();
    } else {
        return ((VirtualQNativeInterfaceQWaylandApplication*)self)->compositor();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnCompositor(const QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication)
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_Compositor_Callback(reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_Compositor_Callback>(slot));
}

// Base class handler implementation
wl_seat* QNativeInterface__QWaylandApplication_SuperSeat(const QNativeInterface__QWaylandApplication* self) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication) {
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_Seat_IsBase(true);
        return vqnativeinterfaceqwaylandapplication->seat();
    } else {
        return ((VirtualQNativeInterfaceQWaylandApplication*)self)->seat();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnSeat(const QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication)
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_Seat_Callback(reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_Seat_Callback>(slot));
}

// Base class handler implementation
wl_keyboard* QNativeInterface__QWaylandApplication_SuperKeyboard(const QNativeInterface__QWaylandApplication* self) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication) {
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_Keyboard_IsBase(true);
        return vqnativeinterfaceqwaylandapplication->keyboard();
    } else {
        return ((VirtualQNativeInterfaceQWaylandApplication*)self)->keyboard();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnKeyboard(const QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication)
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_Keyboard_Callback(reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_Keyboard_Callback>(slot));
}

// Base class handler implementation
wl_pointer* QNativeInterface__QWaylandApplication_SuperPointer(const QNativeInterface__QWaylandApplication* self) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication) {
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_Pointer_IsBase(true);
        return vqnativeinterfaceqwaylandapplication->pointer();
    } else {
        return ((VirtualQNativeInterfaceQWaylandApplication*)self)->pointer();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnPointer(const QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication)
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_Pointer_Callback(reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_Pointer_Callback>(slot));
}

// Base class handler implementation
wl_touch* QNativeInterface__QWaylandApplication_SuperTouch(const QNativeInterface__QWaylandApplication* self) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication) {
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_Touch_IsBase(true);
        return vqnativeinterfaceqwaylandapplication->touch();
    } else {
        return ((VirtualQNativeInterfaceQWaylandApplication*)self)->touch();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnTouch(const QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication)
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_Touch_Callback(reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_Touch_Callback>(slot));
}

// Base class handler implementation
unsigned int QNativeInterface__QWaylandApplication_SuperLastInputSerial(const QNativeInterface__QWaylandApplication* self) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication) {
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_LastInputSerial_IsBase(true);
        return static_cast<unsigned int>(vqnativeinterfaceqwaylandapplication->lastInputSerial());
    } else {
        return static_cast<unsigned int>(((VirtualQNativeInterfaceQWaylandApplication*)self)->lastInputSerial());
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnLastInputSerial(const QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication)
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_LastInputSerial_Callback(reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_LastInputSerial_Callback>(slot));
}

// Base class handler implementation
wl_seat* QNativeInterface__QWaylandApplication_SuperLastInputSeat(const QNativeInterface__QWaylandApplication* self) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication) {
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_LastInputSeat_IsBase(true);
        return vqnativeinterfaceqwaylandapplication->lastInputSeat();
    } else {
        return ((VirtualQNativeInterfaceQWaylandApplication*)self)->lastInputSeat();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWaylandApplication_OnLastInputSeat(const QNativeInterface__QWaylandApplication* self, intptr_t slot) {
    auto* vqnativeinterfaceqwaylandapplication = const_cast<VirtualQNativeInterfaceQWaylandApplication*>(dynamic_cast<const VirtualQNativeInterfaceQWaylandApplication*>(self));
    if (vqnativeinterfaceqwaylandapplication && vqnativeinterfaceqwaylandapplication->isVirtualQNativeInterfaceQWaylandApplication)
        vqnativeinterfaceqwaylandapplication->setQNativeInterface__QWaylandApplication_LastInputSeat_Callback(reinterpret_cast<VirtualQNativeInterfaceQWaylandApplication::QNativeInterface__QWaylandApplication_LastInputSeat_Callback>(slot));
}
