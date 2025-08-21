#include <QAudio>
#include <qaudio.h>
#include "libqaudio.h"
#include "libqaudio.hxx"

float QAudio_ConvertVolume(float param1, int param2, int param3) {
    return QAudio::convertVolume(static_cast<float>(param1), static_cast<QAudio::VolumeScale>(param2), static_cast<QAudio::VolumeScale>(param3));
}
