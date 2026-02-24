#include <KFilterBase>
#include <QByteArray>
#include <QIODevice>
#include <kfilterbase.h>
#include "libkfilterbase.h"
#include "libkfilterbase.hxx"

KFilterBase* KFilterBase_new() {
    return new VirtualKFilterBase();
}

void KFilterBase_SetDevice(KFilterBase* self, QIODevice* dev) {
    self->setDevice(dev);
}

QIODevice* KFilterBase_Device(KFilterBase* self) {
    return self->device();
}

bool KFilterBase_Init(KFilterBase* self, int mode) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        return vkfilterbase->init(static_cast<int>(mode));
    } else {
        return ((VirtualKFilterBase*)self)->init(static_cast<int>(mode));
    }
}

int KFilterBase_Mode(const KFilterBase* self) {
    auto* vkfilterbase = dynamic_cast<const VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        return vkfilterbase->mode();
    } else {
        return ((VirtualKFilterBase*)self)->mode();
    }
}

bool KFilterBase_Terminate(KFilterBase* self) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        return self->terminate();
    } else {
        return ((VirtualKFilterBase*)self)->terminate();
    }
}

void KFilterBase_Reset(KFilterBase* self) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        self->reset();
    } else {
        ((VirtualKFilterBase*)self)->reset();
    }
}

bool KFilterBase_ReadHeader(KFilterBase* self) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        return vkfilterbase->readHeader();
    } else {
        return ((VirtualKFilterBase*)self)->readHeader();
    }
}

bool KFilterBase_WriteHeader(KFilterBase* self, const libqt_string filename) {
    QByteArray filename_QByteArray(filename.data, filename.len);
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        return vkfilterbase->writeHeader(filename_QByteArray);
    } else {
        return ((VirtualKFilterBase*)self)->writeHeader(filename_QByteArray);
    }
}

void KFilterBase_SetOutBuffer(KFilterBase* self, char* data, unsigned int maxlen) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setOutBuffer(data, static_cast<uint>(maxlen));
    } else {
        ((VirtualKFilterBase*)self)->setOutBuffer(data, static_cast<uint>(maxlen));
    }
}

void KFilterBase_SetInBuffer(KFilterBase* self, const char* data, unsigned int size) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setInBuffer(data, static_cast<uint>(size));
    } else {
        ((VirtualKFilterBase*)self)->setInBuffer(data, static_cast<uint>(size));
    }
}

bool KFilterBase_InBufferEmpty(const KFilterBase* self) {
    auto* vkfilterbase = dynamic_cast<const VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        return self->inBufferEmpty();
    } else {
        return ((VirtualKFilterBase*)self)->inBufferEmpty();
    }
}

int KFilterBase_InBufferAvailable(const KFilterBase* self) {
    auto* vkfilterbase = dynamic_cast<const VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        return vkfilterbase->inBufferAvailable();
    } else {
        return ((VirtualKFilterBase*)self)->inBufferAvailable();
    }
}

bool KFilterBase_OutBufferFull(const KFilterBase* self) {
    auto* vkfilterbase = dynamic_cast<const VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        return self->outBufferFull();
    } else {
        return ((VirtualKFilterBase*)self)->outBufferFull();
    }
}

int KFilterBase_OutBufferAvailable(const KFilterBase* self) {
    auto* vkfilterbase = dynamic_cast<const VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        return vkfilterbase->outBufferAvailable();
    } else {
        return ((VirtualKFilterBase*)self)->outBufferAvailable();
    }
}

int KFilterBase_Uncompress(KFilterBase* self) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        return static_cast<int>(vkfilterbase->uncompress());
    } else {
        return static_cast<int>(((VirtualKFilterBase*)self)->uncompress());
    }
}

int KFilterBase_Compress(KFilterBase* self, bool finish) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        return static_cast<int>(vkfilterbase->compress(finish));
    } else {
        return static_cast<int>(((VirtualKFilterBase*)self)->compress(finish));
    }
}

void KFilterBase_SetFilterFlags(KFilterBase* self, int flags) {
    self->setFilterFlags(static_cast<KFilterBase::FilterFlags>(flags));
}

int KFilterBase_FilterFlags(const KFilterBase* self) {
    return static_cast<int>(self->filterFlags());
}

void KFilterBase_VirtualHook(KFilterBase* self, int id, void* data) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->virtual_hook(static_cast<int>(id), data);
    }
}

void KFilterBase_SetDevice2(KFilterBase* self, QIODevice* dev, bool autodelete) {
    self->setDevice(dev, autodelete);
}

