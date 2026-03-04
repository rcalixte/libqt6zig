#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Link
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkAction
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkBrowse
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkDestination
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkExecute
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkGoto
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkHide
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkJavaScript
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkMovie
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkOCGState
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkRendition
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkResetForm
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkSound
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkSubmitForm
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__MediaRendition
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__MovieAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__ScreenAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__SoundObject
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVector>
#include <poppler-link.h>
#include "libpoppler_link.h"
#include "libpoppler_link.hxx"

Poppler__LinkDestination* Poppler__LinkDestination_new(const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    return new Poppler::LinkDestination(description_QString);
}

Poppler__LinkDestination* Poppler__LinkDestination_new2(const Poppler__LinkDestination* other) {
    return new Poppler::LinkDestination(*other);
}

int Poppler__LinkDestination_Kind(const Poppler__LinkDestination* self) {
    return static_cast<int>(self->kind());
}

int Poppler__LinkDestination_PageNumber(const Poppler__LinkDestination* self) {
    return self->pageNumber();
}

double Poppler__LinkDestination_Left(const Poppler__LinkDestination* self) {
    return self->left();
}

double Poppler__LinkDestination_Bottom(const Poppler__LinkDestination* self) {
    return self->bottom();
}

double Poppler__LinkDestination_Right(const Poppler__LinkDestination* self) {
    return self->right();
}

double Poppler__LinkDestination_Top(const Poppler__LinkDestination* self) {
    return self->top();
}

double Poppler__LinkDestination_Zoom(const Poppler__LinkDestination* self) {
    return self->zoom();
}

bool Poppler__LinkDestination_IsChangeLeft(const Poppler__LinkDestination* self) {
    return self->isChangeLeft();
}

bool Poppler__LinkDestination_IsChangeTop(const Poppler__LinkDestination* self) {
    return self->isChangeTop();
}

bool Poppler__LinkDestination_IsChangeZoom(const Poppler__LinkDestination* self) {
    return self->isChangeZoom();
}

