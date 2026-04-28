#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__AsyncObject
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__CertificateInfo
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormField
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormFieldButton
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormFieldChoice
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormFieldIcon
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormFieldSignature
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormFieldText
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Link
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__PDFConverter__NewSignatureData
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__SignatureValidationInfo
#include <QByteArray>
#include <QChildEvent>
#include <QDateTime>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVector>
#include <poppler-form.h>
#include "libpoppler_form.h"
#include "libpoppler_form.hxx"

Poppler__FormFieldIcon* Poppler__FormFieldIcon_new(const Poppler__FormFieldIcon* ffIcon) {
    return new Poppler::FormFieldIcon(*ffIcon);
}

void Poppler__FormFieldIcon_OperatorAssign(Poppler__FormFieldIcon* self, const Poppler__FormFieldIcon* ffIcon) {
    self->operator=(*ffIcon);
}

void Poppler__FormFieldIcon_Delete(Poppler__FormFieldIcon* self) {
    delete self;
}

int Poppler__FormField_Type(const Poppler__FormField* self) {
    return static_cast<int>(self->type());
}

QRectF* Poppler__FormField_Rect(const Poppler__FormField* self) {
    return new QRectF(self->rect());
}

int Poppler__FormField_Id(const Poppler__FormField* self) {
    return self->id();
}

