#ifndef _GAME_OPTIONS_H_
#define _GAME_OPTIONS_H_

#include <map>
#include <string>
using std::map;
using std::string;

#define OPTIONS_MUSICVOLUME "musicVolume"
#define OPTIONS_SFXVOLUME "sfxVolume"

#define OPTIONS_SAVEFILE RESPATH"/settings/options.txt"

class GameOption {
public:
  int value;
  string svalue;
  int getIntValue();
  GameOption(int _value = 0);
};


class GameOptions {
 public:
  map<string,GameOption> values;
  static GameOptions * GetInstance();
  static void Destroy();
  int save();
  int load();
  static const char * phaseInterrupts[]; 

 private:
  GameOptions();
  ~GameOptions();
  static GameOptions* mInstance;

  static map <string,int> optionsTypes;


};

#endif
