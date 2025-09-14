#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__AuthInfo
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <authinfo.h>
#include "libauthinfo.h"
#include "libauthinfo.hxx"

KIO__AuthInfo* KIO__AuthInfo_new() {
    return new KIO::AuthInfo();
}

KIO__AuthInfo* KIO__AuthInfo_new2(const KIO__AuthInfo* info) {
    return new KIO::AuthInfo(*info);
}

void KIO__AuthInfo_OperatorAssign(KIO__AuthInfo* self, const KIO__AuthInfo* info) {
    self->operator=(*info);
}

bool KIO__AuthInfo_IsModified(const KIO__AuthInfo* self) {
    return self->isModified();
}

void KIO__AuthInfo_SetModified(KIO__AuthInfo* self, bool flag) {
    self->setModified(flag);
}

QUrl* KIO__AuthInfo_Url(const KIO__AuthInfo* self) {
    return new QUrl(self->url);
}

void KIO__AuthInfo_SetUrl(KIO__AuthInfo* self, QUrl* url) {
    self->url = *url;
}

libqt_string KIO__AuthInfo_Username(const KIO__AuthInfo* self) {
    QString username_ret = self->username;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray username_b = username_ret.toUtf8();
    libqt_string username_str;
    username_str.len = username_b.length();
    username_str.data = static_cast<const char*>(malloc(username_str.len + 1));
    memcpy((void*)username_str.data, username_b.data(), username_str.len);
    ((char*)username_str.data)[username_str.len] = '\0';
    return username_str;
}

void KIO__AuthInfo_SetUsername(KIO__AuthInfo* self, libqt_string username) {
    QString username_QString = QString::fromUtf8(username.data, username.len);
    self->username = username_QString;
}

libqt_string KIO__AuthInfo_Password(const KIO__AuthInfo* self) {
    QString password_ret = self->password;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray password_b = password_ret.toUtf8();
    libqt_string password_str;
    password_str.len = password_b.length();
    password_str.data = static_cast<const char*>(malloc(password_str.len + 1));
    memcpy((void*)password_str.data, password_b.data(), password_str.len);
    ((char*)password_str.data)[password_str.len] = '\0';
    return password_str;
}

void KIO__AuthInfo_SetPassword(KIO__AuthInfo* self, libqt_string password) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->password = password_QString;
}

libqt_string KIO__AuthInfo_Prompt(const KIO__AuthInfo* self) {
    QString prompt_ret = self->prompt;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray prompt_b = prompt_ret.toUtf8();
    libqt_string prompt_str;
    prompt_str.len = prompt_b.length();
    prompt_str.data = static_cast<const char*>(malloc(prompt_str.len + 1));
    memcpy((void*)prompt_str.data, prompt_b.data(), prompt_str.len);
    ((char*)prompt_str.data)[prompt_str.len] = '\0';
    return prompt_str;
}

void KIO__AuthInfo_SetPrompt(KIO__AuthInfo* self, libqt_string prompt) {
    QString prompt_QString = QString::fromUtf8(prompt.data, prompt.len);
    self->prompt = prompt_QString;
}

libqt_string KIO__AuthInfo_Caption(const KIO__AuthInfo* self) {
    QString caption_ret = self->caption;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray caption_b = caption_ret.toUtf8();
    libqt_string caption_str;
    caption_str.len = caption_b.length();
    caption_str.data = static_cast<const char*>(malloc(caption_str.len + 1));
    memcpy((void*)caption_str.data, caption_b.data(), caption_str.len);
    ((char*)caption_str.data)[caption_str.len] = '\0';
    return caption_str;
}

void KIO__AuthInfo_SetCaption(KIO__AuthInfo* self, libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->caption = caption_QString;
}

libqt_string KIO__AuthInfo_Comment(const KIO__AuthInfo* self) {
    QString comment_ret = self->comment;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray comment_b = comment_ret.toUtf8();
    libqt_string comment_str;
    comment_str.len = comment_b.length();
    comment_str.data = static_cast<const char*>(malloc(comment_str.len + 1));
    memcpy((void*)comment_str.data, comment_b.data(), comment_str.len);
    ((char*)comment_str.data)[comment_str.len] = '\0';
    return comment_str;
}

void KIO__AuthInfo_SetComment(KIO__AuthInfo* self, libqt_string comment) {
    QString comment_QString = QString::fromUtf8(comment.data, comment.len);
    self->comment = comment_QString;
}

