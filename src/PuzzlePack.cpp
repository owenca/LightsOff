#include "PuzzlePack.h"

class ClassicPuzzlePack : public PuzzlePack
{
public:
	ClassicPuzzlePack(const char *name, uint32 *data, const uint32 size);
	uint8 MovesRequired(const uint32 &index);
};

static uint32 DefaultPack[] = 
{
	0x00005400,	0x015a82b5,	0x00adef6a,	0x01b88360,	0x01bc5eef,
	0x00ead400,	0x00f8c62f,	0x00aaa880,	0x007d3bea,	0x000039ce,
	0x00ead6b5,	0x00a76d5f,	0x0022aa88,	0x00210800,	0x00010040,
	0x01f08421,	0x01f71000,	0x00455544,	0x01505415,	0x00004400,
	0x0021385e,	0x00e8c62e,	0x00467000,	0x012fc400,	0x01e79c61,
	0x0118fe31,	0x004211c4,	0x01ce7000,	0x00000040,	0x00001000,
	0x011cd671,	0x01f1111f,	0x0198d508,	0x01eb4634,	0x000ac558,
	0x011fc544,	0x000739c0,	0x01555555,	0x00a60c2a,	0x00002800,
	0x00421151,	0x00749d27,	0x00e11d71,	0x00e27f60,	0x0157f0ae,
	0x00477dc4,	0x010917e4,	0x00089220,	0x01151151,	0x01ffffff
};

static uint32 SixPack[] = {
	0x0056babd, 0x00a535d2, 0x01fbb1ef, 0x005ac8b7, 0x0043c128,
	0x014e573e, 0x00861724, 0x016c9693, 0x01b2e5f3, 0x01ecf6ff,
	0x00d9d0b9, 0x01ea373e, 0x00973636, 0x00d2d0ef, 0x0037a1f0,
	0x00545e6d, 0x006afc14, 0x012d0fb5, 0x00c8d9a6, 0x00fad8d4,
	0x00643828, 0x01b2e9dd, 0x00d3dd6b, 0x00d9c365, 0x0076edc4,
	0x00f3a5f4, 0x01dc0f9e, 0x00828fe6, 0x00c1ce2a, 0x0082c414,
	0x011f0a4b, 0x0006d282, 0x00b9484f, 0x00f8e1b3, 0x00d22df7,
	0x01172904, 0x012664da, 0x00c94cbb, 0x00e9554a, 0x018f0364,
	0x005aa974, 0x0049f256, 0x0032675a, 0x00fbecd9, 0x01ace242,
	0x00b08f65, 0x0145a33f, 0x012d0fd1, 0x01b52d13, 0x00a3caee,
	0x01e62bdd, 0x017fa5ef, 0x0142dfc7, 0x0049e874, 0x0068ec74,
	0x00d9d569, 0x0160ee1b, 0x00a5d5ca, 0x0058675b, 0x005ae49b,
	0x0082c169, 0x01cf57dc, 0x0056abf7, 0x00177f3e, 0x01ec3fd2,
	0x00fbf1bd, 0x01dc6d90, 0x00fb68b6, 0x00c7c392, 0x00205e2d,
	0x00db4b04, 0x013b8db0, 0x01b06f7b, 0x01b58b45, 0x01f89726,
	0x00f7b6bd, 0x006271a8, 0x002a4e9b, 0x0049a082, 0x01bbf2ad,
	0x0168b1ef, 0x0093ce0f, 0x016d9bde, 0x00ff963f, 0x001626de,
	0x00fa48ef, 0x01bc7e24, 0x01a4c586, 0x00a7574a, 0x002858d4,
	0x003edcb4, 0x00fa5d4a, 0x005677b6, 0x005466dc, 0x002e3164,
	0x00dbfebb, 0x00ca7c28, 0x01ee064e, 0x01af820c, 0x0032ef7f
};

