#include <stdio.h>
#define L1 0
#define L2 83
#define L3 174
#define L4 276
#define L5 388
#define L6 512
#define L7 650
#define L8 801
#define L9 969
#define L11 1358
#define L12 1584
#define L13 1833
#define L14 2107
#define L15 2411
#define L16 2746
#define L17 3115
#define L18 3523
#define L19 3973
#define L20 4470
#define L21 5018
#define L22 5624
#define L23 6291
#define L24 7028
#define L25 7842
#define L26 8740
#define L27 9730
#define L28 10824
#define L29 12031
#define L30 13363
#define L31 14833
#define L32 16456
#define L33 18247
#define L34 20224
#define L35 22406
#define L36 24815
#define L37 27473
#define L38 30408
#define L39 33648
#define L40 37224
#define L41 41171
#define L42 45529
#define L43 50339
#define L44 55649
#define L45 61512
#define L46 67983
#define L47 75127
#define L48 83014
#define L49 91721
#define L50 101333
#define L51 111945
#define L52 123660
#define L53 136594
#define L54 150872
#define L55 166636
#define L56 184040
#define L57 203254
#define L58 224466
#define L59 247886
#define L60 273742
#define L61 302288
#define L62 333804
#define L63 368599
#define L64 407015
#define L65 449428
#define L66 496254
#define L67 547953
#define L68 605032
#define L69 668051
#define L70 737627
#define L71 814445
#define L72 899257
#define L73 992895
#define L74 1096278
#define L75 1210421
#define L76 1336443
#define L77 1475581
#define L78 1629200
#define L79 1789808
#define L80 1986068
#define L81 2192818
#define L82 2421087
#define L83 2673114
#define L84 2951373
#define L85 3258594
#define L86 3597792
#define L87 3972294
#define L88 4385776
#define L89 4842295
#define L90 5346332
#define L91 5902831
#define L92 6517253
#define L93 7195629
#define L94 7944614
#define L95 8771558
#define L96 9684577
#define L97 10692692
#define L98 11805606
#define L99 13034431
#define L100 14391160
#define L101 15880109
#define L102 17542976
#define L103 19368992
#define L104 21385073
#define L105 23611006
#define L106 26086632
#define L107 28782069
#define L108 31777943
#define L109 35085654
#define L110 38737661
#define L111 42769801
#define L112 47221641
#define L113 52563718
#define L114 57563718
#define L115 63555443
#define L116 70170840
#define L117 77474828
#define L118 85539082
#define L119 94442737
#define L120 104273167

#define fish_urn 3000
#define mine_urn 1950
#define cook_urn 5700
#define wood_urn 4950
#define pray_urn 687.5
#define smith_urn 900

int urn();
int current();
int target();

int main()
{

	int user_level; 
	int xp_input;
	int i;
	int threshold_xp[121] = { 0, 
		0,
		83,
		174,
		276,
		388,
		512,
		650,
		801,
		969,
		1154,
		1358,
		1584,
		1833,
		2107,
		2411,
		2746,
		3115,
		3523,
		3973,
		4470,
		5018,
		5624,
		6291,
		7028,
		7842,
		8740,
		9730,
		10824,
		12031,
		13363,
		14833,
		16456,
		18247,
		20224,
		22406,
		24815,
		27473,
		30408,
		33648,
		37224,
		41171,
		45529,
		50339,
		55649,
		61512,
		67983,
		75127,
		83014,
		91721,
		101333,
		111945,
		123660,
		136594,
		150872,
		166636,
		184040,
		203254,
		224466,
		247886,
		273742,
		302288,
		333804,
		368599,
		407015,
		449428,
		496254,
		547953,
		605032,
		668051,
		737627,
		814445,
		899257,
		992895,
		1096278,
		1210421,
		1336443,
		1475581,
		1629200,
		1789808,
		1986068,
		2192818,
		2421087,
		2673114,
		2951373,
		3258594,
		3597792,
		3972294,
		4385776,
		4842295,
		5346332,
		5902831,
		6517253,
		7195629,
		7944614,
		8771558,
		9684577,
		10692692,
		11805606,
		13034431,
		14391160,
		15880109,
		17542976,
		19368992,
		21385073,
		23611006,
		26086632,
		28782069,
		31777943,
		35085654,
		38737661,
		42769801,
		47221641,
		52563718,
		57563718,
		63555443,
		70170840,
		77474828,
		85539082,
		94442737,
		104273167
 };

	for ( i = 0; i < 120; i++ ) {
		if ( xp_input < threshold_xp[i] ) {
			user_level = i;
			break;
		}
	}
		// some error return

	printf("[F2P] Urn Calculator\n    by Heirloom\n\n");

	urn();	






	
	return 0;
}

