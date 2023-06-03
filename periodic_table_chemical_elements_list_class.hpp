//ESTE ARQUIVO CONTERÁ A CLASSE DE LISTA DE ELEMENTOS QUÍMICOS
//UMA CLASSE DERIVADA DA CLASSE DE ELEMENTOS QUÍMICOS COM FUNÇÕES PARA ACESSAR A LISTA DE ELEMENTOS QUÍMICOS QUE COMPÕEM A TABELA PERIÓDICA
//************************************************************************************************************************
//Cabeçalho
#pragma once
#include<vector>
#include<string>
#include<iostream>
#include"periodic_table_chemical_elements.hpp"

//************************************************************************************************************************
//Classe da lista de elementos (usaremos o construtor e o destruidor padrão de C++)
class chemical_elements_list{
public:
//Membros da classe
std::vector<chemical_element> elements_vector;
chemical_element H, He, Li, Be, B, C, N, O, F, Ne, Na, Mg, Al, Si, P, S, Cl, Ar, K, Ca, Sc, Ti, V, Cr, Mn, Fe, Co, Ni, Cu, Zn, Ga, Ge, As, Se, Br, Kr, Rb, Sr, Y, Zr, Nb, Mo, Tc, Ru, Rh, Pd, Ag, Cd, In, Sn, Sb, Te, I, Xe, Cs, Ba, La, Ce, Pr, Nd, Pm, Sm, Eu, Gd, Tb, Dy, Ho, Er, Tm, Yb, Lu, Hf, Ta, W, Re, Os, Ir, Pt, Au, Hg, Tl, Pb, Bi, Po, At, Rn, Fr, Ra, Ac, Th, Pa, U, Np, Pu, Am, Cm, Bk, Cf, Es, Fm, Md, No, Lr, Rf, Db, Sg, Bh, Hs, Mt, Ds, Rg, Cn, Nh, Fl, Mc, Lv, Ts, Og;
std::string selection;
//Construtores e destruidores da classe
chemical_elements_list();
~chemical_elements_list();
//Métodos da classe
void select_element();
                            };
//************************************************************************************************************************
//Construtor e destruidor da classe da lista de elementos
//Destruidor
chemical_elements_list::~chemical_elements_list(){
elements_vector.clear();
                                                 };