// Base class handler implementation
bool KFilterBase_SuperInit(KFilterBase* self, int mode) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_Init_IsBase(true);
        return vkfilterbase->init(static_cast<int>(mode));
    } else {
        return ((VirtualKFilterBase*)self)->init(static_cast<int>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnInit(KFilterBase* self, intptr_t slot) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_Init_Callback(reinterpret_cast<VirtualKFilterBase::KFilterBase_Init_Callback>(slot));
    }
}

// Base class handler implementation
int KFilterBase_SuperMode(const KFilterBase* self) {
    auto* vkfilterbase = const_cast<VirtualKFilterBase*>(dynamic_cast<const VirtualKFilterBase*>(self));
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_Mode_IsBase(true);
        return vkfilterbase->mode();
    } else {
        return ((VirtualKFilterBase*)self)->mode();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnMode(const KFilterBase* self, intptr_t slot) {
    auto* vkfilterbase = const_cast<VirtualKFilterBase*>(dynamic_cast<const VirtualKFilterBase*>(self));
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_Mode_Callback(reinterpret_cast<VirtualKFilterBase::KFilterBase_Mode_Callback>(slot));
    }
}

// Base class handler implementation
bool KFilterBase_SuperTerminate(KFilterBase* self) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_Terminate_IsBase(true);
        return vkfilterbase->terminate();
    } else {
        return self->KFilterBase::terminate();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnTerminate(KFilterBase* self, intptr_t slot) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_Terminate_Callback(reinterpret_cast<VirtualKFilterBase::KFilterBase_Terminate_Callback>(slot));
    }
}

// Base class handler implementation
void KFilterBase_SuperReset(KFilterBase* self) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_Reset_IsBase(true);
        vkfilterbase->reset();
    } else {
        self->KFilterBase::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnReset(KFilterBase* self, intptr_t slot) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_Reset_Callback(reinterpret_cast<VirtualKFilterBase::KFilterBase_Reset_Callback>(slot));
    }
}

// Base class handler implementation
bool KFilterBase_SuperReadHeader(KFilterBase* self) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_ReadHeader_IsBase(true);
        return vkfilterbase->readHeader();
    } else {
        return ((VirtualKFilterBase*)self)->readHeader();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnReadHeader(KFilterBase* self, intptr_t slot) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_ReadHeader_Callback(reinterpret_cast<VirtualKFilterBase::KFilterBase_ReadHeader_Callback>(slot));
    }
}

// Base class handler implementation
bool KFilterBase_SuperWriteHeader(KFilterBase* self, const libqt_string filename) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    QByteArray filename_QByteArray(filename.data, filename.len);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_WriteHeader_IsBase(true);
        return vkfilterbase->writeHeader(filename_QByteArray);
    } else {
        return ((VirtualKFilterBase*)self)->writeHeader(filename_QByteArray);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnWriteHeader(KFilterBase* self, intptr_t slot) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_WriteHeader_Callback(reinterpret_cast<VirtualKFilterBase::KFilterBase_WriteHeader_Callback>(slot));
    }
}

// Base class handler implementation
void KFilterBase_SuperSetOutBuffer(KFilterBase* self, char* data, unsigned int maxlen) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_SetOutBuffer_IsBase(true);
        vkfilterbase->setOutBuffer(data, static_cast<uint>(maxlen));
    } else {
        ((VirtualKFilterBase*)self)->setOutBuffer(data, static_cast<uint>(maxlen));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnSetOutBuffer(KFilterBase* self, intptr_t slot) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_SetOutBuffer_Callback(reinterpret_cast<VirtualKFilterBase::KFilterBase_SetOutBuffer_Callback>(slot));
    }
}

// Base class handler implementation
void KFilterBase_SuperSetInBuffer(KFilterBase* self, const char* data, unsigned int size) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_SetInBuffer_IsBase(true);
        vkfilterbase->setInBuffer(data, static_cast<uint>(size));
    } else {
        ((VirtualKFilterBase*)self)->setInBuffer(data, static_cast<uint>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnSetInBuffer(KFilterBase* self, intptr_t slot) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_SetInBuffer_Callback(reinterpret_cast<VirtualKFilterBase::KFilterBase_SetInBuffer_Callback>(slot));
    }
}