int urn()
{
	int urn_choice;m
	int xp_diff;
	int xp_input;
	int xp_target;
	int urn_output;

	printf("\nSkill:\n[1] Fishing\n[2] Woodcutting\n[3] Mining\n[4] Cooking\n[5] Prayer\n[6] Smithing\n[7] Info\n[8] Exit\n");
	scanf("%d", &urn_choice);



	
		
	switch (urn_choice) {
		case 1:
			xp_input = current();
			xp_target = target();
			if (xp_input > xp_target) {
				printf("Your target level cannot be less than your current level.\n");
			urn();}
			urn_output = ((xp_target - xp_input) / fish_urn) + 1;
			printf("Fishing: You need %d fishing urns.\n", urn_output);
			break;
		case 2:
			xp_input = current();
			xp_target = target();
			if (xp_input > xp_target) {
				printf("Your target level cannot be less than your current level.\n");
			urn();}
			urn_output = ((xp_target - xp_input) / wood_urn) + 1;
			printf("Woodcutting: You need %d woodcutting urns.\n", urn_output);
			break;
		case 3:
			xp_input = current();
			xp_target = target();
			if (xp_input > xp_target) {
				printf("Your target level cannot be less than your current level.\n");
			urn();}
			urn_output = ((xp_target - xp_input) / mine_urn) + 1;
			printf("Mining: You need %d mining urns.\n", urn_output);
			break;
		case 4:
			xp_input = current();
			xp_target = target();
			if (xp_input > xp_target) {
				printf("Your target level cannot be less than your current level.\n");
			urn();}
			urn_output = ((xp_target - xp_input) / cook_urn) + 1;
			printf("Cooking: You need %d cooking urns.\n", urn_output);
			break;
		case 5:
			xp_input = current();
			xp_target = target();
			if (xp_input > xp_target) {
				printf("Your target level cannot be less than your current level.\n");
			urn();}
			urn_output = ((xp_target - xp_input) / pray_urn) + 1;
			printf("Prayer: You need %d prayer urns.\n", urn_output);
			break;
		case 6:
			xp_input = current();
			xp_target = target();
			if (xp_input > xp_target) {
				printf("Your target level cannot be less than your current level.\n");
			urn();}
			urn_output = ((xp_target - xp_input) / smith_urn) + 1;
			printf("Smithing: You need %d smithing urns.\n", urn_output);
			break;
		case 8:
			printf("Thanks for using the calculator.\n");
			return 0;
		case 7:
			printf("This calculator determines the amount of urns neeeded to earn you the bonus experience for the full duration of the time you spend training.\n Assumes that these urns are used:\n Normal Fishing Urn [3000xp]\n Normal Woodcutting Urn [4905xp]\n Normal Mining Urn [1950xp]\n Normal Cooking Urn [5700xp]\n Accursed Prayer Urn [687.5xp]\n Normal Smithing Urn [900xp]\n");
			break;

		default:
			printf("Your answer was not valid.\n");

	}

	urn();

	return 0;
}





