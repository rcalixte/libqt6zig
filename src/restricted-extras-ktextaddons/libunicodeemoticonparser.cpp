#include <QJsonObject>
#include <QList>
#include <QString>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__UnicodeEmoticon
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__UnicodeEmoticonParser
#include <unicodeemoticonparser.h>
#include "libunicodeemoticonparser.h"
#include "libunicodeemoticonparser.hxx"

TextEmoticonsCore__UnicodeEmoticonParser* TextEmoticonsCore__UnicodeEmoticonParser_new() {
    return new TextEmoticonsCore::UnicodeEmoticonParser();
}

libqt_list /* of TextEmoticonsCore__UnicodeEmoticon* */ TextEmoticonsCore__UnicodeEmoticonParser_Parse(const TextEmoticonsCore__UnicodeEmoticonParser* self, const QJsonObject* o) {
    QList<TextEmoticonsCore::UnicodeEmoticon> _ret = self->parse(*o);
    // Convert QList<> from C++ memory to manually-managed C memory
    TextEmoticonsCore__UnicodeEmoticon** _arr = static_cast<TextEmoticonsCore__UnicodeEmoticon**>(malloc(sizeof(TextEmoticonsCore__UnicodeEmoticon*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new TextEmoticonsCore::UnicodeEmoticon(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int TextEmoticonsCore__UnicodeEmoticonParser_ChangeOrder(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return TextEmoticonsCore::UnicodeEmoticonParser::changeOrder(name_QString);
}

void TextEmoticonsCore__UnicodeEmoticonParser_Delete(TextEmoticonsCore__UnicodeEmoticonParser* self) {
    delete self;
}
