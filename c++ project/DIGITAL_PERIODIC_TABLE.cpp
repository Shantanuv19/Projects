#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
	sk:
	char z[100];
	int a;
    char u[200]="shantanumkd@gmail.com",p[200]="shantanu";
    char u1[200],p1[200];
    cout<<"Enter Gmail\n";
    cin>>u1;
    cout<<"Enter password\n";
    cin>>p1;
    if(strcmpi(u,u1)==0 && strcmp(p,p1)==0)
    {
    cout<<"Login Successful\n"<<endl;
    cout<<"Created by:- Shantanu kumar"<<endl;
    cout<<"__________________________Digital preodic table________________________"<<"\n"<<endl;
        cout<<"[H]";
        cout<<"                                                                 ";
        cout<<"[He]"<<endl;
        cout<<"[Li][Be]";
        cout<<"                                             ";
        cout<<"[B][C][N][O][F][Ne]"<<endl;
        cout<<"[Na][Mg]";
        cout<<"                                          ";
        cout<<"[Al][Si][P][S][Cl][Ar]"<<endl;
        cout<<"[K ]";
        cout<<"[Ca]";
        cout<<"[Sc]";
        cout<<"[Ti]";
        cout<<"[V ]";
        cout<<"[Cr]";
        cout<<"[Mn]";
        cout<<"[Fe]";
        cout<<"[Co]";
        cout<<"[Ni]";
        cout<<"[Cu]";
        cout<<"[Zn]";
        cout<<"[Ga]";
        cout<<"[Ge]";
        cout<<"[As]";
        cout<<"[Se]";
        cout<<"[Br]";
        cout<<"[Kr]"<<endl;
        cout<<"[Rb]";
        cout<<"[Sr]";
        cout<<"[Y ]";
        cout<<"[Zr]";
        cout<<"[Nb]";
        cout<<"[Mo]";
        cout<<"[Tc]";
        cout<<"[Ru]";
        cout<<"[Rh]";
        cout<<"[Pd]";
        cout<<"[Ag]";
        cout<<"[Cd]";
        cout<<"[In]";
        cout<<"[Sn]";
        cout<<"[Sb]";
        cout<<"[Te]";
        cout<<"[I ]";
        cout<<"[Xe]"<<endl;
        cout<<"[Cs]";
        cout<<"[Ba]";
        cout<<"[La]";
        cout<<"[Hf]";
        cout<<"[Ta]";
        cout<<"[W ]";
        cout<<"[Re]";
        cout<<"[Os]";
        cout<<"[Ir]";
        cout<<"[Pt]";
        cout<<"[Au]";
        cout<<"[Hg]";
        cout<<"[Tl]";
        cout<<"[Pb]";
        cout<<"[Bi]";
        cout<<"[Po]";
        cout<<"[At]";
        cout<<"[Rn]"<<endl;
        cout<<"[Fr]";
        cout<<"[Ra]";
        cout<<"[Ac]";
        cout<<"[Rf]";
        cout<<"[Db]";
        cout<<"[Sg]";
        cout<<"[Bh]";
        cout<<"[Hs]";
        cout<<"[Mt]";
        cout<<"[Ds]";
        cout<<"[Rg]";
        cout<<"[Cn]";
        cout<<"[Nh]";
        cout<<"[Fl]";
        cout<<"[Mc]";
        cout<<"[Lv]";
        cout<<"[Ts]";
        cout<<"[Og]";
        cout<<"\n"<<endl;
        cout<<"lanthanoid series";
        cout<<"[Ce]";
        cout<<"[pr]";
        cout<<"[Nd]";
        cout<<"[Pm]";
        cout<<"[Sm]";
        cout<<"[Eu]";
        cout<<"[Gd]";
        cout<<"[Tb]";
        cout<<"[Dy]";
        cout<<"[Ho]";
        cout<<"[Er]";
        cout<<"[Tm]";
        cout<<"[Yb]";
        cout<<"[Lu]"<<endl;
        cout<<"Actinoid series";
        cout<<"  ";
        cout<<"[Th]";
        cout<<"[Pa]";
        cout<<"[U ]";
        cout<<"[Np]";
        cout<<"[Pu]";
        cout<<"[Am]";
        cout<<"[cm]";
        cout<<"[Bk]";
        cout<<"[Cf]";
        cout<<"[Es]";
        cout<<"[Fm]";
        cout<<"[Md]";
        cout<<"[No]";
        cout<<"[Lr]\n\n"<<endl;
        {
        	s:
        	cout<<"\n"<<endl;
        	cout<<"If you wants to more information about element than press '1'\notherwise press '2'\n -->> ";
        	cin>>a;
        	if (a==1)
        	{
        		cout<<"enter element name:- ";
        		cin>>z;
        		char b[10]="H";
				if(strcmpi(b,z)==0)
        		{
        			cout<<"Name = hydrogen \nNumber = 1 \nGroup = 1 \nPeriod = 1 \nFormula = H"<<endl;
                    cout<<"Charge = 1+"<<endl;
                    cout<<"Mass = 1.01"<<endl;
                    cout<<"Special = Diatomic"<<endl;
                    goto s;
				}
				char B[10]="He";
				if(strcmpi(B,z)==0)
				{
					cout<<"Name = helium"<<endl;
                    cout<<"Number = 2"<<endl;
                    cout<<"Group = 18"<<endl;
                    cout<<"Period = 1"<<endl;
                    cout<<"Formula = He"<<endl;
                    cout<<"Charge = 0"<<endl;
                    cout<<"Mass = 4.00"<<endl;
                    cout<<"Special = None"<<endl;
                    goto s;
				}
				char C[10]="Li";
				if(strcmpi(C,z)==0)
				{
					cout<<"Name = lithium"<<endl;
                    cout<<"Number = 3"<<endl;
                    cout<<"Group = 1"<<endl;
                    cout<<"Period = 2"<<endl;
                    cout<<"Formula = Li"<<endl;
                    cout<<"Charge = 1+"<<endl;
                    cout<<"Mass = 6.94"<<endl;
                    cout<<"Special = None"<<endl;
                    goto s;
				}
				char d[10]="Be";
				if(strcmpi(d,z)==0)
				{
					cout<<"Name = beryllium"<<endl;
                	cout<<"Number = 4"<<endl;
                	cout<<"Group = 2"<<endl;
                	cout<<"Period = 2"<<endl;
                	cout<<"Formula = Be"<<endl;
                	cout<<"Charge = 2+"<<endl;
                	cout<<"Mass = 9.01"<<endl;
                	cout<<"Special = None"<<endl;
                	goto s;
				}
				char D[10]="B";
				if(strcmpi(D,z)==0)
				{
                	cout<<"Name = boron"<<endl;
                	cout<<"Number = 5"<<endl;
					cout<<"Group = 13"<<endl;
					cout<<"Period = 2"<<endl;
					cout<<"Formula = B"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 10.81"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char e[10]="C";
				if(strcmpi(e,z)==0)
				{
					cout<<"Name = carbon"<<endl;
					cout<<"Number = 6"<<endl;
					cout<<"Group = 14"<<endl;
					cout<<"Period = 2"<<endl;
					cout<<"Formula = C"<<endl;
					cout<<"Charge = 4+"<<endl;
					cout<<"Mass = 12.01"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char E[10]="N";
				if(strcmpi(E,z)==0)
				{
					cout<<"Name = nitrogen"<<endl;
					cout<<"Number = 7"<<endl;
					cout<<"Group = 15"<<endl;
					cout<<"Period = 2"<<endl;
					cout<<"Formula = N"<<endl;
					cout<<"Charge = 3-"<<endl;
					cout<<"Mass = 14.01"<<endl;
					cout<<"Special = Diatomic"<<endl;
					goto s;
				}
				char f[10]="O";
				if(strcmpi(f,z)==0)
				{
					cout<<"Name = oxygen"<<endl;
					cout<<"Number = 8"<<endl;
					cout<<"Group = 16"<<endl;
					cout<<"Period = 2"<<endl;
					cout<<"Formula = O"<<endl;
					cout<<"Charge = 2-"<<endl;
					cout<<"Mass = 16.00"<<endl;
					cout<<"Special = Diatomic"<<endl;
					goto s;
				}
				char F[10]="F";
				if(strcmpi(F,z)==0)
				{
					cout<<"Name = fluorine"<<endl;
					cout<<"Number = 9"<<endl;
					cout<<"Group = 17"<<endl;
					cout<<"Period = 2"<<endl;
					cout<<"Formula = F"<<endl;
					cout<<"Charge = 1-"<<endl;
					cout<<"Mass = 19.00"<<endl;
					cout<<"Special = Diatomic"<<endl;
					goto s;
				}
				char g[10]="Ne";
				if(strcmpi(g,z)==0)
				{	
					cout<<"Name = neon"<<endl;
					cout<<"Number = 10"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 2"<<endl;
					cout<<"Formula = Ne"<<endl;
					cout<<"Charge = 0"<<endl;
					cout<<"Mass = 20.18"<<endl;
					cout<<"Special = Noble Gas"<<endl;
					goto s;
				}
				char G[10]="Na";
				if(strcmpi(G,z)==0)
				{
					cout<<"Name = sodium"<<endl;
					cout<<"Number = 11"<<endl;
					cout<<"Group = 1"<<endl;
					cout<<"Period = 3"<<endl;
					cout<<"Formula = Na"<<endl;
					cout<<"Charge = 1+"<<endl;
					cout<<"Mass = 22.99"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char h[10]="Mg";
				if(strcmpi(h,z)==0)
				{
					cout<<"Name = magnesium"<<endl;
					cout<<"Number = 12"<<endl;
					cout<<"Group = 2"<<endl;
					cout<<"Period = 3"<<endl;
					cout<<"Formula = Mg"<<endl;
					cout<<"Charge = 2+"<<endl;
					cout<<"Mass = 24.31"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char H[10]="Al";
				if(strcmpi(H,z)==0)
				{
					cout<<"Name = aluminum"<<endl;
					cout<<"Number = 13"<<endl;
					cout<<"Group = 13"<<endl;
					cout<<"Period = 3"<<endl;
					cout<<"Formula = Al"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 26.98"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char i[10]="Si";
				if(strcmpi(i,z)==0)
				{
					cout<<"Name = silicon"<<endl;
					cout<<"Number = 14"<<endl;
					cout<<"Group = 14"<<endl;
					cout<<"Period = 3"<<endl;
					cout<<"Formula = Si"<<endl;
					cout<<"Charge = 4+"<<endl;
					cout<<"Mass = 28.09"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char I[10]="P";
				if(strcmpi(I,z)==0)
				{
					cout<<"Name = phosphorus"<<endl;
					cout<<"Number = 15"<<endl;
					cout<<"Group = 15"<<endl;
					cout<<"Period = 3"<<endl;
					cout<<"Formula = P"<<endl;
					cout<<"Charge = 3-"<<endl;
					cout<<"Mass = 30.97"<<endl;
					cout<<"Special = Diatomic"<<endl;
					goto s;
				}
				char j[10]="S";
				if(strcmpi(j,z)==0)
				{		
					cout<<"Name = sulfur"<<endl;
					cout<<"Number = 16"<<endl;
					cout<<"Group = 16"<<endl;
					cout<<"Period = 3"<<endl;
					cout<<"Formula = S"<<endl;
					cout<<"Charge = 2-"<<endl;
					cout<<"Mass = 32.06"<<endl;
					cout<<"Special = Diatomic"<<endl;
					goto s;
				}
				char J[10]="Cl";
				if(strcmpi(J,z)==0)
				{
					cout<<"Name = chlorine"<<endl;
					cout<<"Number = 17"<<endl;
					cout<<"Group = 17"<<endl;
					cout<<"Period = 3"<<endl;
					cout<<"Formula = Cl"<<endl;
					cout<<"Charge = 1-"<<endl;
					cout<<"Mass = 35.45"<<endl;
					cout<<"Special = Diatomic"<<endl;
					goto s;
				}
				char k[10]="Ar";
				if(strcmpi(k,z)==0)
				{
					cout<<"Name = argon"<<endl;
					cout<<"Number = 18"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 3"<<endl;
					cout<<"Formula = Ar"<<endl;
					cout<<"Charge = 0"<<endl;
					cout<<"Mass = 39.95"<<endl;
					cout<<"Special = Noble Gas"<<endl;
					goto s;
				}
				char K[10]="K";
				if(strcmpi(K,z)==0)
				{
					cout<<"Name = potassium"<<endl;
					cout<<"Number = 19"<<endl;
					cout<<"Group = 1"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = K"<<endl;
					cout<<"Charge = 1+"<<endl;
					cout<<"Mass = 39.10"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char l[10]="Ca";
				if(strcmpi(l,z)==0)
				{
					cout<<"Name = calcium"<<endl;
					cout<<"Number = 20"<<endl;
					cout<<"Group = 2"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = Ca"<<endl;
					cout<<"Charge = 2+"<<endl;
					cout<<"Mass = 40.08"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char L[10]="Sc";
				if(strcmpi(L,z)==0)
				{	
					cout<<"Name = scandium"<<endl;
					cout<<"Number = 21"<<endl;
					cout<<"Group = 3"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = Sc"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 44.96"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char m[10]="Ti";
				if(strcmpi(m,z)==0)
				{
					cout<<"Name = titanium"<<endl;
					cout<<"Number = 22"<<endl;
					cout<<"Group = 4"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = Ti"<<endl;
					cout<<"Charge = 4+ \\ 3+"<<endl;
					cout<<"Mass = 47.88"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char M[10]="V";
				if(strcmpi(M,z)==0)
				{
					cout<<"Name = vanadium"<<endl;
					cout<<"Number = 23"<<endl;
					cout<<"Group = 5"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = V"<<endl;
					cout<<"Charge = 5+ \\ 4+"<<endl;
					cout<<"Mass = 50.94"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char n[10]="Cr";
				if(strcmpi(n,z)==0)
				{
					cout<<"Name = chromium"<<endl;
					cout<<"Number = 24"<<endl;
					cout<<"Group = 6"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = Cr"<<endl;
					cout<<"Charge = 3+ \\ 2+"<<endl;
					cout<<"Mass = 52.00"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char N[10]="Mn";
				if(strcmpi(N,z)==0)
				{
					cout<<"Name = manganese"<<endl;
					cout<<"Number = 25"<<endl;
					cout<<"Group = 7"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = Mn"<<endl;
					cout<<"Charge = 2+ \\ 4+"<<endl;
					cout<<"Mass = 54.94"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char o[10]="Fe";
				if(strcmpi(o,z)==0)
				{
					cout<<"Name = iron"<<endl;
					cout<<"Number = 26"<<endl;
					cout<<"Group = 8"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = Fe"<<endl;
					cout<<"Charge = 3+ \\ 2+"<<endl;
					cout<<"Mass = 55.85"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char O[10]="Co";
				if(strcmpi(O,z)==0)
				{
					cout<<"Name = cobalt"<<endl;
					cout<<"Number = 27"<<endl;
					cout<<"Group = 9"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = Co"<<endl;
					cout<<"Charge = 2+ \\ 3+"<<endl;
					cout<<"Mass = 58.93"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char p[10]="Ni";
				if(strcmpi(p,z)==0)
				{
					cout<<"Name = nickel"<<endl;
					cout<<"Number = 28"<<endl;
					cout<<"Group = 10"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = Ni"<<endl;
					cout<<"Charge = 2+ \\ 3+"<<endl;
					cout<<"Mass = 58.69"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char P[10]="Cu";
				if(strcmpi(P,z)==0)
				{
					cout<<"Name = copper"<<endl;
					cout<<"Number = 29"<<endl;
					cout<<"Group = 11"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = Cu"<<endl;
					cout<<"Charge = 2+ \\ 1+"<<endl;
					cout<<"Mass = 63.55"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char q[10]="Zn";
				if(strcmpi(q,z)==0)
				{
					cout<<"Name = zinc"<<endl;
					cout<<"Number = 30"<<endl;
					cout<<"Group = 12"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = Zn"<<endl;
					cout<<"Charge = 2+"<<endl;
					cout<<"Mass = 65.38"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char Q[10]="Ga";
				if(strcmpi(Q,z)==0)
				{
					cout<<"Name = gallium"<<endl;
					cout<<"Number = 31"<<endl;
					cout<<"Group = 13"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = Ga"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 69.72"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char r[10]="Ge";
				if(strcmpi(r,z)==0)
				{
					cout<<"Name = germanium"<<endl;	
					cout<<"Number = 32"<<endl;
					cout<<"Group = 14"<<endl;
					cout<<"Period = 4"<<endl;	
					cout<<"Formula = Ge"<<endl;
					cout<<"Charge = 4+"<<endl;
					cout<<"Mass = 72.61"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char R[10]="As";
				if(strcmpi(R,z)==0)
				{
					cout<<"Name = arsonic"<<endl;
					cout<<"Number = 33"<<endl;
					cout<<"Group = 15"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = As"<<endl;
					cout<<"Charge = 3-"<<endl;
					cout<<"Mass = 74.92"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char s[10]="Se";
				if(strcmpi(s,z)==0)
				{	
					cout<<"Name = selenium"<<endl;
					cout<<"Number = 34"<<endl;
					cout<<"Group = 16"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = Se"<<endl;
					cout<<"Charge = 2-"<<endl;
					cout<<"Mass = 78.96"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char t[10]="Br";
				if(strcmpi(t,z)==0)
				{
					cout<<"Name = bromine"<<endl;
					cout<<"Number = 35"<<endl;
					cout<<"Group = 17"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = Br"<<endl;
					cout<<"Charge = 1-"<<endl;
					cout<<"Mass = 79.90"<<endl;	
					cout<<"Special = Diatomic"<<endl;
					goto s;
				}
				char T[10]="Kr";
				if(strcmpi(T,z)==0)
				{	
					cout<<"Name = krypton"<<endl;
					cout<<"Number = 36"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 4"<<endl;
					cout<<"Formula = Kr"<<endl;
					cout<<"Charge = 0"<<endl;
					cout<<"Mass = 83.80"<<endl;
					cout<<"Special = Noble Gas"<<endl;
					goto s;
				}
				char u[10]="Rb";
				if(strcmpi(u,z)==0)
				{
					cout<<"Name = rubidium"<<endl;
					cout<<"Number = 37"<<endl;
					cout<<"Group = 1"<<endl;
					cout<<"Period = 5"<<endl;
					cout<<"Formula = Rb"<<endl;
					cout<<"Charge = 1+"<<endl;
					cout<<"Mass = 85.47"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char U[10]="Sr";
				if(strcmpi(U,z)==0)
				{
					cout<<"Name = stronthum"<<endl;
					cout<<"Number = 38"<<endl;
					cout<<"Group = 2"<<endl;
					cout<<"Period = 5"<<endl;
					cout<<"Formula = Sr"<<endl;
					cout<<"Charge = 2+"<<endl;
					cout<<"Mass = 87.62"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char v[10]="Y";
				if(strcmpi(v,z)==0)
				{
					cout<<"Name = ythrium"<<endl;
					cout<<"Number = 39"<<endl;
					cout<<"Group = 3"<<endl;
					cout<<"Period = 5"<<endl;
					cout<<"Formula = Y"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 88.91"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char V[10]="Zr";
				if(strcmpi(V,z)==0)
				{
					cout<<"Name = zirconium"<<endl;
					cout<<"Number = 40"<<endl;
					cout<<"Group = 4"<<endl;
					cout<<"Period = 5"<<endl;
					cout<<"Formula = Zr"<<endl;
					cout<<"Charge = 4+"<<endl;
					cout<<"Mass = 91.22"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char w[10]="Nb";
				if(strcmpi(w,z)==0)
				{
					cout<<"Name = niobium"<<endl;
					cout<<"Number = 41"<<endl;
					cout<<"Group = 5"<<endl;
					cout<<"Period = 5"<<endl;
					cout<<"Formula = Nb"<<endl;
					cout<<"Charge = 5+ \\ 3+"<<endl;
					cout<<"Mass = 92.91"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char W[10]="Mo";
				if(strcmpi(W,z)==0)
				{
					cout<<"Name = molybdenum"<<endl;
					cout<<"Number = 42"<<endl;
					cout<<"Group = 6"<<endl;
					cout<<"Period = 5"<<endl;
					cout<<"Formula = Mo"<<endl;
					cout<<"Charge = 6+"<<endl;
					cout<<"Mass = 95.94"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char x[10]="Tc";
				if(strcmpi(x,z)==0)
				{
					cout<<"Name = techenium"<<endl;
					cout<<"Number = 43"<<endl;
					cout<<"Group = 7"<<endl;
					cout<<"Period = 5"<<endl;
					cout<<"Formula = Tc"<<endl;
					cout<<"Charge = 7+"<<endl;
					cout<<"Mass = 98.91"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char X[10]="Ru";
				if(strcmpi(X,z)==0)
				{
					cout<<"Name = ruthenium"<<endl;
					cout<<"Number = 44"<<endl;
					cout<<"Group = 8"<<endl;
					cout<<"Period = 5"<<endl;
					cout<<"Formula = Ru"<<endl;
					cout<<"Charge = 3+ \\ 4+"<<endl;
					cout<<"Mass = 101.07"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char y[10]="Rh";
				if(strcmpi(y,z)==0)
					{
					cout<<"Name = rhodium"<<endl;
					cout<<"Number = 45"<<endl;
					cout<<"Group = 9"<<endl;
					cout<<"Period = 5"<<endl;
					cout<<"Formula = Rh"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 102.91"<<endl;	
					cout<<"Special = None"<<endl;
					goto s;
				}
				char Y[10]="Pd";
				if(strcmpi(Y,z)==0)
				{	
					cout<<"Name = palladium"<<endl;
					cout<<"Number = 46"<<endl;
					cout<<"Group = 10"<<endl;
					cout<<"Period = 5"<<endl;
					cout<<"Formula = Pd"<<endl;
					cout<<"Charge = 2+ \\ 4+"<<endl;
					cout<<"Mass = 106.42"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char z1[10]="Ag";
				if(strcmpi(z1,z)==0)
				{	
					cout<<"Name = silver"<<endl;
					cout<<"Number = 47"<<endl;
					cout<<"Group = 11"<<endl;
					cout<<"Period = 5"<<endl;
					cout<<"Formula = Ag"<<endl;
					cout<<"Charge = 1+"<<endl;
					cout<<"Mass = 107.87"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char a1[10]="Cd";
				if(strcmpi(a1,z)==0)
				{
					cout<<"Name = cadmium"<<endl;
					cout<<"Number = 48"<<endl;
					cout<<"Group = 12"<<endl;
					cout<<"Period = 5"<<endl;
					cout<<"Formula = Cd"<<endl;
					cout<<"Charge = 2+"<<endl;
					cout<<"Mass = 112.41"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char a2[10]="In";
				if(strcmpi(a2,z)==0)
				{
					cout<<"Name = indium"<<endl;
					cout<<"Number = 49"<<endl;
					cout<<"Group = 13"<<endl;
					cout<<"Period = 5"<<endl;
					cout<<"Formula = In"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 114.82"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				{
					char b10[10]="Sn";
					if(strcmpi(b10,z)==0)
					{
						cout<<"Name = tin"<<endl;
						cout<<"Number = 50"<<endl;
						cout<<"Group = 14"<<endl;
						cout<<"Period = 5"<<endl;
						cout<<"Formula = Sn"<<endl;
						cout<<"Charge = 4+ \\ 2+"<<endl;
						cout<<"Mass = 118.69"<<endl;
						cout<<"Special = None"<<endl;
						goto s;
					}					
					char b2[10]="Sb";
					if(strcmpi(b2,z)==0)
					{
						cout<<"Name = antimony"<<endl;
						cout<<"Number = 51"<<endl;
						cout<<"Group = 15"<<endl;
						cout<<"Period = 5"<<endl;
						cout<<"Formula = Sb"<<endl;
						cout<<"Charge = 3+ \\ 5+"<<endl;
						cout<<"Mass = 121.75"<<endl;
						cout<<"Special = None"<<endl;
						goto s;
					}
					char a3[10]="Te";
					if(strcmpi(a3,z)==0)
					{
						cout<<"Name = tellurium"<<endl;
						cout<<"Number = 52"<<endl;
						cout<<"Group = 16"<<endl;
						cout<<"Period = 5"<<endl;
						cout<<"Formula = Te"<<endl;
						cout<<"Charge = 2-"<<endl;
						cout<<"Mass = 127.60"<<endl;
						cout<<"Special = None"<<endl;
						goto s;
					}
					char a4[10]="I";
					if(strcmpi(a4,z)==0)
					{
						cout<<"Name = iodine"<<endl;
						cout<<"Number = 53"<<endl;
						cout<<"Group = 17"<<endl;
						cout<<"Period = 5"<<endl;
						cout<<"Formula = I"<<endl;
						cout<<"Charge = 1-"<<endl;
						cout<<"Mass = 126.90"<<endl;
						cout<<"Special = Diatomic"<<endl;
						goto s;
					}
					char a5[10]="Xe";
					if(strcmpi(a5,z)==0)
					{	
						cout<<"Name = xenon"<<endl;
						cout<<"Number = 54"<<endl;
						cout<<"Group = 18"<<endl;
						cout<<"Period = 5"<<endl;
						cout<<"Formula = Xe"<<endl;
						cout<<"Charge = 0"<<endl;
						cout<<"Mass = 131.29"<<endl;
						cout<<"Special = Noble Gas"<<endl;
						cout<<"Name = cosiumn"<<endl;
						goto s;
					}
					char a6[10]="Cs";
					if(strcmpi(a6,z)==0)
					{	
						cout<<"Name = cosiumn"<<endl;
						cout<<"Number = 55"<<endl;
						cout<<"Group = 1"<<endl;
						cout<<"Period = 6"<<endl;
						cout<<"Formula = Cs"<<endl;
						cout<<"Charge = 1+"<<endl;
						cout<<"Mass = 132.91"<<endl;
						cout<<"Special = None"<<endl;
						goto s;
					}
					char a7[10]="Ba";
					if(strcmpi(a7,z)==0)
					{
						cout<<"Name = barium"<<endl;
						cout<<"Number = 56"<<endl;
						cout<<"Group = 2"<<endl;
						cout<<"Period = 6"<<endl;
						cout<<"Formula = Ba"<<endl;
						cout<<"Charge = 2+"<<endl;
						cout<<"Mass = 137.33"<<endl;
						cout<<"Special = None"<<endl;
						goto s;
					}
				char a8[10]="La";
				if(strcmpi(a8,z)==0)
				{
					cout<<"Name = lanthanum"<<endl;
					cout<<"Number = 57"<<endl;
					cout<<"Group = 3"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = La"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 138.91"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char az8[10]="Ce";
				if(strcmpi(az8,z)==0)
				{
					cout<<"Name = cerium"<<endl;
					cout<<"Number = 58"<<endl;
					cout<<"Group = 5"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Ce"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 140.12"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char a9[10]="Pr";
				if(strcmpi(a9,z)==0)
				{
					cout<<"Name = pruseodymium"<<endl;
					cout<<"Number = 59"<<endl;
					cout<<"Group = 6"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Pr"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 140.91"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char b5[10]="Nd";
				if(strcmpi(b5,z)==0)
				{
					cout<<"Name = neodymium"<<endl;
					cout<<"Number = 60"<<endl;
					cout<<"Group = 7"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Nd"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 144.24"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char b6[10]="Pm";
				if(strcmpi(b6,z)==0)
				{	
					cout<<"Name = promethium"<<endl;
					cout<<"Number = 61"<<endl;
					cout<<"Group = 8"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Pm"<<endl;
					cout<<"Charge = 3+"<<endl;
						cout<<"Mass = 145"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char b7[10]="Sm";
				if(strcmpi(b7,z)==0)
				{
					cout<<"Name = samarium"<<endl;
					cout<<"Number = 62"<<endl;
					cout<<"Group = 9"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Sm"<<endl;
					cout<<"Charge = 3+ \\ 2+"<<endl;
					cout<<"Mass = 150.40"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char b8[10]="Eu";
				if(strcmpi(b8,z)==0)
				{
					cout<<"Name = europium"<<endl;
					cout<<"Number = 63"<<endl;
					cout<<"Group = 10"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Eu"<<endl;
					cout<<"Charge = 3+ \\ 2+"<<endl;
					cout<<"Mass = 151.97"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char b9[10]="Gd";
				if(strcmpi(b9,z)==0)
				{
					cout<<"Name = gadolinium"<<endl;
					cout<<"Number = 64"<<endl;
					cout<<"Group = 11"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Gd"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 157.25"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char c3[10]="Tb";
				if(strcmpi(c3,z)==0)
				{
					cout<<"Name = terbium"<<endl;
					cout<<"Number = 65"<<endl;
					cout<<"Group = 12"<<endl;	
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Tb"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 158.93"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char c4[10]="Dy";
				if(strcmpi(c4,z)==0)
				{	
					cout<<"Name = dysprosium"<<endl;
					cout<<"Number = 66"<<endl;
					cout<<"Group = 13"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Dy"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 162.50"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char c5[10]="Ho";
				if(strcmpi(c5,z)==0)
				{
					cout<<"Name = helmium"<<endl;
					cout<<"Number = 67"<<endl;
					cout<<"Group = 14"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Ho"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 164.93"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char c6[10]="Er";
				if(strcmpi(c6,z)==0)
				{	
					cout<<"Name = erbium"<<endl;
					cout<<"Number = 68"<<endl;
					cout<<"Group = 15"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Er"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 167.26"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char c7[10]="Tm";
				if(strcmpi(c7,z)==0)
				{
					cout<<"Name = thulium"<<endl;
					cout<<"Number = 69"<<endl;
					cout<<"Group = 16"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Tm"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 168.94"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char c8[10]="Yb";
				if(strcmpi(c8,z)==0)
				{	
					cout<<"Name = ytlerhium"<<endl;
					cout<<"Number = 70"<<endl;
					cout<<"Group = 17"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Yb"<<endl;
					cout<<"Charge = 3+ \\ 2+"<<endl;
					cout<<"Mass = 173.04"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char c9[10]="Lu";
				if(strcmpi(c9,z)==0)
				{		
					cout<<"Name = lutelium"<<endl;
					cout<<"Number = 71"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Lu"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 174.97"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char d2[10]="Hf";
				if(strcmpi(d2,z)==0)
				{
					cout<<"Name = hefnium"<<endl;
					cout<<"Number = 72"<<endl;
					cout<<"Group = 4"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Hf"<<endl;
					cout<<"Charge = 4+"<<endl;
					cout<<"Mass = 178.49"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qw[10]="Ta";
				if(strcmpi(qw,z)==0)
				{
					cout<<"Name = tantalum"<<endl;
					cout<<"Number = 73"<<endl;
					cout<<"Group = 5"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Ta"<<endl;
					cout<<"Charge = 5+"<<endl;
					cout<<"Mass = 180.95"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qe[10]="W";
				if(strcmpi(qe,z)==0)
				{
					cout<<"Name = wolfrum (tungsten)"<<endl;
					cout<<"Number = 74"<<endl;
					cout<<"Group = 6"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = W"<<endl;
					cout<<"Charge = 6+"<<endl;
					cout<<"Mass = 183.85"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qr[10]="Re";
				if(strcmpi(qr,z)==0)
				{
					cout<<"Name = rhenium"<<endl;
					cout<<"Number = 75"<<endl;
					cout<<"Group = 7"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Re"<<endl;
					cout<<"Charge = 7+"<<endl;
					cout<<"Mass = 186.21"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qt[10]="Os";
				if(strcmpi(qt,z)==0)
				{
					cout<<"Name = osmium"<<endl;
					cout<<"Number = 76"<<endl;
					cout<<"Group = 8"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Os"<<endl;
					cout<<"Charge = 4+"<<endl;
					cout<<"Mass = 190.2"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qy[10]="Ir";
				if(strcmpi(qy,z)==0)
				{
					cout<<"Name = iridium"<<endl;
					cout<<"Number = 77"<<endl;
					cout<<"Group = 9"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Ir"<<endl;
					cout<<"Charge = 4+"<<endl;
					cout<<"Mass = 192.22"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qu[10]="Pt";
				if(strcmpi(qu,z)==0)
				{
					cout<<"Name = platinum"<<endl;
					cout<<"Number = 78"<<endl;
					cout<<"Group = 10"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Pt"<<endl;
					cout<<"Charge = 4+ \\ 2+"<<endl;
					cout<<"Mass = 195.08"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qi[10]="Au";
				if(strcmpi(qi,z)==0)
				{
					cout<<"Name = gold"<<endl;
					cout<<"Number = 79"<<endl;
					cout<<"Group = 11"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Au"<<endl;
					cout<<"Charge = 3+ \\ 1+"<<endl;
					cout<<"Mass = 196.97"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qo[10]="Hg";
				if(strcmpi(qo,z)==0)
				{
					cout<<"Name = mercury"<<endl;
					cout<<"Number = 80"<<endl;
					cout<<"Group = 12"<<endl;
					cout<<"Period = 6"<<endl;	
					cout<<"Formula = Hg"<<endl;
					cout<<"Charge = 2+ \\ 1+"<<endl;
					cout<<"Mass = 200.59"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qp[10]="Tl";
				if(strcmpi(qp,z)==0)
				{
					cout<<"Name = thallium"<<endl;
					cout<<"Number = 81"<<endl;
					cout<<"Group = 13"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Tl"<<endl;
					cout<<"Charge = 1+ \\ 3+"<<endl;
					cout<<"Mass = 204.38"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qa[10]="Pb";
				if(strcmpi(qa,z)==0)
				{
					cout<<"Name = lead"<<endl;
					cout<<"Number = 82"<<endl;
					cout<<"Group = 14"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Pb"<<endl;
					cout<<"Charge = 2+ \\ 4+"<<endl;
					cout<<"Mass = 207.20"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qs[10]="Bi";
				if(strcmpi(qs,z)==0)
				{
					cout<<"Name = bismuth"<<endl;
					cout<<"Number = 83"<<endl;
					cout<<"Group = 15"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Bi"<<endl;
					cout<<"Charge = 3+ \\ 5+"<<endl;
					cout<<"Mass = 208.98"<<endl;
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qd[10]="Po";
				if(strcmpi(qd,z)==0)
				{
					cout<<"Name = polonium"<<endl;
					cout<<"Number = 84"<<endl;
					cout<<"Group = 16"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Po"<<endl;
					cout<<"Charge = 2+ \\ 4+"<<endl;
					cout<<"Mass = 209"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qf[10]="At";
				if(strcmpi(qf,z)==0)
				{
					cout<<"Name = asiatine"<<endl;
					cout<<"Number = 85"<<endl;
					cout<<"Group = 17"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = At"<<endl;
					cout<<"Charge = 1-"<<endl;
					cout<<"Mass = 210"<<endl;   	
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qg[10]="Rn";
				if(strcmpi(qg,z)==0)
				{
					cout<<"Name = radon";
					cout<<"Number = 86"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 6"<<endl;
					cout<<"Formula = Rn"<<endl;
					cout<<"Charge = 0"<<endl;
					cout<<"Mass = 222"<<endl;   
					cout<<"Special = Noble Gas"<<endl;
					goto s;
				}
				char qh[10]="Fr";
				if(strcmpi(qh,z)==0)
				{
					cout<<"Name = fruncium"<<endl;
					cout<<"Number = 87"<<endl;
					cout<<"Group = 1"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Fr"<<endl;
					cout<<"Charge = 1+"<<endl;
					cout<<"Mass = 223"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qj[10]="Ra";
				if(strcmpi(qj,z)==0)
				{
					cout<<"Name = radium"<<endl;
					cout<<"Number = 88"<<endl;
					cout<<"Group = 2"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Ra"<<endl;
					cout<<"Charge = 2+"<<endl;
					cout<<"Mass = 226.03"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qk[10]="Ac";
				if(strcmpi(qk,z)==0)
				{
					cout<<"Name = actinium"<<endl;
					cout<<"Number = 89"<<endl;
					cout<<"Group = 3"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Ac"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 227.03"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char ql[10]="Th";
				if(strcmpi(ql,z)==0)
				{
					cout<<"Name = thorlum"<<endl;
					cout<<"Number = 90"<<endl;
					cout<<"Group = 5"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Th"<<endl;
					cout<<"Charge = 4+"<<endl;
					cout<<"Mass = 232.04"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qz[10]="Pa";
				if(strcmpi(qz,z)==0)
				{
					cout<<"Name = protactinium"<<endl;
					cout<<"Number = 91"<<endl;	
					cout<<"Group = 6"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Pa"<<endl;
					cout<<"Charge = 5+ \\ 4+"<<endl;
					cout<<"Mass = 231.04"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qx[10]="U";
				if(strcmpi(qx,z)==0)
				{
					cout<<"Name = uranium"<<endl;
					cout<<"Number = 92"<<endl;
					cout<<"Group = 7"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = U"<<endl;
					cout<<"Charge = 6+ \\ 4+"<<endl;
					cout<<"Mass = 238.03"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qc[10]="Np";
				if(strcmpi(qc,z)==0)
				{
					cout<<"Name = neplunium"<<endl;
					cout<<"Number = 93"<<endl;
					cout<<"Group = 8"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Np"<<endl;
					cout<<"Charge = 5+"<<endl;
					cout<<"Mass = 237.05"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qv[10]="Pu";
				if(strcmpi(qv,z)==0)
				{
					cout<<"Name = plutonium"<<endl;
					cout<<"Number = 94"<<endl;
					cout<<"Group = 9"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Pu"<<endl;
					cout<<"Charge = 4+ \\ 6+"<<endl;
					cout<<"Mass = 244"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qb[10]="Am";
				if(strcmpi(qb,z)==0)
				{
					cout<<"Name = americium"<<endl;
					cout<<"Number = 95"<<endl;
					cout<<"Group = 10"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Am"<<endl;
					cout<<"Charge = 3+ \\ 4+"<<endl;
					cout<<"Mass = 244"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qn[10]="Cm";
				if(strcmpi(qn,z)==0)
				{
					cout<<"Name = curium"<<endl;
					cout<<"Number = 96"<<endl;
					cout<<"Group = 11"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Cm"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 247"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char qm[10]="BK";
				if(strcmpi(qm,z)==0)
				{
					cout<<"Name = borkelium"<<endl;
					cout<<"Number = 97"<<endl;
					cout<<"Group = 12"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Bk"<<endl;
					cout<<"Charge = 3+ \\ 4+"<<endl;
					cout<<"Mass = 247"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char wq[10]="Cf";
				if(strcmpi(wq,z)==0)
				{
					cout<<"Name = californium"<<endl;
					cout<<"Number = 98"<<endl;
					cout<<"Group = 13"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Cf"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 251"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char we[10]="Es";
				if(strcmpi(we,z)==0)
				{
					cout<<"Name = einsteinium"<<endl;
					cout<<"Number = 99"<<endl;
					cout<<"Group = 14"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Es"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 252"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char wr[10]="Fm";
				if(strcmpi(wr,z)==0)
				{
					cout<<"Name = formium"<<endl;
					cout<<"Number = 100"<<endl;
					cout<<"Group = 15"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Fm"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 257"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char wt[10]="Md";
				if(strcmpi(wt,z)==0)
				{
					cout<<"Name = mendelevium"<<endl;
					cout<<"Number = 101"<<endl;
					cout<<"Group = 16"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Md"<<endl;
					cout<<"Charge = 2+ \\ 3+"<<endl;
					cout<<"Mass = 258"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char wy[10]="No";
				if(strcmpi(wy,z)==0)
				{
					cout<<"Name = nebelium"<<endl;
					cout<<"Number = 102"<<endl;
					cout<<"Group = 17"<<endl;
					cout<<"Period = 7";	
					cout<<"Formula = No"<<endl;
					cout<<"Charge = 2+ \\ 3+"<<endl;
					cout<<"Mass = 259"<<endl;   
					cout<"Special = None\n";
					goto s;
				}
				char wi[10]="Lr";
				if(strcmpi(wi,z)==0)
				{
					cout<<"Name = lawrencium"<<endl;
					cout<<"Number = 103"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Lr"<<endl;
					cout<<"Charge = 3+"<<endl;
					cout<<"Mass = 260"<<endl;   
					cout<<"Special = None"<<endl;
					goto s;
				}
				char wj[10]="Rf";
				if(strcmpi(wj,z)==0)
				{
					cout<<"Name = Rutherfordium"<<endl;
					cout<<"Number = 104"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Rf"<<endl;
					cout<<"Charge = 2"<<endl;
					cout<<"Mass = "<<endl;
					cout<<"Special = Solid"<<endl;
					goto s;
				}
				char wk[10]="Db";
				if(strcmpi(wk,z)==0)
				{
					cout<<"Name = Dubnium"<<endl;
					cout<<"Number = 105"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Db"<<endl;
					cout<<"Charge = 2"<<endl;
					cout<<"Mass = "<<endl;
					cout<<"Special = Solid"<<endl;
					goto s;
				}
				char wl[10]="Sg";
				if(strcmpi(wl,z)==0)
				{
					cout<<"Name = Seaborgium"<<endl;
					cout<<"Number = 106"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Sg"<<endl;
					cout<<"Charge = 2"<<endl;
					cout<<"Mass = "<<endl;
					cout<<"Special = Solid"<<endl;
					goto s;
				}
				char wz[10]="Bh";
				if(strcmpi(wz,z)==0)
				{
					cout<<"Name = Bohrium"<<endl;
					cout<<"Number = 107"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Bh"<<endl;
					cout<<"Charge = 2"<<endl;
					cout<<"Mass = "<<endl;
					cout<<"Special = Solid"<<endl;
					goto s;
				}
				char wx[10]="Hs";
				if(strcmpi(wx,z)==0)
				{
					cout<<"Name = Hassium"<<endl;
					cout<<"Number = 108"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Hs"<<endl;
					cout<<"Charge = 2"<<endl;
					cout<<"Mass = "<<endl;
					cout<<"Special = solid"<<endl;
					goto s;
				}
				char wc[10]="Mt";
				if(strcmpi(wc,z)==0)
				{
					cout<<"Name = Meitnerium"<<endl;
					cout<<"Number = 109"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Mt"<<endl;
					cout<<"Charge = 2"<<endl;
					cout<<"Mass = "<<endl;
					cout<<"Special = solid"<<endl;
					goto s;
				}
				char wv[10]="Ds";
				if(strcmpi(wv,z)==0)
				{					
					cout<<"Name = Darmstadtium"<<endl;
					cout<<"Number = 110"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Ds"<<endl;
					cout<<"Charge = 1"<<endl;
					cout<<"Mass = "<<endl;
					cout<<"Special = solid"<<endl;
					goto s;
				}
				char wb[10]="Rg";
				if(strcmpi(wb,z)==0)
				{					
					cout<<"Name = Roentgenium"<<endl;
					cout<<"Number = 111"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Rg"<<endl;
					cout<<"Charge = 2"<<endl;
					cout<<"Mass = "<<endl;
					cout<<"Special = solid"<<endl;
					goto s;
				}
				char wn[10]="og";
				if(strcmpi(wn,z)==0)
				{					
					cout<<"Name = Oganesson"<<endl;
					cout<<"Number = 118"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Og"<<endl;
					cout<<"Charge = 8"<<endl;
					cout<<"Mass =  "<<endl;
					cout<<"Special = noble gas"<<endl;
					goto s;
				}
				char wm[10]="Ts";
				if(strcmpi(wm,z)==0)
				{					
					cout<<"Name = Tennessine"<<endl;
					cout<<"Number = 117"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Ts"<<endl;
					cout<<"Charge = -1"<<endl;
					cout<<"Mass = "<<endl;
					cout<<"Special = none"<<endl;
					goto s;
				}
				char eq[10]="Lv";
				if(strcmpi(eq,z)==0)
				{					
					cout<<"Name = Livermorium"<<endl;
					cout<<"Number = 116"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Lv"<<endl;
					cout<<"Charge = -2"<<endl;
					cout<<"Mass = "<<endl;
					cout<<"Special = none"<<endl;
					goto s;
				}
				char ew[10]="Mc";
				if(strcmpi(ew,z)==0)
				{					
					cout<<"Name = Moscovium"<<endl;
					cout<<"Number = 115"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Mc"<<endl;
					cout<<"Charge = -3"<<endl;
					cout<<"Mass = "<<endl;
					cout<<"Special = none"<<endl;
					goto s;
				}
				char eew[10]="Fl";
				if(strcmpi(eew,z)==0)
				{					
					cout<<"Name = Flerovium"<<endl;
					cout<<"Number = 114"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Fl"<<endl;
					cout<<"Charge = 4"<<endl;
					cout<<"Mass = "<<endl;
					cout<<"Special = solid"<<endl;
					goto s;
				}
				char ppw[10]="Nh";
				if(strcmpi(ppw,z)==0)
				{					
					cout<<"Name = Nihonium"<<endl;
					cout<<"Number = 113"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Nh"<<endl;
					cout<<"Charge = 3"<<endl;
					cout<<"Mass = "<<endl;
					cout<<"Special = solid"<<endl;
					goto s;
				}
				char piw[10]="Cn";
				if(strcmpi(piw,z)==0)
				{
					cout<<"Name = Copernicium"<<endl;
					cout<<"Number = 112"<<endl;
					cout<<"Group = 18"<<endl;
					cout<<"Period = 7"<<endl;
					cout<<"Formula = Cn"<<endl;
					cout<<"Charge = 2"<<endl;
					cout<<"Mass = "<<endl;
					cout<<"Special = solid"<<endl;
					goto s;
				}
				}
			}
   			else if(a==2)
			{
				cout<<"Thank you";
			}
			else
			{
			cout<<"Invalid";
			}
		}
}
 else
	{
		cout<<"wrong ID or pasword"<<endl;
		cout<<"\n";
		goto sk;
	}
}