//Construtor
chemical_elements_list::chemical_elements_list(){
//Vamos inicializar os elementos e adicioná-los alista de elementos químicos

// Hidrogênio
H.set_properties1("hidrogênio", "H", "gasoso","elemento representativo", "estável");
H.set_properties2("1s(1)", "1.008", "1");
elements_vector.push_back(H);

// Hélio
He.set_properties1("hélio", "He", "gasoso", "gás nobre", "estável");
He.set_properties2("1s(2)", "4.003", "2");
elements_vector.push_back(He);

// Lítio
Li.set_properties1("lítio", "Li", "sólido", "metal alcalino", "estável");
Li.set_properties2("1s(2) 2s(1)", "6.94", "3");
elements_vector.push_back(Li);

// Berílio
Be.set_properties1("berílio", "Be", "sólido", "metal alcalino-terroso", "estável");
Be.set_properties2("1s(2) 2s(2)", "9.012", "4");
elements_vector.push_back(Be);

// Boro
B.set_properties1("boro", "B", "sólido", "não metal", "estável");
B.set_properties2("1s(2) 2s(2) 2p(1)", "10.81", "5");
elements_vector.push_back(B);

// Carbono
C.set_properties1("carbono", "C", "sólido", "não metal", "estável");
C.set_properties2("1s(2) 2s(2) 2p(2)", "12.01", "6");
elements_vector.push_back(C);

// Nitrogênio
N.set_properties1("nitrogênio", "N", "gasoso", "não metal", "estável");
N.set_properties2("1s(2) 2s(2) 2p(3)", "14.01", "7");
elements_vector.push_back(N);

// Oxigênio
O.set_properties1("oxigênio", "O", "gasoso", "não metal", "estável");
O.set_properties2("1s(2) 2s(2) 2p(4)", "16.00", "8");
elements_vector.push_back(O);

// Flúor
F.set_properties1("flúor", "F", "gasoso", "halogênio", "estável");
F.set_properties2("1s(2) 2s(2) 2p(5)", "19.00", "9");
elements_vector.push_back(F);

// Neônio
Ne.set_properties1("neônio", "Ne", "gasoso", "gás nobre", "estável");
Ne.set_properties2("1s(2) 2s(2) 2p(6)", "20.18", "10");
elements_vector.push_back(Ne);

// Sódio
Na.set_properties1("sódio", "Na", "sólido", "metal alcalino", "estável");
Na.set_properties2("1s(2) 2s(2) 2p(6) 3s(1)", "22.99", "11");
elements_vector.push_back(Na);

// Magnésio
Mg.set_properties1("magnésio", "Mg", "sólido", "metal alcalino-terroso", "estável");
Mg.set_properties2("1s(2) 2s(2) 2p(6) 3s(2)", "24.31", "12");
elements_vector.push_back(Mg);

// Alumínio
Al.set_properties1("alumínio", "Al", "sólido", "metal de transição", "estável");
Al.set_properties2("1s(2) 2s(2) 2p(6) 3s(2) 3p(1)", "26.98", "13");
elements_vector.push_back(Al);

// Silício
Si.set_properties1("silício", "Si", "sólido", "semimetal", "estável");
Si.set_properties2("1s(2) 2s(2) 2p(6) 3s(2) 3p(2)", "28.09", "14");
elements_vector.push_back(Si);

// Fósforo
P.set_properties1("fósforo", "P", "sólido", "não metal", "estável");
P.set_properties2("1s(2) 2s(2) 2p(6) 3s(2) 3p(3)", "30.97", "15");
elements_vector.push_back(P);

// Enxofre
S.set_properties1("enxofre", "S", "sólido", "não metal", "estável");
S.set_properties2("1s(2) 2s(2) 2p(6) 3s(2) 3p(4)", "32.06", "16");
elements_vector.push_back(S);

// Cloro
Cl.set_properties1("cloro", "Cl", "gasoso", "halogênio", "estável");
Cl.set_properties2("1s(2) 2s(2) 2p(6) 3s(2) 3p(5)", "35.45", "17");
elements_vector.push_back(Cl);

// Argônio
Ar.set_properties1("argônio", "Ar", "gasoso", "gás nobre", "estável");
Ar.set_properties2("1s(2) 2s(2) 2p(6) 3s(2) 3p(6)", "39.95", "18");
elements_vector.push_back(Ar);

// Potássio
K.set_properties1("potássio", "K", "sólido", "metal alcalino", "estável");
K.set_properties2("1s(2) 2s(2) 2p(6) 3s(2) 3p(6) 4s(1)", "39.10", "19");
elements_vector.push_back(K);

// Cálcio
Ca.set_properties1("cálcio", "Ca", "sólido", "metal alcalino-terroso", "estável");
Ca.set_properties2("1s(2) 2s(2) 2p(6) 3s(2) 3p(6) 4s(2)", "40.08", "20");
elements_vector.push_back(Ca);

// Escândio
Sc.set_properties1("escândio", "Sc", "sólido", "metal de transição", "estável");
Sc.set_properties2("[Ar] 3d(1) 4s(2)", "44.96", "21");
elements_vector.push_back(Sc);

// Titânio
Ti.set_properties1("titânio", "Ti", "sólido", "metal de transição", "estável");
Ti.set_properties2("[Ar] 3d(2) 4s(2)", "47.87", "22");
elements_vector.push_back(Ti);

// Vanádio
V.set_properties1("vanádio", "V", "sólido", "metal de transição", "estável");
V.set_properties2("[Ar] 3d(3) 4s(2)", "50.94", "23");
elements_vector.push_back(V);

// Cromo
Cr.set_properties1("cromo", "Cr", "sólido", "metal de transição", "estável");
Cr.set_properties2("[Ar] 3d(5) 4s(1)", "52.00", "24");
elements_vector.push_back(Cr);

// Manganês
Mn.set_properties1("manganês", "Mn", "sólido", "metal de transição", "estável");
Mn.set_properties2("[Ar] 3d(5) 4s(2)", "54.94", "25");
elements_vector.push_back(Mn);

// Ferro
Fe.set_properties1("ferro", "Fe", "sólido", "metal de transição", "estável");
Fe.set_properties2("[Ar] 3d(6) 4s(2)", "55.85", "26");
elements_vector.push_back(Fe);

// Cobalto
Co.set_properties1("cobalto", "Co", "sólido", "metal de transição", "estável");
Co.set_properties2("[Ar] 3d(7) 4s(2)", "58.93", "27");
elements_vector.push_back(Co);

// Níquel
Ni.set_properties1("níquel", "Ni", "sólido", "metal de transição", "estável");
Ni.set_properties2("[Ar] 3d(8) 4s(2)", "58.69", "28");
elements_vector.push_back(Ni);

// Cobre
Cu.set_properties1("cobre", "Cu", "sólido", "metal de transição", "estável");
Cu.set_properties2("[Ar] 3d(10) 4s(1)", "63.55", "29");
elements_vector.push_back(Cu);

// Zinco
Zn.set_properties1("zinco", "Zn", "sólido", "metal de transição", "estável");
Zn.set_properties2("[Ar] 3d(10) 4s(2)", "65.38", "30");
elements_vector.push_back(Zn);

// Gálio
Ga.set_properties1("gálio", "Ga", "sólido", "metal de transição", "estável");
Ga.set_properties2("[Ar] 3d(10) 4s(2) 4p(1)", "69.72", "31");
elements_vector.push_back(Ga);

// Germânio
Ge.set_properties1("germânio", "Ge", "sólido", "semimetal", "estável");
Ge.set_properties2("[Ar] 3d(10) 4s(2) 4p(2)", "72.63", "32");
elements_vector.push_back(Ge);

// Arsênio
As.set_properties1("arsênio", "As", "sólido", "semimetal", "estável");
As.set_properties2("[Ar] 3d(10) 4s(2) 4p(3)", "74.92", "33");
elements_vector.push_back(As);

// Selênio
Se.set_properties1("selênio", "Se", "sólido", "não metal", "estável");
Se.set_properties2("[Ar] 3d(10) 4s(2) 4p(4)", "78.96", "34");
elements_vector.push_back(Se);

// Bromo
Br.set_properties1("bromo", "Br", "líquido", "halogênio", "estável");
Br.set_properties2("[Ar] 3d(10) 4s(2) 4p(5)", "79.90", "35");
elements_vector.push_back(Br);

// Criptônio
Kr.set_properties1("criptônio", "Kr", "gasoso", "gás nobre", "estável");
Kr.set_properties2("[Ar] 3d(10) 4s(2) 4p(6)", "83.80", "36");
elements_vector.push_back(Kr);

// Rubídio
Rb.set_properties1("rubídio", "Rb", "sólido", "metal alcalino", "estável");
Rb.set_properties2("[Kr] 5s(1)", "85.47", "37");
elements_vector.push_back(Rb);

// Estrôncio
Sr.set_properties1("estrôncio", "Sr", "sólido", "metal alcalino-terroso", "estável");
Sr.set_properties2("[Kr] 5s(2)", "87.62", "38");
elements_vector.push_back(Sr);

// Ítrio
Y.set_properties1("ítrio", "Y", "sólido", "metal de transição", "estável");
Y.set_properties2("[Kr] 4d(1) 5s(2)", "88.91", "39");
elements_vector.push_back(Y);

// Zircônio
Zr.set_properties1("zircônio", "Zr", "sólido", "metal de transição", "estável");
Zr.set_properties2("[Kr] 4d(2) 5s(2)", "91.22", "40");
elements_vector.push_back(Zr);

// Nióbio
Nb.set_properties1("nióbio", "Nb", "sólido", "metal de transição", "estável");
Nb.set_properties2("[Kr] 4d(4) 5s(1)", "92.91", "41");
elements_vector.push_back(Nb);

// Molibdênio
Mo.set_properties1("molibdênio", "Mo", "sólido", "metal de transição", "estável");
Mo.set_properties2("[Kr] 4d(5) 5s(1)", "95.95", "42");
elements_vector.push_back(Mo);

// Tecnécio
Tc.set_properties1("tecnécio", "Tc", "sólido", "metal de transição", "radioativo");
Tc.set_properties2("[Kr] 4d(5) 5s(2)", "(98)", "43");
elements_vector.push_back(Tc);

// Rutênio
Ru.set_properties1("rutênio", "Ru", "sólido", "metal de transição", "estável");
Ru.set_properties2("[Kr] 4d(7) 5s(1)", "101.1", "44");
elements_vector.push_back(Ru);

// Ródio
Rh.set_properties1("ródio", "Rh", "sólido", "metal de transição", "estável");
Rh.set_properties2("[Kr] 4d(8) 5s(1)", "102.9", "45");
elements_vector.push_back(Rh);

// Paládio
Pd.set_properties1("paládio", "Pd", "sólido", "metal de transição", "estável");
Pd.set_properties2("[Kr] 4d(10)", "106.4", "46");
elements_vector.push_back(Pd);

// Prata
Ag.set_properties1("prata", "Ag", "sólido", "metal de transição", "estável");
Ag.set_properties2("[Kr] 4d(10) 5s(1)", "107.9", "47");
elements_vector.push_back(Ag);

// Cádmio
Cd.set_properties1("cádmio", "Cd", "sólido", "metal de transição", "estável");
Cd.set_properties2("[Kr] 4d(10) 5s(2)", "112.4", "48");
elements_vector.push_back(Cd);

// Índio
In.set_properties1("índio", "In", "sólido", "metal de transição", "estável");
In.set_properties2("[Kr] 4d(10) 5s(2) 5p(1)", "114.8", "49");
elements_vector.push_back(In);

// Estanho
Sn.set_properties1("estanho", "Sn", "sólido", "metal de transição", "estável");
Sn.set_properties2("[Kr] 4d(10) 5s(2) 5p(2)", "118.7", "50");
elements_vector.push_back(Sn);

// Antimônio
Sb.set_properties1("antimônio", "Sb", "sólido", "semimetal", "estável");
Sb.set_properties2("[Kr] 4d(10) 5s(2) 5p(3)", "121.8", "51");
elements_vector.push_back(Sb);

// Telúrio
Te.set_properties1("telúrio", "Te", "sólido", "semimetal", "estável");
Te.set_properties2("[Kr] 4d(10) 5s(2) 5p(4)", "127.6", "52");
elements_vector.push_back(Te);

// Iodo
I.set_properties1("iodo", "I", "sólido", "halogênio", "estável");
I.set_properties2("[Kr] 4d(10) 5s(2) 5p(5)", "126.9", "53");
elements_vector.push_back(I);

// Xenônio
Xe.set_properties1("xenônio", "Xe", "gasoso", "gás nobre", "estável");
Xe.set_properties2("[Kr] 4d(10) 5s(2) 5p(6)", "131.3", "54");
elements_vector.push_back(Xe);

// Césio
Cs.set_properties1("césio", "Cs", "sólido", "metal alcalino", "estável");
Cs.set_properties2("[Xe] 6s(1)", "132.9", "55");
elements_vector.push_back(Cs);

// Bário
Ba.set_properties1("bário", "Ba", "sólido", "metal alcalino-terroso", "estável");
Ba.set_properties2("[Xe] 6s(2)", "137.3", "56");
elements_vector.push_back(Ba);

// Lantânio
La.set_properties1("lantânio", "La", "sólido", "lantanídeo", "estável");
La.set_properties2("[Xe] 5d(1) 6s(2)", "138.9", "57");
elements_vector.push_back(La);

// Cério
Ce.set_properties1("cério", "Ce", "sólido", "lantanídeo", "estável");
Ce.set_properties2("[Xe] 4f(1) 5d(1) 6s(2)", "140.1", "58");
elements_vector.push_back(Ce);

// Praseodímio
Pr.set_properties1("praseodímio", "Pr", "sólido", "lantanídeo", "estável");
Pr.set_properties2("[Xe] 4f(3) 6s(2)", "140.9", "59");
elements_vector.push_back(Pr);

// Neodímio
Nd.set_properties1("neodímio", "Nd", "sólido", "lantanídeo", "estável");
Nd.set_properties2("[Xe] 4f(4) 6s(2)", "144.2", "60");
elements_vector.push_back(Nd);

// Promécio
Pm.set_properties1("promécio", "Pm", "sólido", "lantanídeo", "radioativo");
Pm.set_properties2("[Xe] 4f(5) 6s(2)", "(145)", "61");
elements_vector.push_back(Pm);

// Samário
Sm.set_properties1("samário", "Sm", "sólido", "lantanídeo", "estável");
Sm.set_properties2("[Xe] 4f(6) 6s(2)", "150.4", "62");
elements_vector.push_back(Sm);

// Európio
Eu.set_properties1("európio", "Eu", "sólido", "lantanídeo", "estável");
Eu.set_properties2("[Xe] 4f(7) 6s(2)", "152.0", "63");
elements_vector.push_back(Eu);

// Gadolínio
Gd.set_properties1("gadolínio", "Gd", "sólido", "lantanídeo", "estável");
Gd.set_properties2("[Xe] 4f(7) 5d(1) 6s(2)", "157.3", "64");
elements_vector.push_back(Gd);

// Térbio
Tb.set_properties1("térbio", "Tb", "sólido", "lantanídeo", "estável");
Tb.set_properties2("[Xe] 4f(9) 6s(2)", "158.9", "65");
elements_vector.push_back(Tb);

// Disprósio
Dy.set_properties1("disprósio", "Dy", "sólido", "lantanídeo", "estável");
Dy.set_properties2("[Xe] 4f(10) 6s(2)", "162.5", "66");
elements_vector.push_back(Dy);

// Hólmio
Ho.set_properties1("hólmio", "Ho", "sólido", "lantanídeo", "estável");
Ho.set_properties2("[Xe] 4f(11) 6s(2)", "164.9", "67");
elements_vector.push_back(Ho);

// Érbio
Er.set_properties1("érbio", "Er", "sólido", "lantanídeo", "estável");
Er.set_properties2("[Xe] 4f(12) 6s(2)", "167.3", "68");
elements_vector.push_back(Er);

// Túlio
Tm.set_properties1("túlio", "Tm", "sólido", "lantanídeo", "estável");
Tm.set_properties2("[Xe] 4f(13) 6s(2)", "168.9", "69");
elements_vector.push_back(Tm);

// Itérbio
Yb.set_properties1("itérbio", "Yb", "sólido", "lantanídeo", "estável");
Yb.set_properties2("[Xe] 4f(14) 6s(2)", "173.0", "70");
elements_vector.push_back(Yb);

// Lutécio
Lu.set_properties1("lutécio", "Lu", "sólido", "lantanídeo", "estável");
Lu.set_properties2("[Xe] 4f(14) 5d(1) 6s(2)", "175.0", "71");
elements_vector.push_back(Lu);


// Háfnio
Hf.set_properties1("háfnio", "Hf", "sólido", "metal de transição", "estável");
Hf.set_properties2("[Xe] 4f(14) 5d(2) 6s(2)", "178.5", "72");
elements_vector.push_back(Hf);

// Tântalo
Ta.set_properties1("tântalo", "Ta", "sólido", "metal de transição", "estável");
Ta.set_properties2("[Xe] 4f(14) 5d(3) 6s(2)", "180.9", "73");
elements_vector.push_back(Ta);

// Tungstênio
W.set_properties1("tungstênio", "W", "sólido", "metal de transição", "estável");
W.set_properties2("[Xe] 4f(14) 5d(4) 6s(2)", "183.8", "74");
elements_vector.push_back(W);

// Rênio
Re.set_properties1("rênio", "Re", "sólido", "metal de transição", "estável");
Re.set_properties2("[Xe] 4f(14) 5d(5) 6s(2)", "186.2", "75");
elements_vector.push_back(Re);

// Ósmio
Os.set_properties1("ósmio", "Os", "sólido", "metal de transição", "estável");
Os.set_properties2("[Xe] 4f(14) 5d(6) 6s(2)", "190.2", "76");
elements_vector.push_back(Os);

// Irídio
Ir.set_properties1("irídio", "Ir", "sólido", "metal de transição", "estável");
Ir.set_properties2("[Xe] 4f(14) 5d(7) 6s(2)", "192.2", "77");
elements_vector.push_back(Ir);

// Platina
Pt.set_properties1("platina", "Pt", "sólido", "metal de transição", "estável");
Pt.set_properties2("[Xe] 4f(14) 5d(9) 6s(1)", "195.1", "78");
elements_vector.push_back(Pt);

// Ouro
Au.set_properties1("ouro", "Au", "sólido", "metal de transição", "estável");
Au.set_properties2("[Xe] 4f(14) 5d(10) 6s(1)", "197.0", "79");
elements_vector.push_back(Au);

// Mercúrio
Hg.set_properties1("mercúrio", "Hg", "líquido", "metal de transição", "estável");
Hg.set_properties2("[Xe] 4f(14) 5d(10) 6s(2)", "200.6", "80");
elements_vector.push_back(Hg);

// Tálio
Tl.set_properties1("tálio", "Tl", "sólido", "metal pesado", "estável");
Tl.set_properties2("[Xe] 4f(14) 5d(10) 6s(2) 6p(1)", "204.4", "81");
elements_vector.push_back(Tl);

// Chumbo
Pb.set_properties1("chumbo", "Pb", "sólido", "metal pesado", "estável");
Pb.set_properties2("[Xe] 4f(14) 5d(10) 6s(2) 6p(2)", "207.2", "82");
elements_vector.push_back(Pb);

// Bismuto
Bi.set_properties1("bismuto", "Bi", "sólido", "metal pesado", "estável");
Bi.set_properties2("[Xe] 4f(14) 5d(10) 6s(2) 6p(3)", "208.9", "83");
elements_vector.push_back(Bi);

// Polônio
Po.set_properties1("polônio", "Po", "sólido", "metal pesado", "radioativo");
Po.set_properties2("[Xe] 4f(14) 5d(10) 6s(2) 6p(4)", "209.0", "84");
elements_vector.push_back(Po);

// Astato
At.set_properties1("astato", "At", "sólido", "halogênio", "radioativo");
At.set_properties2("[Xe] 4f(14) 5d(10) 6s(2) 6p(5)", "210.0", "85");
elements_vector.push_back(At);

// Radônio
Rn.set_properties1("radônio", "Rn", "gasoso", "gás nobre", "radioativo");
Rn.set_properties2("[Xe] 4f(14) 5d(10) 6s(2) 6p(6)", "222.0", "86");
elements_vector.push_back(Rn);

// Frâncio
Fr.set_properties1("frâncio", "Fr", "sólido", "metal alcalino", "radioativo");
Fr.set_properties2("[Rn] 7s(1)", "223", "87");
elements_vector.push_back(Fr);

// Rádio
Ra.set_properties1("rádio", "Ra", "sólido", "metal alcalino-terroso", "radioativo");
Ra.set_properties2("[Rn] 7s(2)", "226", "88");
elements_vector.push_back(Ra);

// Actínio
Ac.set_properties1("actínio", "Ac", "sólido", "actinídeo", "radioativo");
Ac.set_properties2("[Rn] 6d(1) 7s(2)", "227", "89");
elements_vector.push_back(Ac);

// Tório
Th.set_properties1("tório", "Th", "sólido", "actinídeo", "radioativo");
Th.set_properties2("[Rn] 6d(2) 7s(2)", "232.04", "90");
elements_vector.push_back(Th);

// Protactínio
Pa.set_properties1("protactínio", "Pa", "sólido", "actinídeo", "radioativo");
Pa.set_properties2("[Rn] 5f(2) 6d(1) 7s(2)", "231.04", "91");
elements_vector.push_back(Pa);

// Urânio
U.set_properties1("urânio", "U", "sólido", "actinídeo", "radioativo");
U.set_properties2("[Rn] 5f(3) 6d(1) 7s(2)", "238.03", "92");
elements_vector.push_back(U);

// Netúnio
Np.set_properties1("netúnio", "Np", "sólido", "actinídeo", "radioativo");
Np.set_properties2("[Rn] 5f(4) 6d(1) 7s(2)", "237", "93");
elements_vector.push_back(Np);

// Plutônio
Pu.set_properties1("plutônio", "Pu", "sólido", "actinídeo", "radioativo");
Pu.set_properties2("[Rn] 5f(5) 6d(1) 7s(2)", "244", "94");
elements_vector.push_back(Pu);

// Amerício
Am.set_properties1("amerício", "Am", "sólido", "actinídeo", "radioativo");
Am.set_properties2("[Rn] 5f(6) 6d(1) 7s(2)", "243", "95");
elements_vector.push_back(Am);

// Cúrio
Cm.set_properties1("cúrio", "Cm", "sólido", "actinídeo", "radioativo");
Cm.set_properties2("[Rn] 5f(7) 6d(1) 7s(2)", "247", "96");
elements_vector.push_back(Cm);

// Berquélio
Bk.set_properties1("berquélio", "Bk", "sólido", "actinídeo", "radioativo");
Bk.set_properties2("[Rn] 5f(9) 6d(1) 7s(2)", "247", "97");
elements_vector.push_back(Bk);

// Califórnio
Cf.set_properties1("califórnio", "Cf", "sólido", "actinídeo", "radioativo");
Cf.set_properties2("[Rn] 5f(10) 6d(1) 7s(2)", "251", "98");
elements_vector.push_back(Cf);

// Einstênio
Es.set_properties1("einstênio", "Es", "sólido", "actinídeo", "radioativo");
Es.set_properties2("[Rn] 5f(11) 6d(1) 7s(2)", "252", "99");
elements_vector.push_back(Es);

// Férmio
Fm.set_properties1("férmio", "Fm", "sólido", "actinídeo", "radioativo");
Fm.set_properties2("[Rn] 5f(12) 6d(1) 7s(2)", "257", "100");
elements_vector.push_back(Fm);

// Mendelévio
Md.set_properties1("mendelévio", "Md", "sólido", "actinídeo", "radioativo");
Md.set_properties2("[Rn] 5f(13) 6d(1) 7s(2)", "258", "101");
elements_vector.push_back(Md);

// Nobélio
No.set_properties1("nobélio", "No", "sólido", "actinídeo", "radioativo");
No.set_properties2("[Rn] 5f(14) 6d(1) 7s(2)", "259", "102");
elements_vector.push_back(No);

// Laurêncio
Lr.set_properties1("laurêncio", "Lr", "sólido", "actinídeo", "radioativo");
Lr.set_properties2("[Rn] 5f(14) 6d(1) 7s(2)", "266", "103");
elements_vector.push_back(Lr);

// Rutherfórdio
Rf.set_properties1("rutherfórdio", "Rf", "desconhecido", "metal de transição", "desconhecido");
Rf.set_properties2("[Rn] 5f(14) 6d(2) 7s(2)", "267", "104");
elements_vector.push_back(Rf);

// Dúbnio
Db.set_properties1("dúbnio", "Db", "desconhecido", "metal de transição", "desconhecido");
Db.set_properties2("[Rn] 5f(14) 6d(3) 7s(2)", "270", "105");
elements_vector.push_back(Db);

// Seabórgio
Sg.set_properties1("seabórgio", "Sg", "desconhecido", "metal de transição", "desconhecido");
Sg.set_properties2("[Rn] 5f(14) 6d(4) 7s(2)", "271", "106");
elements_vector.push_back(Sg);

// Bóhrio
Bh.set_properties1("bóhrio", "Bh", "desconhecido", "metal de transição", "desconhecido");
Bh.set_properties2("[Rn] 5f(14) 6d(5) 7s(2)", "270", "107");
elements_vector.push_back(Bh);

// Hássio
Hs.set_properties1("hássio", "Hs", "desconhecido", "metal de transição", "desconhecido");
Hs.set_properties2("[Rn] 5f(14) 6d(6) 7s(2)", "277", "108");
elements_vector.push_back(Hs);

// Méitnerio
Mt.set_properties1("méitnerio", "Mt", "desconhecido", "metal de transição", "desconhecido");
Mt.set_properties2("[Rn] 5f(14) 6d(7) 7s(2)", "278", "109");
elements_vector.push_back(Mt);

// Darmstádio
Ds.set_properties1("darmstádio", "Ds", "desconhecido", "metal de transição", "desconhecido");
Ds.set_properties2("[Rn] 5f(14) 6d(8) 7s(2)", "281", "110");
elements_vector.push_back(Ds);

// Roentgênio
Rg.set_properties1("roentgênio", "Rg", "desconhecido", "metal de transição", "desconhecido");
Rg.set_properties2("[Rn] 5f(14) 6d(9) 7s(2)", "282", "111");
elements_vector.push_back(Rg);

// Copernício
Cn.set_properties1("copernício", "Cn", "desconhecido", "metal de transição", "desconhecido");
Cn.set_properties2("[Rn] 5f(14) 6d(10) 7s(2)", "285", "112");
elements_vector.push_back(Cn);

// Nihônio
Nh.set_properties1("nihônio", "Nh", "desconhecido", "metal de transição", "desconhecido");
Nh.set_properties2("[Rn] 5f(14) 6d(11) 7s(2) 7p(1)", "286", "113");
elements_vector.push_back(Nh);

// Fleróvio
Fl.set_properties1("fleróvio", "Fl", "desconhecido", "metal de transição", "desconhecido");
Fl.set_properties2("[Rn] 5f(14) 6d(12) 7s(2) 7p(2)", "289", "114");
elements_vector.push_back(Fl);

// Moscóvio
Mc.set_properties1("moscóvio", "Mc", "desconhecido", "metal de transição", "desconhecido");
Mc.set_properties2("[Rn] 5f(14) 6d(13) 7s(2) 7p(3)", "290", "115");
elements_vector.push_back(Mc);

// Livermório
Lv.set_properties1("livermório", "Lv", "desconhecido", "metal de transição", "desconhecido");
Lv.set_properties2("[Rn] 5f(14) 6d(14) 7s(2) 7p(4)", "293", "116");
elements_vector.push_back(Lv);

// Tennesso
Ts.set_properties1("tennesso", "Ts", "desconhecido", "metal de transição", "desconhecido");
Ts.set_properties2("[Rn] 5f(14) 6d(10) 7s(2) 7p(5)", "294", "117");
elements_vector.push_back(Ts);

// Oganessônio
Og.set_properties1("oganessônio", "Og", "desconhecido", "gás nobre", "desconhecido");
Og.set_properties2("[Rn] 5f(14) 6d(10) 7s(2) 7p(6)", "294", "118");
elements_vector.push_back(Og);


                                                };
//************************************************************************************************************************
//Métodos da classe da lista de elementos (usaremos o construtor e o destruidor padrão de C++)
void chemical_elements_list::select_element(){
//Variáveis locais
std::string token;
//Procedimentos
//Recebendo input do usuário
std::cout<<"Digite o símbolo de um elemento químico conforme a notação da tabela periódica: ";
std::cin>>token;
//Procurando um dado elemento na lista 
for(auto i:elements_vector){
if(i.symbol==token)
i.show_element();
else
continue;
                           };

                                             };

