#include <QTextToSpeechPlugin>
#include <qtexttospeechplugin.h>
#include "libqtexttospeechplugin.h"
#include "libqtexttospeechplugin.hxx"

QTextToSpeechPlugin* QTextToSpeechPlugin_new() {
    return new QTextToSpeechPlugin();
}

void QTextToSpeechPlugin_Delete(QTextToSpeechPlugin* self) {
    delete self;
}