int current()
{
	int xp_input;


	printf("Current exp/level: ");
	scanf("%d", &xp_input);
	

	switch (xp_input) {
		case 1: xp_input = 0; break;
		case 2: xp_input = 83; break;
		case 3: xp_input = 174; break;
		case 4: xp_input = 276; break;
		case 5: xp_input = 388; break;
		case 6: xp_input = 512; break;
		case 7: xp_input = 650; break;
		case 8: xp_input = 801; break;
		case 9: xp_input = 969; break;
		case 11: xp_input = 1358; break;
		case 12: xp_input = 1584; break;
		case 13: xp_input = 1833; break;
		case 14: xp_input = 2107; break;
		case 15: xp_input = 2411; break;
		case 16: xp_input = 2746; break;
		case 17: xp_input = 3115; break;
		case 18: xp_input = 3523; break;
		case 19: xp_input = 3973; break;
		case 20: xp_input = 4470; break;
		case 21: xp_input = 5018; break;
		case 22: xp_input = 5624; break;
		case 23: xp_input = 6291; break;
		case 24: xp_input = 7028; break;
		case 25: xp_input = 7842; break;
		case 26: xp_input = 8740; break;
		case 27: xp_input = 9730; break;
		case 28: xp_input = 10824; break;
		case 29: xp_input = 12031; break;
		case 30: xp_input = 13363; break;
		case 31: xp_input = 14833; break;
		case 32: xp_input = 16456; break;
		case 33: xp_input = 18247; break;
		case 34: xp_input = 20224; break;
		case 35: xp_input = 22406; break;
		case 36: xp_input = 24815; break;
		case 37: xp_input = 27473; break;
		case 38: xp_input = 30408; break;
		case 39: xp_input = 33648; break;
		case 40: xp_input = 37224; break;
		case 41: xp_input = 41171; break;
		case 42: xp_input = 45529; break;
		case 43: xp_input = 50339; break;
		case 44: xp_input = 55649; break;
		case 45: xp_input = 61512; break;
		case 46: xp_input = 67983; break;
		case 47: xp_input = 75127; break;
		case 48: xp_input = 83014; break;
		case 49: xp_input = 91721; break;
		case 50: xp_input = 101333; break;
		case 51: xp_input = 111945; break;
		case 52: xp_input = 123660; break;
		case 53: xp_input = 136594; break;
		case 54: xp_input = 150872; break;
		case 55: xp_input = 166636; break;
		case 56: xp_input = 184040; break;
		case 57: xp_input = 203254; break;
		case 58: xp_input = 224466; break;
		case 59: xp_input = 247886; break;
		case 60: xp_input = 273742; break;
		case 61: xp_input = 302288; break;
		case 62: xp_input = 333804; break;
		case 63: xp_input = 368599; break;
		case 64: xp_input = 407015; break;
		case 65: xp_input = 449428; break;
		case 66: xp_input = 496254; break;
		case 67: xp_input = 547953; break;
		case 68: xp_input = 605032; break;
		case 69: xp_input = 668051; break;
		case 70: xp_input = 737627; break;
		case 71: xp_input = 814445; break;
		case 72: xp_input = 899257; break;
		case 73: xp_input = 992895; break;
		case 74: xp_input = 1096278; break;
		case 75: xp_input = 1210421; break;
		case 76: xp_input = 1336443; break;
		case 77: xp_input = 1475581; break;
		case 78: xp_input = 1629200; break;
		case 79: xp_input = 1789808; break;
		case 80: xp_input = 1986068; break;
		case 81: xp_input = 2192818; break;
		case 82: xp_input = 2421087; break;
		case 83: xp_input = 2673114; break;
		case 84: xp_input = 2951373; break;
		case 85: xp_input = 3258594; break;
		case 86: xp_input = 3597792; break;
		case 87: xp_input = 3972294; break;
		case 88: xp_input = 4385776; break;
		case 89: xp_input = 4842295; break;
		case 90: xp_input = 5346332; break;
		case 91: xp_input = 5902831; break;
		case 92: xp_input = 6517253; break;
		case 93: xp_input = 7195629; break;
		case 94: xp_input = 7944614; break;
		case 95: xp_input = 8771558; break;
		case 96: xp_input = 9684577; break;
		case 97: xp_input = 10692692; break;
		case 98: xp_input = 11805606; break;
		case 99: xp_input = 13034431; break;
		case 100: xp_input = 14391160; break;
		case 101: xp_input = 15880109; break;
		case 102: xp_input = 17542976; break;
		case 103: xp_input = 19368992; break;
		case 104: xp_input = 21385073; break;
		case 105: xp_input = 23611006; break;
		case 106: xp_input = 26086632; break;
		case 107: xp_input = 28782069; break;
		case 108: xp_input = 31777943; break;
		case 109: xp_input = 35085654; break;
		case 110: xp_input = 38737661; break;
		case 111: xp_input = 42769801; break;
		case 112: xp_input = 47221641; break;
		case 113: xp_input = 52563718; break;
		case 114: xp_input = 57563718; break;
		case 115: xp_input = 63555443; break;
		case 116: xp_input = 70170840; break;
		case 117: xp_input = 77474828; break;
		case 118: xp_input = 85539082; break;
		case 119: xp_input = 94442737; break;
		case 120: xp_input = 104273167; break;
	}

	return xp_input;
}


