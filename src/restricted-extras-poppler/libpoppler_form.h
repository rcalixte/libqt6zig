#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLERC_LIBPOPPLER_FORM_H
#define SRC_RESTRICTED_EXTRAS_POPPLERC_LIBPOPPLER_FORM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__AsyncObject)
typedef Poppler::AsyncObject Poppler__AsyncObject;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__CertificateInfo)
typedef Poppler::CertificateInfo Poppler__CertificateInfo;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormField)
typedef Poppler::FormField Poppler__FormField;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormFieldButton)
typedef Poppler::FormFieldButton Poppler__FormFieldButton;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormFieldChoice)
typedef Poppler::FormFieldChoice Poppler__FormFieldChoice;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormFieldIcon)
typedef Poppler::FormFieldIcon Poppler__FormFieldIcon;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormFieldSignature)
typedef Poppler::FormFieldSignature Poppler__FormFieldSignature;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormFieldText)
typedef Poppler::FormFieldText Poppler__FormFieldText;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Link)
typedef Poppler::Link Poppler__Link;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__PDFConverter__NewSignatureData)
typedef Poppler::PDFConverter::NewSignatureData Poppler__PDFConverter__NewSignatureData;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__SignatureValidationInfo)
typedef Poppler::SignatureValidationInfo Poppler__SignatureValidationInfo;
#endif
#else
typedef struct Poppler Poppler;
typedef struct Poppler__AsyncObject Poppler__AsyncObject;
typedef struct Poppler__CertificateInfo Poppler__CertificateInfo;
typedef struct Poppler__FormField Poppler__FormField;
typedef struct Poppler__FormFieldButton Poppler__FormFieldButton;
typedef struct Poppler__FormFieldChoice Poppler__FormFieldChoice;
typedef struct Poppler__FormFieldIcon Poppler__FormFieldIcon;
typedef struct Poppler__FormFieldSignature Poppler__FormFieldSignature;
typedef struct Poppler__FormFieldText Poppler__FormFieldText;
typedef struct Poppler__Link Poppler__Link;
typedef struct Poppler__PDFConverter__NewSignatureData Poppler__PDFConverter__NewSignatureData;
typedef struct Poppler__SignatureValidationInfo Poppler__SignatureValidationInfo;
typedef struct QChildEvent QChildEvent;
typedef struct QDateTime QDateTime;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRectF QRectF;
typedef struct QTimerEvent QTimerEvent;
#endif

Poppler__FormFieldIcon* Poppler__FormFieldIcon_new(const Poppler__FormFieldIcon* ffIcon);
void Poppler__FormFieldIcon_OperatorAssign(Poppler__FormFieldIcon* self, const Poppler__FormFieldIcon* ffIcon);
void Poppler__FormFieldIcon_Delete(Poppler__FormFieldIcon* self);

int Poppler__FormField_Type(const Poppler__FormField* self);
QRectF* Poppler__FormField_Rect(const Poppler__FormField* self);
int Poppler__FormField_Id(const Poppler__FormField* self);
libqt_string Poppler__FormField_Name(const Poppler__FormField* self);
void Poppler__FormField_SetName(const Poppler__FormField* self, const libqt_string name);
libqt_string Poppler__FormField_FullyQualifiedName(const Poppler__FormField* self);
libqt_string Poppler__FormField_UiName(const Poppler__FormField* self);
bool Poppler__FormField_IsReadOnly(const Poppler__FormField* self);
void Poppler__FormField_SetReadOnly(Poppler__FormField* self, bool value);
bool Poppler__FormField_IsVisible(const Poppler__FormField* self);
void Poppler__FormField_SetVisible(Poppler__FormField* self, bool value);
bool Poppler__FormField_IsPrintable(const Poppler__FormField* self);
void Poppler__FormField_SetPrintable(Poppler__FormField* self, bool value);
Poppler__Link* Poppler__FormField_ActivationAction(const Poppler__FormField* self);
Poppler__Link* Poppler__FormField_AdditionalAction(const Poppler__FormField* self, int typeVal);
Poppler__Link* Poppler__FormField_AdditionalAction2(const Poppler__FormField* self, int typeVal);
void Poppler__FormField_Delete(Poppler__FormField* self);

int Poppler__FormFieldButton_Type(const Poppler__FormFieldButton* self);
int Poppler__FormFieldButton_ButtonType(const Poppler__FormFieldButton* self);
libqt_string Poppler__FormFieldButton_Caption(const Poppler__FormFieldButton* self);
Poppler__FormFieldIcon* Poppler__FormFieldButton_Icon(const Poppler__FormFieldButton* self);
void Poppler__FormFieldButton_SetIcon(Poppler__FormFieldButton* self, const Poppler__FormFieldIcon* icon);
bool Poppler__FormFieldButton_State(const Poppler__FormFieldButton* self);
void Poppler__FormFieldButton_SetState(Poppler__FormFieldButton* self, bool state);
libqt_list /* of int */ Poppler__FormFieldButton_Siblings(const Poppler__FormFieldButton* self);
void Poppler__FormFieldButton_Delete(Poppler__FormFieldButton* self);