libqt_string Poppler__LinkDestination_ToString(const Poppler__LinkDestination* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Poppler__LinkDestination_DestinationName(const Poppler__LinkDestination* self) {
    QString _ret = self->destinationName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__LinkDestination_OperatorAssign(Poppler__LinkDestination* self, const Poppler__LinkDestination* other) {
    self->operator=(*other);
}

void Poppler__LinkDestination_Delete(Poppler__LinkDestination* self) {
    delete self;
}

Poppler__Link* Poppler__Link_new(const QRectF* linkArea) {
    return new VirtualPopplerLink(*linkArea);
}

int Poppler__Link_LinkType(const Poppler__Link* self) {
    auto* vpoppler__link = dynamic_cast<const VirtualPopplerLink*>(self);
    if (vpoppler__link && vpoppler__link->isVirtualPopplerLink) {
        return static_cast<int>(self->linkType());
    } else {
        return static_cast<int>(((VirtualPopplerLink*)self)->linkType());
    }
}

QRectF* Poppler__Link_LinkArea(const Poppler__Link* self) {
    return new QRectF(self->linkArea());
}

libqt_list /* of Poppler__Link* */ Poppler__Link_NextLinks(const Poppler__Link* self) {
    QVector<Poppler::Link*> _ret = self->nextLinks();
    // Convert QVector<> from C++ memory to manually-managed C memory
    Poppler__Link** _arr = static_cast<Poppler__Link**>(malloc(sizeof(Poppler__Link*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
int Poppler__Link_SuperLinkType(const Poppler__Link* self) {
    auto* vpopplerlink = const_cast<VirtualPopplerLink*>(dynamic_cast<const VirtualPopplerLink*>(self));
    if (vpopplerlink && vpopplerlink->isVirtualPopplerLink) {
        vpopplerlink->setPoppler__Link_LinkType_IsBase(true);
        return static_cast<int>(vpopplerlink->linkType());
    } else {
        return static_cast<int>(self->Poppler::Link::linkType());
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__Link_OnLinkType(const Poppler__Link* self, intptr_t slot) {
    auto* vpopplerlink = const_cast<VirtualPopplerLink*>(dynamic_cast<const VirtualPopplerLink*>(self));
    if (vpopplerlink && vpopplerlink->isVirtualPopplerLink) {
        vpopplerlink->setPoppler__Link_LinkType_Callback(reinterpret_cast<VirtualPopplerLink::Poppler__Link_LinkType_Callback>(slot));
    }
}

void Poppler__Link_Delete(Poppler__Link* self) {
    delete self;
}

Poppler__LinkGoto* Poppler__LinkGoto_new(const QRectF* linkArea, const libqt_string extFileName, const Poppler__LinkDestination* destination) {
    QString extFileName_QString = QString::fromUtf8(extFileName.data, extFileName.len);
    return new VirtualPopplerLinkGoto(*linkArea, extFileName_QString, *destination);
}

bool Poppler__LinkGoto_IsExternal(const Poppler__LinkGoto* self) {
    return self->isExternal();
}

libqt_string Poppler__LinkGoto_FileName(const Poppler__LinkGoto* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Poppler__LinkDestination* Poppler__LinkGoto_Destination(const Poppler__LinkGoto* self) {
    return new Poppler::LinkDestination(self->destination());
}

int Poppler__LinkGoto_LinkType(const Poppler__LinkGoto* self) {
    auto* vpoppler__linkgoto = dynamic_cast<const VirtualPopplerLinkGoto*>(self);
    if (vpoppler__linkgoto && vpoppler__linkgoto->isVirtualPopplerLinkGoto) {
        return static_cast<int>(self->linkType());
    } else {
        return static_cast<int>(((VirtualPopplerLinkGoto*)self)->linkType());
    }
}

// Base class handler implementation
int Poppler__LinkGoto_SuperLinkType(const Poppler__LinkGoto* self) {
    auto* vpopplerlinkgoto = const_cast<VirtualPopplerLinkGoto*>(dynamic_cast<const VirtualPopplerLinkGoto*>(self));
    if (vpopplerlinkgoto && vpopplerlinkgoto->isVirtualPopplerLinkGoto) {
        vpopplerlinkgoto->setPoppler__LinkGoto_LinkType_IsBase(true);
        return static_cast<int>(vpopplerlinkgoto->linkType());
    } else {
        return static_cast<int>(self->Poppler::LinkGoto::linkType());
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__LinkGoto_OnLinkType(const Poppler__LinkGoto* self, intptr_t slot) {
    auto* vpopplerlinkgoto = const_cast<VirtualPopplerLinkGoto*>(dynamic_cast<const VirtualPopplerLinkGoto*>(self));
    if (vpopplerlinkgoto && vpopplerlinkgoto->isVirtualPopplerLinkGoto) {
        vpopplerlinkgoto->setPoppler__LinkGoto_LinkType_Callback(reinterpret_cast<VirtualPopplerLinkGoto::Poppler__LinkGoto_LinkType_Callback>(slot));
    }
}

void Poppler__LinkGoto_Delete(Poppler__LinkGoto* self) {
    delete self;
}

Poppler__LinkExecute* Poppler__LinkExecute_new(const QRectF* linkArea, const libqt_string file, const libqt_string params) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    QString params_QString = QString::fromUtf8(params.data, params.len);
    return new VirtualPopplerLinkExecute(*linkArea, file_QString, params_QString);
}

libqt_string Poppler__LinkExecute_FileName(const Poppler__LinkExecute* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Poppler__LinkExecute_Parameters(const Poppler__LinkExecute* self) {
    QString _ret = self->parameters();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Poppler__LinkExecute_LinkType(const Poppler__LinkExecute* self) {
    auto* vpoppler__linkexecute = dynamic_cast<const VirtualPopplerLinkExecute*>(self);
    if (vpoppler__linkexecute && vpoppler__linkexecute->isVirtualPopplerLinkExecute) {
        return static_cast<int>(self->linkType());
    } else {
        return static_cast<int>(((VirtualPopplerLinkExecute*)self)->linkType());
    }
}

// Base class handler implementation
int Poppler__LinkExecute_SuperLinkType(const Poppler__LinkExecute* self) {
    auto* vpopplerlinkexecute = const_cast<VirtualPopplerLinkExecute*>(dynamic_cast<const VirtualPopplerLinkExecute*>(self));
    if (vpopplerlinkexecute && vpopplerlinkexecute->isVirtualPopplerLinkExecute) {
        vpopplerlinkexecute->setPoppler__LinkExecute_LinkType_IsBase(true);
        return static_cast<int>(vpopplerlinkexecute->linkType());
    } else {
        return static_cast<int>(self->Poppler::LinkExecute::linkType());
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__LinkExecute_OnLinkType(const Poppler__LinkExecute* self, intptr_t slot) {
    auto* vpopplerlinkexecute = const_cast<VirtualPopplerLinkExecute*>(dynamic_cast<const VirtualPopplerLinkExecute*>(self));
    if (vpopplerlinkexecute && vpopplerlinkexecute->isVirtualPopplerLinkExecute) {
        vpopplerlinkexecute->setPoppler__LinkExecute_LinkType_Callback(reinterpret_cast<VirtualPopplerLinkExecute::Poppler__LinkExecute_LinkType_Callback>(slot));
    }
}

void Poppler__LinkExecute_Delete(Poppler__LinkExecute* self) {
    delete self;
}

Poppler__LinkBrowse* Poppler__LinkBrowse_new(const QRectF* linkArea, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    return new VirtualPopplerLinkBrowse(*linkArea, url_QString);
}

libqt_string Poppler__LinkBrowse_Url(const Poppler__LinkBrowse* self) {
    QString _ret = self->url();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Poppler__LinkBrowse_LinkType(const Poppler__LinkBrowse* self) {
    auto* vpoppler__linkbrowse = dynamic_cast<const VirtualPopplerLinkBrowse*>(self);
    if (vpoppler__linkbrowse && vpoppler__linkbrowse->isVirtualPopplerLinkBrowse) {
        return static_cast<int>(self->linkType());
    } else {
        return static_cast<int>(((VirtualPopplerLinkBrowse*)self)->linkType());
    }
}

// Base class handler implementation
int Poppler__LinkBrowse_SuperLinkType(const Poppler__LinkBrowse* self) {
    auto* vpopplerlinkbrowse = const_cast<VirtualPopplerLinkBrowse*>(dynamic_cast<const VirtualPopplerLinkBrowse*>(self));
    if (vpopplerlinkbrowse && vpopplerlinkbrowse->isVirtualPopplerLinkBrowse) {
        vpopplerlinkbrowse->setPoppler__LinkBrowse_LinkType_IsBase(true);
        return static_cast<int>(vpopplerlinkbrowse->linkType());
    } else {
        return static_cast<int>(self->Poppler::LinkBrowse::linkType());
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__LinkBrowse_OnLinkType(const Poppler__LinkBrowse* self, intptr_t slot) {
    auto* vpopplerlinkbrowse = const_cast<VirtualPopplerLinkBrowse*>(dynamic_cast<const VirtualPopplerLinkBrowse*>(self));
    if (vpopplerlinkbrowse && vpopplerlinkbrowse->isVirtualPopplerLinkBrowse) {
        vpopplerlinkbrowse->setPoppler__LinkBrowse_LinkType_Callback(reinterpret_cast<VirtualPopplerLinkBrowse::Poppler__LinkBrowse_LinkType_Callback>(slot));
    }
}

void Poppler__LinkBrowse_Delete(Poppler__LinkBrowse* self) {
    delete self;
}

Poppler__LinkAction* Poppler__LinkAction_new(const QRectF* linkArea, int actionType) {
    return new VirtualPopplerLinkAction(*linkArea, static_cast<Poppler::LinkAction::ActionType>(actionType));
}

int Poppler__LinkAction_ActionType(const Poppler__LinkAction* self) {
    return static_cast<int>(self->actionType());
}

int Poppler__LinkAction_LinkType(const Poppler__LinkAction* self) {
    auto* vpoppler__linkaction = dynamic_cast<const VirtualPopplerLinkAction*>(self);
    if (vpoppler__linkaction && vpoppler__linkaction->isVirtualPopplerLinkAction) {
        return static_cast<int>(self->linkType());
    } else {
        return static_cast<int>(((VirtualPopplerLinkAction*)self)->linkType());
    }
}

// Base class handler implementation
int Poppler__LinkAction_SuperLinkType(const Poppler__LinkAction* self) {
    auto* vpopplerlinkaction = const_cast<VirtualPopplerLinkAction*>(dynamic_cast<const VirtualPopplerLinkAction*>(self));
    if (vpopplerlinkaction && vpopplerlinkaction->isVirtualPopplerLinkAction) {
        vpopplerlinkaction->setPoppler__LinkAction_LinkType_IsBase(true);
        return static_cast<int>(vpopplerlinkaction->linkType());
    } else {
        return static_cast<int>(self->Poppler::LinkAction::linkType());
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__LinkAction_OnLinkType(const Poppler__LinkAction* self, intptr_t slot) {
    auto* vpopplerlinkaction = const_cast<VirtualPopplerLinkAction*>(dynamic_cast<const VirtualPopplerLinkAction*>(self));
    if (vpopplerlinkaction && vpopplerlinkaction->isVirtualPopplerLinkAction) {
        vpopplerlinkaction->setPoppler__LinkAction_LinkType_Callback(reinterpret_cast<VirtualPopplerLinkAction::Poppler__LinkAction_LinkType_Callback>(slot));
    }
}

void Poppler__LinkAction_Delete(Poppler__LinkAction* self) {
    delete self;
}

Poppler__LinkSound* Poppler__LinkSound_new(const QRectF* linkArea, double volume, bool sync, bool repeat, bool mix, Poppler__SoundObject* sound) {
    return new VirtualPopplerLinkSound(*linkArea, static_cast<double>(volume), sync, repeat, mix, sound);
}

int Poppler__LinkSound_LinkType(const Poppler__LinkSound* self) {
    auto* vpoppler__linksound = dynamic_cast<const VirtualPopplerLinkSound*>(self);
    if (vpoppler__linksound && vpoppler__linksound->isVirtualPopplerLinkSound) {
        return static_cast<int>(self->linkType());
    } else {
        return static_cast<int>(((VirtualPopplerLinkSound*)self)->linkType());
    }
}

double Poppler__LinkSound_Volume(const Poppler__LinkSound* self) {
    return self->volume();
}

bool Poppler__LinkSound_Synchronous(const Poppler__LinkSound* self) {
    return self->synchronous();
}

bool Poppler__LinkSound_Repeat(const Poppler__LinkSound* self) {
    return self->repeat();
}

bool Poppler__LinkSound_Mix(const Poppler__LinkSound* self) {
    return self->mix();
}

Poppler__SoundObject* Poppler__LinkSound_Sound(const Poppler__LinkSound* self) {
    return self->sound();
}

// Base class handler implementation
int Poppler__LinkSound_SuperLinkType(const Poppler__LinkSound* self) {
    auto* vpopplerlinksound = const_cast<VirtualPopplerLinkSound*>(dynamic_cast<const VirtualPopplerLinkSound*>(self));
    if (vpopplerlinksound && vpopplerlinksound->isVirtualPopplerLinkSound) {
        vpopplerlinksound->setPoppler__LinkSound_LinkType_IsBase(true);
        return static_cast<int>(vpopplerlinksound->linkType());
    } else {
        return static_cast<int>(self->Poppler::LinkSound::linkType());
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__LinkSound_OnLinkType(const Poppler__LinkSound* self, intptr_t slot) {
    auto* vpopplerlinksound = const_cast<VirtualPopplerLinkSound*>(dynamic_cast<const VirtualPopplerLinkSound*>(self));
    if (vpopplerlinksound && vpopplerlinksound->isVirtualPopplerLinkSound) {
        vpopplerlinksound->setPoppler__LinkSound_LinkType_Callback(reinterpret_cast<VirtualPopplerLinkSound::Poppler__LinkSound_LinkType_Callback>(slot));
    }
}

void Poppler__LinkSound_Delete(Poppler__LinkSound* self) {
    delete self;
}

int Poppler__LinkRendition_LinkType(const Poppler__LinkRendition* self) {
    return static_cast<int>(self->linkType());
}

Poppler__MediaRendition* Poppler__LinkRendition_Rendition(const Poppler__LinkRendition* self) {
    return self->rendition();
}

int Poppler__LinkRendition_Action(const Poppler__LinkRendition* self) {
    return static_cast<int>(self->action());
}

libqt_string Poppler__LinkRendition_Script(const Poppler__LinkRendition* self) {
    QString _ret = self->script();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Poppler__LinkRendition_IsReferencedAnnotation(const Poppler__LinkRendition* self, const Poppler__ScreenAnnotation* annotation) {
    return self->isReferencedAnnotation(annotation);
}

void Poppler__LinkRendition_Delete(Poppler__LinkRendition* self) {
    delete self;
}

Poppler__LinkJavaScript* Poppler__LinkJavaScript_new(const QRectF* linkArea, const libqt_string js) {
    QString js_QString = QString::fromUtf8(js.data, js.len);
    return new VirtualPopplerLinkJavaScript(*linkArea, js_QString);
}

int Poppler__LinkJavaScript_LinkType(const Poppler__LinkJavaScript* self) {
    auto* vpoppler__linkjavascript = dynamic_cast<const VirtualPopplerLinkJavaScript*>(self);
    if (vpoppler__linkjavascript && vpoppler__linkjavascript->isVirtualPopplerLinkJavaScript) {
        return static_cast<int>(self->linkType());
    } else {
        return static_cast<int>(((VirtualPopplerLinkJavaScript*)self)->linkType());
    }
}

libqt_string Poppler__LinkJavaScript_Script(const Poppler__LinkJavaScript* self) {
    QString _ret = self->script();
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
int Poppler__LinkJavaScript_SuperLinkType(const Poppler__LinkJavaScript* self) {
    auto* vpopplerlinkjavascript = const_cast<VirtualPopplerLinkJavaScript*>(dynamic_cast<const VirtualPopplerLinkJavaScript*>(self));
    if (vpopplerlinkjavascript && vpopplerlinkjavascript->isVirtualPopplerLinkJavaScript) {
        vpopplerlinkjavascript->setPoppler__LinkJavaScript_LinkType_IsBase(true);
        return static_cast<int>(vpopplerlinkjavascript->linkType());
    } else {
        return static_cast<int>(self->Poppler::LinkJavaScript::linkType());
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__LinkJavaScript_OnLinkType(const Poppler__LinkJavaScript* self, intptr_t slot) {
    auto* vpopplerlinkjavascript = const_cast<VirtualPopplerLinkJavaScript*>(dynamic_cast<const VirtualPopplerLinkJavaScript*>(self));
    if (vpopplerlinkjavascript && vpopplerlinkjavascript->isVirtualPopplerLinkJavaScript) {
        vpopplerlinkjavascript->setPoppler__LinkJavaScript_LinkType_Callback(reinterpret_cast<VirtualPopplerLinkJavaScript::Poppler__LinkJavaScript_LinkType_Callback>(slot));
    }
}

void Poppler__LinkJavaScript_Delete(Poppler__LinkJavaScript* self) {
    delete self;
}

int Poppler__LinkMovie_LinkType(const Poppler__LinkMovie* self) {
    return static_cast<int>(self->linkType());
}

int Poppler__LinkMovie_Operation(const Poppler__LinkMovie* self) {
    return static_cast<int>(self->operation());
}

bool Poppler__LinkMovie_IsReferencedAnnotation(const Poppler__LinkMovie* self, const Poppler__MovieAnnotation* annotation) {
    return self->isReferencedAnnotation(annotation);
}

void Poppler__LinkMovie_Delete(Poppler__LinkMovie* self) {
    delete self;
}

int Poppler__LinkOCGState_LinkType(const Poppler__LinkOCGState* self) {
    return static_cast<int>(self->linkType());
}

void Poppler__LinkOCGState_Delete(Poppler__LinkOCGState* self) {
    delete self;
}

int Poppler__LinkHide_LinkType(const Poppler__LinkHide* self) {
    return static_cast<int>(self->linkType());
}

libqt_list /* of libqt_string */ Poppler__LinkHide_Targets(const Poppler__LinkHide* self) {
    QVector<QString> _ret = self->targets();
    // Convert QVector<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _vv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _vv_b = _vv_ret.toUtf8();
        libqt_string _vv_str;
        _vv_str.len = _vv_b.length();
        _vv_str.data = static_cast<const char*>(malloc(_vv_str.len + 1));
        memcpy((void*)_vv_str.data, _vv_b.data(), _vv_str.len);
        ((char*)_vv_str.data)[_vv_str.len] = '\0';
        _arr[i] = _vv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool Poppler__LinkHide_IsShowAction(const Poppler__LinkHide* self) {
    return self->isShowAction();
}

void Poppler__LinkHide_Delete(Poppler__LinkHide* self) {
    delete self;
}

int Poppler__LinkResetForm_LinkType(const Poppler__LinkResetForm* self) {
    return static_cast<int>(self->linkType());
}

void Poppler__LinkResetForm_Delete(Poppler__LinkResetForm* self) {
    delete self;
}

int Poppler__LinkSubmitForm_LinkType(const Poppler__LinkSubmitForm* self) {
    return static_cast<int>(self->linkType());
}

libqt_list /* of int */ Poppler__LinkSubmitForm_GetFieldIds(const Poppler__LinkSubmitForm* self) {
    QVector<int> _ret = self->getFieldIds();
    // Convert QVector<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string Poppler__LinkSubmitForm_GetUrl(const Poppler__LinkSubmitForm* self) {
    QString _ret = self->getUrl();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Poppler__LinkSubmitForm_GetFlags(const Poppler__LinkSubmitForm* self) {
    return static_cast<int>(self->getFlags());
}

void Poppler__LinkSubmitForm_Delete(Poppler__LinkSubmitForm* self) {
    delete self;
}
