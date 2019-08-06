// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ImmutableString_autogen.cpp: Wrapper for static or pool allocated char arrays, that are
// guaranteed to be valid and unchanged for the duration of the compilation. Implements
// mangledNameHash using perfect hash function from gen_builtin_symbols.py

#include "compiler/translator/ImmutableString.h"

std::ostream &operator<<(std::ostream &os, const sh::ImmutableString &str)
{
    return os.write(str.data(), str.length());
}

#if defined(_MSC_VER)
#    pragma warning(disable : 4309)  // truncation of constant value
#endif

namespace
{

constexpr int kT1[] = {854, 583, 1017, 1261, 74,   1264, 17,  772,  177,  1669, 50,  1311,
                       893, 984, 500,  729,  837,  870,  944, 1614, 1220, 358,  887, 44,
                       685, 841, 335,  1676, 1170, 1028, 99,  444,  879,  1844, 1182};
constexpr int kT2[] = {736,  1561, 1876, 1663, 997,  1012, 1216, 1376, 1420, 1081, 773, 536,
                       1426, 114,  1851, 1914, 1734, 1715, 1851, 1162, 1616, 1379, 341, 310,
                       1449, 1759, 1789, 384,  1106, 1661, 1460, 1570, 539,  640,  724};
constexpr int kG[]  = {
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1929, 0,    0,    1733, 0,
    0,    0,    0,    0,    0,    181,  0,    0,    0,    0,    0,    1394, 0,    763,  0,    0,
    0,    0,    0,    1624, 0,    0,    0,    0,    0,    0,    0,    0,    1575, 0,    0,    0,
    0,    0,    0,    1807, 0,    1619, 1061, 0,    0,    430,  0,    0,    1033, 0,    0,    336,
    0,    0,    1633, 1714, 0,    0,    0,    0,    0,    472,  668,  1687, 0,    0,    0,    0,
    0,    0,    0,    0,    0,    1913, 1079, 0,    0,    0,    1411, 0,    521,  0,    0,    0,
    0,    0,    0,    1865, 0,    314,  0,    0,    0,    0,    0,    1494, 1065, 893,  413,  1505,
    111,  0,    495,  0,    0,    1835, 892,  68,   0,    214,  1310, 0,    0,    0,    0,    0,
    0,    0,    0,    0,    1227, 0,    0,    1496, 0,    0,    0,    0,    335,  125,  0,    514,
    0,    0,    0,    458,  980,  0,    0,    0,    718,  437,  0,    0,    0,    0,    921,  0,
    0,    1675, 1586, 0,    0,    0,    0,    0,    106,  0,    0,    720,  0,    1684, 0,    0,
    1733, 0,    1223, 0,    0,    1854, 0,    0,    260,  395,  0,    0,    0,    344,  0,    0,
    0,    0,    1611, 1879, 0,    703,  1701, 1301, 0,    0,    0,    0,    0,    0,    0,    776,
    0,    397,  1751, 0,    0,    0,    0,    1244, 828,  0,    0,    0,    0,    0,    1108, 0,
    0,    0,    0,    0,    0,    0,    1795, 637,  0,    0,    0,    251,  1542, 0,    1794, 0,
    1895, 0,    372,  0,    245,  0,    0,    0,    0,    155,  0,    0,    0,    0,    0,    761,
    0,    0,    1269, 0,    0,    193,  0,    501,  1237, 517,  1509, 0,    223,  0,    380,  0,
    0,    0,    0,    0,    935,  0,    0,    0,    832,  1474, 0,    0,    1475, 752,  0,    377,
    79,   165,  0,    0,    521,  0,    1041, 969,  273,  602,  26,   0,    1838, 180,  0,    0,
    494,  445,  1059, 0,    0,    351,  0,    312,  0,    0,    0,    530,  1745, 0,    365,  1108,
    0,    0,    1042, 613,  72,   1244, 508,  547,  0,    0,    0,    0,    0,    0,    1262, 0,
    354,  833,  0,    70,   1004, 0,    101,  342,  0,    0,    557,  0,    0,    341,  264,  0,
    0,    988,  0,    0,    0,    931,  50,   1703, 0,    144,  384,  1729, 0,    390,  531,  0,
    0,    437,  1463, 0,    846,  1632, 0,    0,    9,    491,  283,  0,    790,  0,    0,    916,
    0,    285,  1839, 0,    1885, 1555, 1,    0,    924,  0,    0,    0,    1618, 795,  0,    0,
    1554, 540,  0,    0,    119,  0,    0,    955,  1458, 0,    0,    927,  1798, 1170, 0,    275,
    457,  0,    0,    0,    1875, 653,  0,    0,    0,    675,  0,    621,  0,    0,    419,  0,
    551,  0,    0,    1104, 0,    0,    0,    1907, 1848, 0,    0,    762,  0,    1621, 0,    0,
    0,    0,    1568, 0,    393,  529,  0,    0,    0,    297,  0,    0,    988,  298,  1400, 0,
    1747, 0,    0,    497,  583,  0,    175,  1136, 718,  786,  0,    94,   741,  0,    0,    0,
    1526, 0,    1595, 386,  0,    661,  0,    0,    0,    0,    1868, 1383, 1201, 357,  0,    183,
    1926, 0,    126,  0,    0,    0,    0,    0,    0,    0,    64,   0,    0,    0,    0,    0,
    1070, 15,   0,    773,  199,  488,  0,    968,  974,  0,    0,    0,    832,  593,  580,  0,
    1364, 0,    954,  0,    925,  309,  673,  1893, 0,    0,    0,    300,  0,    442,  0,    1003,
    0,    0,    306,  0,    1409, 0,    734,  1107, 1230, 0,    186,  8,    692,  0,    0,    840,
    0,    1002, 1695, 0,    847,  806,  0,    1595, 482,  0,    0,    935,  0,    0,    915,  0,
    0,    1590, 433,  0,    0,    949,  68,   96,   698,  0,    0,    1929, 0,    0,    464,  0,
    0,    216,  0,    0,    0,    0,    33,   1314, 0,    0,    222,  0,    0,    758,  0,    1911,
    0,    868,  1845, 938,  1337, 0,    287,  151,  0,    1382, 639,  0,    0,    0,    1481, 1160,
    1199, 667,  0,    0,    0,    0,    0,    0,    280,  0,    0,    0,    1275, 87,   1604, 340,
    260,  1427, 0,    1856, 28,   764,  594,  595,  423,  0,    0,    0,    948,  1619, 0,    0,
    0,    1864, 471,  0,    103,  634,  1279, 124,  0,    27,   479,  1041, 275,  1435, 479,  368,
    0,    0,    1557, 662,  64,   0,    0,    957,  574,  0,    0,    444,  0,    0,    0,    699,
    0,    0,    0,    197,  0,    0,    0,    1305, 1220, 0,    0,    615,  483,  915,  121,  0,
    0,    792,  0,    0,    447,  1652, 1039, 1795, 1371, 732,  542,  19,   345,  337,  1108, 0,
    0,    56,   0,    0,    0,    622,  750,  0,    898,  0,    1256, 0,    0,    455,  0,    0,
    0,    0,    0,    0,    0,    0,    0,    694,  646,  0,    888,  0,    794,  0,    415,  195,
    0,    962,  1200, 0,    0,    1435, 0,    0,    0,    1643, 581,  0,    433,  580,  52,   0,
    1777, 665,  0,    623,  0,    688,  581,  429,  0,    222,  434,  0,    0,    0,    134,  0,
    892,  177,  595,  826,  1442, 0,    0,    1913, 0,    0,    449,  0,    722,  0,    508,  749,
    0,    0,    0,    1299, 0,    0,    0,    0,    0,    0,    316,  1540, 566,  0,    203,  0,
    498,  861,  911,  770,  1007, 398,  0,    768,  124,  663,  0,    0,    173,  0,    0,    0,
    0,    993,  1109, 745,  421,  870,  494,  1874, 0,    157,  82,   0,    1082, 1390, 472,  326,
    1291, 0,    557,  797,  0,    384,  0,    0,    1382, 1514, 0,    994,  0,    0,    0,    1123,
    0,    822,  0,    854,  0,    1735, 0,    198,  195,  1791, 898,  0,    1588, 577,  370,  0,
    0,    0,    626,  1341, 54,   0,    0,    816,  1911, 0,    0,    0,    0,    381,  966,  0,
    0,    996,  0,    728,  0,    300,  0,    477,  0,    1227, 0,    1717, 1760, 986,  1442, 583,
    458,  1088, 0,    819,  229,  1344, 348,  0,    1816, 58,   0,    0,    0,    1379, 0,    0,
    1461, 487,  0,    1255, 0,    58,   0,    0,    1710, 1821, 0,    812,  0,    0,    1232, 468,
    1866, 0,    135,  343,  477,  0,    0,    1901, 828,  0,    863,  665,  227,  0,    210,  1140,
    1231, 0,    0,    758,  154,  0,    651,  32,   1381, 0,    720,  978,  431,  1063, 0,    419,
    733,  0,    170,  0,    0,    0,    235,  0,    86,   1574, 549,  10,   0,    1266, 0,    0,
    542,  0,    693,  579,  0,    0,    0,    0,    248,  277,  1215, 19,   253,  0,    1797, 724,
    0,    821,  516,  417,  169,  1702, 5,    0,    584,  0,    0,    954,  0,    0,    0,    945,
    183,  241,  0,    566,  1557, 425,  0,    417,  558,  0,    0,    0,    0,    799,  0,    364,
    371,  552,  1225, 0,    0,    0,    987,  13,   1713, 947,  0,    1723, 0,    898,  1878, 883,
    586,  0,    599,  713,  0,    1207, 192,  1878, 262,  188,  0,    763,  503,  989,  0,    0,
    1701, 0,    963,  1568, 0,    0,    0,    370,  102,  19,   1699, 198,  1737, 658,  1262, 947,
    690,  831,  0,    688,  1290, 735,  0,    102,  80,   130,  1785, 1855, 695,  0,    0,    612,
    320,  0,    0,    0,    1414, 328,  0,    1890, 966,  0,    267,  496,  165,  1301, 104,  188,
    808,  0,    161,  0,    906,  0,    1844, 1042, 1829, 912,  0,    0,    0,    0,    560,  211,
    0,    0,    964,  0,    0,    0,    0,    0,    1527, 16,   115,  649,  51,   455,  859,  1271,
    1363, 0,    1843, 870,  983,  1519, 0,    0,    91,   0,    535,  491,  0,    0,    209,  964,
    0,    186,  0,    0,    135,  629,  798,  1422, 0,    0,    0,    903,  658,  0,    951,  1149,
    510,  284,  1530, 329,  395,  443,  0,    256,  0,    3,    0,    276,  127,  0,    6,    498,
    1079, 1401, 0,    121,  523,  223,  7,    313,  0,    0,    813,  1004, 0,    0,    1155, 0,
    59,   204,  25,   1652, 1458, 1833, 950,  0,    605,  0,    173,  0,    1850, 461,  631,  0,
    1734, 151,  403,  0,    0,    0,    1407, 926,  60,   111,  0,    0,    51,   0,    1590, 843,
    706,  1761, 496,  1355, 0,    0,    0,    0,    6,    13,   1855, 0,    8,    365,  70,   0,
    0,    1051, 712,  0,    0,    1923, 1511, 497,  1685, 1859, 142,  0,    0,    1899, 0,    0,
    0,    0,    1063, 204,  1834, 0,    565,  749,  0,    191,  1674, 985,  0,    1544, 310,  501,
    175,  286,  0,    0,    0,    134,  201,  0,    0,    309,  335,  0,    0,    1039, 962,  0,
    0,    0,    139,  0,    0,    0,    440,  0,    1172, 1709, 0,    1255, 1883, 0,    344,  118,
    0,    1087, 1398, 0,    1352, 250,  1521, 1902, 583,  0,    0,    583,  766,  0,    1590, 484,
    834,  1425, 141,  400,  728,  225,  0,    0,    0,    1111, 417,  1237, 39,   0,    307,  0,
    800,  0,    0,    0,    337,  0,    0,    188,  1540, 1052, 0,    0,    1044, 199,  289,  417,
    426,  313,  676,  886,  0,    0,    1468, 0,    0,    1629, 1559, 1778, 0,    133,  108,  0,
    0,    80,   1014, 68,   622,  710,  0,    0,    179,  458,  0,    1458, 0,    1064, 1667, 67,
    380,  818,  480,  0,    440,  0,    907,  1275, 655,  0,    1569, 0,    0,    402,  839,  225,
    917,  1034, 783,  379,  303,  144,  0,    1183, 743,  488,  869,  1552, 0,    1475, 0,    1535,
    1550, 1303, 0,    1736, 0,    1352, 506,  1609, 1219, 756,  812,  0,    712,  273,  0,    387,
    0,    1707, 326,  0,    107,  1123, 1932, 0,    981,  47,   0,    0,    654,  1272, 1619, 1930,
    0,    0,    0,    0,    1023, 285,  1594, 1753, 0,    736,  1905, 31,   0,    1808, 483,  1393,
    213,  360,  931,  1638, 283,  0,    1680, 1342, 0,    0,    287,  1041, 0,    163,  430,  0,
    0,    1527, 521,  0,    509,  597,  0,    566,  68,   870,  625,  0,    258,  82,   757,  718,
    541,  162,  871,  0,    0,    334,  113,  881,  1025, 0,    1669, 1879, 0,    0,    0,    1912,
    840,  94,   0,    262,  115,  0,    1012, 0,    1068, 537,  473,  1305, 1750, 1912, 1725, 22,
    1579, 746,  0,    900,  0,    0,    0,    844,  128,  934,  0,    0,    1427, 661,  0,    212,
    0,    594,  1485, 0,    722,  1026, 0,    0,    609,  792,  0,    487,  270,  0,    1242, 666,
    0,    0,    0,    388,  0,    1622, 181,  0,    374,  877,  955,  252,  376,  291,  583,  151,
    666,  553,  0,    279,  349,  880,  1564, 450,  0,    417,  584,  0,    0,    1771, 1831, 196,
    212,  269,  536,  249,  111,  1763, 1903, 0,    200,  0,    210,  1530, 787,  1141, 1679, 878,
    0,    992,  628,  0,    1672, 136,  0,    734,  0,    711,  842,  1911, 705,  0,    0,    951,
    0,    0,    1415, 117,  1674, 1768, 0,    1065, 1422, 979,  1234, 0,    0,    0,    774,  113,
    807,  587,  310,  1225, 535,  0,    0,    0,    1367, 0,    0,    1799, 0,    475,  0,    1927,
    1024, 750,  0,    0,    521,  0,    118,  1375, 1809, 729,  0,    281,  562,  1431, 0,    462,
    0,    0,    617,  262,  1080, 159,  0,    1824, 1342, 0,    0,    1854, 0,    1009, 311,  0,
    1002, 612,  0,    0,    0,    1615, 357,  676,  1831, 445,  803,  0,    863,  1225, 1001, 692,
    331,  0,    473,  1885, 271,  0,    544,  930,  1091, 0,    0,    1053, 998,  1209, 495,  213,
    454,  892,  0,    0,    1044, 0,    1839, 153,  1675, 0,    0,    632,  0,    0,    0,    364,
    0,    0,    85,   269,  1145, 0,    0,    1690, 1455, 500,  868,  0,    0,    444,  212,  1449,
    1557, 1880, 0,    0,    136,  807,  522,  0,    207,  1341, 1400, 1915, 215,  757,  715,  993,
    0,    0,    1406, 0,    844,  187,  746,  476,  0,    505,  703,  1325, 0,    137,  547,  935,
    0,    0,    44,   449,  641,  0,    1482, 1128, 2,    0,    0,    332,  1727, 403,  0,    1896,
    644,  0,    308,  605,  1868, 327,  0,    0,    0,    755,  0,    0,    0,    960,  0,    982,
    0,    1131, 818,  1544, 1055, 0,    120,  1867, 436,  771,  659,  0,    609,  0,    0,    866,
    0,    1860, 0,    1486, 0,    273,  624,  0,    229,  407,  0,    294,  284,  0,    551,  106,
    0,    1666, 0,    420,  0,    22,   0,    0,    432,  125,  0,    509,  1172, 1921, 0,    339,
    966,  1659, 1278, 16,   726,  24,   0,    632,  0,    0,    0,    1322, 326,  0,    815,  502,
    0,    979,  391,  0,    0,    595,  0,    1569, 470,  307,  772,  149,  15,   0,    832,  0,
    0,    0,    0,    0,    572,  1491, 1247, 140,  0,    177,  0,    0,    1486, 0};

int HashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 1934;
    }
    return kG[sum];
}

int PerfectHash(const char *key)
{
    if (strlen(key) > 35)
        return 0;

    return (HashG(key, kT1) + HashG(key, kT2)) % 1934;
}

}  // namespace

namespace sh
{

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvPrime = 16777619u;

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvOffsetBasis = 0x811c9dc5u;

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvPrime =
    static_cast<size_t>(1099511628211ull);

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvOffsetBasis =
    static_cast<size_t>(0xcbf29ce484222325ull);

uint32_t ImmutableString::mangledNameHash() const
{
    return PerfectHash(data());
}

}  // namespace sh