int Poppler__FormFieldText_Type(const Poppler__FormFieldText* self);
int Poppler__FormFieldText_TextType(const Poppler__FormFieldText* self);
libqt_string Poppler__FormFieldText_Text(const Poppler__FormFieldText* self);
void Poppler__FormFieldText_SetText(Poppler__FormFieldText* self, const libqt_string text);
void Poppler__FormFieldText_SetAppearanceText(Poppler__FormFieldText* self, const libqt_string text);
bool Poppler__FormFieldText_IsPassword(const Poppler__FormFieldText* self);
bool Poppler__FormFieldText_IsRichText(const Poppler__FormFieldText* self);
int Poppler__FormFieldText_MaximumLength(const Poppler__FormFieldText* self);
int Poppler__FormFieldText_TextAlignment(const Poppler__FormFieldText* self);
bool Poppler__FormFieldText_CanBeSpellChecked(const Poppler__FormFieldText* self);
double Poppler__FormFieldText_GetFontSize(const Poppler__FormFieldText* self);
void Poppler__FormFieldText_SetFontSize(Poppler__FormFieldText* self, int fontSize);
void Poppler__FormFieldText_Delete(Poppler__FormFieldText* self);

int Poppler__FormFieldChoice_Type(const Poppler__FormFieldChoice* self);
int Poppler__FormFieldChoice_ChoiceType(const Poppler__FormFieldChoice* self);
libqt_list /* of libqt_string */ Poppler__FormFieldChoice_Choices(const Poppler__FormFieldChoice* self);
libqt_list /* of libqt_pair tuple of libqt_string and libqt_string */ Poppler__FormFieldChoice_ChoicesWithExportValues(const Poppler__FormFieldChoice* self);
bool Poppler__FormFieldChoice_IsEditable(const Poppler__FormFieldChoice* self);
bool Poppler__FormFieldChoice_MultiSelect(const Poppler__FormFieldChoice* self);
libqt_list /* of int */ Poppler__FormFieldChoice_CurrentChoices(const Poppler__FormFieldChoice* self);
void Poppler__FormFieldChoice_SetCurrentChoices(Poppler__FormFieldChoice* self, const libqt_list /* of int */ choice);
libqt_string Poppler__FormFieldChoice_EditChoice(const Poppler__FormFieldChoice* self);
void Poppler__FormFieldChoice_SetEditChoice(Poppler__FormFieldChoice* self, const libqt_string text);
int Poppler__FormFieldChoice_TextAlignment(const Poppler__FormFieldChoice* self);
bool Poppler__FormFieldChoice_CanBeSpellChecked(const Poppler__FormFieldChoice* self);
void Poppler__FormFieldChoice_SetAppearanceChoiceText(Poppler__FormFieldChoice* self, const libqt_string text);
void Poppler__FormFieldChoice_Delete(Poppler__FormFieldChoice* self);

Poppler__CertificateInfo* Poppler__CertificateInfo_new();
Poppler__CertificateInfo* Poppler__CertificateInfo_new2(const Poppler__CertificateInfo* other);
bool Poppler__CertificateInfo_IsNull(const Poppler__CertificateInfo* self);
int Poppler__CertificateInfo_Version(const Poppler__CertificateInfo* self);
libqt_string Poppler__CertificateInfo_SerialNumber(const Poppler__CertificateInfo* self);
libqt_string Poppler__CertificateInfo_IssuerInfo(const Poppler__CertificateInfo* self, int key);
libqt_string Poppler__CertificateInfo_SubjectInfo(const Poppler__CertificateInfo* self, int key);
libqt_string Poppler__CertificateInfo_NickName(const Poppler__CertificateInfo* self);
QDateTime* Poppler__CertificateInfo_ValidityStart(const Poppler__CertificateInfo* self);
QDateTime* Poppler__CertificateInfo_ValidityEnd(const Poppler__CertificateInfo* self);
int Poppler__CertificateInfo_KeyUsageExtensions(const Poppler__CertificateInfo* self);
libqt_string Poppler__CertificateInfo_PublicKey(const Poppler__CertificateInfo* self);
int Poppler__CertificateInfo_PublicKeyType(const Poppler__CertificateInfo* self);
int Poppler__CertificateInfo_PublicKeyStrength(const Poppler__CertificateInfo* self);
bool Poppler__CertificateInfo_IsSelfSigned(const Poppler__CertificateInfo* self);
bool Poppler__CertificateInfo_IsQualified(const Poppler__CertificateInfo* self);
int Poppler__CertificateInfo_CertificateType(const Poppler__CertificateInfo* self);
libqt_string Poppler__CertificateInfo_CertificateData(const Poppler__CertificateInfo* self);
bool Poppler__CertificateInfo_CheckPassword(const Poppler__CertificateInfo* self, const libqt_string password);
int Poppler__CertificateInfo_KeyLocation(const Poppler__CertificateInfo* self);
void Poppler__CertificateInfo_OperatorAssign(Poppler__CertificateInfo* self, const Poppler__CertificateInfo* other);
void Poppler__CertificateInfo_Delete(Poppler__CertificateInfo* self);

