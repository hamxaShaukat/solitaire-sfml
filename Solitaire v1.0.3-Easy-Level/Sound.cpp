#include "Sound.h"

Sound::Sound(const  string &path)
{
    if (!buffer.loadFromFile(path))
        throw  exception();
    sound.setBuffer(buffer);
}

void Sound::setSound(const  string &path)
{
    if (!buffer.loadFromFile(path))
        throw  exception();
    sound.setBuffer(buffer);
}

void Sound::play(bool sound_settings)
{
    if (sound_settings)
        sound.play();
}