#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Question
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__QuestionManager
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <questionmanager.h>
#include "libquestionmanager.h"
#include "libquestionmanager.hxx"

QMetaObject* KNSCore__QuestionManager_MetaObject(const KNSCore__QuestionManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSCore__QuestionManager_Metacast(KNSCore__QuestionManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSCore__QuestionManager_Metacall(KNSCore__QuestionManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNSCore__QuestionManager_Tr(const char* s) {
    QString _ret = KNSCore::QuestionManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KNSCore__QuestionManager* KNSCore__QuestionManager_Instance() {
    return KNSCore::QuestionManager::instance();
}

void KNSCore__QuestionManager_AskQuestion(KNSCore__QuestionManager* self, KNSCore__Question* question) {
    self->askQuestion(question);
}

void KNSCore__QuestionManager_Connect_AskQuestion(KNSCore__QuestionManager* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__QuestionManager*, KNSCore__Question*) = reinterpret_cast<void (*)(KNSCore__QuestionManager*, KNSCore__Question*)>(slot);
    KNSCore::QuestionManager::connect(self, &KNSCore::QuestionManager::askQuestion, [self, slotFunc](KNSCore::Question* question) {
        KNSCore__Question* sigval1 = question;
        slotFunc(self, sigval1);
    });
}

libqt_string KNSCore__QuestionManager_Tr2(const char* s, const char* c) {
    QString _ret = KNSCore::QuestionManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__QuestionManager_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNSCore::QuestionManager::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__QuestionManager_Delete(KNSCore__QuestionManager* self) {
    delete self;
}
