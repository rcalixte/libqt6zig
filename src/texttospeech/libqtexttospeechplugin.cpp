#include <QTextToSpeechPlugin>
#include <qtexttospeechplugin.h>
#include "libqtexttospeechplugin.h"
#include "libqtexttospeechplugin.hxx"

void QTextToSpeechPlugin_OperatorAssign(QTextToSpeechPlugin* self, const QTextToSpeechPlugin* param1) {
    self->operator=(*param1);
}

void QTextToSpeechPlugin_Delete(QTextToSpeechPlugin* self) {
    delete self;
}