static uint32 SevenPack[] = {
	0x017aee93, 0x01293cb9, 0x0160ffbb, 0x00f2fea1, 0x0091f6eb,
	0x01e502e6, 0x012565eb, 0x00984696, 0x01e887ff, 0x0192d56c,
	0x01e11516, 0x0068e0b0, 0x0186b068, 0x01c5a0d9, 0x0142c66f,
	0x00e90774, 0x00191159, 0x011645ca, 0x00af2322, 0x002bd25b,
	0x00966a25, 0x01e2df8d, 0x0176a2e7, 0x00d8d35d, 0x01243281,
	0x01d6b7e2, 0x00c1eae4, 0x0074de02, 0x0151eda7, 0x00eea77b,
	0x01b3b791, 0x00f797a3, 0x01fcfb8b, 0x01da3962, 0x01bdfebf,
	0x0152deaf, 0x00f8491a, 0x0156ad65, 0x00cbfaf8, 0x0074f642,
	0x01adf8d6, 0x00d05cef, 0x002a054a, 0x0165ef1b, 0x0056ffb0,
	0x00d4d9ff, 0x00bf5db2, 0x006f6b7f, 0x0083f77b, 0x012526ea,
	0x015ecb7b, 0x01112374, 0x0173bbdd, 0x01a13bdd, 0x00d6f622,
	0x00d0ccb0, 0x00ddf42b, 0x00c3f2e8, 0x005844d3, 0x0106ae64,
	0x00582482, 0x0122c242, 0x006a0764, 0x01de5ee0, 0x01e2df8d,
	0x0176a2e7, 0x00d8d35d, 0x01243281, 0x01d6b7e2, 0x00c1eae4,
	0x0074de02, 0x0151eda7, 0x00eea77b, 0x01b3b791, 0x00f797a3,
	0x01fcfb8b, 0x01da3962, 0x01bdfebf, 0x0152deaf, 0x00f8491a,
	0x0156ad65, 0x00cbfaf8, 0x0074f642, 0x01adf8d6, 0x00d05cef,
	0x002a054a, 0x0165ef1b, 0x0056ffb0, 0x00d4d9ff, 0x00bf5db2,
	0x006f6b7f, 0x0083f77b, 0x012526ea, 0x015ecb7b, 0x01112374,
	0x0173bbdd, 0x01a13bdd, 0x00d6f622, 0x00d0ccb0, 0x00ddf42b
};

static uint32 EightPack[] = {
	0x01c83abc, 0x01e3eb12, 0x01a71cb9, 0x015ee85e, 0x00cdb5d9,
	0x00dd8673, 0x00d994a8, 0x0046a855, 0x01e608c7, 0x00f85533,
	0x01db290c, 0x012a256a, 0x0105d44f, 0x001ce31e, 0x0137c4b9,
	0x0000f6e8, 0x01f8b050, 0x01edee25, 0x01425482, 0x00b12e4a,
	0x0157b1f7, 0x0125618a, 0x0000f608, 0x00092b64, 0x01737105,
	0x00951b30, 0x00c45ddc, 0x00dc80fc, 0x01135eda, 0x0142de55,
	0x00c9769b, 0x01db7496, 0x01597f7b, 0x01a0e7e3, 0x003b2764,
	0x01077acd, 0x00c4d59d, 0x01bfe4ab, 0x0177d269, 0x017318d5,
	0x01fbfa1d, 0x00f87cfa, 0x006d2e2d, 0x008f89e4, 0x0012cf7f,
	0x001bb722, 0x01b3faf0, 0x013b4eb2, 0x005bc468, 0x00d95d28,
	0x01ad0e34, 0x00c16d65, 0x00aa1a5a, 0x00962935, 0x01458bfc,
	0x00fadc3b, 0x012c573c, 0x00788ebf, 0x00ecb5ff, 0x01c3f508,
	0x00fc280b, 0x00972077, 0x00f96faf, 0x00f254fa, 0x006507e0,
	0x00a94e8b, 0x01a96fab, 0x0148aa25, 0x012f4a75, 0x01aa789b,
	0x0119073a, 0x00c2ae64, 0x00f8c49a, 0x001739f4, 0x019ebaef,
	0x004f643e, 0x0151fbba, 0x008bf61b, 0x005c39fa, 0x01f22ab2,
	0x00647c8f, 0x005a2358, 0x0071a8ff, 0x01604589, 0x01735646,
	0x008fff42, 0x00a3689e, 0x01437580, 0x0172e7b6, 0x000e9677,
	0x00974c8b, 0x01fbf3e3, 0x00fe14ea, 0x003e13e0, 0x00ca6455,
	0x01fbb709, 0x0133287e, 0x004d9ebc, 0x0197e7ca, 0x00ea5e97
};

