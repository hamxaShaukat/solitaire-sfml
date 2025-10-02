#pragma once
#include <SFML/Audio.hpp>
using namespace std;
class Sound
{
public:
    Sound() = default;
    explicit Sound(const  string &path);
    void setSound(const  string &path);
    void play(bool sound_settings);

    sf::SoundBuffer buffer{};
    sf::Sound sound{};
};