Poppler__SignatureValidationInfo* Poppler__SignatureValidationInfo_new(const Poppler__SignatureValidationInfo* other);
int Poppler__SignatureValidationInfo_SignatureStatus(const Poppler__SignatureValidationInfo* self);
int Poppler__SignatureValidationInfo_CertificateStatus(const Poppler__SignatureValidationInfo* self);
libqt_string Poppler__SignatureValidationInfo_SignerName(const Poppler__SignatureValidationInfo* self);
libqt_string Poppler__SignatureValidationInfo_SignerSubjectDN(const Poppler__SignatureValidationInfo* self);
libqt_string Poppler__SignatureValidationInfo_Location(const Poppler__SignatureValidationInfo* self);
libqt_string Poppler__SignatureValidationInfo_Reason(const Poppler__SignatureValidationInfo* self);
int Poppler__SignatureValidationInfo_HashAlgorithm(const Poppler__SignatureValidationInfo* self);
time_t Poppler__SignatureValidationInfo_SigningTime(const Poppler__SignatureValidationInfo* self);
libqt_string Poppler__SignatureValidationInfo_Signature(const Poppler__SignatureValidationInfo* self);
libqt_list /* of long long */ Poppler__SignatureValidationInfo_SignedRangeBounds(const Poppler__SignatureValidationInfo* self);
bool Poppler__SignatureValidationInfo_SignsTotalDocument(const Poppler__SignatureValidationInfo* self);
Poppler__CertificateInfo* Poppler__SignatureValidationInfo_CertificateInfo(const Poppler__SignatureValidationInfo* self);
void Poppler__SignatureValidationInfo_OperatorAssign(Poppler__SignatureValidationInfo* self, const Poppler__SignatureValidationInfo* other);
void Poppler__SignatureValidationInfo_Delete(Poppler__SignatureValidationInfo* self);