static uint32 NinePack[] = {
	0x01c83edd, 0x00ad618a, 0x00535112, 0x00a3579f, 0x01f3bc88,
	0x004f8f91, 0x00fe96ed, 0x01b7398d, 0x000892a3, 0x01a36c37,
	0x000ae3fc, 0x0113aba3, 0x01af4f72, 0x012561cd, 0x00b88cc5,
	0x0068b5f7, 0x016308f7, 0x01f392d5, 0x01bc2050, 0x0102dada,
	0x0169068c, 0x002cf077, 0x0033dc0b, 0x0018694d, 0x00997107,
	0x01bcde34, 0x00d814fa, 0x01cbdd10, 0x016afdbf, 0x008f8199,
	0x0020f8e9, 0x00aa8316, 0x01108b6c, 0x018ff919, 0x005e4570,
	0x00b5f6e3, 0x0010683b, 0x005553ca, 0x0141352b, 0x00dfccba,
	0x013b6d3a, 0x01ec5879, 0x00727d36, 0x00a36c2a, 0x00cbbf87,
	0x01ac1fac, 0x0063b30d, 0x015b008a, 0x00d5930a, 0x005db8be,
	0x00c2f0de, 0x017852b8, 0x007a21c1, 0x0108833a, 0x0093c624,
	0x01e87cfa, 0x019b7d97, 0x002c133d, 0x01912ec0, 0x015004b7,
	0x0083bdd5, 0x005dbbba, 0x00361419, 0x0086d5f3, 0x01a37322,
	0x01552321, 0x00c94699, 0x00947fbb, 0x01f042c1, 0x002c6c34,
	0x0172a4a6, 0x00d80ba2, 0x0159023c, 0x0123b5a9, 0x00998666,
	0x00af444d, 0x016b550d, 0x00d2630a, 0x003ac8fc, 0x001fe374,
	0x014fd7c1, 0x004b7834, 0x00963aca, 0x016537d1, 0x012cebda,
	0x00d0aa35, 0x00d44282, 0x01e96b69, 0x0117f62f, 0x01ad4beb,
	0x014e1755, 0x0043919b, 0x0151d432, 0x00aedd1a, 0x01289e92,
	0x00ed4b9b, 0x0146246f, 0x0105c590, 0x0152db29, 0x01254f26
};

static uint32 TenPack[] = {
	0x01c83e9a, 0x01e5a7a2, 0x015b31b0, 0x00f45a46, 0x006a8ba3,
	0x01b006ac, 0x016beece, 0x00f32974, 0x019f4fc7, 0x019e6379,
	0x01e122d6, 0x002f7b8a, 0x00cbbb06, 0x012e3ac4, 0x0132a9f9,
	0x00af61bb, 0x01320c06, 0x01b56fd6, 0x0070ae90, 0x002b7835,
	0x009bfd83, 0x017b2d76, 0x0139335b, 0x00ede726, 0x00a9ee09,
	0x00fe8672, 0x00b2c136, 0x01842fd0, 0x0196349e, 0x01668405,
	0x00d09fce, 0x01af86b5, 0x00df0c1c, 0x0098e5c8, 0x00aed194,
	0x0012314a, 0x004686e8, 0x00d6b8ed, 0x00d724bf, 0x00b903eb,
	0x00bf79b5, 0x011a40b4, 0x008696e3, 0x00d73c74, 0x00d63ee8,
	0x006b6bad, 0x01855ec1, 0x006a977b, 0x004af513, 0x00b193b0,
	0x01bc1933, 0x0137f22f, 0x01ff0055, 0x015ac3eb, 0x005a3d92,
	0x0003cb0e, 0x01140d0d, 0x00ef460d, 0x00da908a, 0x01e8a331,
	0x00df60d5, 0x001ef495, 0x0117e13f, 0x0136bdbc, 0x0007d535,
	0x012ae96c, 0x00327eb5, 0x01bd0cb2, 0x00dfc8db, 0x019a23c0,
	0x00697ce8, 0x01a1519b, 0x006fbc75, 0x0091ce34, 0x00da8ef6,
	0x0058d466, 0x00f4451e, 0x00449514, 0x01ca8263, 0x0195c934,
	0x006633f8, 0x00a81654, 0x004dc74d, 0x01023ea4, 0x000fc72e,
	0x01d22cad, 0x00a5b01d, 0x01b41537, 0x012cfebc, 0x006b92c5,
	0x00411dff, 0x00e90255, 0x01878e75, 0x005d84f1, 0x015e79d9,
	0x01bb5efa, 0x01630857, 0x0090960b, 0x0003b0e8, 0x008494d1
};