// Base class handler implementation
bool KFilterBase_SuperInBufferEmpty(const KFilterBase* self) {
    auto* vkfilterbase = const_cast<VirtualKFilterBase*>(dynamic_cast<const VirtualKFilterBase*>(self));
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_InBufferEmpty_IsBase(true);
        return vkfilterbase->inBufferEmpty();
    } else {
        return self->KFilterBase::inBufferEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnInBufferEmpty(const KFilterBase* self, intptr_t slot) {
    auto* vkfilterbase = const_cast<VirtualKFilterBase*>(dynamic_cast<const VirtualKFilterBase*>(self));
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_InBufferEmpty_Callback(reinterpret_cast<VirtualKFilterBase::KFilterBase_InBufferEmpty_Callback>(slot));
    }
}

// Base class handler implementation
int KFilterBase_SuperInBufferAvailable(const KFilterBase* self) {
    auto* vkfilterbase = const_cast<VirtualKFilterBase*>(dynamic_cast<const VirtualKFilterBase*>(self));
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_InBufferAvailable_IsBase(true);
        return vkfilterbase->inBufferAvailable();
    } else {
        return ((VirtualKFilterBase*)self)->inBufferAvailable();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnInBufferAvailable(const KFilterBase* self, intptr_t slot) {
    auto* vkfilterbase = const_cast<VirtualKFilterBase*>(dynamic_cast<const VirtualKFilterBase*>(self));
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_InBufferAvailable_Callback(reinterpret_cast<VirtualKFilterBase::KFilterBase_InBufferAvailable_Callback>(slot));
    }
}

// Base class handler implementation
bool KFilterBase_SuperOutBufferFull(const KFilterBase* self) {
    auto* vkfilterbase = const_cast<VirtualKFilterBase*>(dynamic_cast<const VirtualKFilterBase*>(self));
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_OutBufferFull_IsBase(true);
        return vkfilterbase->outBufferFull();
    } else {
        return self->KFilterBase::outBufferFull();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnOutBufferFull(const KFilterBase* self, intptr_t slot) {
    auto* vkfilterbase = const_cast<VirtualKFilterBase*>(dynamic_cast<const VirtualKFilterBase*>(self));
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_OutBufferFull_Callback(reinterpret_cast<VirtualKFilterBase::KFilterBase_OutBufferFull_Callback>(slot));
    }
}

// Base class handler implementation
int KFilterBase_SuperOutBufferAvailable(const KFilterBase* self) {
    auto* vkfilterbase = const_cast<VirtualKFilterBase*>(dynamic_cast<const VirtualKFilterBase*>(self));
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_OutBufferAvailable_IsBase(true);
        return vkfilterbase->outBufferAvailable();
    } else {
        return ((VirtualKFilterBase*)self)->outBufferAvailable();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnOutBufferAvailable(const KFilterBase* self, intptr_t slot) {
    auto* vkfilterbase = const_cast<VirtualKFilterBase*>(dynamic_cast<const VirtualKFilterBase*>(self));
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_OutBufferAvailable_Callback(reinterpret_cast<VirtualKFilterBase::KFilterBase_OutBufferAvailable_Callback>(slot));
    }
}

// Base class handler implementation
int KFilterBase_SuperUncompress(KFilterBase* self) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_Uncompress_IsBase(true);
        return static_cast<int>(vkfilterbase->uncompress());
    } else {
        return static_cast<int>(((VirtualKFilterBase*)self)->uncompress());
    }
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnUncompress(KFilterBase* self, intptr_t slot) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_Uncompress_Callback(reinterpret_cast<VirtualKFilterBase::KFilterBase_Uncompress_Callback>(slot));
    }
}

// Base class handler implementation
int KFilterBase_SuperCompress(KFilterBase* self, bool finish) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_Compress_IsBase(true);
        return static_cast<int>(vkfilterbase->compress(finish));
    } else {
        return static_cast<int>(((VirtualKFilterBase*)self)->compress(finish));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnCompress(KFilterBase* self, intptr_t slot) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_Compress_Callback(reinterpret_cast<VirtualKFilterBase::KFilterBase_Compress_Callback>(slot));
    }
}

// Base class handler implementation
void KFilterBase_SuperVirtualHook(KFilterBase* self, int id, void* data) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_VirtualHook_IsBase(true);
        vkfilterbase->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKFilterBase*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnVirtualHook(KFilterBase* self, intptr_t slot) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase && vkfilterbase->isVirtualKFilterBase) {
        vkfilterbase->setKFilterBase_VirtualHook_Callback(reinterpret_cast<VirtualKFilterBase::KFilterBase_VirtualHook_Callback>(slot));
    }
}

void KFilterBase_Delete(KFilterBase* self) {
    delete self;
}