libqt_string Poppler__FormField_Name(const Poppler__FormField* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__FormField_SetName(const Poppler__FormField* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string Poppler__FormField_FullyQualifiedName(const Poppler__FormField* self) {
    QString _ret = self->fullyQualifiedName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Poppler__FormField_UiName(const Poppler__FormField* self) {
    QString _ret = self->uiName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Poppler__FormField_IsReadOnly(const Poppler__FormField* self) {
    return self->isReadOnly();
}

void Poppler__FormField_SetReadOnly(Poppler__FormField* self, bool value) {
    self->setReadOnly(value);
}

bool Poppler__FormField_IsVisible(const Poppler__FormField* self) {
    return self->isVisible();
}

void Poppler__FormField_SetVisible(Poppler__FormField* self, bool value) {
    self->setVisible(value);
}

bool Poppler__FormField_IsPrintable(const Poppler__FormField* self) {
    return self->isPrintable();
}

void Poppler__FormField_SetPrintable(Poppler__FormField* self, bool value) {
    self->setPrintable(value);
}

Poppler__Link* Poppler__FormField_ActivationAction(const Poppler__FormField* self) {
    return self->activationAction().release();
}

Poppler__Link* Poppler__FormField_AdditionalAction(const Poppler__FormField* self, int typeVal) {
    return self->additionalAction(static_cast<Poppler::FormField::AdditionalActionType>(typeVal)).release();
}

Poppler__Link* Poppler__FormField_AdditionalAction2(const Poppler__FormField* self, int typeVal) {
    return self->additionalAction(static_cast<Poppler::Annotation::AdditionalActionType>(typeVal)).release();
}

void Poppler__FormField_Delete(Poppler__FormField* self) {
    delete self;
}

int Poppler__FormFieldButton_Type(const Poppler__FormFieldButton* self) {
    return static_cast<int>(self->type());
}

int Poppler__FormFieldButton_ButtonType(const Poppler__FormFieldButton* self) {
    return static_cast<int>(self->buttonType());
}

libqt_string Poppler__FormFieldButton_Caption(const Poppler__FormFieldButton* self) {
    QString _ret = self->caption();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Poppler__FormFieldIcon* Poppler__FormFieldButton_Icon(const Poppler__FormFieldButton* self) {
    return new Poppler::FormFieldIcon(self->icon());
}

void Poppler__FormFieldButton_SetIcon(Poppler__FormFieldButton* self, const Poppler__FormFieldIcon* icon) {
    self->setIcon(*icon);
}

bool Poppler__FormFieldButton_State(const Poppler__FormFieldButton* self) {
    return self->state();
}

void Poppler__FormFieldButton_SetState(Poppler__FormFieldButton* self, bool state) {
    self->setState(state);
}

libqt_list /* of int */ Poppler__FormFieldButton_Siblings(const Poppler__FormFieldButton* self) {
    QList<int> _ret = self->siblings();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Poppler__FormFieldButton_Delete(Poppler__FormFieldButton* self) {
    delete self;
}

int Poppler__FormFieldText_Type(const Poppler__FormFieldText* self) {
    return static_cast<int>(self->type());
}

int Poppler__FormFieldText_TextType(const Poppler__FormFieldText* self) {
    return static_cast<int>(self->textType());
}

libqt_string Poppler__FormFieldText_Text(const Poppler__FormFieldText* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__FormFieldText_SetText(Poppler__FormFieldText* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void Poppler__FormFieldText_SetAppearanceText(Poppler__FormFieldText* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setAppearanceText(text_QString);
}

bool Poppler__FormFieldText_IsPassword(const Poppler__FormFieldText* self) {
    return self->isPassword();
}

bool Poppler__FormFieldText_IsRichText(const Poppler__FormFieldText* self) {
    return self->isRichText();
}

int Poppler__FormFieldText_MaximumLength(const Poppler__FormFieldText* self) {
    return self->maximumLength();
}

int Poppler__FormFieldText_TextAlignment(const Poppler__FormFieldText* self) {
    return static_cast<int>(self->textAlignment());
}

bool Poppler__FormFieldText_CanBeSpellChecked(const Poppler__FormFieldText* self) {
    return self->canBeSpellChecked();
}

double Poppler__FormFieldText_GetFontSize(const Poppler__FormFieldText* self) {
    return self->getFontSize();
}

void Poppler__FormFieldText_SetFontSize(Poppler__FormFieldText* self, int fontSize) {
    self->setFontSize(static_cast<int>(fontSize));
}

void Poppler__FormFieldText_Delete(Poppler__FormFieldText* self) {
    delete self;
}

int Poppler__FormFieldChoice_Type(const Poppler__FormFieldChoice* self) {
    return static_cast<int>(self->type());
}

int Poppler__FormFieldChoice_ChoiceType(const Poppler__FormFieldChoice* self) {
    return static_cast<int>(self->choiceType());
}

libqt_list /* of libqt_string */ Poppler__FormFieldChoice_Choices(const Poppler__FormFieldChoice* self) {
    QList<QString> _ret = self->choices();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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

libqt_list /* of libqt_pair tuple of libqt_string and libqt_string */ Poppler__FormFieldChoice_ChoicesWithExportValues(const Poppler__FormFieldChoice* self) {
    QVector<QPair<QString, QString>> _ret = self->choicesWithExportValues();
    // Convert QVector<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of libqt_string and libqt_string */* _arr = static_cast<libqt_pair /* tuple of libqt_string and libqt_string */*>(malloc(sizeof(libqt_pair /* tuple of libqt_string and libqt_string */) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<QString, QString> _vv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        libqt_string* _vv_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        libqt_string* _vv_second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        QString _vv_first_ret = _vv_ret.first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _vv_first_b = _vv_first_ret.toUtf8();
        libqt_string _vv_first_str;
        _vv_first_str.len = _vv_first_b.length();
        _vv_first_str.data = static_cast<const char*>(malloc(_vv_first_str.len + 1));
        memcpy((void*)_vv_first_str.data, _vv_first_b.data(), _vv_first_str.len);
        ((char*)_vv_first_str.data)[_vv_first_str.len] = '\0';
        *_vv_first = _vv_first_str;
        QString _vv_second_ret = _vv_ret.second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _vv_second_b = _vv_second_ret.toUtf8();
        libqt_string _vv_second_str;
        _vv_second_str.len = _vv_second_b.length();
        _vv_second_str.data = static_cast<const char*>(malloc(_vv_second_str.len + 1));
        memcpy((void*)_vv_second_str.data, _vv_second_b.data(), _vv_second_str.len);
        ((char*)_vv_second_str.data)[_vv_second_str.len] = '\0';
        *_vv_second = _vv_second_str;
        libqt_pair _vv_out;
        _vv_out.first = static_cast<void*>(_vv_first);
        _vv_out.second = static_cast<void*>(_vv_second);
        _arr[i] = _vv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool Poppler__FormFieldChoice_IsEditable(const Poppler__FormFieldChoice* self) {
    return self->isEditable();
}

bool Poppler__FormFieldChoice_MultiSelect(const Poppler__FormFieldChoice* self) {
    return self->multiSelect();
}

libqt_list /* of int */ Poppler__FormFieldChoice_CurrentChoices(const Poppler__FormFieldChoice* self) {
    QList<int> _ret = self->currentChoices();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Poppler__FormFieldChoice_SetCurrentChoices(Poppler__FormFieldChoice* self, const libqt_list /* of int */ choice) {
    QList<int> choice_QList;
    choice_QList.reserve(choice.len);
    int* choice_arr = static_cast<int*>(choice.data);
    for (size_t i = 0; i < choice.len; ++i) {
        choice_QList.push_back(static_cast<int>(choice_arr[i]));
    }
    self->setCurrentChoices(choice_QList);
}

libqt_string Poppler__FormFieldChoice_EditChoice(const Poppler__FormFieldChoice* self) {
    QString _ret = self->editChoice();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__FormFieldChoice_SetEditChoice(Poppler__FormFieldChoice* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setEditChoice(text_QString);
}

int Poppler__FormFieldChoice_TextAlignment(const Poppler__FormFieldChoice* self) {
    return static_cast<int>(self->textAlignment());
}

bool Poppler__FormFieldChoice_CanBeSpellChecked(const Poppler__FormFieldChoice* self) {
    return self->canBeSpellChecked();
}

void Poppler__FormFieldChoice_SetAppearanceChoiceText(Poppler__FormFieldChoice* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setAppearanceChoiceText(text_QString);
}

void Poppler__FormFieldChoice_Delete(Poppler__FormFieldChoice* self) {
    delete self;
}

Poppler__CertificateInfo* Poppler__CertificateInfo_new() {
    return new Poppler::CertificateInfo();
}

Poppler__CertificateInfo* Poppler__CertificateInfo_new2(const Poppler__CertificateInfo* other) {
    return new Poppler::CertificateInfo(*other);
}

bool Poppler__CertificateInfo_IsNull(const Poppler__CertificateInfo* self) {
    return self->isNull();
}

int Poppler__CertificateInfo_Version(const Poppler__CertificateInfo* self) {
    return self->version();
}

libqt_string Poppler__CertificateInfo_SerialNumber(const Poppler__CertificateInfo* self) {
    QByteArray _qb = self->serialNumber();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string Poppler__CertificateInfo_IssuerInfo(const Poppler__CertificateInfo* self, int key) {
    QString _ret = self->issuerInfo(static_cast<Poppler::CertificateInfo::EntityInfoKey>(key));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Poppler__CertificateInfo_SubjectInfo(const Poppler__CertificateInfo* self, int key) {
    QString _ret = self->subjectInfo(static_cast<Poppler::CertificateInfo::EntityInfoKey>(key));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Poppler__CertificateInfo_NickName(const Poppler__CertificateInfo* self) {
    QString _ret = self->nickName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDateTime* Poppler__CertificateInfo_ValidityStart(const Poppler__CertificateInfo* self) {
    return new QDateTime(self->validityStart());
}

QDateTime* Poppler__CertificateInfo_ValidityEnd(const Poppler__CertificateInfo* self) {
    return new QDateTime(self->validityEnd());
}

int Poppler__CertificateInfo_KeyUsageExtensions(const Poppler__CertificateInfo* self) {
    return static_cast<int>(self->keyUsageExtensions());
}

libqt_string Poppler__CertificateInfo_PublicKey(const Poppler__CertificateInfo* self) {
    QByteArray _qb = self->publicKey();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

int Poppler__CertificateInfo_PublicKeyType(const Poppler__CertificateInfo* self) {
    return static_cast<int>(self->publicKeyType());
}

int Poppler__CertificateInfo_PublicKeyStrength(const Poppler__CertificateInfo* self) {
    return self->publicKeyStrength();
}

bool Poppler__CertificateInfo_IsSelfSigned(const Poppler__CertificateInfo* self) {
    return self->isSelfSigned();
}

bool Poppler__CertificateInfo_IsQualified(const Poppler__CertificateInfo* self) {
    return self->isQualified();
}

int Poppler__CertificateInfo_CertificateType(const Poppler__CertificateInfo* self) {
    return static_cast<int>(self->certificateType());
}

libqt_string Poppler__CertificateInfo_CertificateData(const Poppler__CertificateInfo* self) {
    QByteArray _qb = self->certificateData();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

bool Poppler__CertificateInfo_CheckPassword(const Poppler__CertificateInfo* self, const libqt_string password) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    return self->checkPassword(password_QString);
}

int Poppler__CertificateInfo_KeyLocation(const Poppler__CertificateInfo* self) {
    return static_cast<int>(self->keyLocation());
}

void Poppler__CertificateInfo_OperatorAssign(Poppler__CertificateInfo* self, const Poppler__CertificateInfo* other) {
    self->operator=(*other);
}

void Poppler__CertificateInfo_Delete(Poppler__CertificateInfo* self) {
    delete self;
}

Poppler__SignatureValidationInfo* Poppler__SignatureValidationInfo_new(const Poppler__SignatureValidationInfo* other) {
    return new Poppler::SignatureValidationInfo(*other);
}

int Poppler__SignatureValidationInfo_SignatureStatus(const Poppler__SignatureValidationInfo* self) {
    return static_cast<int>(self->signatureStatus());
}

int Poppler__SignatureValidationInfo_CertificateStatus(const Poppler__SignatureValidationInfo* self) {
    return static_cast<int>(self->certificateStatus());
}

libqt_string Poppler__SignatureValidationInfo_SignerName(const Poppler__SignatureValidationInfo* self) {
    QString _ret = self->signerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Poppler__SignatureValidationInfo_SignerSubjectDN(const Poppler__SignatureValidationInfo* self) {
    QString _ret = self->signerSubjectDN();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Poppler__SignatureValidationInfo_Location(const Poppler__SignatureValidationInfo* self) {
    QString _ret = self->location();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Poppler__SignatureValidationInfo_Reason(const Poppler__SignatureValidationInfo* self) {
    QString _ret = self->reason();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Poppler__SignatureValidationInfo_HashAlgorithm(const Poppler__SignatureValidationInfo* self) {
    return static_cast<int>(self->hashAlgorithm());
}

time_t Poppler__SignatureValidationInfo_SigningTime(const Poppler__SignatureValidationInfo* self) {
    return self->signingTime();
}

libqt_string Poppler__SignatureValidationInfo_Signature(const Poppler__SignatureValidationInfo* self) {
    QByteArray _qb = self->signature();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_list /* of long long */ Poppler__SignatureValidationInfo_SignedRangeBounds(const Poppler__SignatureValidationInfo* self) {
    QList<long long> _ret = self->signedRangeBounds();
    // Convert QList<> from C++ memory to manually-managed C memory
    long long* _arr = static_cast<long long*>(malloc(sizeof(long long) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool Poppler__SignatureValidationInfo_SignsTotalDocument(const Poppler__SignatureValidationInfo* self) {
    return self->signsTotalDocument();
}

Poppler__CertificateInfo* Poppler__SignatureValidationInfo_CertificateInfo(const Poppler__SignatureValidationInfo* self) {
    return new Poppler::CertificateInfo(self->certificateInfo());
}

void Poppler__SignatureValidationInfo_OperatorAssign(Poppler__SignatureValidationInfo* self, const Poppler__SignatureValidationInfo* other) {
    self->operator=(*other);
}

void Poppler__SignatureValidationInfo_Delete(Poppler__SignatureValidationInfo* self) {
    delete self;
}

Poppler__AsyncObject* Poppler__AsyncObject_new() {
    return new VirtualPopplerAsyncObject();
}

QMetaObject* Poppler__AsyncObject_MetaObject(const Poppler__AsyncObject* self) {
    auto* vpoppler__asyncobject = dynamic_cast<const VirtualPopplerAsyncObject*>(self);
    if (vpoppler__asyncobject && vpoppler__asyncobject->isVirtualPopplerAsyncObject) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualPopplerAsyncObject*)self)->metaObject();
    }
}

void* Poppler__AsyncObject_Metacast(Poppler__AsyncObject* self, const char* param1) {
    auto* vpoppler__asyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpoppler__asyncobject && vpoppler__asyncobject->isVirtualPopplerAsyncObject) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualPopplerAsyncObject*)self)->qt_metacast(param1);
    }
}

int Poppler__AsyncObject_Metacall(Poppler__AsyncObject* self, int param1, int param2, void** param3) {
    auto* vpoppler__asyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpoppler__asyncobject && vpoppler__asyncobject->isVirtualPopplerAsyncObject) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualPopplerAsyncObject*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void Poppler__AsyncObject_Done(Poppler__AsyncObject* self) {
    self->done();
}

void Poppler__AsyncObject_Connect_Done(Poppler__AsyncObject* self, intptr_t slot) {
    void (*slotFunc)(Poppler__AsyncObject*) = reinterpret_cast<void (*)(Poppler__AsyncObject*)>(slot);
    Poppler::AsyncObject::connect(self, &Poppler::AsyncObject::done, [self, slotFunc]() {
        slotFunc(self);
    });
}

// Base class handler implementation
QMetaObject* Poppler__AsyncObject_SuperMetaObject(const Poppler__AsyncObject* self) {
    auto* vpopplerasyncobject = const_cast<VirtualPopplerAsyncObject*>(dynamic_cast<const VirtualPopplerAsyncObject*>(self));
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_MetaObject_IsBase(true);
        return (QMetaObject*)vpopplerasyncobject->metaObject();
    } else {
        return (QMetaObject*)self->Poppler::AsyncObject::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__AsyncObject_OnMetaObject(const Poppler__AsyncObject* self, intptr_t slot) {
    auto* vpopplerasyncobject = const_cast<VirtualPopplerAsyncObject*>(dynamic_cast<const VirtualPopplerAsyncObject*>(self));
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_MetaObject_Callback(reinterpret_cast<VirtualPopplerAsyncObject::Poppler__AsyncObject_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* Poppler__AsyncObject_SuperMetacast(Poppler__AsyncObject* self, const char* param1) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_Metacast_IsBase(true);
        return vpopplerasyncobject->qt_metacast(param1);
    } else {
        return self->Poppler::AsyncObject::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__AsyncObject_OnMetacast(Poppler__AsyncObject* self, intptr_t slot) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_Metacast_Callback(reinterpret_cast<VirtualPopplerAsyncObject::Poppler__AsyncObject_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int Poppler__AsyncObject_SuperMetacall(Poppler__AsyncObject* self, int param1, int param2, void** param3) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_Metacall_IsBase(true);
        return vpopplerasyncobject->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Poppler::AsyncObject::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__AsyncObject_OnMetacall(Poppler__AsyncObject* self, intptr_t slot) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_Metacall_Callback(reinterpret_cast<VirtualPopplerAsyncObject::Poppler__AsyncObject_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool Poppler__AsyncObject_Event(Poppler__AsyncObject* self, QEvent* event) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        return vpopplerasyncobject->event(event);
    } else {
        return self->Poppler::AsyncObject::event(event);
    }
}

// Base class handler implementation
bool Poppler__AsyncObject_SuperEvent(Poppler__AsyncObject* self, QEvent* event) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_Event_IsBase(true);
        return vpopplerasyncobject->event(event);
    } else {
        return self->Poppler::AsyncObject::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__AsyncObject_OnEvent(Poppler__AsyncObject* self, intptr_t slot) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_Event_Callback(reinterpret_cast<VirtualPopplerAsyncObject::Poppler__AsyncObject_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool Poppler__AsyncObject_EventFilter(Poppler__AsyncObject* self, QObject* watched, QEvent* event) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        return vpopplerasyncobject->eventFilter(watched, event);
    } else {
        return self->Poppler::AsyncObject::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Poppler__AsyncObject_SuperEventFilter(Poppler__AsyncObject* self, QObject* watched, QEvent* event) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_EventFilter_IsBase(true);
        return vpopplerasyncobject->eventFilter(watched, event);
    } else {
        return self->Poppler::AsyncObject::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__AsyncObject_OnEventFilter(Poppler__AsyncObject* self, intptr_t slot) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_EventFilter_Callback(reinterpret_cast<VirtualPopplerAsyncObject::Poppler__AsyncObject_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Poppler__AsyncObject_TimerEvent(Poppler__AsyncObject* self, QTimerEvent* event) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->timerEvent(event);
    } else {
        ((VirtualPopplerAsyncObject*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Poppler__AsyncObject_SuperTimerEvent(Poppler__AsyncObject* self, QTimerEvent* event) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_TimerEvent_IsBase(true);
        vpopplerasyncobject->timerEvent(event);
    } else {
        ((VirtualPopplerAsyncObject*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__AsyncObject_OnTimerEvent(Poppler__AsyncObject* self, intptr_t slot) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_TimerEvent_Callback(reinterpret_cast<VirtualPopplerAsyncObject::Poppler__AsyncObject_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Poppler__AsyncObject_ChildEvent(Poppler__AsyncObject* self, QChildEvent* event) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->childEvent(event);
    } else {
        ((VirtualPopplerAsyncObject*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Poppler__AsyncObject_SuperChildEvent(Poppler__AsyncObject* self, QChildEvent* event) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_ChildEvent_IsBase(true);
        vpopplerasyncobject->childEvent(event);
    } else {
        ((VirtualPopplerAsyncObject*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__AsyncObject_OnChildEvent(Poppler__AsyncObject* self, intptr_t slot) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_ChildEvent_Callback(reinterpret_cast<VirtualPopplerAsyncObject::Poppler__AsyncObject_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Poppler__AsyncObject_CustomEvent(Poppler__AsyncObject* self, QEvent* event) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->customEvent(event);
    } else {
        ((VirtualPopplerAsyncObject*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Poppler__AsyncObject_SuperCustomEvent(Poppler__AsyncObject* self, QEvent* event) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_CustomEvent_IsBase(true);
        vpopplerasyncobject->customEvent(event);
    } else {
        ((VirtualPopplerAsyncObject*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__AsyncObject_OnCustomEvent(Poppler__AsyncObject* self, intptr_t slot) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_CustomEvent_Callback(reinterpret_cast<VirtualPopplerAsyncObject::Poppler__AsyncObject_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Poppler__AsyncObject_ConnectNotify(Poppler__AsyncObject* self, const QMetaMethod* signal) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->connectNotify(*signal);
    } else {
        ((VirtualPopplerAsyncObject*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Poppler__AsyncObject_SuperConnectNotify(Poppler__AsyncObject* self, const QMetaMethod* signal) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_ConnectNotify_IsBase(true);
        vpopplerasyncobject->connectNotify(*signal);
    } else {
        ((VirtualPopplerAsyncObject*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__AsyncObject_OnConnectNotify(Poppler__AsyncObject* self, intptr_t slot) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_ConnectNotify_Callback(reinterpret_cast<VirtualPopplerAsyncObject::Poppler__AsyncObject_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Poppler__AsyncObject_DisconnectNotify(Poppler__AsyncObject* self, const QMetaMethod* signal) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->disconnectNotify(*signal);
    } else {
        ((VirtualPopplerAsyncObject*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Poppler__AsyncObject_SuperDisconnectNotify(Poppler__AsyncObject* self, const QMetaMethod* signal) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_DisconnectNotify_IsBase(true);
        vpopplerasyncobject->disconnectNotify(*signal);
    } else {
        ((VirtualPopplerAsyncObject*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__AsyncObject_OnDisconnectNotify(Poppler__AsyncObject* self, intptr_t slot) {
    auto* vpopplerasyncobject = dynamic_cast<VirtualPopplerAsyncObject*>(self);
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_DisconnectNotify_Callback(reinterpret_cast<VirtualPopplerAsyncObject::Poppler__AsyncObject_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Poppler__AsyncObject_Sender(const Poppler__AsyncObject* self) {
    auto* vpopplerasyncobject = const_cast<VirtualPopplerAsyncObject*>(dynamic_cast<const VirtualPopplerAsyncObject*>(self));
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        return vpopplerasyncobject->sender();
    } else {
        return ((VirtualPopplerAsyncObject*)self)->sender();
    }
}

// Base class handler implementation
QObject* Poppler__AsyncObject_SuperSender(const Poppler__AsyncObject* self) {
    auto* vpopplerasyncobject = const_cast<VirtualPopplerAsyncObject*>(dynamic_cast<const VirtualPopplerAsyncObject*>(self));
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_Sender_IsBase(true);
        return vpopplerasyncobject->sender();
    } else {
        return ((VirtualPopplerAsyncObject*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__AsyncObject_OnSender(const Poppler__AsyncObject* self, intptr_t slot) {
    auto* vpopplerasyncobject = const_cast<VirtualPopplerAsyncObject*>(dynamic_cast<const VirtualPopplerAsyncObject*>(self));
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_Sender_Callback(reinterpret_cast<VirtualPopplerAsyncObject::Poppler__AsyncObject_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Poppler__AsyncObject_SenderSignalIndex(const Poppler__AsyncObject* self) {
    auto* vpopplerasyncobject = const_cast<VirtualPopplerAsyncObject*>(dynamic_cast<const VirtualPopplerAsyncObject*>(self));
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        return vpopplerasyncobject->senderSignalIndex();
    } else {
        return ((VirtualPopplerAsyncObject*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Poppler__AsyncObject_SuperSenderSignalIndex(const Poppler__AsyncObject* self) {
    auto* vpopplerasyncobject = const_cast<VirtualPopplerAsyncObject*>(dynamic_cast<const VirtualPopplerAsyncObject*>(self));
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_SenderSignalIndex_IsBase(true);
        return vpopplerasyncobject->senderSignalIndex();
    } else {
        return ((VirtualPopplerAsyncObject*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__AsyncObject_OnSenderSignalIndex(const Poppler__AsyncObject* self, intptr_t slot) {
    auto* vpopplerasyncobject = const_cast<VirtualPopplerAsyncObject*>(dynamic_cast<const VirtualPopplerAsyncObject*>(self));
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_SenderSignalIndex_Callback(reinterpret_cast<VirtualPopplerAsyncObject::Poppler__AsyncObject_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Poppler__AsyncObject_Receivers(const Poppler__AsyncObject* self, const char* signal) {
    auto* vpopplerasyncobject = const_cast<VirtualPopplerAsyncObject*>(dynamic_cast<const VirtualPopplerAsyncObject*>(self));
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        return vpopplerasyncobject->receivers(signal);
    } else {
        return ((VirtualPopplerAsyncObject*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Poppler__AsyncObject_SuperReceivers(const Poppler__AsyncObject* self, const char* signal) {
    auto* vpopplerasyncobject = const_cast<VirtualPopplerAsyncObject*>(dynamic_cast<const VirtualPopplerAsyncObject*>(self));
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_Receivers_IsBase(true);
        return vpopplerasyncobject->receivers(signal);
    } else {
        return ((VirtualPopplerAsyncObject*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__AsyncObject_OnReceivers(const Poppler__AsyncObject* self, intptr_t slot) {
    auto* vpopplerasyncobject = const_cast<VirtualPopplerAsyncObject*>(dynamic_cast<const VirtualPopplerAsyncObject*>(self));
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_Receivers_Callback(reinterpret_cast<VirtualPopplerAsyncObject::Poppler__AsyncObject_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Poppler__AsyncObject_IsSignalConnected(const Poppler__AsyncObject* self, const QMetaMethod* signal) {
    auto* vpopplerasyncobject = const_cast<VirtualPopplerAsyncObject*>(dynamic_cast<const VirtualPopplerAsyncObject*>(self));
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        return vpopplerasyncobject->isSignalConnected(*signal);
    } else {
        return ((VirtualPopplerAsyncObject*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Poppler__AsyncObject_SuperIsSignalConnected(const Poppler__AsyncObject* self, const QMetaMethod* signal) {
    auto* vpopplerasyncobject = const_cast<VirtualPopplerAsyncObject*>(dynamic_cast<const VirtualPopplerAsyncObject*>(self));
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_IsSignalConnected_IsBase(true);
        return vpopplerasyncobject->isSignalConnected(*signal);
    } else {
        return ((VirtualPopplerAsyncObject*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__AsyncObject_OnIsSignalConnected(const Poppler__AsyncObject* self, intptr_t slot) {
    auto* vpopplerasyncobject = const_cast<VirtualPopplerAsyncObject*>(dynamic_cast<const VirtualPopplerAsyncObject*>(self));
    if (vpopplerasyncobject && vpopplerasyncobject->isVirtualPopplerAsyncObject) {
        vpopplerasyncobject->setPoppler__AsyncObject_IsSignalConnected_Callback(reinterpret_cast<VirtualPopplerAsyncObject::Poppler__AsyncObject_IsSignalConnected_Callback>(slot));
    }
}

void Poppler__AsyncObject_Delete(Poppler__AsyncObject* self) {
    delete self;
}

int Poppler__FormFieldSignature_Type(const Poppler__FormFieldSignature* self) {
    return static_cast<int>(self->type());
}

int Poppler__FormFieldSignature_SignatureType(const Poppler__FormFieldSignature* self) {
    return static_cast<int>(self->signatureType());
}

Poppler__SignatureValidationInfo* Poppler__FormFieldSignature_Validate(const Poppler__FormFieldSignature* self, int opt) {
    return new Poppler::SignatureValidationInfo(self->validate(static_cast<Poppler::FormFieldSignature::ValidateOptions>(opt)));
}

Poppler__SignatureValidationInfo* Poppler__FormFieldSignature_Validate2(const Poppler__FormFieldSignature* self, int opt, const QDateTime* validationTime) {
    return new Poppler::SignatureValidationInfo(self->validate(static_cast<int>(opt), *validationTime));
}

int Poppler__FormFieldSignature_ValidateResult(const Poppler__FormFieldSignature* self) {
    return static_cast<int>(self->validateResult());
}

int Poppler__FormFieldSignature_Sign(const Poppler__FormFieldSignature* self, const libqt_string outputFileName, const Poppler__PDFConverter__NewSignatureData* data) {
    QString outputFileName_QString = QString::fromUtf8(outputFileName.data, outputFileName.len);
    return static_cast<int>(self->sign(outputFileName_QString, *data));
}

void Poppler__FormFieldSignature_Delete(Poppler__FormFieldSignature* self) {
    delete self;
}

libqt_list /* of int */ Poppler_AvailableCryptoSignBackends() {
    QVector<Poppler::CryptoSignBackend> _ret = Poppler::availableCryptoSignBackends();
    // Convert QVector<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int Poppler_ActiveCryptoSignBackend() {
    return static_cast<int>(Poppler::activeCryptoSignBackend().value_or(static_cast<Poppler::CryptoSignBackend>(-1)));
}

bool Poppler_SetActiveCryptoSignBackend(int param1) {
    return Poppler::setActiveCryptoSignBackend(static_cast<Poppler::CryptoSignBackend>(param1));
}

bool Poppler_HasCryptoSignBackendFeature(int param1, int param2) {
    return Poppler::hasCryptoSignBackendFeature(static_cast<Poppler::CryptoSignBackend>(param1), static_cast<Poppler::CryptoSignBackendFeature>(param2));
}

bool Poppler_HasNSSSupport() {
    return Poppler::hasNSSSupport();
}

libqt_list /* of Poppler__CertificateInfo* */ Poppler_GetAvailableSigningCertificates() {
    QVector<Poppler::CertificateInfo> _ret = Poppler::getAvailableSigningCertificates();
    // Convert QVector<> from C++ memory to manually-managed C memory
    Poppler__CertificateInfo** _arr = static_cast<Poppler__CertificateInfo**>(malloc(sizeof(Poppler__CertificateInfo*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Poppler::CertificateInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string Poppler_GetNSSDir() {
    QString _ret = Poppler::getNSSDir();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler_SetNSSDir(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    Poppler::setNSSDir(param1_QString);
}

void Poppler_SetNSSPasswordCallback(intptr_t param1) {
    auto param1_func = [param1](const char* funcparam1_fp) -> char* {
        const char* funcparam1_fv = (const char*)funcparam1_fp;
        auto param1_funcret = reinterpret_cast<char* (*)(const char*)>(param1)(funcparam1_fv);
        return static_cast<char*>(param1_funcret);
    };
    Poppler::setNSSPasswordCallback(param1_func);
}

void Poppler_SetPgpSignaturesAllowed(bool param1) {
    Poppler::setPgpSignaturesAllowed(param1);
}

bool Poppler_ArePgpSignaturesAllowed() {
    return Poppler::arePgpSignaturesAllowed();
}