static uint32 ElevenPack[] = {
	0x00e5f083, 0x0145322a, 0x019acb45, 0x00eaf129, 0x008ae025,
	0x00966997, 0x00b50b56, 0x013c2a0f, 0x002d79d6, 0x001ff889,
	0x00f48aa0, 0x015df0cd, 0x00df4181, 0x01677e72, 0x01d92674,
	0x0059eaff, 0x01842f97, 0x0063cb0f, 0x00ffda37, 0x00990794,
	0x0101f5bb, 0x000fd205, 0x0185c6f8, 0x0084b714, 0x002aecd3,
	0x003e3f77, 0x0103b73a, 0x00ecc033, 0x009a1cf2, 0x0006ea5d,
	0x01dcb23f, 0x00d0ff89, 0x01cfd89b, 0x00cb8fa1, 0x015819b4,
	0x001fc82c, 0x00caaf60, 0x0109ae75, 0x00c8d289, 0x01f7b795,
	0x01ca41f3, 0x00f16f8f, 0x004178f0, 0x0002c030, 0x01b86cbf,
	0x003e56c3, 0x01b41344, 0x01f9f115, 0x0106f0ac, 0x01f25d6c,
	0x01769412, 0x008b9abb, 0x002edf9f, 0x01c9abf5, 0x005f127e,
	0x0098c03e, 0x015686dd, 0x000ad9c0, 0x0124741d, 0x00b56230,
	0x00113dc7, 0x016b4932, 0x01e38e9e, 0x0088ba68, 0x00c4322e,
	0x01568f23, 0x01d96097, 0x00dee619, 0x00b1ddfb, 0x01138d5b,
	0x005f1a3b, 0x008d62a5, 0x0094c9d5, 0x01934ca3, 0x0041e830,
	0x00d5ee92, 0x019364cd, 0x0191aae5, 0x00cf0fd0, 0x00f6a937,
	0x005f9150, 0x01eb7061, 0x0143c9e2, 0x01f42672, 0x00df7e27,
	0x006ec59a, 0x0004a213, 0x0165c122, 0x00481a68, 0x00bb0735,
	0x009235f6, 0x008b8b38, 0x0187fb45, 0x004ecaae, 0x00d805d3,
	0x00ce1ea5, 0x00ed0997, 0x004dd912, 0x00e82fc5, 0x00147302
};

static uint32 TwelvePack[] = {
	0x0114eb45, 0x01e86656, 0x009a6de3, 0x00a909c8, 0x01212281,
	0x00532e72, 0x00cc98f5, 0x0163890f, 0x000ef834, 0x0131f887,
	0x009874b4, 0x007822be, 0x01b9eeff, 0x01564956, 0x0131b939,
	0x010a9a2a, 0x01b86c31, 0x0120cf06, 0x00660620, 0x000d579f,
	0x01d05c55, 0x0163d54d, 0x00b0d71a, 0x011461f6, 0x0109fc50,
	0x0135fae7, 0x0150ca67, 0x0124c807, 0x00e5aeec, 0x00a765ac,
	0x01d3e455, 0x01ede225, 0x00c4b97d, 0x0138e228, 0x001f1455,
	0x000e968b, 0x00aa51b4, 0x005d034f, 0x01708e10, 0x00afeb0f,
	0x016c4e45, 0x0184b2c8, 0x00262534, 0x01ed9f22, 0x00986175,
	0x0170d42c, 0x016c150c, 0x00f6f9d2, 0x00f2de60, 0x012cb1f0,
	0x000f49f6, 0x009be0ce, 0x017024de, 0x0175b6eb, 0x01017a9f,
	0x01e9d16e, 0x0087ccfb, 0x00b07abc, 0x01513e90, 0x005a115e,
	0x01f16e75, 0x0195db2c, 0x018cac06, 0x00ceefe6, 0x009a5f66,
	0x00c48e33, 0x01710266, 0x01332091, 0x01f55a7f, 0x01a09350,
	0x015e5261, 0x00d12e68, 0x01f4d595, 0x0162c811, 0x01054ca9,
	0x007c370d, 0x0024690a, 0x01a68c17, 0x0090538c, 0x00a42caf,
	0x01175707, 0x01c19d15, 0x01516340, 0x001e1bc3, 0x0091e82c,
	0x005b2d0a, 0x0034a649, 0x011234d1, 0x0120d2ac, 0x001edc29,
	0x011f8ea7, 0x00697d05, 0x018eb92e, 0x00ce1778, 0x010d88f2,
	0x0116c36f, 0x019028e8, 0x01021824, 0x005aaaef, 0x0090e9b4
};

