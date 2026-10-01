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
    return self->init(static_cast<int>(mode));
}

int KFilterBase_Mode(const KFilterBase* self) {
    return self->mode();
}

bool KFilterBase_Terminate(KFilterBase* self) {
    return self->terminate();
}

void KFilterBase_Reset(KFilterBase* self) {
    self->reset();
}

bool KFilterBase_ReadHeader(KFilterBase* self) {
    return self->readHeader();
}

bool KFilterBase_WriteHeader(KFilterBase* self, const libqt_string filename) {
    QByteArray filename_QByteArray(filename.data, filename.len);
    return self->writeHeader(filename_QByteArray);
}

void KFilterBase_SetOutBuffer(KFilterBase* self, char* data, unsigned int maxlen) {
    self->setOutBuffer(data, static_cast<uint>(maxlen));
}

void KFilterBase_SetInBuffer(KFilterBase* self, const char* data, unsigned int size) {
    self->setInBuffer(data, static_cast<uint>(size));
}

bool KFilterBase_InBufferEmpty(const KFilterBase* self) {
    return self->inBufferEmpty();
}

int KFilterBase_InBufferAvailable(const KFilterBase* self) {
    return self->inBufferAvailable();
}

bool KFilterBase_OutBufferFull(const KFilterBase* self) {
    return self->outBufferFull();
}

int KFilterBase_OutBufferAvailable(const KFilterBase* self) {
    return self->outBufferAvailable();
}

int KFilterBase_Uncompress(KFilterBase* self) {
    return static_cast<int>(self->uncompress());
}

int KFilterBase_Compress(KFilterBase* self, bool finish) {
    return static_cast<int>(self->compress(finish));
}

void KFilterBase_SetFilterFlags(KFilterBase* self, int flags) {
    self->setFilterFlags(static_cast<KFilterBase::FilterFlags>(flags));
}

int KFilterBase_FilterFlags(const KFilterBase* self) {
    return static_cast<int>(self->filterFlags());
}

void KFilterBase_VirtualHook(KFilterBase* self, int id, void* data) {
    auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self);
    if (vkfilterbase) {
        vkfilterbase->virtual_hook(static_cast<int>(id), data);
    }
}

void KFilterBase_SetDevice2(KFilterBase* self, QIODevice* dev, bool autodelete) {
    self->setDevice(dev, autodelete);
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnInit(KFilterBase* self, intptr_t slot) {
    if (auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self))
        vkfilterbase->kfilterbase_init_callback = reinterpret_cast<VirtualKFilterBase::KFilterBase_Init_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnMode(KFilterBase* self, intptr_t slot) {
    if (auto* vkfilterbase = const_cast<VirtualKFilterBase*>(dynamic_cast<const VirtualKFilterBase*>(self)))
        vkfilterbase->kfilterbase_mode_callback = reinterpret_cast<VirtualKFilterBase::KFilterBase_Mode_Callback>(slot);
}

// Base class handler implementation
bool KFilterBase_SuperTerminate(KFilterBase* self) {
    return self->KFilterBase::terminate();
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnTerminate(KFilterBase* self, intptr_t slot) {
    if (auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self))
        vkfilterbase->kfilterbase_terminate_callback = reinterpret_cast<VirtualKFilterBase::KFilterBase_Terminate_Callback>(slot);
}

// Base class handler implementation
void KFilterBase_SuperReset(KFilterBase* self) {
    self->KFilterBase::reset();
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnReset(KFilterBase* self, intptr_t slot) {
    if (auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self))
        vkfilterbase->kfilterbase_reset_callback = reinterpret_cast<VirtualKFilterBase::KFilterBase_Reset_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnReadHeader(KFilterBase* self, intptr_t slot) {
    if (auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self))
        vkfilterbase->kfilterbase_readheader_callback = reinterpret_cast<VirtualKFilterBase::KFilterBase_ReadHeader_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnWriteHeader(KFilterBase* self, intptr_t slot) {
    if (auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self))
        vkfilterbase->kfilterbase_writeheader_callback = reinterpret_cast<VirtualKFilterBase::KFilterBase_WriteHeader_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnSetOutBuffer(KFilterBase* self, intptr_t slot) {
    if (auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self))
        vkfilterbase->kfilterbase_setoutbuffer_callback = reinterpret_cast<VirtualKFilterBase::KFilterBase_SetOutBuffer_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnSetInBuffer(KFilterBase* self, intptr_t slot) {
    if (auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self))
        vkfilterbase->kfilterbase_setinbuffer_callback = reinterpret_cast<VirtualKFilterBase::KFilterBase_SetInBuffer_Callback>(slot);
}

// Base class handler implementation
bool KFilterBase_SuperInBufferEmpty(const KFilterBase* self) {
    return self->KFilterBase::inBufferEmpty();
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnInBufferEmpty(KFilterBase* self, intptr_t slot) {
    if (auto* vkfilterbase = const_cast<VirtualKFilterBase*>(dynamic_cast<const VirtualKFilterBase*>(self)))
        vkfilterbase->kfilterbase_inbufferempty_callback = reinterpret_cast<VirtualKFilterBase::KFilterBase_InBufferEmpty_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnInBufferAvailable(KFilterBase* self, intptr_t slot) {
    if (auto* vkfilterbase = const_cast<VirtualKFilterBase*>(dynamic_cast<const VirtualKFilterBase*>(self)))
        vkfilterbase->kfilterbase_inbufferavailable_callback = reinterpret_cast<VirtualKFilterBase::KFilterBase_InBufferAvailable_Callback>(slot);
}

// Base class handler implementation
bool KFilterBase_SuperOutBufferFull(const KFilterBase* self) {
    return self->KFilterBase::outBufferFull();
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnOutBufferFull(KFilterBase* self, intptr_t slot) {
    if (auto* vkfilterbase = const_cast<VirtualKFilterBase*>(dynamic_cast<const VirtualKFilterBase*>(self)))
        vkfilterbase->kfilterbase_outbufferfull_callback = reinterpret_cast<VirtualKFilterBase::KFilterBase_OutBufferFull_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnOutBufferAvailable(KFilterBase* self, intptr_t slot) {
    if (auto* vkfilterbase = const_cast<VirtualKFilterBase*>(dynamic_cast<const VirtualKFilterBase*>(self)))
        vkfilterbase->kfilterbase_outbufferavailable_callback = reinterpret_cast<VirtualKFilterBase::KFilterBase_OutBufferAvailable_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnUncompress(KFilterBase* self, intptr_t slot) {
    if (auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self))
        vkfilterbase->kfilterbase_uncompress_callback = reinterpret_cast<VirtualKFilterBase::KFilterBase_Uncompress_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnCompress(KFilterBase* self, intptr_t slot) {
    if (auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self))
        vkfilterbase->kfilterbase_compress_callback = reinterpret_cast<VirtualKFilterBase::KFilterBase_Compress_Callback>(slot);
}

// Base class handler implementation
void KFilterBase_SuperVirtualHook(KFilterBase* self, int id, void* data) {
    if (auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self)) {
        vkfilterbase->KFilterBase::virtual_hook(static_cast<int>(id), data);
    } else
        qFatal("Error: Protected virtual method KFilterBase::virtual_hook called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilterBase_OnVirtualHook(KFilterBase* self, intptr_t slot) {
    if (auto* vkfilterbase = dynamic_cast<VirtualKFilterBase*>(self))
        vkfilterbase->kfilterbase_virtualhook_callback = reinterpret_cast<VirtualKFilterBase::KFilterBase_VirtualHook_Callback>(slot);
}

void KFilterBase_Delete(KFilterBase* self) {
    delete self;
}
