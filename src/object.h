
typedef struct object {
   int          (*condition)(struct object *);
   const char    *description;
   const char   **tags;
   struct object *location;
   struct object *destination;
   struct object *prospect;
   const char    *details;
   const char    *contents;
   const char    *textGo;
   int            weight;
   int            capacity;
   int            health;
   int            attack;
   const char  *(*open)(struct object *);
   const char  *(*close)(struct object *);
   const char  *(*lock)(struct object *);
   const char  *(*unlock)(struct object *);
   int            lit;
} OBJECT;

extern OBJECT objs[];

#define field	(objs + 0)
#define cave	(objs + 1)
#define copse	(objs + 2)
#define silver	(objs + 3)
#define gold	(objs + 4)
#define sword	(objs + 5)
#define axe	(objs + 6)
#define player	(objs + 7)
#define guard	(objs + 8)
#define skeletonGuard	(objs + 9)
#define evilWitch	(objs + 10)
#define demonWarden	(objs + 11)
#define exitCopse	(objs + 12)
#define intoCopse	(objs + 13)
#define intoCave	(objs + 14)
#define intoCaveBlocked	(objs + 15)
#define exitCave	(objs + 16)
#define wallField	(objs + 17)
#define wallCave	(objs + 18)
#define backroom	(objs + 19)
#define wallBackroom	(objs + 20)
#define passageway	(objs + 21)
#define intoPassageway	(objs + 22)
#define wallPassageway	(objs + 23)
#define wallChamber	(objs + 24)
#define chamber	(objs + 25)
#define intoChamber	(objs + 26)
#define exitChamber	(objs + 27)
#define chamberStaircase	(objs + 28)
#define intoChamberStaircase	(objs + 29)
#define intoChamberStaircaseBlocked	(objs + 30)
#define exitChamberStaircase	(objs + 31)
#define centralVaults	(objs + 32)
#define intoCentralVaults	(objs + 33)
#define exitCentralVaultsStaircase	(objs + 34)
#define witchesLair	(objs + 35)
#define openDoorToWitchesLair	(objs + 36)
#define closedDoorToWitchesLair	(objs + 37)
#define openDoorToCentralVaults	(objs + 38)
#define closedDoorToCentralVaults	(objs + 39)
#define tortureChamber	(objs + 40)
#define intoTortureChamber	(objs + 41)
#define exitTortureChamber	(objs + 42)
#define deepCentralVaults	(objs + 43)
#define intoDeepCentralVaults	(objs + 44)
#define intoDeepCentralVaultsBlocked	(objs + 45)
#define exitDeepCentralVaults	(objs + 46)
#define bodyPit	(objs + 47)
#define intoBodyPit	(objs + 48)
#define exitBodyPit	(objs + 49)
#define ladderRoom	(objs + 50)
#define intoladderRoom	(objs + 51)
#define exitladderRoomVaults	(objs + 52)
#define catacombsEast	(objs + 53)
#define intoCatacombsEast	(objs + 54)
#define exitCatacombsEastLadder	(objs + 55)
#define catacombsNorthEast	(objs + 56)
#define intoCatacombsNorthEast	(objs + 57)
#define exitCatacombsNorthEastToEast	(objs + 58)
#define catacombsSouthEast	(objs + 59)
#define intoCatacombsSouthEast	(objs + 60)
#define exitCatacombsSouthEastToEast	(objs + 61)
#define catacombsCentral	(objs + 62)
#define intoCatacombsCentralFromEast	(objs + 63)
#define exitCatacombsCentralToEast	(objs + 64)
#define catacombsNorth	(objs + 65)
#define intoCatacombsNorthFromNorthEast	(objs + 66)
#define exitCatacombsNorthEastToNorth	(objs + 67)
#define intoCatacombsCentralFromNorth	(objs + 68)
#define exitCatacombsNorthToNorthEast	(objs + 69)
#define catacombsSouth	(objs + 70)
#define intoCatacombsSouthFromSouthEast	(objs + 71)
#define exitCatacombsSouthToSouthEast	(objs + 72)
#define intoCatacombsCentralFromSouth	(objs + 73)
#define exitCatacombsSouthEastFromSouth	(objs + 74)
#define catacombsSouthWest	(objs + 75)
#define intoCatacombsSouthWestFromSouth	(objs + 76)
#define exitCatacombsSouthWestToSouth	(objs + 77)
#define catacombsNorthWest	(objs + 78)
#define intoCatacombsNorthWestFromNorth	(objs + 79)
#define exitCatacombsNorthWestToNorth	(objs + 80)
#define catacombsWest	(objs + 81)
#define intoCatacombsWestFromNorthWest	(objs + 82)
#define exitCatacombsWestToNorthWest	(objs + 83)
#define intoCatacombsWestFromSouthWest	(objs + 84)
#define exitCatacombsWestToSouthWest	(objs + 85)
#define intoCatacombsCentralFromWest	(objs + 86)
#define exitCatacombsCentralToWest	(objs + 87)
#define exitCatacombsCentralToNorth	(objs + 88)
#define exitCatacombsCentralToSouth	(objs + 89)
#define forbiddenCrypt	(objs + 90)
#define intoForbiddenCryptFromCatacombsWest	(objs + 91)
#define exitForbiddenCryptToCatacombsWest	(objs + 92)
#define chamberOfRest	(objs + 93)
#define intoChamberOfRestFromCatacombsSouth	(objs + 94)
#define exitChamberOfRestToCatacombsSouth	(objs + 95)
#define sewerEntrance	(objs + 96)
#define openGateToSewerEntrance	(objs + 97)
#define closedGateToSewerEntrance	(objs + 98)
#define openGateToCatacombsNorth	(objs + 99)
#define closedGateToCatacombsNorth	(objs + 100)
#define guardRoom	(objs + 101)
#define openDoorToGuardRoom	(objs + 102)
#define closedDoorToGuardRoom	(objs + 103)
#define openDoorToDeepVaults	(objs + 104)
#define closedDoorToDeepVaults	(objs + 105)
#define wardensOffice	(objs + 106)
#define intoWardensOffice	(objs + 107)
#define exitWardenOffice	(objs + 108)
#define chamberAnteroom	(objs + 109)
#define intoChamberAnteroom	(objs + 110)
#define intoChamberAnteroomBlocked	(objs + 111)
#define exitChamberAnteroom	(objs + 112)
#define library	(objs + 113)
#define openDoorToLibrary	(objs + 114)
#define closedDoorToLibrary	(objs + 115)
#define openDoorToAnteroom	(objs + 116)
#define closedDoorToAnteroom	(objs + 117)
#define openDoorToBackroom	(objs + 118)
#define closedDoorToBackroom	(objs + 119)
#define openDoorToCave	(objs + 120)
#define closedDoorToCave	(objs + 121)
#define openBox	(objs + 122)
#define closedBox	(objs + 123)
#define lockedBox	(objs + 124)
#define openIronChest	(objs + 125)
#define closedIronChest	(objs + 126)
#define lockedIronChest	(objs + 127)
#define keyForIronChest	(objs + 128)
#define keyForBox	(objs + 129)
#define keyForSewerGate	(objs + 130)
#define torch	(objs + 131)
#define cauldron	(objs + 132)
#define closedStitchedCorpse	(objs + 133)
#define openStitchedCorpse	(objs + 134)
#define bookArsGoetia	(objs + 135)
#define bookArsTheurgiaGoetia	(objs + 136)

#define endOfObjs	(objs + 137)

#define validObject(obj)	((obj) != NULL && (*(obj)->condition)((obj)))

#define forEachObject(obj)	for (obj = objs; obj < endOfObjs; obj++) if (validObject(obj))