static uint32 ThirteenPack[] = {
	0x01bdb2eb, 0x01cd2b56, 0x00dba9cd, 0x007a300f, 0x002f3f96,
	0x0026775b, 0x001c3b46, 0x00b29cf0, 0x010beb4e, 0x0083cddf,
	0x01baf642, 0x01c04851, 0x01922191, 0x014ec6e5, 0x01131b19,
	0x00b0a56c, 0x00d1495b, 0x0116cb8d, 0x000d7417, 0x019efd0c,
	0x01d970cb, 0x002a1181, 0x01e31ee8, 0x0120904a, 0x01f72c70,
	0x00f28e82, 0x00924492, 0x012174e6, 0x01326b4d, 0x01c8f5fe,
	0x01e9ebc0, 0x01bea5f5, 0x00e0f8da, 0x00dd6893, 0x01e9c0aa,
	0x00a82656, 0x00923181, 0x01696c76, 0x0099a903, 0x01ba55ea,
	0x01565df3, 0x013b426d, 0x00963956, 0x0033d046, 0x0107f84e,
	0x017c4a01, 0x00b3e0bd, 0x010bb99a, 0x003fcb4e, 0x00aa2429,
	0x01031892, 0x0005be45, 0x0150f138, 0x00617270, 0x01583d8c,
	0x0053eb60, 0x01d14517, 0x01f840cb, 0x001d4a1d, 0x007999a2,
	0x016c85b9, 0x01e443ca, 0x0145c52f, 0x0145a0cd, 0x00e5a7f8,
	0x019a5ac5, 0x00d7ba52, 0x01fafc35, 0x00aa2c45, 0x0144cc8d,
	0x01567aab, 0x00596496, 0x016130b4, 0x01703055, 0x004cd1f0,
	0x01bb7bc5, 0x01b1254a, 0x00d7980f, 0x0120c612, 0x00ce4c43,
	0x005978d1, 0x011201ae, 0x00c81532, 0x01440d05, 0x01ae9b7b,
	0x016f301e, 0x01333c76, 0x00aa1a28, 0x007ac5d1, 0x004a69ba,
	0x00c85138, 0x00a899e8, 0x0122bc17, 0x002879cd, 0x0028d032,
	0x0144ab54, 0x01f7e66c, 0x01909491, 0x01987ba7, 0x018ffdbb
};

static uint32 FourteenPack[] = {
	0x004a7012, 0x00a326a7, 0x00d4c193, 0x008e5f60, 0x01080c7d,
	0x0004a1c8, 0x018c8a81, 0x001e8d37, 0x0168e00a, 0x0014581d,
	0x00a18be8, 0x01faf96b, 0x00ad1fe7, 0x01034bc5, 0x01028943,
	0x0166e320, 0x01cd23b4, 0x0042d9b8, 0x019dea9c, 0x005ba25c,
	0x0148c151, 0x01b9dcb3, 0x00937fee, 0x00f2b559, 0x0107b5b7,
	0x017f9f4b, 0x00927331, 0x010bcc32, 0x01c45df4, 0x004880f5,
	0x0029a44f, 0x01b12b7b, 0x0116aac0, 0x0128218b, 0x00178903,
	0x007e0722, 0x0100b072, 0x01748a15, 0x00394d70, 0x01544ad8,
	0x00c4ebb2, 0x015bde1d, 0x00058ebc, 0x017e840a, 0x0120f4d0,
	0x01a96126, 0x014e6851, 0x0154c06b, 0x00908189, 0x008109e0,
	0x00350ca4, 0x01ad1ddd, 0x01438db3, 0x00bd1a43, 0x0155cc7d,
	0x01901911, 0x019c8e7e, 0x00c69fc1, 0x0051438a, 0x00a746aa,
	0x015f1f78, 0x004fc9d2, 0x006ad881, 0x018123d0, 0x00c80492,
	0x004aaab5, 0x01667a19, 0x00d579f9, 0x01c97999, 0x01943c56,
	0x0165fe5c, 0x000f6673, 0x0079b28f, 0x00b2e558, 0x002f6a3c,
	0x0155500b, 0x00d10c51, 0x00a56ed1, 0x0118702d, 0x00c53450,
	0x01466707, 0x00b30963, 0x0131a031, 0x00541956, 0x00266ef3,
	0x0071d193, 0x0113937b, 0x000b39a0, 0x01a04155, 0x0102d9ac,
	0x00a29913, 0x0188f0ae, 0x01e244cf, 0x0132fce8, 0x0105d9dd,
	0x011e000a, 0x01eb2e71, 0x00d3f51e, 0x0159f329, 0x00836fb9
};