libqt_string KIO__AuthInfo_CommentLabel(const KIO__AuthInfo* self) {
    QString commentLabel_ret = self->commentLabel;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray commentLabel_b = commentLabel_ret.toUtf8();
    libqt_string commentLabel_str;
    commentLabel_str.len = commentLabel_b.length();
    commentLabel_str.data = static_cast<const char*>(malloc(commentLabel_str.len + 1));
    memcpy((void*)commentLabel_str.data, commentLabel_b.data(), commentLabel_str.len);
    ((char*)commentLabel_str.data)[commentLabel_str.len] = '\0';
    return commentLabel_str;
}

void KIO__AuthInfo_SetCommentLabel(KIO__AuthInfo* self, libqt_string commentLabel) {
    QString commentLabel_QString = QString::fromUtf8(commentLabel.data, commentLabel.len);
    self->commentLabel = commentLabel_QString;
}

libqt_string KIO__AuthInfo_RealmValue(const KIO__AuthInfo* self) {
    QString realmValue_ret = self->realmValue;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray realmValue_b = realmValue_ret.toUtf8();
    libqt_string realmValue_str;
    realmValue_str.len = realmValue_b.length();
    realmValue_str.data = static_cast<const char*>(malloc(realmValue_str.len + 1));
    memcpy((void*)realmValue_str.data, realmValue_b.data(), realmValue_str.len);
    ((char*)realmValue_str.data)[realmValue_str.len] = '\0';
    return realmValue_str;
}

void KIO__AuthInfo_SetRealmValue(KIO__AuthInfo* self, libqt_string realmValue) {
    QString realmValue_QString = QString::fromUtf8(realmValue.data, realmValue.len);
    self->realmValue = realmValue_QString;
}

libqt_string KIO__AuthInfo_DigestInfo(const KIO__AuthInfo* self) {
    QString digestInfo_ret = self->digestInfo;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray digestInfo_b = digestInfo_ret.toUtf8();
    libqt_string digestInfo_str;
    digestInfo_str.len = digestInfo_b.length();
    digestInfo_str.data = static_cast<const char*>(malloc(digestInfo_str.len + 1));
    memcpy((void*)digestInfo_str.data, digestInfo_b.data(), digestInfo_str.len);
    ((char*)digestInfo_str.data)[digestInfo_str.len] = '\0';
    return digestInfo_str;
}

void KIO__AuthInfo_SetDigestInfo(KIO__AuthInfo* self, libqt_string digestInfo) {
    QString digestInfo_QString = QString::fromUtf8(digestInfo.data, digestInfo.len);
    self->digestInfo = digestInfo_QString;
}

bool KIO__AuthInfo_VerifyPath(const KIO__AuthInfo* self) {
    return self->verifyPath;
}

void KIO__AuthInfo_SetVerifyPath(KIO__AuthInfo* self, bool verifyPath) {
    self->verifyPath = verifyPath;
}

bool KIO__AuthInfo_ReadOnly(const KIO__AuthInfo* self) {
    return self->readOnly;
}

void KIO__AuthInfo_SetReadOnly(KIO__AuthInfo* self, bool readOnly) {
    self->readOnly = readOnly;
}

bool KIO__AuthInfo_KeepPassword(const KIO__AuthInfo* self) {
    return self->keepPassword;
}

void KIO__AuthInfo_SetKeepPassword(KIO__AuthInfo* self, bool keepPassword) {
    self->keepPassword = keepPassword;
}

void KIO__AuthInfo_SetExtraField(KIO__AuthInfo* self, const libqt_string fieldName, const QVariant* value) {
    QString fieldName_QString = QString::fromUtf8(fieldName.data, fieldName.len);
    self->setExtraField(fieldName_QString, *value);
}

void KIO__AuthInfo_SetExtraFieldFlags(KIO__AuthInfo* self, const libqt_string fieldName, const int flags) {
    QString fieldName_QString = QString::fromUtf8(fieldName.data, fieldName.len);
    self->setExtraFieldFlags(fieldName_QString, static_cast<const KIO::AuthInfo::FieldFlags>(flags));
}

QVariant* KIO__AuthInfo_GetExtraField(const KIO__AuthInfo* self, const libqt_string fieldName) {
    QString fieldName_QString = QString::fromUtf8(fieldName.data, fieldName.len);
    return new QVariant(self->getExtraField(fieldName_QString));
}

int KIO__AuthInfo_GetExtraFieldFlags(const KIO__AuthInfo* self, const libqt_string fieldName) {
    QString fieldName_QString = QString::fromUtf8(fieldName.data, fieldName.len);
    return static_cast<int>(self->getExtraFieldFlags(fieldName_QString));
}

void KIO__AuthInfo_RegisterMetaTypes() {
    KIO::AuthInfo::registerMetaTypes();
}

void KIO__AuthInfo_Delete(KIO__AuthInfo* self) {
    delete self;
}
