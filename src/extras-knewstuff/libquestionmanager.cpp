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

void KNSCore__QuestionManager_Delete(KNSCore__QuestionManager* self) {
    delete self;
}