static uint32 FifteenPack[] = {
	0x01c3b334, 0x00a57f71, 0x00dd8d11, 0x00088151, 0x0040e138,
	0x00eee089, 0x0170ff57, 0x00d56331, 0x00d6018d, 0x007e0fc0,
	0x012584d7, 0x01341113, 0x0010e25d, 0x0040e063, 0x000f5d53,
	0x01b8ed4a, 0x01da44b7, 0x01150794, 0x0052dd56, 0x004fc130,
	0x0143d785, 0x00089140, 0x01140d56, 0x01149240, 0x01956045,
	0x00517013, 0x007f13c7, 0x00909029, 0x01340059, 0x0076e1e0,
	0x01730572, 0x01421651, 0x001ec897, 0x01521095, 0x015f93f5,
	0x00154550, 0x01440d53, 0x01424485, 0x01b8fc00, 0x00a8fd4a,
	0x00e27eb5, 0x01ca4048, 0x008cc1fc, 0x01b56c11, 0x0042406b,
	0x01577dd5, 0x01151231, 0x01189231, 0x01590244, 0x001907e4,
	0x0197c04d, 0x0059c953, 0x0008901b, 0x01ac006b, 0x007290a7,
	0x01220fb5, 0x018c8263, 0x01548124, 0x01617d0d, 0x0174dcc4,
	0x01cb9759, 0x01113399, 0x00728459, 0x01dbc029, 0x01317c53,
	0x01c2fcbc, 0x01bd937b, 0x00489235, 0x011504f4, 0x01c7c328,
	0x0170ee1d, 0x00810102, 0x01811112, 0x01b1831b, 0x01ca129c,
	0x015f91ce, 0x00d42cb9, 0x016de10a, 0x00b4adc4, 0x0185ec32,
	0x00c79449, 0x00524494, 0x0185fd78, 0x00448135, 0x017357a6,
	0x00240048, 0x01c8e11b, 0x00908163, 0x014cb0fc, 0x011ce14d,
	0x007e83a7, 0x01b0101b, 0x01617f36, 0x00d5610a, 0x01190131,
	0x00050231, 0x011dfd4a, 0x0004831b, 0x009d419d, 0x01651e60
};

PuzzlePackSet::PuzzlePackSet(void)
{
	fList.AddItem(new ClassicPuzzlePack("Classic",DefaultPack,50));
	fList.AddItem(new PuzzlePack("Six move puzzles",SixPack,100,6));
	fList.AddItem(new PuzzlePack("Seven move puzzles",SevenPack,100,7));
	fList.AddItem(new PuzzlePack("Eight move puzzles",EightPack,100,8));
	fList.AddItem(new PuzzlePack("Nine move puzzles",NinePack,100,9));
	fList.AddItem(new PuzzlePack("Ten move puzzles",TenPack,100,10));
	fList.AddItem(new PuzzlePack("Eleven move puzzles",ElevenPack,100,11));
	fList.AddItem(new PuzzlePack("Twelve move puzzles",TwelvePack,100,12));
	fList.AddItem(new PuzzlePack("Thirteen move puzzles",ThirteenPack,100,13));
	fList.AddItem(new PuzzlePack("Fourteen move puzzles",FourteenPack,100,14));
	fList.AddItem(new PuzzlePack("Fifteen move puzzles",FifteenPack,100,15));
}

PuzzlePackSet::~PuzzlePackSet(void)
{
	for(int32 i=0; i<fList.CountItems(); i++)
	{
		PuzzlePack *pack = (PuzzlePack*)fList.ItemAt(i);
		delete pack;
	}
}


PuzzlePack::PuzzlePack(const char *name, uint32 *data, const uint32 size,
						const uint8 &moves)
{
	fName=name;
	fSize=size;
	fData=data;
	fMoves=moves;
	fHighest=0;
}

uint32 PuzzlePack::ValueAt(const uint32 &index)
{
	if(index>fSize-1)
		return 0;
	
	return fData[index];
}

uint8 PuzzlePack::MovesRequired(const uint32 &index)
{
	return fMoves;
}

ClassicPuzzlePack::ClassicPuzzlePack(const char *name, uint32 *data, const uint32 size)
	: PuzzlePack(name,data,size,0)
{
}

uint8 ClassicPuzzlePack::MovesRequired(const uint32 &index)
{
	return 6 + (index/5);
}