int target()
{
	int xp_target;

	printf("Target exp/level: ");
	scanf("%d", &xp_target);

	switch (xp_target) {
		case 1: xp_target = 0; break;
		case 2: xp_target = 83; break;
		case 3: xp_target = 174; break;
		case 4: xp_target = 276; break;
		case 5: xp_target = 388; break;
		case 6: xp_target = 512; break;
		case 7: xp_target = 650; break;
		case 8: xp_target = 801; break;
		case 9: xp_target = 969; break;
		case 11: xp_target = 1358; break;
		case 12: xp_target = 1584; break;
		case 13: xp_target = 1833; break;
		case 14: xp_target = 2107; break;
		case 15: xp_target = 2411; break;
		case 16: xp_target = 2746; break;
		case 17: xp_target = 3115; break;
		case 18: xp_target = 3523; break;
		case 19: xp_target = 3973; break;
		case 20: xp_target = 4470; break;
		case 21: xp_target = 5018; break;
		case 22: xp_target = 5624; break;
		case 23: xp_target = 6291; break;
		case 24: xp_target = 7028; break;
		case 25: xp_target = 7842; break;
		case 26: xp_target = 8740; break;
		case 27: xp_target = 9730; break;
		case 28: xp_target = 10824; break;
		case 29: xp_target = 12031; break;
		case 30: xp_target = 13363; break;
		case 31: xp_target = 14833; break;
		case 32: xp_target = 16456; break;
		case 33: xp_target = 18247; break;
		case 34: xp_target = 20224; break;
		case 35: xp_target = 22406; break;
		case 36: xp_target = 24815; break;
		case 37: xp_target = 27473; break;
		case 38: xp_target = 30408; break;
		case 39: xp_target = 33648; break;
		case 40: xp_target = 37224; break;
		case 41: xp_target = 41171; break;
		case 42: xp_target = 45529; break;
		case 43: xp_target = 50339; break;
		case 44: xp_target = 55649; break;
		case 45: xp_target = 61512; break;
		case 46: xp_target = 67983; break;
		case 47: xp_target = 75127; break;
		case 48: xp_target = 83014; break;
		case 49: xp_target = 91721; break;
		case 50: xp_target = 101333; break;
		case 51: xp_target = 111945; break;
		case 52: xp_target = 123660; break;
		case 53: xp_target = 136594; break;
		case 54: xp_target = 150872; break;
		case 55: xp_target = 166636; break;
		case 56: xp_target = 184040; break;
		case 57: xp_target = 203254; break;
		case 58: xp_target = 224466; break;
		case 59: xp_target = 247886; break;
		case 60: xp_target = 273742; break;
		case 61: xp_target = 302288; break;
		case 62: xp_target = 333804; break;
		case 63: xp_target = 368599; break;
		case 64: xp_target = 407015; break;
		case 65: xp_target = 449428; break;
		case 66: xp_target = 496254; break;
		case 67: xp_target = 547953; break;
		case 68: xp_target = 605032; break;
		case 69: xp_target = 668051; break;
		case 70: xp_target = 737627; break;
		case 71: xp_target = 814445; break;
		case 72: xp_target = 899257; break;
		case 73: xp_target = 992895; break;
		case 74: xp_target = 1096278; break;
		case 75: xp_target = 1210421; break;
		case 76: xp_target = 1336443; break;
		case 77: xp_target = 1475581; break;
		case 78: xp_target = 1629200; break;
		case 79: xp_target = 1789808; break;
		case 80: xp_target = 1986068; break;
		case 81: xp_target = 2192818; break;
		case 82: xp_target = 2421087; break;
		case 83: xp_target = 2673114; break;
		case 84: xp_target = 2951373; break;
		case 85: xp_target = 3258594; break;
		case 86: xp_target = 3597792; break;
		case 87: xp_target = 3972294; break;
		case 88: xp_target = 4385776; break;
		case 89: xp_target = 4842295; break;
		case 90: xp_target = 5346332; break;
		case 91: xp_target = 5902831; break;
		case 92: xp_target = 6517253; break;
		case 93: xp_target = 7195629; break;
		case 94: xp_target = 7944614; break;
		case 95: xp_target = 8771558; break;
		case 96: xp_target = 9684577; break;
		case 97: xp_target = 10692692; break;
		case 98: xp_target = 11805606; break;
		case 99: xp_target = 13034431; break;
		case 100: xp_target = 14391160; break;
		case 101: xp_target = 15880109; break;
		case 102: xp_target = 17542976; break;
		case 103: xp_target = 19368992; break;
		case 104: xp_target = 21385073; break;
		case 105: xp_target = 23611006; break;
		case 106: xp_target = 26086632; break;
		case 107: xp_target = 28782069; break;
		case 108: xp_target = 31777943; break;
		case 109: xp_target = 35085654; break;
		case 110: xp_target = 38737661; break;
		case 111: xp_target = 42769801; break;
		case 112: xp_target = 47221641; break;
		case 113: xp_target = 52563718; break;
		case 114: xp_target = 57563718; break;
		case 115: xp_target = 63555443; break;
		case 116: xp_target = 70170840; break;
		case 117: xp_target = 77474828; break;
		case 118: xp_target = 85539082; break;
		case 119: xp_target = 94442737; break;
		case 120: xp_target = 104273167; break;
	}
	return xp_target;
}

