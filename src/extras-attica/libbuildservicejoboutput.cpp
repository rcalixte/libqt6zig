#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__BuildServiceJobOutput
#include <QString>
#include <QByteArray>
#include <cstring>
#include <buildservicejoboutput.h>
#include "libbuildservicejoboutput.h"
#include "libbuildservicejoboutput.hxx"

Attica__BuildServiceJobOutput* Attica__BuildServiceJobOutput_new() {
    return new Attica::BuildServiceJobOutput();
}

Attica__BuildServiceJobOutput* Attica__BuildServiceJobOutput_new2(const Attica__BuildServiceJobOutput* other) {
    return new Attica::BuildServiceJobOutput(*other);
}

void Attica__BuildServiceJobOutput_OperatorAssign(Attica__BuildServiceJobOutput* self, const Attica__BuildServiceJobOutput* other) {
    self->operator=(*other);
}

void Attica__BuildServiceJobOutput_SetOutput(Attica__BuildServiceJobOutput* self, const libqt_string output) {
    QString output_QString = QString::fromUtf8(output.data, output.len);
    self->setOutput(output_QString);
}

libqt_string Attica__BuildServiceJobOutput_Output(const Attica__BuildServiceJobOutput* self) {
    QString _ret = self->output();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Attica__BuildServiceJobOutput_IsRunning(const Attica__BuildServiceJobOutput* self) {
    return self->isRunning();
}

bool Attica__BuildServiceJobOutput_IsCompleted(const Attica__BuildServiceJobOutput* self) {
    return self->isCompleted();
}

bool Attica__BuildServiceJobOutput_IsFailed(const Attica__BuildServiceJobOutput* self) {
    return self->isFailed();
}

bool Attica__BuildServiceJobOutput_IsValid(const Attica__BuildServiceJobOutput* self) {
    return self->isValid();
}

void Attica__BuildServiceJobOutput_Delete(Attica__BuildServiceJobOutput* self) {
    delete self;
}