Poppler__AsyncObject* Poppler__AsyncObject_new();
QMetaObject* Poppler__AsyncObject_MetaObject(const Poppler__AsyncObject* self);
void* Poppler__AsyncObject_Metacast(Poppler__AsyncObject* self, const char* param1);
int Poppler__AsyncObject_Metacall(Poppler__AsyncObject* self, int param1, int param2, void** param3);
void Poppler__AsyncObject_Done(Poppler__AsyncObject* self);
void Poppler__AsyncObject_Connect_Done(Poppler__AsyncObject* self, intptr_t slot);
void Poppler__AsyncObject_OnMetaObject(const Poppler__AsyncObject* self, intptr_t slot);
QMetaObject* Poppler__AsyncObject_SuperMetaObject(const Poppler__AsyncObject* self);
void Poppler__AsyncObject_OnMetacast(Poppler__AsyncObject* self, intptr_t slot);
void* Poppler__AsyncObject_SuperMetacast(Poppler__AsyncObject* self, const char* param1);
void Poppler__AsyncObject_OnMetacall(Poppler__AsyncObject* self, intptr_t slot);
int Poppler__AsyncObject_SuperMetacall(Poppler__AsyncObject* self, int param1, int param2, void** param3);
bool Poppler__AsyncObject_Event(Poppler__AsyncObject* self, QEvent* event);
void Poppler__AsyncObject_OnEvent(Poppler__AsyncObject* self, intptr_t slot);
bool Poppler__AsyncObject_SuperEvent(Poppler__AsyncObject* self, QEvent* event);
bool Poppler__AsyncObject_EventFilter(Poppler__AsyncObject* self, QObject* watched, QEvent* event);
void Poppler__AsyncObject_OnEventFilter(Poppler__AsyncObject* self, intptr_t slot);
bool Poppler__AsyncObject_SuperEventFilter(Poppler__AsyncObject* self, QObject* watched, QEvent* event);
void Poppler__AsyncObject_TimerEvent(Poppler__AsyncObject* self, QTimerEvent* event);
void Poppler__AsyncObject_OnTimerEvent(Poppler__AsyncObject* self, intptr_t slot);
void Poppler__AsyncObject_SuperTimerEvent(Poppler__AsyncObject* self, QTimerEvent* event);
void Poppler__AsyncObject_ChildEvent(Poppler__AsyncObject* self, QChildEvent* event);
void Poppler__AsyncObject_OnChildEvent(Poppler__AsyncObject* self, intptr_t slot);
void Poppler__AsyncObject_SuperChildEvent(Poppler__AsyncObject* self, QChildEvent* event);
void Poppler__AsyncObject_CustomEvent(Poppler__AsyncObject* self, QEvent* event);
void Poppler__AsyncObject_OnCustomEvent(Poppler__AsyncObject* self, intptr_t slot);
void Poppler__AsyncObject_SuperCustomEvent(Poppler__AsyncObject* self, QEvent* event);
void Poppler__AsyncObject_ConnectNotify(Poppler__AsyncObject* self, const QMetaMethod* signal);
void Poppler__AsyncObject_OnConnectNotify(Poppler__AsyncObject* self, intptr_t slot);
void Poppler__AsyncObject_SuperConnectNotify(Poppler__AsyncObject* self, const QMetaMethod* signal);
void Poppler__AsyncObject_DisconnectNotify(Poppler__AsyncObject* self, const QMetaMethod* signal);
void Poppler__AsyncObject_OnDisconnectNotify(Poppler__AsyncObject* self, intptr_t slot);
void Poppler__AsyncObject_SuperDisconnectNotify(Poppler__AsyncObject* self, const QMetaMethod* signal);
QObject* Poppler__AsyncObject_Sender(const Poppler__AsyncObject* self);
void Poppler__AsyncObject_OnSender(const Poppler__AsyncObject* self, intptr_t slot);
QObject* Poppler__AsyncObject_SuperSender(const Poppler__AsyncObject* self);
int Poppler__AsyncObject_SenderSignalIndex(const Poppler__AsyncObject* self);
void Poppler__AsyncObject_OnSenderSignalIndex(const Poppler__AsyncObject* self, intptr_t slot);
int Poppler__AsyncObject_SuperSenderSignalIndex(const Poppler__AsyncObject* self);
int Poppler__AsyncObject_Receivers(const Poppler__AsyncObject* self, const char* signal);
void Poppler__AsyncObject_OnReceivers(const Poppler__AsyncObject* self, intptr_t slot);
int Poppler__AsyncObject_SuperReceivers(const Poppler__AsyncObject* self, const char* signal);
bool Poppler__AsyncObject_IsSignalConnected(const Poppler__AsyncObject* self, const QMetaMethod* signal);
void Poppler__AsyncObject_OnIsSignalConnected(const Poppler__AsyncObject* self, intptr_t slot);
bool Poppler__AsyncObject_SuperIsSignalConnected(const Poppler__AsyncObject* self, const QMetaMethod* signal);
void Poppler__AsyncObject_Delete(Poppler__AsyncObject* self);

int Poppler__FormFieldSignature_Type(const Poppler__FormFieldSignature* self);
int Poppler__FormFieldSignature_SignatureType(const Poppler__FormFieldSignature* self);
Poppler__SignatureValidationInfo* Poppler__FormFieldSignature_Validate(const Poppler__FormFieldSignature* self, int opt);
Poppler__SignatureValidationInfo* Poppler__FormFieldSignature_Validate2(const Poppler__FormFieldSignature* self, int opt, const QDateTime* validationTime);
int Poppler__FormFieldSignature_ValidateResult(const Poppler__FormFieldSignature* self);
int Poppler__FormFieldSignature_Sign(const Poppler__FormFieldSignature* self, const libqt_string outputFileName, const Poppler__PDFConverter__NewSignatureData* data);
void Poppler__FormFieldSignature_Delete(Poppler__FormFieldSignature* self);

libqt_list /* of int */ Poppler_AvailableCryptoSignBackends();
int Poppler_ActiveCryptoSignBackend();
bool Poppler_SetActiveCryptoSignBackend(int param1);
bool Poppler_HasCryptoSignBackendFeature(int param1, int param2);
bool Poppler_HasNSSSupport();
libqt_list /* of Poppler__CertificateInfo* */ Poppler_GetAvailableSigningCertificates();
libqt_string Poppler_GetNSSDir();
void Poppler_SetNSSDir(const libqt_string param1);
void Poppler_SetNSSPasswordCallback(intptr_t param1);
void Poppler_SetPgpSignaturesAllowed(bool param1);
bool Poppler_ArePgpSignaturesAllowed();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
