class CfgPatches
{
	class Wilmas_LiquidLimitTest
	{
		requiredAddons[] = {"DZ_Vehicles_Parts","DZ_Gear_Containers","DZ_Gear_Cooking"};
	};
};
class CfgMods
{
	class Wilmas_LiquidLimitTest
	{
		dir = "Wilmas_LiquidLimitTest";
		name = "Wilmas_LiquidLimitTest";
		credits = "Wilmas_LiquidLimitTest";
		author = "Wilmas_LiquidLimitTest";
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Wilmas_LiquidLimitTest\Scripts\3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Wilmas_LiquidLimitTest\Scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Wilmas_LiquidLimitTest\Scripts\5_Mission"};
			};
		};
	};
};
class CfgVehicles
{
	class Bottle_Base;	
	class Container_Base;
	class Barrel_ColorBase : Container_Base
    {
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072 + 131073 + 131074 + 131075 + 131076 + 131077 + 131078 + 131079 + 131080 + 131081 + 131082 + 131083 + 131084 + 131085 + 131086 + 131087 + 131088 + 131089 + 131090 + 131091 + 131092 + 131093 + 131094 + 131095 + 131096 + 131097 + 131098 + 131099 + 131100 + 131101 + 131102 + 131103 + 131104 + 131105 + 131106 + 131107 + 131108 + 131109 + 131110 + 131111 + 131112 + 131113 + 131114 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
	};
	class Pot: Bottle_Base
	{
		scope = 2;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072 + 131073 + 131074 + 131075 + 131076 + 131077 + 131078 + 131079 + 131080 + 131081 + 131082 + 131083 + 131084 + 131085 + 131086 + 131087 + 131088 + 131089 + 131090 + 131091 + 131092 + 131093 + 131094 + 131095 + 131096 + 131097 + 131098 + 131099 + 131100 + 131101 + 131102 + 131103 + 131104 + 131105 + 131106 + 131107 + 131108 + 131109 + 131110 + 131111 + 131112 + 131113 + 131114 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
	};
	class Cauldron: Bottle_Base
	{
		scope = 2;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072 + 131073 + 131074 + 131075 + 131076 + 131077 + 131078 + 131079 + 131080 + 131081 + 131082 + 131083 + 131084 + 131085 + 131086 + 131087 + 131088 + 131089 + 131090 + 131091 + 131092 + 131093 + 131094 + 131095 + 131096 + 131097 + 131098 + 131099 + 131100 + 131101 + 131102 + 131103 + 131104 + 131105 + 131106 + 131107 + 131108 + 131109 + 131110 + 131111 + 131112 + 131113 + 131114 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
	};
	class Canteen: Bottle_Base
	{
		scope = 2;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072 + 131073 + 131074 + 131075 + 131076 + 131077 + 131078 + 131079 + 131080 + 131081 + 131082 + 131083 + 131084 + 131085 + 131086 + 131087 + 131088 + 131089 + 131090 + 131091 + 131092 + 131093 + 131094 + 131095 + 131096 + 131097 + 131098 + 131099 + 131100 + 131101 + 131102 + 131103 + 131104 + 131105 + 131106 + 131107 + 131108 + 131109 + 131110 + 131111 + 131112 + 131113 + 131114 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
	};
	class WaterBottle: Bottle_Base
	{
		scope = 2;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072 + 131073 + 131074 + 131075 + 131076 + 131077 + 131078 + 131079 + 131080 + 131081 + 131082 + 131083 + 131084 + 131085 + 131086 + 131087 + 131088 + 131089 + 131090 + 131091 + 131092 + 131093 + 131094 + 131095 + 131096 + 131097 + 131098 + 131099 + 131100 + 131101 + 131102 + 131103 + 131104 + 131105 + 131106 + 131107 + 131108 + 131109 + 131110 + 131111 + 131112 + 131113 + 131114 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
	};
	class Vodka: Bottle_Base
	{
		scope = 2;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072 + 131073 + 131074 + 131075 + 131076 + 131077 + 131078 + 131079 + 131080 + 131081 + 131082 + 131083 + 131084 + 131085 + 131086 + 131087 + 131088 + 131089 + 131090 + 131091 + 131092 + 131093 + 131094 + 131095 + 131096 + 131097 + 131098 + 131099 + 131100 + 131101 + 131102 + 131103 + 131104 + 131105 + 131106 + 131107 + 131108 + 131109 + 131110 + 131111 + 131112 + 131113 + 131114 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
	};
	class CanisterGasoline: Bottle_Base
	{
		scope = 2;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072 + 131073 + 131074 + 131075 + 131076 + 131077 + 131078 + 131079 + 131080 + 131081 + 131082 + 131083 + 131084 + 131085 + 131086 + 131087 + 131088 + 131089 + 131090 + 131091 + 131092 + 131093 + 131094 + 131095 + 131096 + 131097 + 131098 + 131099 + 131100 + 131101 + 131102 + 131103 + 131104 + 131105 + 131106 + 131107 + 131108 + 131109 + 131110 + 131111 + 131112 + 131113 + 131114 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
	};
};
class cfgLiquidDefinitions
{
	class AviationFuelLiquid1
	{
		type = 131073;
		displayName = "01";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid2
	{
		type = 131074;
		displayName = "02";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid3
	{
		type = 131075;
		displayName = "03";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid4
	{
		type = 131076;
		displayName = "04";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid5
	{
		type = 131077;
		displayName = "05";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid6
	{
		type = 131078;
		displayName = "06";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid7
	{
		type = 131079;
		displayName = "07";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid8
	{
		type = 131080;
		displayName = "08";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid9
	{
		type = 131081;
		displayName = "09";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid10
	{
		type = 131082;
		displayName = "10";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid11
	{
		type = 131083;
		displayName = "11";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid12
	{
		type = 131084;
		displayName = "12";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid13
	{
		type = 131085;
		displayName = "13";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid14
	{
		type = 131086;
		displayName = "14";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid15
	{
		type = 131087;
		displayName = "15";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid16
	{
		type = 131088;
		displayName = "16";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid17
	{
		type = 131089;
		displayName = "17";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid18
	{
		type = 131090;
		displayName = "18";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid19
	{
		type = 131091;
		displayName = "19";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid20
	{
		type = 131092;
		displayName = "20";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid21
	{
		type = 131093;
		displayName = "21";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid22
	{
		type = 131094;
		displayName = "22";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid23
	{
		type = 131095;
		displayName = "23";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid24
	{
		type = 131096;
		displayName = "24";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid25
	{
		type = 131097;
		displayName = "25";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid26
	{
		type = 131098;
		displayName = "26";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid27
	{
		type = 131099;
		displayName = "27";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid28
	{
		type = 131100;
		displayName = "28";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid29
	{
		type = 131101;
		displayName = "29";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid30
	{
		type = 131102;
		displayName = "30";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid31
	{
		type = 131103;
		displayName = "31";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid32
	{
		type = 131104;
		displayName = "32";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid33
	{
		type = 131105;
		displayName = "33";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid34
	{
		type = 131106;
		displayName = "34";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid35
	{
		type = 131107;
		displayName = "35";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid36
	{
		type = 131108;
		displayName = "36";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid37
	{
		type = 131109;
		displayName = "37";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid38
	{
		type = 131110;
		displayName = "38";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid39
	{
		type = 131111;
		displayName = "39";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid40
	{
		type = 131112;
		displayName = "40";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid41
	{
		type = 131113;
		displayName = "41";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid42
	{
		type = 131114;
		displayName = "42";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid43
	{
		type = 131115;
		displayName = "43";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid44
	{
		type = 131116;
		displayName = "44";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid45
	{
		type = 131117;
		displayName = "45";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid46
	{
		type = 131118;
		displayName = "46";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid47
	{
		type = 131119;
		displayName = "47";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid48
	{
		type = 131120;
		displayName = "48";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid49
	{
		type = 131121;
		displayName = "49";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
	class AviationFuelLiquid50
	{
		type = 131122;
		displayName = "50";
		flammability=50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 5;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
};