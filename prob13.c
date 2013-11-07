#include <stdio.h>

unsigned long fiftyDigitNums[100][4] = {
						{37107287533902, 102798797998, 220837590246, 510135740250},
						{46376937677490,   9712648124, 896970078050, 417018260538},
						{74324986199524, 741059474233, 309513058123, 726617309629},
						{91942213363574, 161572522430, 563301811072, 406154908250},
						{23067588207539, 346171171980, 310421047513, 778063246676},
						{89261670696623, 633820136378, 418383684178, 734361726757},
						{28112879812849, 979408065481, 931592621691, 275889832738},
						{44274228917432, 520321923589, 422876796487, 670272189318},
						{47451445736001, 306439091167, 216856844588, 711603153276},
						{70386486105843,  25439939619, 828917593665, 686757934951},
						{62176457141856, 560629502157, 223196586755,  79324193331},
						{64906352462741, 904929101432, 445813822663, 347944758178},
						{92575867718337, 217661963751, 590579239728, 245598838407},
						{58203565325359, 399008402633, 568948830189, 458628227828},
						{80181199384826, 282014278194, 139940567587, 151170094390},
						{35398664372827, 112653829987, 240784473053, 190104293586},
						{86515506006295, 864861532075, 273371959191, 420517255829},
						{71693888707715, 466499115593, 487603532921, 714970056938},
						{54370070576826, 684624621495, 650076471787, 294438377604},
						{53282654108756, 828443191190, 634694037855, 217779295145},
						{36123272525000, 296071075082, 563815656710, 885258350721},
						{45876576172410, 976447339110, 607218265236, 877223636045},
						{17423706905851, 860660448207, 621209813287, 860733969412},
						{81142660418086, 830619328460, 811191061556, 940512689692},
						{51934325451728, 388641918047,  49293215058, 642563049483},
						{62467221648435,  76201727918,  39944693004, 732956340691},
						{15732444386908, 125794514089,  57706229429, 197107928209},
						{55037687525678, 773091862540, 744969844508, 330393682126},
						{18336384825330, 154686196124, 348767681297, 534375946515},
						{80386287592878, 490201521685, 554828717201, 219257766954},
						{78182833757993, 103614740356, 856449095527,  97864797581},
						{16726320100436, 897842553539, 920931837441, 497806860984},
						{48403098129077, 791799088218, 795327364475, 675590848030},
						{87086987551392, 711854517078, 544161852424, 320693150332},
						{59959406895756, 536782107074, 926966537676, 326235447210},
						{69793950679652, 694742597709, 739166693763,  42633987085},
						{41052684708299,  85211399427, 365734116182, 760315001271},
						{65378607361501,  80857009149, 939512557028, 198746004375},
						{35829035317434, 717326932123, 578154982629, 742552737307},
						{94953759765105, 305946966067, 683156574377, 167401875275},
						{88902802571733, 229619176668, 713819931811,  48770190271},
						{25267680276078,   3013678680, 992525463401,  61632866526},
						{36270218540497, 705585629946, 580636237993, 140746255962},
						{24074486908231, 174977792365, 466257246923, 322810917141},
						{91430288197103, 288597806669, 760892938638, 285025333403},
						{34413065578016, 127815921815,   5561868836, 468420090470},
						{23053081172816, 430487623791, 969842487255,  36638784583},
						{11487696932154, 902810424020, 138335124462, 181441773470},
						{63783299490636, 259666498587, 618221225225, 512486764533},
						{67720186971698, 544312419572, 409913959008, 952310058822},
						{95548255300263, 520781532296, 796249481641, 953868218774},
						{76085327132285, 723110424803, 456124867697,  64507995236},
						{37774242535411, 291684276865, 538926205024, 910326572967},
						{23701913275725, 675285653248, 258265463092, 207058596522},
						{29798860272258, 331913126375, 147341994889, 534765745501},
						{18495701454879, 288984856827, 726077713721, 403798879715},
						{38298203783031, 473527721580, 348144513491, 373226651381},
						{34829543829199, 918180278916, 522431027392, 251122869539},
						{40957953066405, 232632538044, 100059654939, 159879593635},
						{29746152185502, 371307642255, 121183693803, 580388584903},
						{41698116222072, 977186158236, 678424689157, 993532961922},
						{62467957194401, 269043877107, 275048102390, 895523597457},
						{23189706772547, 915061505504, 953922979530, 901129967519},
						{86188088225875, 314529584099, 251203829009, 407770775672},
						{11306739708304, 724483816533, 873502340845, 647058077308},
						{82959174767140, 363198008187, 129011875491, 310547126581},
						{97623331044818, 386269515456, 334926366572, 897563400500},
						{42846280183517,  70527831839, 425882145521, 227251250327},
						{55121603546981, 200581762165, 212827652751, 691296897789},
						{32238195734329, 339946437501, 907836945765, 883352399886},
						{75506164965184, 775180738168, 837861091527, 357929701337},
						{62177842752192, 623401942399, 639168044983, 993173312731},
						{32924185707147, 349566916674, 687634660915,  35914677504},
						{99518671430235, 219628894890, 102423325116, 913619626622},
						{73267460800591, 547471830798, 392868535206, 946944540724},
						{76841822524674, 417161514036, 427982273348,  55556214818},
						{97142617910342, 598647204516, 893989422179, 826088076852},
						{87783646182799, 346313767754, 307809363333,  18982642090},
						{10848802521674, 670883215120, 185883543223, 812876952786},
						{71329612474782, 464538636993,   9049310363, 619763878039},
						{62184073572399, 794223406235, 393808339651, 327408011116},
						{66627891981488,  87797941876, 876144230030, 984490851411},
						{60661826293682, 836764744779, 239180335110, 989069790714},
						{85786944089552, 990653640447, 425576083659, 976645795096},
						{66024396409905, 389607120198, 219976047599, 490197230297},
						{64913982680032, 973156037120,  41377903785, 566085089252},
						{16730939319872, 750275468906, 903707539413,  42652315011},
						{94809377245048, 795150954100, 921645863754, 710598436791},
						{78639167021187, 492431995700, 641917969777, 599028300699},
						{15368713711936, 614952811305, 876380278410, 754449733078},
						{40789923115535, 562561142322, 423255033685, 442488917353},
						{44889911501440, 648020369068,  63960672322, 193204149535},
						{41503128880339, 536053299340, 368006977710, 650566631954},
						{81234880673210, 146739058568, 557934581403, 627822703280},
						{82616570773948, 327592232845, 941706525094, 512325230608},
						{22918802058777, 319719839450, 180888072429, 661980811197},
						{77158542502016, 545090413245, 809786882778, 948721859617},
						{72107838435069, 186155435662, 884062257473, 692284509516},
						{20849603980134,   1723930671, 666823555245, 252804609722},
						{53503534226472, 524250874054,  75591789781, 264330331690} };


int main(int argc, char const *argv[])
{
	long sum = 0, overflow;
	
	for (int i = 0; i < 100; ++i)
	{
		sum += fiftyDigitNums[i][3];
	}
	printf("%lu\n", sum);
	overflow = sum / 1000000000000;
	printf("%ld\n", overflow);

	sum = overflow;
	for (int i = 0; i < 100; ++i)
	{
		sum += fiftyDigitNums[i][2];
	}
	printf("%lu\n", sum);
	overflow = sum / 1000000000000;
	printf("%ld\n", overflow);

	sum = overflow;
	for (int i = 0; i < 100; ++i)
	{
		sum += fiftyDigitNums[i][1];
	}
	printf("%lu\n", sum);
	overflow = sum / 1000000000000;
	printf("%ld\n", overflow);

	sum = overflow;
	for (int i = 0; i < 100; ++i)
	{
		sum += fiftyDigitNums[i][0];
	}
	printf("%lu\n", sum);

	return 0;
}








